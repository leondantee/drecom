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

// Function: entry_0030dc48
// Address: 0x30dc48 - 0x30dc9c
void entry_0030dc48_0x30dc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030dc48_0x30dc48");
#endif

    switch (ctx->pc) {
        case 0x30dc68u: goto label_30dc68;
        default: break;
    }

    ctx->pc = 0x30dc48u;

    // 0x30dc48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc50: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30dc54: 0x2406320f  addiu       $a2, $zero, 0x320F
    ctx->pc = 0x30dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12815));
    // 0x30dc58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30dc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dc5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30dc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30dc60: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30DC60u;
    SET_GPR_U32(ctx, 31, 0x30DC68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30DC60u, 0x30DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DC68u;
label_30dc68:
    // 0x30dc68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc6c: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30dc70: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30dc74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30dc78: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30dc7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc80: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30dc80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30dc84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc88: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30dc88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30dc8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc90: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30dc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30dc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30dc98: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30dc98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30dc9cu;
}
