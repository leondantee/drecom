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

// Function: entry_0020d2d0
// Address: 0x20d2d0 - 0x20d318
void entry_0020d2d0_0x20d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d2d0_0x20d2d0");
#endif

    switch (ctx->pc) {
        case 0x20d2ecu: goto label_20d2ec;
        default: break;
    }

    ctx->pc = 0x20d2d0u;

    // 0x20d2d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2d4: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20d2d8: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x20d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x20d2dc: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20d2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20d2e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d2e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D2E4u;
    SET_GPR_U32(ctx, 31, 0x20D2ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D2E4u, 0x20D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2ECu;
label_20d2ec:
    // 0x20d2ec: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x20d2f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2f4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20d2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d2f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2fc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d300: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d304: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20d304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d308: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d30c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d314: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20d318u;
}
