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

// Function: entry_0020d9fc
// Address: 0x20d9fc - 0x20da70
void entry_0020d9fc_0x20d9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d9fc_0x20d9fc");
#endif

    switch (ctx->pc) {
        case 0x20da1cu: goto label_20da1c;
        case 0x20da30u: goto label_20da30;
        case 0x20da40u: goto label_20da40;
        case 0x20da58u: goto label_20da58;
        default: break;
    }

    ctx->pc = 0x20d9fcu;

    // 0x20d9fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20da00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20da04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20da08: 0x2406051b  addiu       $a2, $zero, 0x51B
    ctx->pc = 0x20da08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1307));
    // 0x20da0c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20da10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20da10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20da14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20DA14u;
    SET_GPR_U32(ctx, 31, 0x20DA1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20DA14u, 0x20DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA1Cu;
label_20da1c:
    // 0x20da1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da24: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x20da24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20da28: 0xc096c60  jal         func_25B180
    ctx->pc = 0x20DA28u;
    SET_GPR_U32(ctx, 31, 0x20DA30u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x20DA28u, 0x20DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA30u;
label_20da30:
    // 0x20da30: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x20da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20da34: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20da38: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20DA38u;
    SET_GPR_U32(ctx, 31, 0x20DA40u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20DA40u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DA40u) { return; }
    ctx->pc = 0x20DA40u;
label_20da40:
    // 0x20da40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da48: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20da48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20da4c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20da50: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20DA50u;
    SET_GPR_U32(ctx, 31, 0x20DA58u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20DA58u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DA58u) { return; }
    ctx->pc = 0x20DA58u;
label_20da58:
    // 0x20da58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da5c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20da5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20da60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20da64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20da68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20da6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20da6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20da70u;
}
