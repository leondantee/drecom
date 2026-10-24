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

// Function: entry_00302c04
// Address: 0x302c04 - 0x302c3c
void entry_00302c04_0x302c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302c04_0x302c04");
#endif

    switch (ctx->pc) {
        case 0x302c24u: goto label_302c24;
        default: break;
    }

    ctx->pc = 0x302c04u;

    // 0x302c04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302c10: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x302c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x302c14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302c18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302c1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302C1Cu;
    SET_GPR_U32(ctx, 31, 0x302C24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302C1Cu, 0x302C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C24u;
label_302c24:
    // 0x302c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c28: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302c28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302c2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c30: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x302c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302c38: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x302c3cu;
}
