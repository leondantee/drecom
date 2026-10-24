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

// Function: caseD_0
// Address: 0x34bf28 - 0x34c01c
void caseD_0_0x34bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x34bf28");
#endif

    switch (ctx->pc) {
        case 0x34bf54u: goto label_34bf54;
        case 0x34c010u: goto label_34c010;
        default: break;
    }

    ctx->pc = 0x34bf28u;

    // 0x34bf28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bf2c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf30: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34bf30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bf34: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf38: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf3c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34bf40: 0x24061e27  addiu       $a2, $zero, 0x1E27
    ctx->pc = 0x34bf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7719));
    // 0x34bf44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34bf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bf48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34bf48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34bf4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34BF4Cu;
    SET_GPR_U32(ctx, 31, 0x34BF54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34BF4Cu, 0x34BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF54u;
label_34bf54:
    // 0x34bf54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34bf54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34bf58: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf5c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34bf60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bf64: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x34bf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34bf68: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x34bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x34bf6c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf70: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34bf74: 0xa0c0006e  sb          $zero, 0x6E($a2)
    ctx->pc = 0x34bf74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bf78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34bf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bf7c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x34bf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf80: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x34bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34bf84: 0xa047006f  sb          $a3, 0x6F($v0)
    ctx->pc = 0x34bf84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 7));
    // 0x34bf88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34bf8c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf90: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x34bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34bf94: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bf98: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf9c: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x34bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34bfa0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bfa4: 0x34850010  ori         $a1, $a0, 0x10
    ctx->pc = 0x34bfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x34bfa8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x34bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x34bfac: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34bfacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bfb0: 0x8cd202d0  lw          $s2, 0x2D0($a2)
    ctx->pc = 0x34bfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x34bfb4: 0x26460960  addiu       $a2, $s2, 0x960
    ctx->pc = 0x34bfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2400));
    // 0x34bfb8: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x34bfb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34bfbc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34bfc0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bfc4: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x34bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x34bfc8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34bfcc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x34bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x34bfd0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bfd4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x34bfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34bfd8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bfdc: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x34bfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x34bfe0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34bfe4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34bfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34bfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34bfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bfec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bff0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bff4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34bff8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bffc: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x34bffcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c000: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c004: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x34c004u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c008: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34C008u;
    SET_GPR_U32(ctx, 31, 0x34C010u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34C008u, 0x34C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C010u;
label_34c010:
    // 0x34c010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c014: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34c014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34c018: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x34c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x34c01cu;
}
