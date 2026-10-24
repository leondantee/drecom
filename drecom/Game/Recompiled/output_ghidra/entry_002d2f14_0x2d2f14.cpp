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

// Function: entry_002d2f14
// Address: 0x2d2f14 - 0x2d2f44
void entry_002d2f14_0x2d2f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2f14_0x2d2f14");
#endif

    switch (ctx->pc) {
        case 0x2d2f34u: goto label_2d2f34;
        default: break;
    }

    ctx->pc = 0x2d2f14u;

    // 0x2d2f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2f20: 0x24063c0c  addiu       $a2, $zero, 0x3C0C
    ctx->pc = 0x2d2f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15372));
    // 0x2d2f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2f2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2F2Cu, 0x2D2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F34u;
label_2d2f34:
    // 0x2d2f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f38: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2f3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2f40: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d2f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d2f44u;
}
