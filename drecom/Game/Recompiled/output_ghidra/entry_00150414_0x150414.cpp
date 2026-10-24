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

// Function: entry_00150414
// Address: 0x150414 - 0x15043c
void entry_00150414_0x150414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150414_0x150414");
#endif

    switch (ctx->pc) {
        case 0x150430u: goto label_150430;
        default: break;
    }

    ctx->pc = 0x150414u;

    // 0x150414: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150418: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x15041c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x150428: 0xc0965d0  jal         func_259740
    ctx->pc = 0x150428u;
    SET_GPR_U32(ctx, 31, 0x150430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150428u, 0x150430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150430u;
label_150430:
    // 0x150430: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150438: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15043cu;
}
