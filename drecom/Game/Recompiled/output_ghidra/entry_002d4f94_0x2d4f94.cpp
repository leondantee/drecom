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

// Function: entry_002d4f94
// Address: 0x2d4f94 - 0x2d4fc4
void entry_002d4f94_0x2d4f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4f94_0x2d4f94");
#endif

    switch (ctx->pc) {
        case 0x2d4fb4u: goto label_2d4fb4;
        default: break;
    }

    ctx->pc = 0x2d4f94u;

    // 0x2d4f94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4fa0: 0x2406642c  addiu       $a2, $zero, 0x642C
    ctx->pc = 0x2d4fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25644));
    // 0x2d4fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4fa8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4fac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4FACu;
    SET_GPR_U32(ctx, 31, 0x2D4FB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4FACu, 0x2D4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FB4u;
label_2d4fb4:
    // 0x2d4fb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4fc0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d4fc4u;
}
