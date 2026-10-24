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

// Function: entry_00189154
// Address: 0x189154 - 0x189168
void entry_00189154_0x189154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189154_0x189154");
#endif

    switch (ctx->pc) {
        case 0x189160u: goto label_189160;
        default: break;
    }

    ctx->pc = 0x189154u;

    // 0x189154: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x189154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x189158: 0xc056518  jal         func_159460
    ctx->pc = 0x189158u;
    SET_GPR_U32(ctx, 31, 0x189160u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x189158u, 0x189160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189160u;
label_189160:
    // 0x189160: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x189160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x189164: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x189164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x189168u;
}
