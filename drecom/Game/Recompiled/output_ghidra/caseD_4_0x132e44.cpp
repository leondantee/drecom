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
// Address: 0x132e44 - 0x132ec4
void caseD_4_0x132e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x132e44");
#endif

    switch (ctx->pc) {
        case 0x132e64u: goto label_132e64;
        case 0x132e70u: goto label_132e70;
        case 0x132eb4u: goto label_132eb4;
        default: break;
    }

    ctx->pc = 0x132e44u;

    // 0x132e44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x132e50: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x132e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x132e54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132e58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x132e5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x132E5Cu;
    SET_GPR_U32(ctx, 31, 0x132E64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132E5Cu, 0x132E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E64u;
label_132e64:
    // 0x132e64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e68: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x132E68u;
    SET_GPR_U32(ctx, 31, 0x132E70u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x132E68u, 0x132E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E70u;
label_132e70:
    // 0x132e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e74: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x132e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x132e78: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x132e7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x132e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x132e80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x132e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x132e84: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x132e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x132e88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x132e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x132e90: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x132e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x132e94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x132e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x132e98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x132e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x132e9c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x132e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x132ea0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ea4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x132ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x132ea8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132eac: 0xc04d994  jal         func_136650
    ctx->pc = 0x132EACu;
    SET_GPR_U32(ctx, 31, 0x132EB4u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x132EACu, 0x132EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EB4u;
label_132eb4:
    // 0x132eb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132eb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x132ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x132ec0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132ec4u;
}
