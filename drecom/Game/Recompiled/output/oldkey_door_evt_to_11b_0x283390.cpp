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

// Function: oldkey_door_evt_to_11b
// Address: 0x283390 - 0x283408
void oldkey_door_evt_to_11b_0x283390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oldkey_door_evt_to_11b_0x283390");
#endif

    switch (ctx->pc) {
        case 0x2833b4u: goto label_2833b4;
        case 0x2833c8u: goto label_2833c8;
        case 0x2833e4u: goto label_2833e4;
        case 0x2833ecu: goto label_2833ec;
        case 0x2833f4u: goto label_2833f4;
        default: break;
    }

    ctx->pc = 0x283390u;

    // 0x283390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283394: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x283394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x283398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28339c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x28339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2833a0: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x2833a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2833a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2833a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2833a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2833a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2833ac: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x2833ACu;
    SET_GPR_U32(ctx, 31, 0x2833B4u);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x2833ACu, 0x2833B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833B4u;
label_2833b4:
    // 0x2833b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2833b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2833b8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2833B8u;
    {
        const bool branch_taken_0x2833b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2833b8) {
            ctx->pc = 0x2833D0u;
            goto label_2833d0;
        }
    }
    ctx->pc = 0x2833C0u;
    // 0x2833c0: 0xc0a0d04  jal         func_283410
    ctx->pc = 0x2833C0u;
    SET_GPR_U32(ctx, 31, 0x2833C8u);
    ctx->pc = 0x283410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283410u, 0x2833C0u, 0x2833C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833C8u;
label_2833c8:
    // 0x2833c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2833C8u;
    {
        const bool branch_taken_0x2833c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2833c8) {
            ctx->pc = 0x2833ECu;
            goto label_2833ec;
        }
    }
    ctx->pc = 0x2833D0u;
label_2833d0:
    // 0x2833d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2833d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2833d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2833d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2833d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2833d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2833dc: 0xc0ce188  jal         func_338620
    ctx->pc = 0x2833DCu;
    SET_GPR_U32(ctx, 31, 0x2833E4u);
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x2833DCu, 0x2833E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833E4u;
label_2833e4:
    // 0x2833e4: 0xc0a0d24  jal         func_283490
    ctx->pc = 0x2833E4u;
    SET_GPR_U32(ctx, 31, 0x2833ECu);
    ctx->pc = 0x283490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283490u, 0x2833E4u, 0x2833ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833ECu;
label_2833ec:
    // 0x2833ec: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2833ECu;
    SET_GPR_U32(ctx, 31, 0x2833F4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2833ECu, 0x2833F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833F4u;
label_2833f4:
    // 0x2833f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2833f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2833f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2833f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2833fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2833fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283400: 0x3e00008  jr          $ra
    ctx->pc = 0x283400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283408u;
}
