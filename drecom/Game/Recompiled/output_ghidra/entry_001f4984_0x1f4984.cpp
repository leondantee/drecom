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

// Function: entry_001f4984
// Address: 0x1f4984 - 0x1f4b14
void entry_001f4984_0x1f4984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4984_0x1f4984");
#endif

    switch (ctx->pc) {
        case 0x1f4a34u: goto label_1f4a34;
        case 0x1f4a5cu: goto label_1f4a5c;
        default: break;
    }

    ctx->pc = 0x1f4984u;

    // 0x1f4984: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4988: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f498c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f4990: 0x2402dfe7  addiu       $v0, $zero, -0x2019
    ctx->pc = 0x1f4990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f4994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f4998: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f4998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f499c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f499cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49a4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f49a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f49a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f49a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f49acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49b0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f49b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f49b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f49b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49bc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f49bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f49c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f49c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49c4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f49c8: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x1f49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1f49cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49d0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1f49d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f49d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49d8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1f49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f49dc: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x1f49dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1f49e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49e4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1f49e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f49e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f49e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49ec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f49f0: 0x247005a0  addiu       $s0, $v1, 0x5A0
    ctx->pc = 0x1f49f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x1f49f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49f8: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x1f49f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f49fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f4a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4a08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f4a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4a14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a18: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1f4a18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4a1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a20: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1f4a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4a24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f4a2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4A2Cu, 0x1F4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A34u;
label_1f4a34:
    // 0x1f4a34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f4a34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4a38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f4a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f4a3c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1f4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f4a40: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1f4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f4a44: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1f4a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f4a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4a4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a50: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4a54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4A54u;
    SET_GPR_U32(ctx, 31, 0x1F4A5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4A54u, 0x1F4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A5Cu;
label_1f4a5c:
    // 0x1f4a5c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f4a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4a60: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x1f4a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1f4a64: 0x24a600b4  addiu       $a2, $a1, 0xB4
    ctx->pc = 0x1f4a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 180));
    // 0x1f4a68: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x1f4a68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f4a6c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1f4a70: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1f4a70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a74: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x1f4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1f4a78: 0xa467005c  sh          $a3, 0x5C($v1)
    ctx->pc = 0x1f4a78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 7));
    // 0x1f4a7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a80: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x1f4a80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x1f4a84: 0x3083f8ff  andi        $v1, $a0, 0xF8FF
    ctx->pc = 0x1f4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63743);
    // 0x1f4a88: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x1f4a88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4a8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a90: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f4a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4a94: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a98: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4a9c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f4aa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4aa4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f4aa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4aac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4ab0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1f4ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4ab4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f4ab8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4abc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4ac0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f4ac4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1f4ac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f4ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f4acc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4ad0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f4ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4ad8: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f4ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f4adc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f4adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f4ae0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f4ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f4ae4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4AE4u;
    {
        const bool branch_taken_0x1f4ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ae4) {
            ctx->pc = 0x1F4B14u;
            return;
        }
    }
    ctx->pc = 0x1F4AECu;
    // 0x1f4aec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4af4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f4af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f4af8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4b00: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f4b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4b04: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4b08: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4b0c: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x1f4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1f4b10: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1f4b14u;
}
