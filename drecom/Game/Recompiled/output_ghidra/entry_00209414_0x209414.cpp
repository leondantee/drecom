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

// Function: entry_00209414
// Address: 0x209414 - 0x20944c
void entry_00209414_0x209414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209414_0x209414");
#endif

    switch (ctx->pc) {
        case 0x209420u: goto label_209420;
        case 0x209430u: goto label_209430;
        case 0x209444u: goto label_209444;
        default: break;
    }

    ctx->pc = 0x209414u;

    // 0x209414: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209418: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x209418u;
    SET_GPR_U32(ctx, 31, 0x209420u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x209418u, 0x209420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209420u;
label_209420:
    // 0x209420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209424: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x209428: 0xc080f60  jal         func_203D80
    ctx->pc = 0x209428u;
    SET_GPR_U32(ctx, 31, 0x209430u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209428u, 0x209430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209430u;
label_209430:
    // 0x209430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x209430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209434: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209438: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x209438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20943c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20943Cu;
    SET_GPR_U32(ctx, 31, 0x209444u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20943Cu, 0x209444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209444u;
label_209444:
    // 0x209444: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x209444u;
    {
        const bool branch_taken_0x209444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209444) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x20944Cu;
}
