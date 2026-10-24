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

// Function: MovieBufferRelease
// Address: 0x35c610 - 0x35c68c
void MovieBufferRelease_0x35c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovieBufferRelease_0x35c610");
#endif

    switch (ctx->pc) {
        case 0x35c62cu: goto label_35c62c;
        case 0x35c63cu: goto label_35c63c;
        case 0x35c64cu: goto label_35c64c;
        case 0x35c65cu: goto label_35c65c;
        case 0x35c66cu: goto label_35c66c;
        case 0x35c67cu: goto label_35c67c;
        default: break;
    }

    ctx->pc = 0x35c610u;

    // 0x35c610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c614: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35c618: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35c618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35c61c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c620: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c624: 0xc042882  jal         func_10A208
    ctx->pc = 0x35C624u;
    SET_GPR_U32(ctx, 31, 0x35C62Cu);
    ctx->pc = 0x10A208u;
    {
        ctx->pc = 0x35C62Cu;
        ps2_stubs::sceMpegDelete(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C62Cu) { return; }
    ctx->pc = 0x35C62Cu;
label_35c62c:
    // 0x35c62c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c630: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x35c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x35c634: 0xc059450  jal         func_165140
    ctx->pc = 0x35C634u;
    SET_GPR_U32(ctx, 31, 0x35C63Cu);
    ctx->pc = 0x165140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165140u, 0x35C634u, 0x35C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C63Cu;
label_35c63c:
    // 0x35c63c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c640: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x35c640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x35c644: 0xc059450  jal         func_165140
    ctx->pc = 0x35C644u;
    SET_GPR_U32(ctx, 31, 0x35C64Cu);
    ctx->pc = 0x165140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165140u, 0x35C644u, 0x35C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C64Cu;
label_35c64c:
    // 0x35c64c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c650: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x35c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x35c654: 0xc059450  jal         func_165140
    ctx->pc = 0x35C654u;
    SET_GPR_U32(ctx, 31, 0x35C65Cu);
    ctx->pc = 0x165140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165140u, 0x35C654u, 0x35C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C65Cu;
label_35c65c:
    // 0x35c65c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c660: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c664: 0xc059450  jal         func_165140
    ctx->pc = 0x35C664u;
    SET_GPR_U32(ctx, 31, 0x35C66Cu);
    ctx->pc = 0x165140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165140u, 0x35C664u, 0x35C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C66Cu;
label_35c66c:
    // 0x35c66c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c670: 0x8c440278  lw          $a0, 0x278($v0)
    ctx->pc = 0x35c670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x35c674: 0xc059450  jal         func_165140
    ctx->pc = 0x35C674u;
    SET_GPR_U32(ctx, 31, 0x35C67Cu);
    ctx->pc = 0x165140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165140u, 0x35C674u, 0x35C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C67Cu;
label_35c67c:
    // 0x35c67c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35c67cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c680: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35c684: 0x3e00008  jr          $ra
    ctx->pc = 0x35C684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C68Cu;
}
