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

// Function: Em09_R1_mv06
// Address: 0x346a60 - 0x347338
void Em09_R1_mv06_0x346a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv06_0x346a60");
#endif

    switch (ctx->pc) {
        case 0x346af4u: goto label_346af4;
        case 0x346d9cu: goto label_346d9c;
        case 0x346dacu: goto label_346dac;
        case 0x346db8u: goto label_346db8;
        case 0x34713cu: goto label_34713c;
        default: break;
    }

    ctx->pc = 0x346a60u;

    // 0x346a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x346a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x346a64: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x346a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x346a68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x346a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x346a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x346a74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346a78: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x346a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x346a7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346a80: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x346a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346a84: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x346a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x346a88: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x346a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x346a8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346a90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346a94: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x346a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x346a98: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x346a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x346a9c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x346a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x346aa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346aa4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x346aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x346aa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x346aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x346aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x346aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346ab0: 0x106500b3  beq         $v1, $a1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x346AB0u;
    {
        const bool branch_taken_0x346ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x346ab0) {
            ctx->pc = 0x346D80u;
            goto label_346d80;
        }
    }
    ctx->pc = 0x346AB8u;
    // 0x346ab8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x346AB8u;
    {
        const bool branch_taken_0x346ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346ab8) {
            ctx->pc = 0x346AC8u;
            goto label_346ac8;
        }
    }
    ctx->pc = 0x346AC0u;
    // 0x346ac0: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x346AC0u;
    {
        const bool branch_taken_0x346ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346ac0) {
            ctx->pc = 0x347318u;
            goto label_347318;
        }
    }
    ctx->pc = 0x346AC8u;
