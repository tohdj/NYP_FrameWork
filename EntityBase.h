#ifndef ENTITY_BASE_H
#define ENTITY_BASE_H

class EntityBase
{
public:
	EntityBase();
	virtual ~EntityBase();

	virtual void Update(double _dt);
	virtual void Render();
	virtual void RenderUI();

	bool IsDone();
	void SetIsDone(bool _value);

private:
	bool isDone;
};

#endif // ENTITY_BASE_H