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

// Function: entry_003091dc
// Address: 0x3091dc - 0x309214
void entry_003091dc_0x3091dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003091dc_0x3091dc");
#endif

    switch (ctx->pc) {
        case 0x3091fcu: goto label_3091fc;
        default: break;
    }

    ctx->pc = 0x3091dcu;

    // 0x3091dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3091e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3091e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3091e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3091e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3091e8: 0x24062833  addiu       $a2, $zero, 0x2833
    ctx->pc = 0x3091e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10291));
    // 0x3091ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3091ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3091f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3091f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3091f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3091F4u;
    SET_GPR_U32(ctx, 31, 0x3091FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3091F4u, 0x3091FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091FCu;
label_3091fc:
    // 0x3091fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309200: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309208: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30920c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309210: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x309214u;
}
