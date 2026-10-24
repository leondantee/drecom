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

// Function: entry_0017d7e4
// Address: 0x17d7e4 - 0x17d84c
void entry_0017d7e4_0x17d7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d7e4_0x17d7e4");
#endif

    switch (ctx->pc) {
        case 0x17d808u: goto label_17d808;
        case 0x17d830u: goto label_17d830;
        default: break;
    }

    ctx->pc = 0x17d7e4u;

    // 0x17d7e4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d7e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d7ec: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d7f0: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x17d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x17d7f4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d7f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d7fc: 0x2445ece0  addiu       $a1, $v0, -0x1320
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x17d800: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D800u;
    SET_GPR_U32(ctx, 31, 0x17D808u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D800u, 0x17D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D808u;
label_17d808:
    // 0x17d808: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d80c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17d80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d810: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d814: 0x34430219  ori         $v1, $v0, 0x219
    ctx->pc = 0x17d814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x17d818: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x17d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d81c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17d81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d820: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d824: 0x2445ece0  addiu       $a1, $v0, -0x1320
    ctx->pc = 0x17d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x17d828: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D828u;
    SET_GPR_U32(ctx, 31, 0x17D830u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D828u, 0x17D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D830u;
label_17d830:
    // 0x17d830: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d834: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17d834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d838: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d83c: 0x3443021a  ori         $v1, $v0, 0x21A
    ctx->pc = 0x17d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)538);
    // 0x17d840: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d848: 0x2445ed10  addiu       $a1, $v0, -0x12F0
    ctx->pc = 0x17d848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
    ctx->pc = 0x17d84cu;
}
