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

// Function: entry_0021dde4
// Address: 0x21dde4 - 0x21ddf8
void entry_0021dde4_0x21dde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021dde4_0x21dde4");
#endif

    switch (ctx->pc) {
        case 0x21ddf4u: goto label_21ddf4;
        default: break;
    }

    ctx->pc = 0x21dde4u;

    // 0x21dde4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21dde8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x21dde8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21ddec: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21DDECu;
    SET_GPR_U32(ctx, 31, 0x21DDF4u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21DDECu, 0x21DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDF4u;
label_21ddf4:
    // 0x21ddf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x21ddf8u;
}
