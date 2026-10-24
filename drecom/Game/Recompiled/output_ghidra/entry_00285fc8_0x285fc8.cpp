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

// Function: entry_00285fc8
// Address: 0x285fc8 - 0x285fdc
void entry_00285fc8_0x285fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285fc8_0x285fc8");
#endif

    ctx->pc = 0x285fc8u;

    // 0x285fc8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x285fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285fcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285fd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fd4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285FD4u;
    SET_GPR_U32(ctx, 31, 0x285FDCu);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285FD4u, 0x285FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FDCu;
}
