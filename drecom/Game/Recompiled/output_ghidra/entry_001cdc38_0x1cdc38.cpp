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

// Function: entry_001cdc38
// Address: 0x1cdc38 - 0x1cdcbc
void entry_001cdc38_0x1cdc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc38_0x1cdc38");
#endif

    switch (ctx->pc) {
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc88u: goto label_1cdc88;
        default: break;
    }

    ctx->pc = 0x1cdc38u;

    // 0x1cdc38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc3c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cdc40: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1cdc44: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1cdc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cdc48: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1cdc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cdc4c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1cdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1cdc50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cdc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cdc5c: 0x24061e88  addiu       $a2, $zero, 0x1E88
    ctx->pc = 0x1cdc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7816));
    // 0x1cdc60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cdc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cdc68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CDC68u;
    SET_GPR_U32(ctx, 31, 0x1CDC70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CDC68u, 0x1CDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC70u;
label_1cdc70:
    // 0x1cdc70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc74: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x1cdc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1cdc78: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cdc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cdc7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc80: 0xc0c5084  jal         func_314210
    ctx->pc = 0x1CDC80u;
    SET_GPR_U32(ctx, 31, 0x1CDC88u);
    ctx->pc = 0x314210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314210u, 0x1CDC80u, 0x1CDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC88u;
label_1cdc88:
    // 0x1cdc88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc8c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1cdc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cdc90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc94: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1cdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1cdc98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdca0: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1cdca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    // 0x1cdca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdca8: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1cdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1cdcac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcb0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cdcb4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1cdcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cdcb8: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1cdcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1cdcbcu;
}
