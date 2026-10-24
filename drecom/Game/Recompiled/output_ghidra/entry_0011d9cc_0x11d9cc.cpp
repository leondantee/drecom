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

// Function: entry_0011d9cc
// Address: 0x11d9cc - 0x11da20
void entry_0011d9cc_0x11d9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d9cc_0x11d9cc");
#endif

    ctx->pc = 0x11d9ccu;

    // 0x11d9cc: 0x1012  mflo        $v0
    ctx->pc = 0x11d9ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d9d0: 0x1810  mfhi        $v1
    ctx->pc = 0x11d9d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d9d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x11d9d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d9dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d9e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d9e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d9e4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x11d9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11d9e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d9ec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11d9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11d9f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11D9F0u;
    {
        const bool branch_taken_0x11d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d9f0) {
            ctx->pc = 0x11D9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D9F0u;
            // 0x11d9f4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA24u;
            return;
        }
    }
    ctx->pc = 0x11D9F8u;
    // 0x11d9f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11d9fc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11d9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11da00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DA00u;
    {
        const bool branch_taken_0x11da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA00u;
        // 0x11da04: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da00) {
            ctx->pc = 0x11DA20u;
            return;
        }
    }
    ctx->pc = 0x11DA08u;
    // 0x11da08: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11da08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11da0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DA0Cu;
    {
        const bool branch_taken_0x11da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da0c) {
            ctx->pc = 0x11DA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DA0Cu;
            // 0x11da10: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA24u;
            return;
        }
    }
    ctx->pc = 0x11DA14u;
    // 0x11da14: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x11da14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x11da18: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11da1c: 0x0  nop
    ctx->pc = 0x11da1cu;
    // NOP
    ctx->pc = 0x11da20u;
}
