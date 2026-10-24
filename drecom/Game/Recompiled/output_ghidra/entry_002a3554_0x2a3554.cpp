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

// Function: entry_002a3554
// Address: 0x2a3554 - 0x2a35c0
void entry_002a3554_0x2a3554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3554_0x2a3554");
#endif

    switch (ctx->pc) {
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a3590u: goto label_2a3590;
        case 0x2a35a8u: goto label_2a35a8;
        default: break;
    }

    ctx->pc = 0x2a3554u;

    // 0x2a3554: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3558: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3558u;
    SET_GPR_U32(ctx, 31, 0x2A3560u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3558u, 0x2A3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3560u;
label_2a3560:
    // 0x2a3560: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3564: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a3564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3568: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a356c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3570: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A3570u;
    SET_GPR_U32(ctx, 31, 0x2A3578u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A3570u, 0x2A3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3578u;
label_2a3578:
    // 0x2a3578: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a357c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a3580: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3584: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a3584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3588: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A3588u;
    SET_GPR_U32(ctx, 31, 0x2A3590u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A3588u, 0x2A3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3590u;
label_2a3590:
    // 0x2a3590: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3594: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a3594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a3598: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a359c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a359cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a35a0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A35A0u;
    SET_GPR_U32(ctx, 31, 0x2A35A8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A35A0u, 0x2A35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35A8u;
label_2a35a8:
    // 0x2a35a8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a35ac: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a35b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a35b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a35b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a35b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a35b8: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A35B8u;
    SET_GPR_U32(ctx, 31, 0x2A35C0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A35B8u, 0x2A35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35C0u;
}
