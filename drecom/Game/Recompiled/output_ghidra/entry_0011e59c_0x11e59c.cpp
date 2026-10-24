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

// Function: entry_0011e59c
// Address: 0x11e59c - 0x11e5f0
void entry_0011e59c_0x11e59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e59c_0x11e59c");
#endif

    ctx->pc = 0x11e59cu;

    // 0x11e59c: 0x1012  mflo        $v0
    ctx->pc = 0x11e59cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e5a0: 0x1810  mfhi        $v1
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e5a4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x11e5a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e5ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e5b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e5b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e5b4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x11e5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e5b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e5bc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e5c0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5C0u;
            // 0x11e5c4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5F4u;
            return;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11e5cc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11e5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e5d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E5D0u;
    {
        const bool branch_taken_0x11e5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D0u;
        // 0x11e5d4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d0) {
            ctx->pc = 0x11E5F0u;
            return;
        }
    }
    ctx->pc = 0x11E5D8u;
    // 0x11e5d8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e5dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E5DCu;
    {
        const bool branch_taken_0x11e5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5dc) {
            ctx->pc = 0x11E5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5DCu;
            // 0x11e5e0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5F4u;
            return;
        }
    }
    ctx->pc = 0x11E5E4u;
    // 0x11e5e4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x11e5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x11e5e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11e5ec: 0x0  nop
    ctx->pc = 0x11e5ecu;
    // NOP
    ctx->pc = 0x11e5f0u;
}
