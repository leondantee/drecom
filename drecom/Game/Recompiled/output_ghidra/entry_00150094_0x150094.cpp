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

// Function: entry_00150094
// Address: 0x150094 - 0x1500bc
void entry_00150094_0x150094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150094_0x150094");
#endif

    switch (ctx->pc) {
        case 0x1500b0u: goto label_1500b0;
        default: break;
    }

    ctx->pc = 0x150094u;

    // 0x150094: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150098: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x15009c: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
    // 0x1500a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1500a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1500a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1500a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1500A8u;
    SET_GPR_U32(ctx, 31, 0x1500B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1500A8u, 0x1500B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500B0u;
label_1500b0:
    // 0x1500b0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1500b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1500b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1500b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1500b8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1500b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1500bcu;
}
