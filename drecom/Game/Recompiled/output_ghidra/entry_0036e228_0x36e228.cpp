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

// Function: entry_0036e228
// Address: 0x36e228 - 0x36e23c
void entry_0036e228_0x36e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e228_0x36e228");
#endif

    switch (ctx->pc) {
        case 0x36e238u: goto label_36e238;
        default: break;
    }

    ctx->pc = 0x36e228u;

    // 0x36e228: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e22c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e22cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e230: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E230u;
    SET_GPR_U32(ctx, 31, 0x36E238u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E230u, 0x36E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E238u;
label_36e238:
    // 0x36e238: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e23cu;
}
