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

// Function: entry_002a9368
// Address: 0x2a9368 - 0x2a939c
void entry_002a9368_0x2a9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9368_0x2a9368");
#endif

    switch (ctx->pc) {
        case 0x2a9384u: goto label_2a9384;
        default: break;
    }

    ctx->pc = 0x2a9368u;

    // 0x2a9368: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a936c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2a936cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2a9370: 0x24060f01  addiu       $a2, $zero, 0xF01
    ctx->pc = 0x2a9370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
    // 0x2a9374: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a9374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a9378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a9378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a937c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A937Cu;
    SET_GPR_U32(ctx, 31, 0x2A9384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A937Cu, 0x2A9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9384u;
label_2a9384:
    // 0x2a9384: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a9384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9388: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a938c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a938cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9394: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9398: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x2a9398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2a939cu;
}
