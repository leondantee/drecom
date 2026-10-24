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

// Function: caseD_2
// Address: 0x26fc58 - 0x26fcb0
void caseD_2_0x26fc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x26fc58");
#endif

    switch (ctx->pc) {
        case 0x26fc78u: goto label_26fc78;
        default: break;
    }

    ctx->pc = 0x26fc58u;

    // 0x26fc58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26fc64: 0x2406056a  addiu       $a2, $zero, 0x56A
    ctx->pc = 0x26fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
    // 0x26fc68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26fc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fc6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26fc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26fc70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26FC70u;
    SET_GPR_U32(ctx, 31, 0x26FC78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26FC70u, 0x26FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC78u;
label_26fc78:
    // 0x26fc78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26fc80: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26fc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26fc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26fc88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26fc8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc90: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x26fc90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x26fc94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fc98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc9c: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x26fc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x26fca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fca4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26fca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26fca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fcac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26fcacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26fcb0u;
}
