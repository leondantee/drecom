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

// Function: entry_002d4320
// Address: 0x2d4320 - 0x2d4344
void entry_002d4320_0x2d4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4320_0x2d4320");
#endif

    switch (ctx->pc) {
        case 0x2d4334u: goto label_2d4334;
        default: break;
    }

    ctx->pc = 0x2d4320u;

    // 0x2d4320: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4328: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x2d4328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d432c: 0xc0c6c98  jal         func_31B260
    ctx->pc = 0x2D432Cu;
    SET_GPR_U32(ctx, 31, 0x2D4334u);
    ctx->pc = 0x31B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B260u, 0x2D432Cu, 0x2D4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4334u;
label_2d4334:
    // 0x2d4334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4338: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d433c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4340: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d4344u;
}
