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

// Function: __muldi3
// Address: 0x11db80 - 0x11dbe0
void ps2___muldi3_0x11db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___muldi3_0x11db80");
#endif

    ctx->pc = 0x11db80u;

    // 0x11db80: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x11db80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11db84: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x11db84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11db88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11db88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11db8c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11db8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11db90: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11db90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11db94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11db94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11db98: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x11db98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11db9c: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x11db9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dba0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x11dba0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11dba4: 0x2012  mflo        $a0
    ctx->pc = 0x11dba4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x11dba8: 0x1010  mfhi        $v0
    ctx->pc = 0x11dba8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11dbac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11dbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11dbb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11dbb4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11dbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11dbb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11dbbc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x11dbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x11dbc0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x11dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x11dbc4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11dbc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11dbc8: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x11dbc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11dbcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11dbd0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x11dbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x11dbd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11dbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBD8u;
        // 0x11dbdc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DBE0u;
}
