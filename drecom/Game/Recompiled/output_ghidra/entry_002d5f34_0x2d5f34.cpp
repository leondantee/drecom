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

// Function: entry_002d5f34
// Address: 0x2d5f34 - 0x2d5f6c
void entry_002d5f34_0x2d5f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5f34_0x2d5f34");
#endif

    switch (ctx->pc) {
        case 0x2d5f54u: goto label_2d5f54;
        default: break;
    }

    ctx->pc = 0x2d5f34u;

    // 0x2d5f34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d5f40: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x2d5f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x2d5f44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5f48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d5f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d5f4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5F54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D5F4Cu, 0x2D5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F54u;
label_2d5f54:
    // 0x2d5f54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f58: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d5f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d5f5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f60: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d5f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d5f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5f68: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d5f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d5f6cu;
}
