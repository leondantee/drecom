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

// Function: caseD_4
// Address: 0x1b72ec - 0x1b7334
void caseD_4_0x1b72ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1b72ec");
#endif

    switch (ctx->pc) {
        case 0x1b7320u: goto label_1b7320;
        default: break;
    }

    ctx->pc = 0x1b72ecu;

    // 0x1b72ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b72f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b72f4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1b72f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b72f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b72fc: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1b72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1b7300: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7308: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b730c: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1b730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b7310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7314: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b7318: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B7318u;
    SET_GPR_U32(ctx, 31, 0x1B7320u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7318u, 0x1B7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7320u;
label_1b7320:
    // 0x1b7320: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7320u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7324: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7328: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x1b7328u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b732c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1b732cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b7330: 0xa0a70003  sb          $a3, 0x3($a1)
    ctx->pc = 0x1b7330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1b7334u;
}
