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

// Function: entry_0011e7c0
// Address: 0x11e7c0 - 0x11e81c
void entry_0011e7c0_0x11e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7c0_0x11e7c0");
#endif

    ctx->pc = 0x11e7c0u;

    // 0x11e7c0: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x11e7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x11e7c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x11e7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x11e7c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e7cc: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x11e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x11e7d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11e7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11e7d4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11e7d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11e7d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11e7dc: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x11e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x11e7e0: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x11e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x11e7e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e7ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e7f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7f8: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x11e7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x11e7fc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11e7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e800: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e804: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x11e804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x11e808: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11e808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x11e80c: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x11e80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x11e810: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x11e810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11e814: 0x3e00008  jr          $ra
    ctx->pc = 0x11E814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E814u;
        // 0x11e818: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E81Cu;
}
