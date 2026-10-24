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

// Function: entry_001823f4
// Address: 0x1823f4 - 0x18241c
void entry_001823f4_0x1823f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001823f4_0x1823f4");
#endif

    switch (ctx->pc) {
        case 0x182404u: goto label_182404;
        case 0x182418u: goto label_182418;
        default: break;
    }

    ctx->pc = 0x1823f4u;

    // 0x1823f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1823f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1823fc: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1823FCu;
    SET_GPR_U32(ctx, 31, 0x182404u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1823FCu, 0x182404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182404u;
label_182404:
    // 0x182404: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x182404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x182408: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18240c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x18240cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x182410: 0xc05f910  jal         func_17E440
    ctx->pc = 0x182410u;
    SET_GPR_U32(ctx, 31, 0x182418u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x182410u, 0x182418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182418u;
label_182418:
    // 0x182418: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x182418u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18241cu;
}
