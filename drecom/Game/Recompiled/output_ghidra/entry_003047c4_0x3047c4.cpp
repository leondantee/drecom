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

// Function: entry_003047c4
// Address: 0x3047c4 - 0x3047f4
void entry_003047c4_0x3047c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003047c4_0x3047c4");
#endif

    switch (ctx->pc) {
        case 0x3047e4u: goto label_3047e4;
        default: break;
    }

    ctx->pc = 0x3047c4u;

    // 0x3047c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3047c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3047ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3047d0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x3047d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3047d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3047d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3047d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3047d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3047dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3047DCu;
    SET_GPR_U32(ctx, 31, 0x3047E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3047DCu, 0x3047E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047E4u;
label_3047e4:
    // 0x3047e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3047e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3047e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3047ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3047f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3047f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3047f4u;
}
