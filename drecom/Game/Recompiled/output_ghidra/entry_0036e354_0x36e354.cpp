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

// Function: entry_0036e354
// Address: 0x36e354 - 0x36e384
void entry_0036e354_0x36e354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e354_0x36e354");
#endif

    switch (ctx->pc) {
        case 0x36e374u: goto label_36e374;
        default: break;
    }

    ctx->pc = 0x36e354u;

    // 0x36e354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e358: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e35c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e360: 0x24065a06  addiu       $a2, $zero, 0x5A06
    ctx->pc = 0x36e360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23046));
    // 0x36e364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e368: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e36c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E36Cu;
    SET_GPR_U32(ctx, 31, 0x36E374u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E36Cu, 0x36E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E374u;
label_36e374:
    // 0x36e374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e378: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e37c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e380: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36e384u;
}
