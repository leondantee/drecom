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
// Address: 0x1b88ec - 0x1b893c
void caseD_4_0x1b88ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1b88ec");
#endif

    switch (ctx->pc) {
        case 0x1b892cu: goto label_1b892c;
        default: break;
    }

    ctx->pc = 0x1b88ecu;

    // 0x1b88ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b88f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b88f4: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x1b88f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b88f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b88fc: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1b88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x1b8900: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8904: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8908: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b8908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b890c: 0x8cc70368  lw          $a3, 0x368($a2)
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x1b8910: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1b8910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1b8914: 0x2408004f  addiu       $t0, $zero, 0x4F
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b8918: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x1b8918u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1b891c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8920: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b8920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b8924: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B8924u;
    SET_GPR_U32(ctx, 31, 0x1B892Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B8924u, 0x1B892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B892Cu;
label_1b892c:
    // 0x1b892c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8930: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b8930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1b8934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8938: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b8938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b893cu;
}
