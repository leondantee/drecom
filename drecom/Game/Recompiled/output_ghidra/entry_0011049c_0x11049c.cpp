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

// Function: entry_0011049c
// Address: 0x11049c - 0x1104d4
void entry_0011049c_0x11049c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011049c_0x11049c");
#endif

    ctx->pc = 0x11049cu;

    // 0x11049c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x11049cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1104a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1104a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1104a4: 0x8e624618  lw          $v0, 0x4618($s3)
    ctx->pc = 0x1104a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x1104a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1104a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1104ac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1104acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1104b0: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1104B0u;
    {
        const bool branch_taken_0x1104b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104B0u;
        // 0x1104b4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104b0) {
            ctx->pc = 0x1105B4u;
            return;
        }
    }
    ctx->pc = 0x1104B8u;
    // 0x1104b8: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x1104b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x1104bc: 0x26425200  addiu       $v0, $s2, 0x5200
    ctx->pc = 0x1104bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20992));
    // 0x1104c0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1104c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x1104c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1104C4u;
    {
        const bool branch_taken_0x1104c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104C4u;
        // 0x1104c8: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104c4) {
            ctx->pc = 0x1104D4u;
            return;
        }
    }
    ctx->pc = 0x1104CCu;
    // 0x1104cc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1104CCu;
    {
        const bool branch_taken_0x1104cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104CCu;
        // 0x1104d0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104cc) {
            ctx->pc = 0x1105B4u;
            return;
        }
    }
    ctx->pc = 0x1104D4u;
}
