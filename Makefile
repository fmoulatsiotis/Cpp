.PHONY: clean All

All:
	@echo "----------Building project:[ name_age - Debug ]----------"
	@cd "name_age" && "$(MAKE)" -f  "name_age.mk"
clean:
	@echo "----------Cleaning project:[ name_age - Debug ]----------"
	@cd "name_age" && "$(MAKE)" -f  "name_age.mk" clean
