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

// Function: entry_0012aef8
// Address: 0x12aef8 - 0x12af1c
void entry_0012aef8_0x12aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aef8_0x12aef8");
#endif

    switch (ctx->pc) {
        case 0x12af08u: goto label_12af08;
        case 0x12af14u: goto label_12af14;
        default: break;
    }

    ctx->pc = 0x12aef8u;

    // 0x12aef8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aefc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12aefcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12af00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12AF00u;
    SET_GPR_U32(ctx, 31, 0x12AF08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12AF00u, 0x12AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF08u;
label_12af08:
    // 0x12af08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12af08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12AF0Cu;
    SET_GPR_U32(ctx, 31, 0x12AF14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12AF0Cu, 0x12AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF14u;
label_12af14:
    // 0x12af14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12af18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12af1cu;
}
