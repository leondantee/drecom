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

// Function: entry_001501e4
// Address: 0x1501e4 - 0x15020c
void entry_001501e4_0x1501e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001501e4_0x1501e4");
#endif

    switch (ctx->pc) {
        case 0x150200u: goto label_150200;
        default: break;
    }

    ctx->pc = 0x1501e4u;

    // 0x1501e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1501e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1501e8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x1501e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x1501ec: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x1501ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x1501f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1501f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1501f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1501f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1501F8u;
    SET_GPR_U32(ctx, 31, 0x150200u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1501F8u, 0x150200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150200u;
label_150200:
    // 0x150200: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150208: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15020cu;
}
