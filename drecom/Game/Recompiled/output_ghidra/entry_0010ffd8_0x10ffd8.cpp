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

// Function: entry_0010ffd8
// Address: 0x10ffd8 - 0x110008
void entry_0010ffd8_0x10ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffd8_0x10ffd8");
#endif

    ctx->pc = 0x10ffd8u;

    // 0x10ffd8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10ffd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10ffdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ffe0: 0x8e024618  lw          $v0, 0x4618($s0)
    ctx->pc = 0x10ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x10ffe4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10FFE4u;
    {
        const bool branch_taken_0x10ffe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFE4u;
        // 0x10ffe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffe4) {
            ctx->pc = 0x11004Cu;
            return;
        }
    }
    ctx->pc = 0x10FFECu;
    // 0x10ffec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10fff0: 0x24445200  addiu       $a0, $v0, 0x5200
    ctx->pc = 0x10fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x10fff4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x10fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x10fff8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FFF8u;
    {
        const bool branch_taken_0x10fff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFF8u;
        // 0x10fffc: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fff8) {
            ctx->pc = 0x110008u;
            return;
        }
    }
    ctx->pc = 0x110000u;
    // 0x110000: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x110000u;
    {
        const bool branch_taken_0x110000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110000u;
        // 0x110004: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110000) {
            ctx->pc = 0x11004Cu;
            return;
        }
    }
    ctx->pc = 0x110008u;
}
