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

// Function: entry_0036d0a4
// Address: 0x36d0a4 - 0x36d0dc
void entry_0036d0a4_0x36d0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d0a4_0x36d0a4");
#endif

    switch (ctx->pc) {
        case 0x36d0c4u: goto label_36d0c4;
        default: break;
    }

    ctx->pc = 0x36d0a4u;

    // 0x36d0a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36d0b0: 0x24065a0e  addiu       $a2, $zero, 0x5A0E
    ctx->pc = 0x36d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23054));
    // 0x36d0b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d0b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36d0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36d0bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36D0BCu;
    SET_GPR_U32(ctx, 31, 0x36D0C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36D0BCu, 0x36D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0C4u;
label_36d0c4:
    // 0x36d0c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0c8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36d0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36d0cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36d0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36d0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d0d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36d0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36d0dcu;
}
