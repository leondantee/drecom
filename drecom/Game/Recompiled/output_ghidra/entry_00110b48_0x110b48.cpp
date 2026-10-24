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

// Function: entry_00110b48
// Address: 0x110b48 - 0x110b80
void entry_00110b48_0x110b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110b48_0x110b48");
#endif

    ctx->pc = 0x110b48u;

    // 0x110b48: 0x8e824618  lw          $v0, 0x4618($s4)
    ctx->pc = 0x110b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17944)));
    // 0x110b4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x110b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x110b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x110b54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b58: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110b5c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x110B5Cu;
    {
        const bool branch_taken_0x110b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B5Cu;
        // 0x110b60: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b5c) {
            ctx->pc = 0x110BE8u;
            return;
        }
    }
    ctx->pc = 0x110B64u;
    // 0x110b64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110b68: 0x24515200  addiu       $s1, $v0, 0x5200
    ctx->pc = 0x110b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x110b6c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x110b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110b70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x110B70u;
    {
        const bool branch_taken_0x110b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B70u;
        // 0x110b74: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b70) {
            ctx->pc = 0x110B80u;
            return;
        }
    }
    ctx->pc = 0x110B78u;
    // 0x110b78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x110B78u;
    {
        const bool branch_taken_0x110b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B78u;
        // 0x110b7c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b78) {
            ctx->pc = 0x110BE8u;
            return;
        }
    }
    ctx->pc = 0x110B80u;
}
