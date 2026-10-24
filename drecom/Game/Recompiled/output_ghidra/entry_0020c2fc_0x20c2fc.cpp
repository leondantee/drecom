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

// Function: entry_0020c2fc
// Address: 0x20c2fc - 0x20c350
void entry_0020c2fc_0x20c2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c2fc_0x20c2fc");
#endif

    switch (ctx->pc) {
        case 0x20c318u: goto label_20c318;
        case 0x20c328u: goto label_20c328;
        case 0x20c340u: goto label_20c340;
        default: break;
    }

    ctx->pc = 0x20c2fcu;

    // 0x20c2fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c300: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c300u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c308: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c30c: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x20c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20c310: 0xc096c60  jal         func_25B180
    ctx->pc = 0x20C310u;
    SET_GPR_U32(ctx, 31, 0x20C318u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x20C310u, 0x20C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C318u;
label_20c318:
    // 0x20c318: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x20c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20c31c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20c320: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C320u;
    SET_GPR_U32(ctx, 31, 0x20C328u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C328u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C328u) { return; }
    ctx->pc = 0x20C328u;
label_20c328:
    // 0x20c328: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c32c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c330: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c334: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c338: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C338u;
    SET_GPR_U32(ctx, 31, 0x20C340u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C340u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C340u) { return; }
    ctx->pc = 0x20C340u;
label_20c340:
    // 0x20c340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c344: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20c344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20c348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c34c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20c34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20c350u;
}
