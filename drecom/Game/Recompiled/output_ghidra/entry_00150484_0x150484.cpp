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

// Function: entry_00150484
// Address: 0x150484 - 0x1504ac
void entry_00150484_0x150484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150484_0x150484");
#endif

    switch (ctx->pc) {
        case 0x1504a0u: goto label_1504a0;
        default: break;
    }

    ctx->pc = 0x150484u;

    // 0x150484: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150488: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x15048c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x150490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150494: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x150498: 0xc0965d0  jal         func_259740
    ctx->pc = 0x150498u;
    SET_GPR_U32(ctx, 31, 0x1504A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150498u, 0x1504A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504A0u;
label_1504a0:
    // 0x1504a0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1504a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1504a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1504a8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1504a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1504acu;
}
