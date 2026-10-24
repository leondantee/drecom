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

// Function: entry_0021d820
// Address: 0x21d820 - 0x21d834
void entry_0021d820_0x21d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d820_0x21d820");
#endif

    switch (ctx->pc) {
        case 0x21d830u: goto label_21d830;
        default: break;
    }

    ctx->pc = 0x21d820u;

    // 0x21d820: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21d820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d824: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x21d824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21d828: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21D828u;
    SET_GPR_U32(ctx, 31, 0x21D830u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21D828u, 0x21D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D830u;
label_21d830:
    // 0x21d830: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x21d834u;
}