label_346ac8:
    // 0x346ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346acc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ad0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x346ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x346ad4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ad8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346adc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x346adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x346ae0: 0x24061e32  addiu       $a2, $zero, 0x1E32
    ctx->pc = 0x346ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7730));
    // 0x346ae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x346ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346ae8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x346ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x346aec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x346AECu;
    SET_GPR_U32(ctx, 31, 0x346AF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x346AECu, 0x346AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AF4u;
label_346af4:
    // 0x346af4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346af4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346af8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346afc: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x346afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x346b00: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x346b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x346b04: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x346b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346b08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x346b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x346b0c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x346b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x346b10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x346b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x346b14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x346b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x346b18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346b20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x346b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346b24: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x346b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x346b28: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x346b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x346b2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346b34: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x346b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x346b38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x346b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346b3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346b44: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x346b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x346b48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x346b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x346b4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346b54: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x346b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x346b58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346b60: 0x247036b0  addiu       $s0, $v1, 0x36B0
    ctx->pc = 0x346b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x346b64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b68: 0x0  nop
    ctx->pc = 0x346b68u;
    // NOP
    // 0x346b6c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b74: 0x0  nop
    ctx->pc = 0x346b74u;
    // NOP
    // 0x346b78: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b80: 0x0  nop
    ctx->pc = 0x346b80u;
    // NOP
    // 0x346b84: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x346b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x346b88: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x346b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346b8c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x346b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x346b90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b94: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x346b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346b98: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x346b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x346b9c: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x346b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346ba0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x346ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x346ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ba8: 0x0  nop
    ctx->pc = 0x346ba8u;
    // NOP
    // 0x346bac: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x346bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x346bb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346bb4: 0x0  nop
    ctx->pc = 0x346bb4u;
    // NOP
    // 0x346bb8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x346bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x346bbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346bc0: 0x0  nop
    ctx->pc = 0x346bc0u;
    // NOP
    // 0x346bc4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x346bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x346bc8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x346bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346bcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x346bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346bd0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x346bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x346bd4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x346bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x346bd8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346bdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x346bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x346be0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x346be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x346be4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x346be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346bec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346bf0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x346bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x346bf4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x346bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x346bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346bfc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346c00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x346c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x346c04: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x346c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x346c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346c10: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x346c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x346c14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346c18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x346c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346c1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c20: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346c24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x346c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346c28: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x346c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x346c2c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x346c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x346c30: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x346c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x346c34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c38: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x346c38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x346c3c: 0x8fb30058  lw          $s3, 0x58($sp)
    ctx->pc = 0x346c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c40: 0xa660127a  sh          $zero, 0x127A($s3)
    ctx->pc = 0x346c40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x346c44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c48: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346c4c: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x346c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x346c50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346c58: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x346c58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x346c5c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x346c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x346c60: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x346c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x346c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346c70: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x346c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x346c74: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x346c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x346c78: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x346c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x346c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346c88: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x346c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x346c8c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x346c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x346c90: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x346c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346c9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346ca0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x346ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x346ca4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x346ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x346ca8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x346cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346cb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346cb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346cb8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x346cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x346cbc: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x346cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x346cc0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x346cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346cc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ccc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346cd0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x346cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x346cd4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x346cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x346cd8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x346cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ce0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ce4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346ce8: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x346ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x346cec: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x346cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x346cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346cf4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346cf8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346cfc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x346cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x346d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x346d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x346d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346d08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346d10: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x346d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x346d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x346d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x346d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346d1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346d24: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x346d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x346d28: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x346d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346d2c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x346d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346d30: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x346d30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x346d34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d38: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x346d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x346d3c: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x346d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x346d40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x346d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x346d44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x346d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x346d48: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x346d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
    // 0x346d4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346d54: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x346d54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x346d58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x346d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346d5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346d64: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x346d64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x346d68: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x346d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x346d6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x346d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x346d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346d74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346d7c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x346d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_346d80:
    // 0x346d80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x346d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x346d84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d88: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x346d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x346d8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x346d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x346d94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x346D94u;
    SET_GPR_U32(ctx, 31, 0x346D9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x346D94u, 0x346D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D9Cu;
label_346d9c:
    // 0x346d9c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346da0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346da4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x346DA4u;
    SET_GPR_U32(ctx, 31, 0x346DACu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x346DA4u, 0x346DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DACu;
label_346dac:
    // 0x346dac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346db0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x346DB0u;
    SET_GPR_U32(ctx, 31, 0x346DB8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x346DB0u, 0x346DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DB8u;
label_346db8:
    // 0x346db8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346dbc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x346dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x346dc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x346dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x346dc4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x346dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x346dc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346dcc: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346dccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346dd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346dd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346dd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346dd8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x346dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346ddc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x346DDCu;
    {
        const bool branch_taken_0x346ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x346ddc) {
            ctx->pc = 0x346E00u;
            goto label_346e00;
        }
    }
    ctx->pc = 0x346DE4u;
    // 0x346de4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346de8: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346dec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346df0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346df0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346df4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x346df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x346df8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x346DF8u;
    {
        const bool branch_taken_0x346df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x346df8) {
            ctx->pc = 0x346ED0u;
            goto label_346ed0;
        }
    }
    ctx->pc = 0x346E00u;
label_346e00:
    // 0x346e00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346e04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346e08: 0x247039d0  addiu       $s0, $v1, 0x39D0
    ctx->pc = 0x346e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
    // 0x346e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e10: 0x0  nop
    ctx->pc = 0x346e10u;
    // NOP
    // 0x346e14: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e1c: 0x0  nop
    ctx->pc = 0x346e1cu;
    // NOP
    // 0x346e20: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e28: 0x0  nop
    ctx->pc = 0x346e28u;
    // NOP
    // 0x346e2c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x346e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x346e30: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x346e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e34: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x346e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x346e38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346e3c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x346e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e40: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x346e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x346e44: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x346e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e48: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x346e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x346e4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e50: 0x0  nop
    ctx->pc = 0x346e50u;
    // NOP
    // 0x346e54: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x346e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x346e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e5c: 0x0  nop
    ctx->pc = 0x346e5cu;
    // NOP
    // 0x346e60: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x346e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x346e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e68: 0x0  nop
    ctx->pc = 0x346e68u;
    // NOP
    // 0x346e6c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x346e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x346e70: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x346e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346e74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x346e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346e78: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x346e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x346e7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x346e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x346e80: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346e84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x346e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x346e88: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x346e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x346e8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x346e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e94: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346e98: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x346e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x346e9c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x346e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x346ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ea4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346ea8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x346ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x346eac: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x346eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x346eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346eb4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346eb8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x346eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x346ebc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346ec0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x346ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346ec4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x346ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346ec8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346ecc: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x346eccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
label_346ed0:
    // 0x346ed0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ed4: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346ed8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346edc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346edcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346ee0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x346ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x346ee4: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x346EE4u;
    {
        const bool branch_taken_0x346ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x346ee4) {
            ctx->pc = 0x346FBCu;
            goto label_346fbc;
        }
    }
    ctx->pc = 0x346EECu;
    // 0x346eec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ef0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346ef4: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x346ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346efc: 0x0  nop
    ctx->pc = 0x346efcu;
    // NOP
    // 0x346f00: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f08: 0x0  nop
    ctx->pc = 0x346f08u;
    // NOP
    // 0x346f0c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f14: 0x0  nop
    ctx->pc = 0x346f14u;
    // NOP
    // 0x346f18: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x346f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x346f1c: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x346f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f20: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x346f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x346f24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346f28: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x346f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f2c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x346f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x346f30: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x346f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f34: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x346f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x346f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f3c: 0x0  nop
    ctx->pc = 0x346f3cu;
    // NOP
    // 0x346f40: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x346f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x346f44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f48: 0x0  nop
    ctx->pc = 0x346f48u;
    // NOP
    // 0x346f4c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x346f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x346f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f54: 0x0  nop
    ctx->pc = 0x346f54u;
    // NOP
    // 0x346f58: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x346f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x346f5c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x346f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x346f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346f64: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x346f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x346f68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x346f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x346f6c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x346f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x346f74: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x346f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x346f78: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x346f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f80: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f84: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x346f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x346f88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x346f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x346f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f90: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346f94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x346f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x346f98: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x346f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x346f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346fa0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346fa4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x346fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x346fa8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346fac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x346facu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346fb0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x346fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346fb4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x346fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x346fb8: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x346fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
label_346fbc:
    // 0x346fbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346fc0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346fc4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346fc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346fc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346fcc: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x346fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x346fd0: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x346FD0u;
    {
        const bool branch_taken_0x346fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x346fd0) {
            ctx->pc = 0x3470A8u;
            goto label_3470a8;
        }
    }
    ctx->pc = 0x346FD8u;
    // 0x346fd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346fdc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x346fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x346fe0: 0x247036b0  addiu       $s0, $v1, 0x36B0
    ctx->pc = 0x346fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x346fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346fe8: 0x0  nop
    ctx->pc = 0x346fe8u;
    // NOP
    // 0x346fec: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x346fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x346ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ff4: 0x0  nop
    ctx->pc = 0x346ff4u;
    // NOP
    // 0x346ff8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x346ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x346ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347000: 0x0  nop
    ctx->pc = 0x347000u;
    // NOP
    // 0x347004: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x347004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x347008: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x347008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34700c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x347010: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347014: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x347014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347018: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x347018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34701c: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x34701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347020: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x347020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x347024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347028: 0x0  nop
    ctx->pc = 0x347028u;
    // NOP
    // 0x34702c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x34702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x347030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347034: 0x0  nop
    ctx->pc = 0x347034u;
    // NOP
    // 0x347038: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x347038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x34703c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34703cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347040: 0x0  nop
    ctx->pc = 0x347040u;
    // NOP
    // 0x347044: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x347044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x347048: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x347048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34704c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347050: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347054: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347058: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34705c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34705cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347060: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x347060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x347064: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34706c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347070: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347074: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x347074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x347078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34707c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347080: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x347080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x347084: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x347084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x347088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34708c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347090: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x347090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x347094: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347098: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34709c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x34709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3470a0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3470a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3470a4: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x3470a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
