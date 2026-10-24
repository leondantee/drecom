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

// Function: entry_001308dc
// Address: 0x1308dc - 0x130918
void entry_001308dc_0x1308dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001308dc_0x1308dc");
#endif

    switch (ctx->pc) {
        case 0x1308fcu: goto label_1308fc;
        default: break;
    }

    ctx->pc = 0x1308dcu;

    // 0x1308dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1308e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1308e8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1308e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1308ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1308ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1308f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1308f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1308F4u;
    SET_GPR_U32(ctx, 31, 0x1308FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1308F4u, 0x1308FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308FCu;
label_1308fc:
    // 0x1308fc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1308fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x130900: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130904: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x130904u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x130908: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13090c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13090cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130914: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x130918u;
}
