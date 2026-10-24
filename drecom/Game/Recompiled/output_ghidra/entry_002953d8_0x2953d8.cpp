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

// Function: entry_002953d8
// Address: 0x2953d8 - 0x29543c
void entry_002953d8_0x2953d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002953d8_0x2953d8");
#endif

    switch (ctx->pc) {
        case 0x2953e8u: goto label_2953e8;
        case 0x2953f8u: goto label_2953f8;
        case 0x295408u: goto label_295408;
        default: break;
    }

    ctx->pc = 0x2953d8u;

    // 0x2953d8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953dc: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x2953dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2953e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2953E0u;
    SET_GPR_U32(ctx, 31, 0x2953E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2953E0u, 0x2953E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953E8u;
label_2953e8:
    // 0x2953e8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953ec: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2953ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2953f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2953F0u;
    SET_GPR_U32(ctx, 31, 0x2953F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2953F0u, 0x2953F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953F8u;
label_2953f8:
    // 0x2953f8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953fc: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x2953fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x295400: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295400u;
    SET_GPR_U32(ctx, 31, 0x295408u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295400u, 0x295408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295408u;
label_295408:
    // 0x295408: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x295408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29540c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29540cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295410: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x295410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295414: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x295414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295418: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x295418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29541c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29541cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x295420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29542c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29542cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295430: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295434: 0x3e00008  jr          $ra
    ctx->pc = 0x295434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29543Cu;
}