label_3470a8:
    // 0x3470a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3470a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470ac: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x3470acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3470b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3470b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3470b4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x3470b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3470b8: 0x14800097  bnez        $a0, . + 4 + (0x97 << 2)
    ctx->pc = 0x3470B8u;
    {
        const bool branch_taken_0x3470b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3470b8) {
            ctx->pc = 0x347318u;
            goto label_347318;
        }
    }
    ctx->pc = 0x3470C0u;
    // 0x3470c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3470c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3470c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3470c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3470cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3470d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470d4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3470d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3470d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3470dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3470e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470e4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3470e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3470e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3470ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3470f0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3470f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3470f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3470f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3470fc: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x3470fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x347100: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x347100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347104: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x347104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x347108: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x347108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34710c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x347110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347114: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x347114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x347118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x347118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34711c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x34711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347120: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x347120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x347124: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x347124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x347128: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x347128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34712c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x347130: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x347130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x347134: 0xc067694  jal         func_19DA50
    ctx->pc = 0x347134u;
    SET_GPR_U32(ctx, 31, 0x34713Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x347134u, 0x34713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34713Cu;
label_34713c:
    // 0x34713c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347140: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x347140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x347144: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x347144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x347148: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x347148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34714c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34714cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x347150: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347154: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347158: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x347158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x34715c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347160: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x347160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347164: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x347164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x347168: 0x2411ffef  addiu       $s1, $zero, -0x11
    ctx->pc = 0x347168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34716c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x34716cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x347170: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x347170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x347174: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x347174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347178: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34717c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x347180: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x347180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x347184: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x347184u;
    {
        const bool branch_taken_0x347184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347184) {
            ctx->pc = 0x3471C0u;
            goto label_3471c0;
        }
    }
    ctx->pc = 0x34718Cu;
    // 0x34718c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347190: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347194: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x347194u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34719c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x34719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471a0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3471a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3471a4: 0xa065006f  sb          $a1, 0x6F($v1)
    ctx->pc = 0x3471a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x3471a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3471a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3471ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3471acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471b0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3471b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3471b4: 0xa0a30072  sb          $v1, 0x72($a1)
    ctx->pc = 0x3471b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x3471b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3471B8u;
    {
        const bool branch_taken_0x3471b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471b8) {
            ctx->pc = 0x3471E8u;
            goto label_3471e8;
        }
    }
    ctx->pc = 0x3471C0u;
