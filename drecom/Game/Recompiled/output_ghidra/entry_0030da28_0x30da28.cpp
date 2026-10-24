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

// Function: entry_0030da28
// Address: 0x30da28 - 0x30da7c
void entry_0030da28_0x30da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030da28_0x30da28");
#endif

    switch (ctx->pc) {
        case 0x30da48u: goto label_30da48;
        default: break;
    }

    ctx->pc = 0x30da28u;

    // 0x30da28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30da34: 0x2406280e  addiu       $a2, $zero, 0x280E
    ctx->pc = 0x30da34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10254));
    // 0x30da38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30da3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30da3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30da40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30DA40u;
    SET_GPR_U32(ctx, 31, 0x30DA48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30DA40u, 0x30DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA48u;
label_30da48:
    // 0x30da48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da4c: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30da50: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30da50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30da54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30da58: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30da58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30da5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30da60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30da64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da68: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30da68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30da6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30da70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30da74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30da78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30da78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30da7cu;
}
