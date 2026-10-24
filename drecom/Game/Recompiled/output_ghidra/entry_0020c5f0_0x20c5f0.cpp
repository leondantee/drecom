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

// Function: entry_0020c5f0
// Address: 0x20c5f0 - 0x20c60c
void entry_0020c5f0_0x20c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c5f0_0x20c5f0");
#endif

    switch (ctx->pc) {
        case 0x20c5fcu: goto label_20c5fc;
        default: break;
    }

    ctx->pc = 0x20c5f0u;

    // 0x20c5f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5f4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20C5F4u;
    SET_GPR_U32(ctx, 31, 0x20C5FCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20C5F4u, 0x20C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5FCu;
label_20c5fc:
    // 0x20c5fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c604: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20C604u;
    SET_GPR_U32(ctx, 31, 0x20C60Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20C604u, 0x20C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C60Cu;
}
