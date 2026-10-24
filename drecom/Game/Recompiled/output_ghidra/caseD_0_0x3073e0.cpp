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
// Address: 0x3073e0 - 0x307440
void caseD_0_0x3073e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x3073e0");
#endif

    switch (ctx->pc) {
        case 0x3073f4u: goto label_3073f4;
        case 0x307428u: goto label_307428;
        default: break;
    }

    ctx->pc = 0x3073e0u;

    // 0x3073e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3073e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3073e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x3073e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3073e8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3073e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3073ec: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x3073ECu;
    SET_GPR_U32(ctx, 31, 0x3073F4u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x3073ECu, 0x3073F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073F4u;
label_3073f4:
    // 0x3073f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3073f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3073f8: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x3073f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x3073fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x307400: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x307400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x307404: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x307404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x307408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30740c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307410: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x307410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x307414: 0x24065a19  addiu       $a2, $zero, 0x5A19
    ctx->pc = 0x307414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23065));
    // 0x307418: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x307418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30741c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30741cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x307420: 0xc0965d0  jal         func_259740
    ctx->pc = 0x307420u;
    SET_GPR_U32(ctx, 31, 0x307428u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x307420u, 0x307428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307428u;
label_307428:
    // 0x307428: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30742c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30742cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x307430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x307438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30743c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30743cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x307440u;
}
