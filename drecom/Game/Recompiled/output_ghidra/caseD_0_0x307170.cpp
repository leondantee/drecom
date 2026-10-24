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

// Function: caseD_0
// Address: 0x307170 - 0x3071d0
void caseD_0_0x307170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x307170");
#endif

    switch (ctx->pc) {
        case 0x307184u: goto label_307184;
        case 0x3071b8u: goto label_3071b8;
        default: break;
    }

    ctx->pc = 0x307170u;

    // 0x307170: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307174: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x307178: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x307178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30717c: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x30717Cu;
    SET_GPR_U32(ctx, 31, 0x307184u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x30717Cu, 0x307184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307184u;
label_307184:
    // 0x307184: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307188: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x307188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x30718c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x307190: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x307190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x307194: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x307194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x307198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30719c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3071a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3071a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3071a4: 0x24065a18  addiu       $a2, $zero, 0x5A18
    ctx->pc = 0x3071a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23064));
    // 0x3071a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3071a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3071ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3071acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3071b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3071B0u;
    SET_GPR_U32(ctx, 31, 0x3071B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3071B0u, 0x3071B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071B8u;
label_3071b8:
    // 0x3071b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3071b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3071bc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3071bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3071c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3071c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3071c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3071c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3071c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3071cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3071ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3071d0u;
}
