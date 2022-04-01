package Table

import (
	"encoding/json"
	"io/ioutil"
	"fmt"
)

type activityRow struct {
	Id int                                            // ����id �id
	Comment []rune                                    // ע�� 
	Tab_id int                                        // ��ǩ��� �������ǩ
	Weight int                                        // Ȩ�� ��ǩ�б��ڵ���ʾȨ��
	Name_id int                                       // ����id �����id
	Describe_id int                                   // �����ı�id 
	Race_id int                                       // �Ƿ�������� �Ƿ���Ҫ�ж������������ʾ�Ի���ť,0��ʾ��1��ʾ��
	Main_icon []rune                                  // ��ͼ���� 
	Sub_icon []rune                                   // ��ͼ���� 
	Function_on int                                   // �Ƿ��� 0 ������ 1 ����
	Recommend int                                     // �Ƿ����Ƽ� 0 ������ 1 ����
	Call int                                          // ֧�ֿ����������� 0 ������ 1 ����
	Push int                                          // ֧�ֿ����������� 0 ������ 1 ����
	Open_type int                                     // ʱ������ 1 ȫ�쿪�� 2 ��ʱ����
	Open_in_week []int                                // �����ܴ� ��ʱ����ʱʹ�� ������2|4
	Open_in_day []int                                 // ����ʱ�� ��ʱ����ʱʹ�� ���� 00:00 - 23:59�� 0|0|23|59
	Reset_type int                                    // ���ô������� 1 ÿ�� 2 ÿ��
	Level_min int                                     // ��͵ȼ����� 
	Player_min int                                    // ������������� 
	Active_value int                                  // ��Ծ�Ƚ��� ���ÿ���������Ļ�Ծ��
	Rounds_max int                                    // �ִ������� 
	Times_max int                                     // ���������� ��=������
	Drop_rounds []int                                 // ÿ�ֵ��佱�� ���㷽ʽ|�����id ��������㣺0���ʣ�1Ȩֵ��
	Drop_times []int                                  // ÿ�����佱�� ���㷽ʽ|�����id ��������㣺0���ʣ�1Ȩֵ��
	Drop_display []int                                // ������ʾ 
	Scene_id []int                                    // ����id ��漰�����г���id
	Quest_id int                                      // ��¼����id ��¼��Ծ�ȵ�����id
	
}

type activityTable struct {
	keys  []int
	table map[int]*activityRow
}

var ActivityTable *activityTable

func (t *activityTable) GetRow(id int) *activityRow {
	row, ok := t.table[id]
	if !ok {
		return nil
	}
	return row
}

func (t *activityTable) HasRow(id int) bool {
	_, ok := t.table[id]
	return ok
}

func (t *activityTable) Keys() []int {
	return t.keys
}

func (t *activityTable) Table() map[int]*activityRow {
	return t.table
}

func (t *activityTable) Load() {
	data, err := ioutil.ReadFile("./Activity.json")
	if err != nil {
		return
	}
	err = json.Unmarshal(data, &t.table)
	if err != nil {
		fmt.Println("read table Activity error, ", err.Error())
		return
	}
	for k, _ := range t.table {
		t.keys = append(t.keys, k)
	}
}

func (t *activityTable) Reload() {
	t.keys = make([]int, 0)
	t.table = make(map[int]*activityRow)
	t.Load()
}

func init() {
	ActivityTable = new(activityTable)
	ActivityTable.Load()
}
