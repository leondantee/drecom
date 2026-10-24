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

// Function: entry_0030c4f8
// Address: 0x30c4f8 - 0x30c530
void entry_0030c4f8_0x30c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c4f8_0x30c4f8");
#endif

    switch (ctx->pc) {
        case 0x30c518u: goto label_30c518;
        default: break;
    }

    ctx->pc = 0x30c4f8u;

    // 0x30c4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c4fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30c504: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x30c504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x30c508: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30c508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c50c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30c50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c510: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30C510u;
    SET_GPR_U32(ctx, 31, 0x30C518u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30C510u, 0x30C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C518u;
label_30c518:
    // 0x30c518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c51c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30c51cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30c520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c524: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30c524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30c528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c52c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30c52cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30c530u;
}
