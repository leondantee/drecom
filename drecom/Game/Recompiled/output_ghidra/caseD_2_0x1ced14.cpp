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
// Address: 0x1ced14 - 0x1ceda8
void caseD_2_0x1ced14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ced14");
#endif

    switch (ctx->pc) {
        case 0x1ced4cu: goto label_1ced4c;
        case 0x1ced98u: goto label_1ced98;
        default: break;
    }

    ctx->pc = 0x1ced14u;

    // 0x1ced14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ced18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ced1c: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x1ced20: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1ced20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ced24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ced24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ced28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ced28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ced2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ced34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ced38: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1ced3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ced40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ced44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CED44u;
    SET_GPR_U32(ctx, 31, 0x1CED4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CED44u, 0x1CED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED4Cu;
label_1ced4c:
    // 0x1ced4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ced4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ced50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced54: 0xa4651278  sh          $a1, 0x1278($v1)
    ctx->pc = 0x1ced54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ced58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ced5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced60: 0xa0641576  sb          $a0, 0x1576($v1)
    ctx->pc = 0x1ced60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ced64: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ced64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ced68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced6c: 0xa0851577  sb          $a1, 0x1577($a0)
    ctx->pc = 0x1ced6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5495), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ced70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced74: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1ced78: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced7c: 0xaca01b6c  sw          $zero, 0x1B6C($a1)
    ctx->pc = 0x1ced7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 0));
    // 0x1ced80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced84: 0x908313a5  lbu         $v1, 0x13A5($a0)
    ctx->pc = 0x1ced84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5029)));
    // 0x1ced88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ced88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ced8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ced8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ced90: 0xc0c50a4  jal         func_314290
    ctx->pc = 0x1CED90u;
    SET_GPR_U32(ctx, 31, 0x1CED98u);
    ctx->pc = 0x314290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314290u, 0x1CED90u, 0x1CED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED98u;
label_1ced98:
    // 0x1ced98: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced9c: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x1ced9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1ceda0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x1ceda0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ceda4: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x1ceda4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x1ceda8u;
}
