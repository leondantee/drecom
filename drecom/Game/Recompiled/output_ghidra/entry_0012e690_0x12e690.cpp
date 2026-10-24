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

// Function: entry_0012e690
// Address: 0x12e690 - 0x12e6c0
void entry_0012e690_0x12e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e690_0x12e690");
#endif

    switch (ctx->pc) {
        case 0x12e6b0u: goto label_12e6b0;
        default: break;
    }

    ctx->pc = 0x12e690u;

    // 0x12e690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e698: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12e698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12e69c: 0x24063c27  addiu       $a2, $zero, 0x3C27
    ctx->pc = 0x12e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15399));
    // 0x12e6a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e6a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12e6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12e6a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12E6A8u;
    SET_GPR_U32(ctx, 31, 0x12E6B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12E6A8u, 0x12E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6B0u;
label_12e6b0:
    // 0x12e6b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12e6b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12e6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12e6bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12e6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12e6c0u;
}
