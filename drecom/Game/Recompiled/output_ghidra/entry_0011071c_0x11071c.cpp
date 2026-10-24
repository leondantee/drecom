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

// Function: entry_0011071c
// Address: 0x11071c - 0x110754
void entry_0011071c_0x11071c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011071c_0x11071c");
#endif

    ctx->pc = 0x11071cu;

    // 0x11071c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x11071cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x110720: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x110720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x110724: 0x8e624618  lw          $v0, 0x4618($s3)
    ctx->pc = 0x110724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x110728: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x110728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11072c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110730: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x110730u;
    {
        const bool branch_taken_0x110730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110730u;
        // 0x110734: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110730) {
            ctx->pc = 0x110828u;
            return;
        }
    }
    ctx->pc = 0x110738u;
    // 0x110738: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x110738u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x11073c: 0x26425200  addiu       $v0, $s2, 0x5200
    ctx->pc = 0x11073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20992));
    // 0x110740: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x110740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110744: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x110744u;
    {
        const bool branch_taken_0x110744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110744u;
        // 0x110748: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110744) {
            ctx->pc = 0x110754u;
            return;
        }
    }
    ctx->pc = 0x11074Cu;
    // 0x11074c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x11074Cu;
    {
        const bool branch_taken_0x11074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11074Cu;
        // 0x110750: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11074c) {
            ctx->pc = 0x110828u;
            return;
        }
    }
    ctx->pc = 0x110754u;
}
