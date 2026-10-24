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

// Function: copysign
// Address: 0x114608 - 0x11464c
void copysign_0x114608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copysign_0x114608");
#endif

    ctx->pc = 0x114608u;

    // 0x114608: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x114608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11460c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11460cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x114610: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x114610u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x114614: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x114614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114618: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x114618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11461c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11461cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x114620: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x114620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x114624: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x114624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x114628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x114628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11462c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11462cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x114630: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x114630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x114634: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x114634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x114638: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x114638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11463c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x114640: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x114640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x114644: 0x3e00008  jr          $ra
    ctx->pc = 0x114644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114644u;
        // 0x114648: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11464Cu;
}
