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

// Function: entry_00336bbc
// Address: 0x336bbc - 0x336bd8
void entry_00336bbc_0x336bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336bbc_0x336bbc");
#endif

    switch (ctx->pc) {
        case 0x336bd0u: goto label_336bd0;
        default: break;
    }

    ctx->pc = 0x336bbcu;

    // 0x336bbc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x336bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336bc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336bc8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336BC8u;
    SET_GPR_U32(ctx, 31, 0x336BD0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336BC8u, 0x336BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BD0u;
label_336bd0:
    // 0x336bd0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x336BD0u;
    {
        const bool branch_taken_0x336bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bd0) {
            ctx->pc = 0x336D00u;
            return;
        }
    }
    ctx->pc = 0x336BD8u;
}
