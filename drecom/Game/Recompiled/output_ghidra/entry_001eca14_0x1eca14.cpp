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

// Function: entry_001eca14
// Address: 0x1eca14 - 0x1ecb28
void entry_001eca14_0x1eca14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca14_0x1eca14");
#endif

    switch (ctx->pc) {
        case 0x1eca98u: goto label_1eca98;
        case 0x1ecabcu: goto label_1ecabc;
        case 0x1ecb08u: goto label_1ecb08;
        default: break;
    }

    ctx->pc = 0x1eca14u;

    // 0x1eca14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca18: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1eca1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eca20: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1eca20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eca24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1eca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca28: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x1eca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eca2c: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x1eca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x1eca30: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1eca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1eca34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eca34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca38: 0x0  nop
    ctx->pc = 0x1eca38u;
    // NOP
    // 0x1eca3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eca3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eca40: 0x0  nop
    ctx->pc = 0x1eca40u;
    // NOP
    // 0x1eca44: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1ECA44u;
    {
        const bool branch_taken_0x1eca44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eca44) {
            ctx->pc = 0x1ECB28u;
            return;
        }
    }
    ctx->pc = 0x1ECA4Cu;
    // 0x1eca4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eca54: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1eca54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eca58: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1ECA58u;
    {
        const bool branch_taken_0x1eca58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca58) {
            ctx->pc = 0x1ECB28u;
            return;
        }
    }
    ctx->pc = 0x1ECA60u;
    // 0x1eca60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eca64: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1eca64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca68: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1eca68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eca6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1eca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eca70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1eca74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eca78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eca80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eca84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eca88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eca90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECA90u;
    SET_GPR_U32(ctx, 31, 0x1ECA98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECA90u, 0x1ECA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA98u;
label_1eca98:
    // 0x1eca98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eca9c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1ecaa0: 0x244300b4  addiu       $v1, $v0, 0xB4
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1ecaa4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ecaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecaa8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ecaa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ecaac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecab0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1ecab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ecab4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECAB4u;
    SET_GPR_U32(ctx, 31, 0x1ECABCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECAB4u, 0x1ECABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECABCu;
label_1ecabc:
    // 0x1ecabc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecabcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecac0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecac4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ecac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ecac8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ECAC8u;
    {
        const bool branch_taken_0x1ecac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecac8) {
            ctx->pc = 0x1ECB28u;
            return;
        }
    }
    ctx->pc = 0x1ECAD0u;
    // 0x1ecad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecad8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecadc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ecadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecae0: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecae4: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x1ecae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecae8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecaec: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ecaecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecaf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecaf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecaf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecafc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ecafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ecb00: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECB00u;
    SET_GPR_U32(ctx, 31, 0x1ECB08u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECB00u, 0x1ECB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB08u;
label_1ecb08:
    // 0x1ecb08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecb08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecb0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecb10: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x1ecb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ecb14: 0x24a3003c  addiu       $v1, $a1, 0x3C
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1ecb18: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ecb18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecb1c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ecb1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ecb20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb24: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ecb24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1ecb28u;
}
