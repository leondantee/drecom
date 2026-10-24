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

// Function: entry_001443d0
// Address: 0x1443d0 - 0x1443ec
void entry_001443d0_0x1443d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001443d0_0x1443d0");
#endif

    ctx->pc = 0x1443d0u;

    // 0x1443d0: 0x8e851364  lw          $a1, 0x1364($s4)
    ctx->pc = 0x1443d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4964)));
    // 0x1443d4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1443d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1443d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1443d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1443dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1443e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1443e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1443E4u;
    SET_GPR_U32(ctx, 31, 0x1443ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1443E4u, 0x1443ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443ECu;
}
