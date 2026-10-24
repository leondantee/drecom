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
// Address: 0x306f00 - 0x306f60
void caseD_0_0x306f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x306f00");
#endif

    switch (ctx->pc) {
        case 0x306f14u: goto label_306f14;
        case 0x306f48u: goto label_306f48;
        default: break;
    }

    ctx->pc = 0x306f00u;

    // 0x306f00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f04: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x306f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x306f08: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x306f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f0c: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x306F0Cu;
    SET_GPR_U32(ctx, 31, 0x306F14u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x306F0Cu, 0x306F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F14u;
label_306f14:
    // 0x306f14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f18: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x306f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x306f1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x306f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x306f20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x306f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x306f24: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x306f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x306f28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306f34: 0x24065a22  addiu       $a2, $zero, 0x5A22
    ctx->pc = 0x306f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23074));
    // 0x306f38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306f3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306f40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306F40u;
    SET_GPR_U32(ctx, 31, 0x306F48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306F40u, 0x306F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F48u;
label_306f48:
    // 0x306f48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f4c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x306f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x306f50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f54: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306f58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306f5c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x306f60u;
}
