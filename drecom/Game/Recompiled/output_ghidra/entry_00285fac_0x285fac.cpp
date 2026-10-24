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

// Function: entry_00285fac
// Address: 0x285fac - 0x285fc8
void entry_00285fac_0x285fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285fac_0x285fac");
#endif

    switch (ctx->pc) {
        case 0x285fc0u: goto label_285fc0;
        default: break;
    }

    ctx->pc = 0x285facu;

    // 0x285fac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285fb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285fb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fb4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285fb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fb8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285FB8u;
    SET_GPR_U32(ctx, 31, 0x285FC0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285FB8u, 0x285FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FC0u;
label_285fc0:
    // 0x285fc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x285FC0u;
    {
        const bool branch_taken_0x285fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285fc0) {
            ctx->pc = 0x285FDCu;
            return;
        }
    }
    ctx->pc = 0x285FC8u;
}
