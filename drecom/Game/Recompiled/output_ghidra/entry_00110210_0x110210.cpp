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

// Function: entry_00110210
// Address: 0x110210 - 0x110240
void entry_00110210_0x110210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110210_0x110210");
#endif

    ctx->pc = 0x110210u;

    // 0x110210: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x110214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110218: 0x8e024618  lw          $v0, 0x4618($s0)
    ctx->pc = 0x110218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x11021c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11021Cu;
    {
        const bool branch_taken_0x11021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11021Cu;
        // 0x110220: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11021c) {
            ctx->pc = 0x110284u;
            return;
        }
    }
    ctx->pc = 0x110224u;
    // 0x110224: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110228: 0x24445200  addiu       $a0, $v0, 0x5200
    ctx->pc = 0x110228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x11022c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x11022cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110230: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x110230u;
    {
        const bool branch_taken_0x110230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110230u;
        // 0x110234: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110230) {
            ctx->pc = 0x110240u;
            return;
        }
    }
    ctx->pc = 0x110238u;
    // 0x110238: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x110238u;
    {
        const bool branch_taken_0x110238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110238u;
        // 0x11023c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110238) {
            ctx->pc = 0x110284u;
            return;
        }
    }
    ctx->pc = 0x110240u;
}