label_3471c0:
    // 0x3471c0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x3471c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471c4: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x3471c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x3471c8: 0xa0e0006e  sb          $zero, 0x6E($a3)
    ctx->pc = 0x3471c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3471cc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x3471ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471d0: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x3471d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x3471d4: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x3471d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3471d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3471d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3471dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3471dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471e0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x3471e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3471e4: 0xa2040072  sb          $a0, 0x72($s0)
    ctx->pc = 0x3471e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 4));
label_3471e8:
    // 0x3471e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3471e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471ec: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x3471ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3471f0: 0xa080008e  sb          $zero, 0x8E($a0)
    ctx->pc = 0x3471f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x3471f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3471f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3471f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3471fc: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x3471fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x347200: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x347200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x347204: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x347204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x347208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34720c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347210: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347214: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x347214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x347218: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x347218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x34721c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34721cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347224: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x347224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347228: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34722c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x34722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x347230: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x347230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x347234: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x347234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x347238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34723c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347244: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x347244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x347248: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x347248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x34724c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34724cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347254: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x347254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347258: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x347258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34725c: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x34725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x347260: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x347260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x347264: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x347264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347268: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x347268u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34726c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347270: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347274: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x347274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x347278: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x347278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x34727c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347288: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34728c: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x34728cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x347290: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347298: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34729c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472a0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x3472a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x3472a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3472a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3472a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3472a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3472ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472b0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3472b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472b4: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x3472b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x3472b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3472b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3472bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3472bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3472c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472c4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3472c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472c8: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x3472c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x3472cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472d0: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x3472d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x3472d4: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x3472d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3472d8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x3472d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x3472dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3472dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3472e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3472e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3472e4: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x3472e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
    // 0x3472e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3472ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472f0: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x3472f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3472f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3472f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472fc: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x3472fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x347300: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x347300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x347304: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34730c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347310: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347314: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x347314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_347318:
    // 0x347318: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x347318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34731c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34731cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34732c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34732cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x347330: 0x3e00008  jr          $ra
    ctx->pc = 0x347330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347338u;
}
