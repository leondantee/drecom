#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010affc
// Address: 0x10affc - 0x10b044
void entry_0010affc_0x10affc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010affc_0x10affc");
#endif

    ctx->pc = 0x10affcu;

    // 0x10affc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10affcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10b000: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10b000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10b004: 0x8c623d20  lw          $v0, 0x3D20($v1)
    ctx->pc = 0x10b004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D20u));
    // 0x10b008: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10b008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10b00c: 0x24a63d2c  addiu       $a2, $a1, 0x3D2C
    ctx->pc = 0x10b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 15660));
    // 0x10b010: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10b014: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10b014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10b018: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x10B018u;
    {
        const bool branch_taken_0x10b018 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B018u;
        // 0x10b01c: 0xac823d28  sw          $v0, 0x3D28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 15656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b018) {
            ctx->pc = 0x10B044u;
            return;
        }
    }
    ctx->pc = 0x10B020u;
    // 0x10b020: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10b024: 0x8c433d48  lw          $v1, 0x3D48($v0)
    ctx->pc = 0x10b024u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D48u));
    // 0x10b028: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B028u;
    {
        const bool branch_taken_0x10b028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B028u;
        // 0x10b02c: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b028) {
            ctx->pc = 0x10B048u;
            return;
        }
    }
    ctx->pc = 0x10B030u;
    // 0x10b030: 0x8c623d24  lw          $v0, 0x3D24($v1)
    ctx->pc = 0x10b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15652)));
    // 0x10b034: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x10b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x10b038: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x10b038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x10b03c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B03Cu;
    {
        const bool branch_taken_0x10b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B03Cu;
        // 0x10b040: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b03c) {
            ctx->pc = 0x10B054u;
            return;
        }
    }
    ctx->pc = 0x10B044u;
}
