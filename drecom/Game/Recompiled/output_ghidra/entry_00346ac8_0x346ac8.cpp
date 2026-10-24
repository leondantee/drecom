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

// Function: entry_00346ac8
// Address: 0x346ac8 - 0x346d80
void entry_00346ac8_0x346ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346ac8_0x346ac8");
#endif

    switch (ctx->pc) {
        case 0x346af4u: goto label_346af4;
        default: break;
    }

    ctx->pc = 0x346ac8u;

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
    ctx->pc = 0x346d80u;
}
