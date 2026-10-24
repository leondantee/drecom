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

// Function: entry_00304bac
// Address: 0x304bac - 0x304bec
void entry_00304bac_0x304bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304bac_0x304bac");
#endif

    switch (ctx->pc) {
        case 0x304bccu: goto label_304bcc;
        default: break;
    }

    ctx->pc = 0x304bacu;

    // 0x304bac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bb4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304bb8: 0x2406320f  addiu       $a2, $zero, 0x320F
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12815));
    // 0x304bbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304bc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304bc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304BC4u;
    SET_GPR_U32(ctx, 31, 0x304BCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304BC4u, 0x304BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304BCCu;
label_304bcc:
    // 0x304bcc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bd0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x304bd4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bd8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x304bdc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304be0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304be8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x304becu;
}
