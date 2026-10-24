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

// Function: entry_0020c82c
// Address: 0x20c82c - 0x20c8b4
void entry_0020c82c_0x20c82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c82c_0x20c82c");
#endif

    switch (ctx->pc) {
        case 0x20c840u: goto label_20c840;
        case 0x20c860u: goto label_20c860;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c8a4u: goto label_20c8a4;
        default: break;
    }

    ctx->pc = 0x20c82cu;

    // 0x20c82c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c830: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c834: 0x2445a0e0  addiu       $a1, $v0, -0x5F20
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x20c838: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20C838u;
    SET_GPR_U32(ctx, 31, 0x20C840u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20C838u, 0x20C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C840u;
label_20c840:
    // 0x20c840: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c848: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20c848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20c84c: 0x24060514  addiu       $a2, $zero, 0x514
    ctx->pc = 0x20c84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x20c850: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20c850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20c854: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20c854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c858: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20C858u;
    SET_GPR_U32(ctx, 31, 0x20C860u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20C858u, 0x20C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C860u;
label_20c860:
    // 0x20c860: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c864: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c86c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c870: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x20c870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20c874: 0xc096c60  jal         func_25B180
    ctx->pc = 0x20C874u;
    SET_GPR_U32(ctx, 31, 0x20C87Cu);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x20C874u, 0x20C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C87Cu;
label_20c87c:
    // 0x20c87c: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x20c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20c880: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20c880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20c884: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C884u;
    SET_GPR_U32(ctx, 31, 0x20C88Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C88Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C88Cu) { return; }
    ctx->pc = 0x20C88Cu;
label_20c88c:
    // 0x20c88c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c890: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c894: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c898: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c89c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C89Cu;
    SET_GPR_U32(ctx, 31, 0x20C8A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C8A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C8A4u) { return; }
    ctx->pc = 0x20C8A4u;
label_20c8a4:
    // 0x20c8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c8a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20c8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20c8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c8b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20c8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20c8b4u;
}
