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

// Function: Em09_R0_init
// Address: 0x342fe0 - 0x344834
void Em09_R0_init_0x342fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R0_init_0x342fe0");
#endif

    switch (ctx->pc) {
        case 0x343064u: goto label_343064;
        case 0x34315cu: goto label_34315c;
        case 0x343184u: goto label_343184;
        case 0x343440u: goto label_343440;
        case 0x34359cu: goto label_34359c;
        case 0x3435b0u: goto label_3435b0;
        case 0x3435c0u: goto label_3435c0;
        case 0x343614u: goto label_343614;
        case 0x34371cu: goto label_34371c;
        case 0x34372cu: goto label_34372c;
        case 0x343778u: goto label_343778;
        case 0x343788u: goto label_343788;
        case 0x3437d4u: goto label_3437d4;
        case 0x3437e8u: goto label_3437e8;
        case 0x343830u: goto label_343830;
        case 0x343840u: goto label_343840;
        case 0x34388cu: goto label_34388c;
        case 0x34389cu: goto label_34389c;
        case 0x3438c0u: goto label_3438c0;
        case 0x3438d4u: goto label_3438d4;
        case 0x3438e0u: goto label_3438e0;
        case 0x3438f0u: goto label_3438f0;
        case 0x34391cu: goto label_34391c;
        case 0x343930u: goto label_343930;
        case 0x343964u: goto label_343964;
        case 0x343984u: goto label_343984;
        case 0x343a80u: goto label_343a80;
        case 0x343aa0u: goto label_343aa0;
        case 0x343b84u: goto label_343b84;
        case 0x343ba8u: goto label_343ba8;
        case 0x343c94u: goto label_343c94;
        case 0x343cbcu: goto label_343cbc;
        case 0x343dacu: goto label_343dac;
        case 0x343dd4u: goto label_343dd4;
        case 0x343eacu: goto label_343eac;
        case 0x343ef0u: goto label_343ef0;
        case 0x343fa8u: goto label_343fa8;
        case 0x343ff8u: goto label_343ff8;
        case 0x3440bcu: goto label_3440bc;
        case 0x3440dcu: goto label_3440dc;
        case 0x3441dcu: goto label_3441dc;
        case 0x3441f8u: goto label_3441f8;
        case 0x34453cu: goto label_34453c;
        case 0x344548u: goto label_344548;
        case 0x3445dcu: goto label_3445dc;
        case 0x3445ecu: goto label_3445ec;
        case 0x344698u: goto label_344698;
        case 0x344714u: goto label_344714;
        case 0x344734u: goto label_344734;
        case 0x3447ccu: goto label_3447cc;
        case 0x3447fcu: goto label_3447fc;
        default: break;
    }

    ctx->pc = 0x342fe0u;

    // 0x342fe0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x342fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x342fe4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x342fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x342fe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x342fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x342fec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x342fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x342ff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x342ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x342ff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x342ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x342ff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x342ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x342ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x342ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x343000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x343000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x343004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x343004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x343008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34300c: 0xafa40158  sw          $a0, 0x158($sp)
    ctx->pc = 0x34300cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
    // 0x343010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343014: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343018: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x343018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34301c: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x34301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343020: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x343020u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x343024: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x343024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343028: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x343028u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34302c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x34302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343030: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x343030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x343034: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343038: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x343038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34303c: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x34303cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x343040: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x343040u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343044: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343048: 0xe4a011e0  swc1        $f0, 0x11E0($a1)
    ctx->pc = 0x343048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4576), bits); }
    // 0x34304c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x34304cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x343050: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x343050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343054: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343058: 0xe4a011e4  swc1        $f0, 0x11E4($a1)
    ctx->pc = 0x343058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4580), bits); }
    // 0x34305c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34305Cu;
    SET_GPR_U32(ctx, 31, 0x343064u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34305Cu, 0x343064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343064u;
label_343064:
    // 0x343064: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x343064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343068: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x343068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34306c: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x34306cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x343070: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x343070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x343074: 0x246aa260  addiu       $t2, $v1, -0x5DA0
    ctx->pc = 0x343074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943328));
    // 0x343078: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x343078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x34307c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x34307cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x343080: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343084: 0xa4a410a6  sh          $a0, 0x10A6($a1)
    ctx->pc = 0x343084u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x343088: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x343088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34308c: 0x94c7000e  lhu         $a3, 0xE($a2)
    ctx->pc = 0x34308cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x343090: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x343090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x343094: 0xa4c8000e  sh          $t0, 0xE($a2)
    ctx->pc = 0x343094u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x343098: 0x8fa90158  lw          $t1, 0x158($sp)
    ctx->pc = 0x343098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34309c: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x34309cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3430a0: 0x35420010  ori         $v0, $t2, 0x10
    ctx->pc = 0x3430a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x3430a4: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x3430a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x3430a8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3430a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430ac: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x3430acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3430b0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3430b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x3430b4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430b8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3430b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3430bc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3430bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3430c0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3430c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430c4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3430c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3430c8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3430c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3430cc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3430ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3430d0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3430d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430d4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3430d8: 0xa4440034  sh          $a0, 0x34($v0)
    ctx->pc = 0x3430d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x3430dc: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x3430dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430e0: 0x26221330  addiu       $v0, $s1, 0x1330
    ctx->pc = 0x3430e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x3430e4: 0xa040002b  sb          $zero, 0x2B($v0)
    ctx->pc = 0x3430e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x3430e8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3430e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430ec: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3430ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3430f0: 0xa040002a  sb          $zero, 0x2A($v0)
    ctx->pc = 0x3430f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x3430f4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3430f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3430f8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3430f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3430fc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3430fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x343100: 0xa0440028  sb          $a0, 0x28($v0)
    ctx->pc = 0x343100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x343104: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x343104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343108: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x343108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34310c: 0x26261330  addiu       $a2, $s1, 0x1330
    ctx->pc = 0x34310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x343110: 0xa4c20036  sh          $v0, 0x36($a2)
    ctx->pc = 0x343110u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x343114: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x343114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343118: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34311c: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x34311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x343120: 0xa4440038  sh          $a0, 0x38($v0)
    ctx->pc = 0x343120u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x343124: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x343124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343128: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34312c: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x34312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343130: 0xa4a3003a  sh          $v1, 0x3A($a1)
    ctx->pc = 0x343130u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x343134: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x343134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343138: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34313c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343140: 0xa451003c  sh          $s1, 0x3C($v0)
    ctx->pc = 0x343140u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 17));
    // 0x343144: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x343144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x343148: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34314c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x343150: 0xa4a60068  sh          $a2, 0x68($a1)
    ctx->pc = 0x343150u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 104), (uint16_t)GPR_U32(ctx, 6));
    // 0x343154: 0xc067694  jal         func_19DA50
    ctx->pc = 0x343154u;
    SET_GPR_U32(ctx, 31, 0x34315Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x343154u, 0x34315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34315Cu;
label_34315c:
    // 0x34315c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x34315cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343160: 0x30b10007  andi        $s1, $a1, 0x7
    ctx->pc = 0x343160u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x343164: 0x2622001e  addiu       $v0, $s1, 0x1E
    ctx->pc = 0x343164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
    // 0x343168: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x343168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34316c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34316cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x343170: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343174: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x343174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x343178: 0xa4a2006a  sh          $v0, 0x6A($a1)
    ctx->pc = 0x343178u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x34317c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34317Cu;
    SET_GPR_U32(ctx, 31, 0x343184u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34317Cu, 0x343184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343184u;
label_343184:
    // 0x343184: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x343184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343188: 0x30710007  andi        $s1, $v1, 0x7
    ctx->pc = 0x343188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x34318c: 0x2622000f  addiu       $v0, $s1, 0xF
    ctx->pc = 0x34318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x343190: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x343190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x343194: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x343194u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x343198: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34319c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3431a0: 0xa464006c  sh          $a0, 0x6C($v1)
    ctx->pc = 0x3431a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 4));
    // 0x3431a4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3431a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3431a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3431a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3431ac: 0xa0400071  sb          $zero, 0x71($v0)
    ctx->pc = 0x3431acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x3431b0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3431b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3431b4: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3431b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3431b8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3431b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3431bc: 0xa0440070  sb          $a0, 0x70($v0)
    ctx->pc = 0x3431bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x3431c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3431c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3431c4: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3431c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3431c8: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x3431c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3431cc: 0xa082006e  sb          $v0, 0x6E($a0)
    ctx->pc = 0x3431ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x3431d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3431d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3431d4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3431d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3431d8: 0x24511330  addiu       $s1, $v0, 0x1330
    ctx->pc = 0x3431d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3431dc: 0xa2230073  sb          $v1, 0x73($s1)
    ctx->pc = 0x3431dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x3431e0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3431e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3431e4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3431e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3431e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3431e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3431ec: 0xa0430078  sb          $v1, 0x78($v0)
    ctx->pc = 0x3431ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x3431f0: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x3431f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x3431f4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3431f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3431f8: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x3431f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3431fc: 0xa4a3008c  sh          $v1, 0x8C($a1)
    ctx->pc = 0x3431fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 140), (uint16_t)GPR_U32(ctx, 3));
    // 0x343200: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x343200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343204: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343208: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x343208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34320c: 0xa064008e  sb          $a0, 0x8E($v1)
    ctx->pc = 0x34320cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 4));
    // 0x343210: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x343210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343214: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343218: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x343218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34321c: 0xa0a200b8  sb          $v0, 0xB8($a1)
    ctx->pc = 0x34321cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x343220: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343224: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x343224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343228: 0xa0c000c5  sb          $zero, 0xC5($a2)
    ctx->pc = 0x343228u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 197), (uint8_t)GPR_U32(ctx, 0));
    // 0x34322c: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x34322cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343230: 0x26281330  addiu       $t0, $s1, 0x1330
    ctx->pc = 0x343230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x343234: 0xa10000c6  sb          $zero, 0xC6($t0)
    ctx->pc = 0x343234u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 198), (uint8_t)GPR_U32(ctx, 0));
    // 0x343238: 0x8fa90158  lw          $t1, 0x158($sp)
    ctx->pc = 0x343238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34323c: 0x25221330  addiu       $v0, $t1, 0x1330
    ctx->pc = 0x34323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4912));
    // 0x343240: 0xa04000c7  sb          $zero, 0xC7($v0)
    ctx->pc = 0x343240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 199), (uint8_t)GPR_U32(ctx, 0));
    // 0x343244: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343248: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x343248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34324c: 0xa08000c8  sb          $zero, 0xC8($a0)
    ctx->pc = 0x34324cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x343250: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343254: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x343254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343258: 0xa06000c9  sb          $zero, 0xC9($v1)
    ctx->pc = 0x343258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 201), (uint8_t)GPR_U32(ctx, 0));
    // 0x34325c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x34325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343260: 0x8c4602d0  lw          $a2, 0x2D0($v0)
    ctx->pc = 0x343260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x343264: 0x24d007d0  addiu       $s0, $a2, 0x7D0
    ctx->pc = 0x343264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 2000));
    // 0x343268: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x343268u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x34326c: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x34326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x343270: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x343270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x343274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x343274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343278: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x343278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34327c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x34327cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x343280: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x343280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x343284: 0x34510fdb  ori         $s1, $v0, 0xFDB
    ctx->pc = 0x343284u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x343288: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x343288u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34328c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x34328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x343290: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x343290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x343294: 0x3c043c8e  lui         $a0, 0x3C8E
    ctx->pc = 0x343294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15502 << 16));
    // 0x343298: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x343298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x34329c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34329cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3432a0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3432a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3432a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3432a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3432a8: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x3432a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x3432ac: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x3432acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x3432b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3432b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3432b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3432b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3432b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3432b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3432bc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3432bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3432c0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x3432c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3432c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3432c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3432c8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3432c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3432cc: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x3432ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x3432d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3432d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3432d4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3432d8: 0x24430130  addiu       $v1, $v0, 0x130
    ctx->pc = 0x3432d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x3432dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3432e0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x3432e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x3432e4: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x3432e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3432e8: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x3432e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x3432ec: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3432ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3432f0: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x3432f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3432f4: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x3432f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3432f8: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x3432f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x3432fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3432fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343300: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x343300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x343304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x343304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x343308: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x343308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x34330c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x34330cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x343310: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x343310u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343314: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x343314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x343318: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x343318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34331c: 0x3c053c8e  lui         $a1, 0x3C8E
    ctx->pc = 0x34331cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15502 << 16));
    // 0x343320: 0x34a2fa35  ori         $v0, $a1, 0xFA35
    ctx->pc = 0x343320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64053);
    // 0x343324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x343324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343328: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x343328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34332c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x34332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x343330: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x343330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x343334: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x343334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x343338: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x343338u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34333c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x343340: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x343340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x343344: 0x3c083c8e  lui         $t0, 0x3C8E
    ctx->pc = 0x343344u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15502 << 16));
    // 0x343348: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x343348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
    // 0x34334c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34334cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343350: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x343350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x343354: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x343354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x343358: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x343358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34335c: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x34335cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x343360: 0x24c50130  addiu       $a1, $a2, 0x130
    ctx->pc = 0x343360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x343364: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x343364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x343368: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x343368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x34336c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x34336cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343370: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x343370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x343374: 0x24500190  addiu       $s0, $v0, 0x190
    ctx->pc = 0x343374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x343378: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x343378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x34337c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x34337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x343380: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x343380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x343384: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343388: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x343388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34338c: 0x26030320  addiu       $v1, $s0, 0x320
    ctx->pc = 0x34338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x343390: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x343390u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x343394: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x343394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x343398: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x343398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x34339c: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x34339cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x3433a0: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3433a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3433a4: 0x8ca202d0  lw          $v0, 0x2D0($a1)
    ctx->pc = 0x3433a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3433a8: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x3433a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x3433ac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3433acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3433b0: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x3433b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3433b4: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x3433b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3433b8: 0xa6050140  sh          $a1, 0x140($s0)
    ctx->pc = 0x3433b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3433bc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3433bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3433c0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3433c4: 0x24510640  addiu       $s1, $v0, 0x640
    ctx->pc = 0x3433c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x3433c8: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x3433c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3433cc: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x3433ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3433d0: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x3433d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3433d4: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x3433d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x3433d8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3433d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3433dc: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x3433dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3433e0: 0x24502bc0  addiu       $s0, $v0, 0x2BC0
    ctx->pc = 0x3433e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11200));
    // 0x3433e4: 0x96060140  lhu         $a2, 0x140($s0)
    ctx->pc = 0x3433e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3433e8: 0x34c40002  ori         $a0, $a2, 0x2
    ctx->pc = 0x3433e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x3433ec: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x3433ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x3433f0: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3433f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3433f4: 0x8ca202d0  lw          $v0, 0x2D0($a1)
    ctx->pc = 0x3433f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3433f8: 0x24422ee0  addiu       $v0, $v0, 0x2EE0
    ctx->pc = 0x3433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
    // 0x3433fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3433fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343400: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x343400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x343404: 0x34450002  ori         $a1, $v0, 0x2
    ctx->pc = 0x343404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x343408: 0xa6050140  sh          $a1, 0x140($s0)
    ctx->pc = 0x343408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x34340c: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x34340cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343410: 0x8cc202d0  lw          $v0, 0x2D0($a2)
    ctx->pc = 0x343410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x343414: 0x24503200  addiu       $s0, $v0, 0x3200
    ctx->pc = 0x343414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12800));
    // 0x343418: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x343418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x34341c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x34341cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x343420: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x343420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x343424: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343428: 0x24a210b0  addiu       $v0, $a1, 0x10B0
    ctx->pc = 0x343428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
    // 0x34342c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x34342cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x343430: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x343430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x343434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x343434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343438: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x343438u;
    SET_GPR_U32(ctx, 31, 0x343440u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x343438u, 0x343440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343440u;
label_343440:
    // 0x343440: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x343440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x343444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x343444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343448: 0x8fb00130  lw          $s0, 0x130($sp)
    ctx->pc = 0x343448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34344c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x34344cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x343450: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x343450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x343454: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x343454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x343458: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x343458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x34345c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34345cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343460: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x343460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x343464: 0xe4e000d8  swc1        $f0, 0xD8($a3)
    ctx->pc = 0x343464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 216), bits); }
    // 0x343468: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34346c: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x34346cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x343470: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x343470u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x343474: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x343474u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x343478: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x343478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34347c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x34347cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x343480: 0x8faa0158  lw          $t2, 0x158($sp)
    ctx->pc = 0x343480u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343484: 0x254200d0  addiu       $v0, $t2, 0xD0
    ctx->pc = 0x343484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 208));
    // 0x343488: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x343488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34348c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34348cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x343490: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x343490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x343494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x343494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343498: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x343498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34349c: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x34349cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x3434a0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x3434a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x3434a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3434a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3434a8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3434a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3434ac: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3434acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3434b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3434b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3434b4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x3434b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3434b8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3434b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x3434bc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3434bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3434c0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3434c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3434c4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3434c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3434c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3434c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x3434cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3434ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3434d0: 0x2443a280  addiu       $v1, $v0, -0x5D80
    ctx->pc = 0x3434d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x3434d4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3434d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3434d8: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x3434d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x3434dc: 0x3c03e000  lui         $v1, 0xE000
    ctx->pc = 0x3434dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57344 << 16));
    // 0x3434e0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3434e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3434e4: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x3434e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x3434e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3434e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3434ec: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3434ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3434f0: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x3434f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x3434f4: 0x3c04466a  lui         $a0, 0x466A
    ctx->pc = 0x3434f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18026 << 16));
    // 0x3434f8: 0x34826000  ori         $v0, $a0, 0x6000
    ctx->pc = 0x3434f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x3434fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3434fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343500: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343504: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x343504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x343508: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34350c: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x34350cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x343510: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343514: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x343514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x343518: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x343518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34351c: 0xa4e0127c  sh          $zero, 0x127C($a3)
    ctx->pc = 0x34351cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x343520: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343524: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x343524u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x343528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x343528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34352c: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x34352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343530: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x343530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x343534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x343534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343538: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34353c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x34353cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x343540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x343540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343544: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343548: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x343548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34354c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x34354cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x343550: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x343550u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343554: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343558: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x343558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x34355c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34355cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x343560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x343560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343564: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343568: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x343568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x34356c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x34356cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x343570: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x343570u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343574: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x343574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343578: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x343578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
    // 0x34357c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x34357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x343580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x343580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x343584: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x343584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x343588: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x343588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34358c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x34358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343590: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x343590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x343594: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x343594u;
    SET_GPR_U32(ctx, 31, 0x34359Cu);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x343594u, 0x34359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34359Cu;
label_34359c:
    // 0x34359c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34359cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3435a0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3435a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3435a4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3435a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3435a8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3435A8u;
    SET_GPR_U32(ctx, 31, 0x3435B0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3435A8u, 0x3435B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435B0u;
label_3435b0:
    // 0x3435b0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x3435b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3435b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3435b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3435b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3435B8u;
    SET_GPR_U32(ctx, 31, 0x3435C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3435B8u, 0x3435C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435C0u;
label_3435c0:
    // 0x3435c0: 0x3c09c120  lui         $t1, 0xC120
    ctx->pc = 0x3435c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49440 << 16));
    // 0x3435c4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3435c4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435c8: 0x0  nop
    ctx->pc = 0x3435c8u;
    // NOP
    // 0x3435cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3435ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3435d0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3435d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3435d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3435d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435d8: 0x0  nop
    ctx->pc = 0x3435d8u;
    // NOP
    // 0x3435dc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3435dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3435e0: 0x3c0a4348  lui         $t2, 0x4348
    ctx->pc = 0x3435e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17224 << 16));
    // 0x3435e4: 0x448a6000  mtc1        $t2, $f12
    ctx->pc = 0x3435e4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3435e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3435e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3435ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3435ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3435f0: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x3435f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3435f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3435f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3435f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3435f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3435fc: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x3435fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343600: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x343600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x343604: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x343604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x343608: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x343608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34360c: 0xc0d5cc8  jal         func_357320
    ctx->pc = 0x34360Cu;
    SET_GPR_U32(ctx, 31, 0x343614u);
    ctx->pc = 0x357320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357320u, 0x34360Cu, 0x343614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343614u;
label_343614:
    // 0x343614: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343618: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x343618u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x34361c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x34361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x343620: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x343620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x343624: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x343624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343628: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x343628u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34362c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x34362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343630: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x343630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343634: 0xfc830040  sd          $v1, 0x40($a0)
    ctx->pc = 0x343634u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 3));
    // 0x343638: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34363c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x34363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x343640: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x343640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x343644: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x343644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x343648: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x343648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x34364c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x34364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343650: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x343650u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x343654: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343658: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x343658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34365c: 0xfc620048  sd          $v0, 0x48($v1)
    ctx->pc = 0x34365cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 2));
    // 0x343660: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343664: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x343664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x343668: 0x24510240  addiu       $s1, $v0, 0x240
    ctx->pc = 0x343668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x34366c: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x34366cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x343670: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x343670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x343674: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x343674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343678: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x343678u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34367c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x34367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343680: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x343680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343684: 0xfc650050  sd          $a1, 0x50($v1)
    ctx->pc = 0x343684u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 5));
    // 0x343688: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34368c: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x34368cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x343690: 0x24b102d0  addiu       $s1, $a1, 0x2D0
    ctx->pc = 0x343690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    // 0x343694: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x343694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x343698: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x343698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x34369c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x34369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3436a0: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x3436a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3436a4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x3436a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3436a8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3436a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3436ac: 0xfca60058  sd          $a2, 0x58($a1)
    ctx->pc = 0x3436acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 6));
    // 0x3436b0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3436b4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x3436b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3436b8: 0x24b10360  addiu       $s1, $a1, 0x360
    ctx->pc = 0x3436b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
    // 0x3436bc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3436c0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x3436c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x3436c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3436c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3436c8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x3436c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3436cc: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3436ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3436d0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x3436d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3436d4: 0xfc430060  sd          $v1, 0x60($v0)
    ctx->pc = 0x3436d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 3));
    // 0x3436d8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3436d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3436dc: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x3436dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3436e0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3436e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3436e4: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x3436e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x3436e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3436e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3436ec: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3436ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3436f0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3436f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3436f4: 0x3c022001  lui         $v0, 0x2001
    ctx->pc = 0x3436f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8193 << 16));
    // 0x3436f8: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x3436f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x3436fc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3436fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343700: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x343700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343704: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x343704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x343708: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x343708u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x34370c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x34370cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343710: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x343710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343714: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343714u;
    SET_GPR_U32(ctx, 31, 0x34371Cu);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343714u, 0x34371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34371Cu;
label_34371c:
    // 0x34371c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x34371cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x343720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343724: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343724u;
    SET_GPR_U32(ctx, 31, 0x34372Cu);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343724u, 0x34372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34372Cu;
label_34372c:
    // 0x34372c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34372cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343730: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343734: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x343734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x343738: 0x24510240  addiu       $s1, $v0, 0x240
    ctx->pc = 0x343738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x34373c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x34373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x343740: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x343740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x343744: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x343744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x343748: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x343748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34374c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34374cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343750: 0x3c052001  lui         $a1, 0x2001
    ctx->pc = 0x343750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8193 << 16));
    // 0x343754: 0x34a21400  ori         $v0, $a1, 0x1400
    ctx->pc = 0x343754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5120);
    // 0x343758: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x343758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34375c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x34375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343760: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x343760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x343764: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x343764u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x343768: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x343768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x34376c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34376cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343770: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343770u;
    SET_GPR_U32(ctx, 31, 0x343778u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343770u, 0x343778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343778u;
label_343778:
    // 0x343778: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x343778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x34377c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34377cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343780: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343780u;
    SET_GPR_U32(ctx, 31, 0x343788u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343780u, 0x343788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343788u;
label_343788:
    // 0x343788: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x343788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34378c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x34378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343790: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x343790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x343794: 0x24d102d0  addiu       $s1, $a2, 0x2D0
    ctx->pc = 0x343794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 720));
    // 0x343798: 0x8e280034  lw          $t0, 0x34($s1)
    ctx->pc = 0x343798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x34379c: 0xafa80138  sw          $t0, 0x138($sp)
    ctx->pc = 0x34379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 8));
    // 0x3437a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3437a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3437a4: 0x34490006  ori         $t1, $v0, 0x6
    ctx->pc = 0x3437a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3437a8: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x3437a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3437ac: 0x3c022001  lui         $v0, 0x2001
    ctx->pc = 0x3437acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8193 << 16));
    // 0x3437b0: 0x34441400  ori         $a0, $v0, 0x1400
    ctx->pc = 0x3437b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x3437b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3437b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3437b8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3437b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3437bc: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x3437bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3437c0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x3437c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x3437c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3437c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3437c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3437c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3437cc: 0xc0958e0  jal         func_256380
    ctx->pc = 0x3437CCu;
    SET_GPR_U32(ctx, 31, 0x3437D4u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x3437CCu, 0x3437D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437D4u;
label_3437d4:
    // 0x3437d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3437d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3437d8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3437d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3437dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3437dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3437e0: 0xc0958e0  jal         func_256380
    ctx->pc = 0x3437E0u;
    SET_GPR_U32(ctx, 31, 0x3437E8u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x3437E0u, 0x3437E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437E8u;
label_3437e8:
    // 0x3437e8: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3437ec: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x3437ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3437f0: 0x24d10360  addiu       $s1, $a2, 0x360
    ctx->pc = 0x3437f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 864));
    // 0x3437f4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3437f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3437f8: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x3437f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x3437fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x343800: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x343800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x343804: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x343804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343808: 0x3c022001  lui         $v0, 0x2001
    ctx->pc = 0x343808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8193 << 16));
    // 0x34380c: 0x34431400  ori         $v1, $v0, 0x1400
    ctx->pc = 0x34380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x343810: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x343810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x343814: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x343814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343818: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x343818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34381c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x34381cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x343820: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x343820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x343824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343828: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343828u;
    SET_GPR_U32(ctx, 31, 0x343830u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343828u, 0x343830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343830u;
label_343830:
    // 0x343830: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x343830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x343834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343838: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343838u;
    SET_GPR_U32(ctx, 31, 0x343840u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343838u, 0x343840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343840u;
label_343840:
    // 0x343840: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343844: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x343844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x343848: 0x245103f0  addiu       $s1, $v0, 0x3F0
    ctx->pc = 0x343848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x34384c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x34384cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x343850: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x343850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x343854: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x343854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x343858: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x343858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34385c: 0x34500006  ori         $s0, $v0, 0x6
    ctx->pc = 0x34385cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x343860: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x343860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x343864: 0x3c022001  lui         $v0, 0x2001
    ctx->pc = 0x343864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8193 << 16));
    // 0x343868: 0x34431400  ori         $v1, $v0, 0x1400
    ctx->pc = 0x343868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x34386c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x34386cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x343870: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x343870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343874: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x343874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x343878: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x343878u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x34387c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x34387cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x343880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343884: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343884u;
    SET_GPR_U32(ctx, 31, 0x34388Cu);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343884u, 0x34388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34388Cu;
label_34388c:
    // 0x34388c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x34388cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x343890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343894: 0xc0958e0  jal         func_256380
    ctx->pc = 0x343894u;
    SET_GPR_U32(ctx, 31, 0x34389Cu);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x343894u, 0x34389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34389Cu;
label_34389c:
    // 0x34389c: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x34389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3438a0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3438a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3438a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3438a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3438a8: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x3438a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x3438ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3438acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3438b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3438b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3438b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3438b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3438b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3438B8u;
    SET_GPR_U32(ctx, 31, 0x3438C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3438B8u, 0x3438C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438C0u;
label_3438c0:
    // 0x3438c0: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x3438c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3438c4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3438c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3438c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3438c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3438cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3438CCu;
    SET_GPR_U32(ctx, 31, 0x3438D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3438CCu, 0x3438D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438D4u;
label_3438d4:
    // 0x3438d4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x3438d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3438d8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3438D8u;
    SET_GPR_U32(ctx, 31, 0x3438E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3438D8u, 0x3438E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438E0u;
label_3438e0:
    // 0x3438e0: 0x8fb00158  lw          $s0, 0x158($sp)
    ctx->pc = 0x3438e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3438e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3438e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3438e8: 0xc0d494c  jal         func_352530
    ctx->pc = 0x3438E8u;
    SET_GPR_U32(ctx, 31, 0x3438F0u);
    ctx->pc = 0x352530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352530u, 0x3438E8u, 0x3438F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438F0u;
label_3438f0:
    // 0x3438f0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3438f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3438f4: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x3438f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x3438f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3438f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3438fc: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x3438fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x343900: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x343900u;
    {
        const bool branch_taken_0x343900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343900) {
            ctx->pc = 0x343930u;
            goto label_343930;
        }
    }
    ctx->pc = 0x343908u;
    // 0x343908: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34390c: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x34390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x343910: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x343910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x343914: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x343914u;
    SET_GPR_U32(ctx, 31, 0x34391Cu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x343914u, 0x34391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34391Cu;
label_34391c:
    // 0x34391c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x34391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343920: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x343920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x343924: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x343924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x343928: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x343928u;
    SET_GPR_U32(ctx, 31, 0x343930u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x343928u, 0x343930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343930u;
label_343930:
    // 0x343930: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343934: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x343934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x343938: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x34393c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x34393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x343940: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343944: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343948: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x343948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x34394c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34394cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343950: 0x32060080  andi        $a2, $s0, 0x80
    ctx->pc = 0x343950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x343954: 0x24840244  addiu       $a0, $a0, 0x244
    ctx->pc = 0x343954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 580));
    // 0x343958: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x343958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x34395c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x34395Cu;
    SET_GPR_U32(ctx, 31, 0x343964u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x34395Cu, 0x343964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343964u;
label_343964:
    // 0x343964: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x343964u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343968: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34396c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x343970: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x343970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x343974: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x343974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x343978: 0xdc460040  ld          $a2, 0x40($v0)
    ctx->pc = 0x343978u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34397c: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x34397Cu;
    SET_GPR_U32(ctx, 31, 0x343984u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x34397Cu, 0x343984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343984u;
label_343984:
    // 0x343984: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x343984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x343988: 0x345000a0  ori         $s0, $v0, 0xA0
    ctx->pc = 0x343988u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x34398c: 0xfe500020  sd          $s0, 0x20($s2)
    ctx->pc = 0x34398cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 16));
    // 0x343990: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x343990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343994: 0xfe440060  sd          $a0, 0x60($s2)
    ctx->pc = 0x343994u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 4));
    // 0x343998: 0xfe4000a0  sd          $zero, 0xA0($s2)
    ctx->pc = 0x343998u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 0));
    // 0x34399c: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x34399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x3439a0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3439a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3439a4: 0x24040ff0  addiu       $a0, $zero, 0xFF0
    ctx->pc = 0x3439a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x3439a8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3439a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3439ac: 0xfe4200d0  sd          $v0, 0xD0($s2)
    ctx->pc = 0x3439acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 208), GPR_U64(ctx, 2));
    // 0x3439b0: 0x340288f0  ori         $v0, $zero, 0x88F0
    ctx->pc = 0x3439b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x3439b4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3439b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3439b8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0
    ctx->pc = 0x3439b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x3439bc: 0x902825  or          $a1, $a0, $s0
    ctx->pc = 0x3439bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x3439c0: 0xfe4500f0  sd          $a1, 0xF0($s2)
    ctx->pc = 0x3439c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 240), GPR_U64(ctx, 5));
    // 0x3439c4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3439c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3439c8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3439c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3439cc: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x3439ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3439d0: 0x1024825  or          $t1, $t0, $v0
    ctx->pc = 0x3439d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3439d4: 0xfe490050  sd          $t1, 0x50($s2)
    ctx->pc = 0x3439d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 9));
    // 0x3439d8: 0x3c0af1ab  lui         $t2, 0xF1AB
    ctx->pc = 0x3439d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)61867 << 16));
    // 0x3439dc: 0x35424000  ori         $v0, $t2, 0x4000
    ctx->pc = 0x3439dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x3439e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3439e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3439e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3439e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3439e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3439e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3439ec: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3439ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x3439f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3439f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3439f4: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x3439f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x3439f8: 0xfe420170  sd          $v0, 0x170($s2)
    ctx->pc = 0x3439f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 2));
    // 0x3439fc: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x3439fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343a00: 0xfe4201b0  sd          $v0, 0x1B0($s2)
    ctx->pc = 0x343a00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 432), GPR_U64(ctx, 2));
    // 0x343a04: 0xfe4001f0  sd          $zero, 0x1F0($s2)
    ctx->pc = 0x343a04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 496), GPR_U64(ctx, 0));
    // 0x343a08: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x343a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343a0c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343a10: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x343a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343a14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x343a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343a18: 0xfe420220  sd          $v0, 0x220($s2)
    ctx->pc = 0x343a18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 544), GPR_U64(ctx, 2));
    // 0x343a1c: 0x340288f0  ori         $v0, $zero, 0x88F0
    ctx->pc = 0x343a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343a20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343a24: 0x24027ff0  addiu       $v0, $zero, 0x7FF0
    ctx->pc = 0x343a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343a28: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x343a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343a2c: 0xfe430240  sd          $v1, 0x240($s2)
    ctx->pc = 0x343a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 576), GPR_U64(ctx, 3));
    // 0x343a30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x343a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x343a34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343a38: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343a3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343a40: 0xfe4201a0  sd          $v0, 0x1A0($s2)
    ctx->pc = 0x343a40u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 416), GPR_U64(ctx, 2));
    // 0x343a44: 0x3c02f1ab  lui         $v0, 0xF1AB
    ctx->pc = 0x343a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61867 << 16));
    // 0x343a48: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x343a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x343a4c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x343a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343a54: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x343a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343a58: 0xfe470150  sd          $a3, 0x150($s2)
    ctx->pc = 0x343a58u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 336), GPR_U64(ctx, 7));
    // 0x343a5c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343a60: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x343a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343a64: 0x90c21308  lbu         $v0, 0x1308($a2)
    ctx->pc = 0x343a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4872)));
    // 0x343a68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x343a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343a6c: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x343a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x343a70: 0x2484024c  addiu       $a0, $a0, 0x24C
    ctx->pc = 0x343a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 588));
    // 0x343a74: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x343a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x343a78: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x343A78u;
    SET_GPR_U32(ctx, 31, 0x343A80u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x343A78u, 0x343A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A80u;
label_343a80:
    // 0x343a80: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x343a80u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343a84: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343a88: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x343a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x343a8c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x343a8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x343a90: 0x26650150  addiu       $a1, $s3, 0x150
    ctx->pc = 0x343a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x343a94: 0xdc460048  ld          $a2, 0x48($v0)
    ctx->pc = 0x343a94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x343a98: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x343A98u;
    SET_GPR_U32(ctx, 31, 0x343AA0u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x343A98u, 0x343AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343AA0u;
label_343aa0:
    // 0x343aa0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x343aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x343aa4: 0x348200a0  ori         $v0, $a0, 0xA0
    ctx->pc = 0x343aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x343aa8: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x343aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x343aac: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x343aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343ab0: 0xfe650060  sd          $a1, 0x60($s3)
    ctx->pc = 0x343ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 5));
    // 0x343ab4: 0xfe6000a0  sd          $zero, 0xA0($s3)
    ctx->pc = 0x343ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 160), GPR_U64(ctx, 0));
    // 0x343ab8: 0x24040ff0  addiu       $a0, $zero, 0xFF0
    ctx->pc = 0x343ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343abc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x343abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343ac0: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x343ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343ac4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x343ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x343ac8: 0xfe6200d0  sd          $v0, 0xD0($s3)
    ctx->pc = 0x343ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 208), GPR_U64(ctx, 2));
    // 0x343acc: 0x340288f0  ori         $v0, $zero, 0x88F0
    ctx->pc = 0x343accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343ad0: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x343ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343ad4: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x343ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343ad8: 0x695025  or          $t2, $v1, $t1
    ctx->pc = 0x343ad8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x343adc: 0xfe6a00f0  sd          $t2, 0xF0($s3)
    ctx->pc = 0x343adcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 10));
    // 0x343ae0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x343ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343ae4: 0xfe620050  sd          $v0, 0x50($s3)
    ctx->pc = 0x343ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 2));
    // 0x343ae8: 0x3c05f1ab  lui         $a1, 0xF1AB
    ctx->pc = 0x343ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61867 << 16));
    // 0x343aec: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x343aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x343af0: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x343af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343af4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x343af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343af8: 0xe64025  or          $t0, $a3, $a2
    ctx->pc = 0x343af8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x343afc: 0xfe680000  sd          $t0, 0x0($s3)
    ctx->pc = 0x343afcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 8));
    // 0x343b00: 0x3c0a0004  lui         $t2, 0x4
    ctx->pc = 0x343b00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4 << 16));
    // 0x343b04: 0x354900a0  ori         $t1, $t2, 0xA0
    ctx->pc = 0x343b04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)160);
    // 0x343b08: 0xfe690170  sd          $t1, 0x170($s3)
    ctx->pc = 0x343b08u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 368), GPR_U64(ctx, 9));
    // 0x343b0c: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x343b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343b10: 0xfe6201b0  sd          $v0, 0x1B0($s3)
    ctx->pc = 0x343b10u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 432), GPR_U64(ctx, 2));
    // 0x343b14: 0xfe6001f0  sd          $zero, 0x1F0($s3)
    ctx->pc = 0x343b14u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 496), GPR_U64(ctx, 0));
    // 0x343b18: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x343b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343b1c: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x343b1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343b20: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x343b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343b24: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x343b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x343b28: 0xfe640220  sd          $a0, 0x220($s3)
    ctx->pc = 0x343b28u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 544), GPR_U64(ctx, 4));
    // 0x343b2c: 0x340388f0  ori         $v1, $zero, 0x88F0
    ctx->pc = 0x343b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343b30: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343b34: 0x24047ff0  addiu       $a0, $zero, 0x7FF0
    ctx->pc = 0x343b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343b38: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x343b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x343b3c: 0xfe630240  sd          $v1, 0x240($s3)
    ctx->pc = 0x343b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 576), GPR_U64(ctx, 3));
    // 0x343b40: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x343b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343b44: 0xfe6201a0  sd          $v0, 0x1A0($s3)
    ctx->pc = 0x343b44u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 416), GPR_U64(ctx, 2));
    // 0x343b48: 0x3c02f1ab  lui         $v0, 0xF1AB
    ctx->pc = 0x343b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61867 << 16));
    // 0x343b4c: 0x34514000  ori         $s1, $v0, 0x4000
    ctx->pc = 0x343b4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x343b50: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x343b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x343b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343b58: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x343b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343b5c: 0xfe640150  sd          $a0, 0x150($s3)
    ctx->pc = 0x343b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 4));
    // 0x343b60: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343b64: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343b68: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x343b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x343b6c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x343b6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343b70: 0x32260080  andi        $a2, $s1, 0x80
    ctx->pc = 0x343b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x343b74: 0x24640254  addiu       $a0, $v1, 0x254
    ctx->pc = 0x343b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
    // 0x343b78: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x343b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x343b7c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x343B7Cu;
    SET_GPR_U32(ctx, 31, 0x343B84u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x343B7Cu, 0x343B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B84u;
label_343b84:
    // 0x343b84: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x343b84u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343b88: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343b8c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x343b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x343b90: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x343b90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x343b94: 0x26850150  addiu       $a1, $s4, 0x150
    ctx->pc = 0x343b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x343b98: 0xdc510050  ld          $s1, 0x50($v0)
    ctx->pc = 0x343b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x343b9c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x343b9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x343ba0: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x343BA0u;
    SET_GPR_U32(ctx, 31, 0x343BA8u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x343BA0u, 0x343BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BA8u;
label_343ba8:
    // 0x343ba8: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x343ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x343bac: 0x34c200a0  ori         $v0, $a2, 0xA0
    ctx->pc = 0x343bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x343bb0: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x343bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x343bb4: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x343bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343bb8: 0xfe840060  sd          $a0, 0x60($s4)
    ctx->pc = 0x343bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 4));
    // 0x343bbc: 0xfe8000a0  sd          $zero, 0xA0($s4)
    ctx->pc = 0x343bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 160), GPR_U64(ctx, 0));
    // 0x343bc0: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x343bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343bc4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x343bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x343bc8: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x343bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343bcc: 0xa28825  or          $s1, $a1, $v0
    ctx->pc = 0x343bccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x343bd0: 0xfe9100d0  sd          $s1, 0xD0($s4)
    ctx->pc = 0x343bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 17));
    // 0x343bd4: 0x340288f0  ori         $v0, $zero, 0x88F0
    ctx->pc = 0x343bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343bd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343bdc: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x343bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343be0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x343be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343be4: 0xfe8500f0  sd          $a1, 0xF0($s4)
    ctx->pc = 0x343be4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 240), GPR_U64(ctx, 5));
    // 0x343be8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x343be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343bec: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x343becu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
    // 0x343bf0: 0x3c11f1ab  lui         $s1, 0xF1AB
    ctx->pc = 0x343bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61867 << 16));
    // 0x343bf4: 0x36234000  ori         $v1, $s1, 0x4000
    ctx->pc = 0x343bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x343bf8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343bfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c00: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x343c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x343c04: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x343c04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x343c08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x343c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x343c0c: 0x344300a0  ori         $v1, $v0, 0xA0
    ctx->pc = 0x343c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x343c10: 0xfe830170  sd          $v1, 0x170($s4)
    ctx->pc = 0x343c10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 368), GPR_U64(ctx, 3));
    // 0x343c14: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x343c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343c18: 0xfe8201b0  sd          $v0, 0x1B0($s4)
    ctx->pc = 0x343c18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 432), GPR_U64(ctx, 2));
    // 0x343c1c: 0xfe8001f0  sd          $zero, 0x1F0($s4)
    ctx->pc = 0x343c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 496), GPR_U64(ctx, 0));
    // 0x343c20: 0x24040ff0  addiu       $a0, $zero, 0xFF0
    ctx->pc = 0x343c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343c24: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x343c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343c28: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x343c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343c30: 0xfe820220  sd          $v0, 0x220($s4)
    ctx->pc = 0x343c30u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 544), GPR_U64(ctx, 2));
    // 0x343c34: 0x340588f0  ori         $a1, $zero, 0x88F0
    ctx->pc = 0x343c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343c38: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x343c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x343c3c: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x343c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343c40: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x343c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x343c44: 0xfe820240  sd          $v0, 0x240($s4)
    ctx->pc = 0x343c44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 576), GPR_U64(ctx, 2));
    // 0x343c48: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x343c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343c4c: 0xfe9101a0  sd          $s1, 0x1A0($s4)
    ctx->pc = 0x343c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 416), GPR_U64(ctx, 17));
    // 0x343c50: 0x3c02f1ab  lui         $v0, 0xF1AB
    ctx->pc = 0x343c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61867 << 16));
    // 0x343c54: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x343c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x343c58: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x343c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343c64: 0xfe820150  sd          $v0, 0x150($s4)
    ctx->pc = 0x343c64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 336), GPR_U64(ctx, 2));
    // 0x343c68: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x343c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343c6c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343c70: 0x90821308  lbu         $v0, 0x1308($a0)
    ctx->pc = 0x343c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x343c74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x343c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343c78: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x343c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x343c7c: 0x24a5025c  addiu       $a1, $a1, 0x25C
    ctx->pc = 0x343c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 604));
    // 0x343c80: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x343c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x343c84: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x343c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x343c88: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x343c88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343c8c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x343C8Cu;
    SET_GPR_U32(ctx, 31, 0x343C94u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x343C8Cu, 0x343C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C94u;
label_343c94:
    // 0x343c94: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x343c94u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343c98: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x343c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343c9c: 0x24d11330  addiu       $s1, $a2, 0x1330
    ctx->pc = 0x343c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x343ca0: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x343ca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x343ca4: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x343ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x343ca8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x343ca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x343cac: 0xde290058  ld          $t1, 0x58($s1)
    ctx->pc = 0x343cacu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x343cb0: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x343cb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x343cb4: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x343CB4u;
    SET_GPR_U32(ctx, 31, 0x343CBCu);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x343CB4u, 0x343CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CBCu;
label_343cbc:
    // 0x343cbc: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x343cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x343cc0: 0x348300a0  ori         $v1, $a0, 0xA0
    ctx->pc = 0x343cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x343cc4: 0xfea30020  sd          $v1, 0x20($s5)
    ctx->pc = 0x343cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 3));
    // 0x343cc8: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x343cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343ccc: 0xfea20060  sd          $v0, 0x60($s5)
    ctx->pc = 0x343cccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 96), GPR_U64(ctx, 2));
    // 0x343cd0: 0xfea000a0  sd          $zero, 0xA0($s5)
    ctx->pc = 0x343cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 160), GPR_U64(ctx, 0));
    // 0x343cd4: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x343cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343cd8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343cdc: 0x24060ff0  addiu       $a2, $zero, 0xFF0
    ctx->pc = 0x343cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343ce0: 0xc28025  or          $s0, $a2, $v0
    ctx->pc = 0x343ce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x343ce4: 0xfeb000d0  sd          $s0, 0xD0($s5)
    ctx->pc = 0x343ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 208), GPR_U64(ctx, 16));
    // 0x343ce8: 0x340588f0  ori         $a1, $zero, 0x88F0
    ctx->pc = 0x343ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343cec: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x343cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x343cf0: 0x24057ff0  addiu       $a1, $zero, 0x7FF0
    ctx->pc = 0x343cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343cf4: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x343cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x343cf8: 0xfea600f0  sd          $a2, 0xF0($s5)
    ctx->pc = 0x343cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 240), GPR_U64(ctx, 6));
    // 0x343cfc: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x343cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343d00: 0xfeb10050  sd          $s1, 0x50($s5)
    ctx->pc = 0x343d00u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 17));
    // 0x343d04: 0x3c02f1ab  lui         $v0, 0xF1AB
    ctx->pc = 0x343d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61867 << 16));
    // 0x343d08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x343d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x343d0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343d14: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x343d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x343d18: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x343d18u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x343d1c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x343d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x343d20: 0x348200a0  ori         $v0, $a0, 0xA0
    ctx->pc = 0x343d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x343d24: 0xfea20170  sd          $v0, 0x170($s5)
    ctx->pc = 0x343d24u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 368), GPR_U64(ctx, 2));
    // 0x343d28: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x343d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343d2c: 0xfea201b0  sd          $v0, 0x1B0($s5)
    ctx->pc = 0x343d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 432), GPR_U64(ctx, 2));
    // 0x343d30: 0xfea001f0  sd          $zero, 0x1F0($s5)
    ctx->pc = 0x343d30u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 496), GPR_U64(ctx, 0));
    // 0x343d34: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x343d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343d38: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343d3c: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x343d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343d40: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x343d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x343d44: 0xfea20220  sd          $v0, 0x220($s5)
    ctx->pc = 0x343d44u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 544), GPR_U64(ctx, 2));
    // 0x343d48: 0x340388f0  ori         $v1, $zero, 0x88F0
    ctx->pc = 0x343d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343d4c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343d50: 0x24117ff0  addiu       $s1, $zero, 0x7FF0
    ctx->pc = 0x343d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343d54: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x343d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x343d58: 0xfea20240  sd          $v0, 0x240($s5)
    ctx->pc = 0x343d58u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 576), GPR_U64(ctx, 2));
    // 0x343d5c: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x343d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343d60: 0xfeb001a0  sd          $s0, 0x1A0($s5)
    ctx->pc = 0x343d60u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 416), GPR_U64(ctx, 16));
    // 0x343d64: 0x3c04f1ab  lui         $a0, 0xF1AB
    ctx->pc = 0x343d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61867 << 16));
    // 0x343d68: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x343d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x343d6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343d74: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x343d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343d78: 0xfea40150  sd          $a0, 0x150($s5)
    ctx->pc = 0x343d78u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 336), GPR_U64(ctx, 4));
    // 0x343d7c: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343d80: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343d84: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x343d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x343d88: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x343d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343d8c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x343d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x343d90: 0x24650264  addiu       $a1, $v1, 0x264
    ctx->pc = 0x343d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 612));
    // 0x343d94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x343d94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x343d98: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x343d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x343d9c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x343d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x343da0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x343da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343da4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x343DA4u;
    SET_GPR_U32(ctx, 31, 0x343DACu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x343DA4u, 0x343DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DACu;
label_343dac:
    // 0x343dac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x343dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343db0: 0x70a0b628  paddub      $s6, $a1, $zero
    ctx->pc = 0x343db0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x343db4: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x343db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343db8: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x343db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x343dbc: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x343dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x343dc0: 0x26c20150  addiu       $v0, $s6, 0x150
    ctx->pc = 0x343dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
    // 0x343dc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x343dc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343dc8: 0xdd060060  ld          $a2, 0x60($t0)
    ctx->pc = 0x343dc8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x343dcc: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x343DCCu;
    SET_GPR_U32(ctx, 31, 0x343DD4u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x343DCCu, 0x343DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DD4u;
label_343dd4:
    // 0x343dd4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x343dd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343dd8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x343dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x343ddc: 0x348200a0  ori         $v0, $a0, 0xA0
    ctx->pc = 0x343ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x343de0: 0xfec20020  sd          $v0, 0x20($s6)
    ctx->pc = 0x343de0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 2));
    // 0x343de4: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x343de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343de8: 0xfec20060  sd          $v0, 0x60($s6)
    ctx->pc = 0x343de8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 96), GPR_U64(ctx, 2));
    // 0x343dec: 0xfec000a0  sd          $zero, 0xA0($s6)
    ctx->pc = 0x343decu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 160), GPR_U64(ctx, 0));
    // 0x343df0: 0x24100ff0  addiu       $s0, $zero, 0xFF0
    ctx->pc = 0x343df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343df4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x343df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x343df8: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x343df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343dfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x343dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343e00: 0xfec200d0  sd          $v0, 0xD0($s6)
    ctx->pc = 0x343e00u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 208), GPR_U64(ctx, 2));
    // 0x343e04: 0x341088f0  ori         $s0, $zero, 0x88F0
    ctx->pc = 0x343e04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343e08: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x343e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x343e0c: 0x24027ff0  addiu       $v0, $zero, 0x7FF0
    ctx->pc = 0x343e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343e10: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x343e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343e14: 0xfec400f0  sd          $a0, 0xF0($s6)
    ctx->pc = 0x343e14u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 240), GPR_U64(ctx, 4));
    // 0x343e18: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x343e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343e1c: 0xfec50050  sd          $a1, 0x50($s6)
    ctx->pc = 0x343e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 80), GPR_U64(ctx, 5));
    // 0x343e20: 0x3c02f1ab  lui         $v0, 0xF1AB
    ctx->pc = 0x343e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61867 << 16));
    // 0x343e24: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x343e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x343e28: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x343e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x343e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e30: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x343e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x343e34: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x343e34u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x343e38: 0x3c110004  lui         $s1, 0x4
    ctx->pc = 0x343e38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4 << 16));
    // 0x343e3c: 0x362200a0  ori         $v0, $s1, 0xA0
    ctx->pc = 0x343e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)160);
    // 0x343e40: 0xfec20170  sd          $v0, 0x170($s6)
    ctx->pc = 0x343e40u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 368), GPR_U64(ctx, 2));
    // 0x343e44: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x343e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x343e48: 0xfec201b0  sd          $v0, 0x1B0($s6)
    ctx->pc = 0x343e48u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 432), GPR_U64(ctx, 2));
    // 0x343e4c: 0xfec001f0  sd          $zero, 0x1F0($s6)
    ctx->pc = 0x343e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 496), GPR_U64(ctx, 0));
    // 0x343e50: 0x24040ff0  addiu       $a0, $zero, 0xFF0
    ctx->pc = 0x343e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343e54: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x343e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343e58: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x343e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x343e5c: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x343e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343e60: 0xfed00220  sd          $s0, 0x220($s6)
    ctx->pc = 0x343e60u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 544), GPR_U64(ctx, 16));
    // 0x343e64: 0x340688f0  ori         $a2, $zero, 0x88F0
    ctx->pc = 0x343e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x343e68: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x343e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x343e6c: 0x24057ff0  addiu       $a1, $zero, 0x7FF0
    ctx->pc = 0x343e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x343e70: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x343e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x343e74: 0xfec20240  sd          $v0, 0x240($s6)
    ctx->pc = 0x343e74u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 576), GPR_U64(ctx, 2));
    // 0x343e78: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x343e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x343e7c: 0xfec201a0  sd          $v0, 0x1A0($s6)
    ctx->pc = 0x343e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 416), GPR_U64(ctx, 2));
    // 0x343e80: 0x3c05f1ab  lui         $a1, 0xF1AB
    ctx->pc = 0x343e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61867 << 16));
    // 0x343e84: 0x34a24000  ori         $v0, $a1, 0x4000
    ctx->pc = 0x343e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x343e88: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x343e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e90: 0x468025  or          $s0, $v0, $a2
    ctx->pc = 0x343e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x343e94: 0xfed00150  sd          $s0, 0x150($s6)
    ctx->pc = 0x343e94u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 336), GPR_U64(ctx, 16));
    // 0x343e98: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343e9c: 0x2444026c  addiu       $a0, $v0, 0x26C
    ctx->pc = 0x343e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 620));
    // 0x343ea0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x343ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343ea4: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x343EA4u;
    SET_GPR_U32(ctx, 31, 0x343EACu);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x343EA4u, 0x343EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343EACu;
label_343eac:
    // 0x343eac: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343eb0: 0x8c82026c  lw          $v0, 0x26C($a0)
    ctx->pc = 0x343eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x343eb4: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x343eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x343eb8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343ebc: 0x8c500270  lw          $s0, 0x270($v0)
    ctx->pc = 0x343ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x343ec0: 0xafb00144  sw          $s0, 0x144($sp)
    ctx->pc = 0x343ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 16));
    // 0x343ec4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x343ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x343ec8: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x343ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x343ecc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x343eccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343ed0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x343ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x343ed4: 0x34470080  ori         $a3, $v0, 0x80
    ctx->pc = 0x343ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x343ed8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x343ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343edc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x343edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x343ee0: 0x34490080  ori         $t1, $v0, 0x80
    ctx->pc = 0x343ee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x343ee4: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x343ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343ee8: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x343EE8u;
    SET_GPR_U32(ctx, 31, 0x343EF0u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x343EE8u, 0x343EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343EF0u;
label_343ef0:
    // 0x343ef0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x343ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x343ef4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x343ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x343ef8: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x343ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x343efc: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x343efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x343f00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x343f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x343f04: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x343f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x343f08: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x343f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x343f0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343f10: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x343f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x343f14: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x343f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343f18: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x343f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x343f1c: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x343f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x343f20: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x343f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x343f24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343f28: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x343f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x343f2c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x343f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343f30: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x343f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x343f34: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x343f34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x343f38: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x343f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x343f3c: 0x34433001  ori         $v1, $v0, 0x3001
    ctx->pc = 0x343f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x343f40: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x343f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x343f44: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x343f44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x343f48: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x343f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x343f4c: 0x34443001  ori         $a0, $v0, 0x3001
    ctx->pc = 0x343f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x343f50: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x343f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x343f54: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x343f54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x343f58: 0x3c076126  lui         $a3, 0x6126
    ctx->pc = 0x343f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24870 << 16));
    // 0x343f5c: 0x34e24000  ori         $v0, $a3, 0x4000
    ctx->pc = 0x343f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x343f60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x343f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343f64: 0x34068005  ori         $a2, $zero, 0x8005
    ctx->pc = 0x343f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x343f68: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x343f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x343f6c: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x343f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x343f70: 0xfc620070  sd          $v0, 0x70($v1)
    ctx->pc = 0x343f70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 2));
    // 0x343f74: 0x3c046126  lui         $a0, 0x6126
    ctx->pc = 0x343f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24870 << 16));
    // 0x343f78: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x343f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x343f7c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x343f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x343f80: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x343f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x343f84: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x343f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x343f88: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x343f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x343f8c: 0xfc430070  sd          $v1, 0x70($v0)
    ctx->pc = 0x343f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 3));
    // 0x343f90: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x343f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343f94: 0x24620274  addiu       $v0, $v1, 0x274
    ctx->pc = 0x343f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 628));
    // 0x343f98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x343f98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343f9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x343f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343fa0: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x343FA0u;
    SET_GPR_U32(ctx, 31, 0x343FA8u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x343FA0u, 0x343FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FA8u;
label_343fa8:
    // 0x343fa8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x343fa8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343fac: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x343facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343fb0: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x343fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x343fb4: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x343fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x343fb8: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x343fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343fbc: 0x8c850278  lw          $a1, 0x278($a0)
    ctx->pc = 0x343fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x343fc0: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x343fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
    // 0x343fc4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x343fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x343fc8: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x343fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x343fcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x343fccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x343fd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x343fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x343fd4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x343fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x343fd8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x343fd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343fdc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x343fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343fe0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x343fe0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x343fe4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x343fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x343fe8: 0x34690080  ori         $t1, $v1, 0x80
    ctx->pc = 0x343fe8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x343fec: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x343fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343ff0: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x343FF0u;
    SET_GPR_U32(ctx, 31, 0x343FF8u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x343FF0u, 0x343FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FF8u;
label_343ff8:
    // 0x343ff8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x343ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x343ffc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x343ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x344000: 0xafa50148  sw          $a1, 0x148($sp)
    ctx->pc = 0x344000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 5));
    // 0x344004: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x344004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x344008: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x344008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x34400c: 0xafa7014c  sw          $a3, 0x14C($sp)
    ctx->pc = 0x34400cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 7));
    // 0x344010: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x344014: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x344014u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x344018: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x344018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x34401c: 0x1491025  or          $v0, $t2, $t1
    ctx->pc = 0x34401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x344020: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x344020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x344024: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x344024u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
    // 0x344028: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x344028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34402c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x34402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x344030: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x344030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x344034: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x344034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x344038: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x344038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x34403c: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x34403cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x344040: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x344040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x344044: 0x34643001  ori         $a0, $v1, 0x3001
    ctx->pc = 0x344044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x344048: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x344048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x34404c: 0xfc440030  sd          $a0, 0x30($v0)
    ctx->pc = 0x34404cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 4));
    // 0x344050: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x344050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x344054: 0x34513001  ori         $s1, $v0, 0x3001
    ctx->pc = 0x344054u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x344058: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x344058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x34405c: 0xfc710030  sd          $s1, 0x30($v1)
    ctx->pc = 0x34405cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 17));
    // 0x344060: 0x3c046126  lui         $a0, 0x6126
    ctx->pc = 0x344060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24870 << 16));
    // 0x344064: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x344064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x344068: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x344068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34406c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x34406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x344070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x344070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344074: 0x8fb10148  lw          $s1, 0x148($sp)
    ctx->pc = 0x344074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x344078: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x344078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x34407c: 0x3c046126  lui         $a0, 0x6126
    ctx->pc = 0x34407cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24870 << 16));
    // 0x344080: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x344080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x344084: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x344084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x344088: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x344088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x34408c: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x34408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x344090: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x344090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x344094: 0xfc430070  sd          $v1, 0x70($v0)
    ctx->pc = 0x344094u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 3));
    // 0x344098: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x344098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34409c: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x34409cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3440a0: 0x92221308  lbu         $v0, 0x1308($s1)
    ctx->pc = 0x3440a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4872)));
    // 0x3440a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3440a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3440a8: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x3440a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3440ac: 0x24a4027c  addiu       $a0, $a1, 0x27C
    ctx->pc = 0x3440acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
    // 0x3440b0: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x3440b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x3440b4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x3440B4u;
    SET_GPR_U32(ctx, 31, 0x3440BCu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x3440B4u, 0x3440BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3440BCu;
label_3440bc:
    // 0x3440bc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3440bcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3440c0: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x3440c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x3440c4: 0x26e50150  addiu       $a1, $s7, 0x150
    ctx->pc = 0x3440c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 336));
    // 0x3440c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3440c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3440cc: 0xdc315c80  ld          $s1, 0x5C80($at)
    ctx->pc = 0x3440ccu;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x895C80u));
    // 0x3440d0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x3440d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3440d4: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x3440D4u;
    SET_GPR_U32(ctx, 31, 0x3440DCu);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x3440D4u, 0x3440DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3440DCu;
label_3440dc:
    // 0x3440dc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3440dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3440e0: 0x346200a0  ori         $v0, $v1, 0xA0
    ctx->pc = 0x3440e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3440e4: 0xfee20020  sd          $v0, 0x20($s7)
    ctx->pc = 0x3440e4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 32), GPR_U64(ctx, 2));
    // 0x3440e8: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x3440e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x3440ec: 0xfee50060  sd          $a1, 0x60($s7)
    ctx->pc = 0x3440ecu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 96), GPR_U64(ctx, 5));
    // 0x3440f0: 0xfee000a0  sd          $zero, 0xA0($s7)
    ctx->pc = 0x3440f0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 160), GPR_U64(ctx, 0));
    // 0x3440f4: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x3440f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x3440f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3440f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3440fc: 0x24110ff0  addiu       $s1, $zero, 0xFF0
    ctx->pc = 0x3440fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x344100: 0x2231025  or          $v0, $s1, $v1
    ctx->pc = 0x344100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x344104: 0xfee200d0  sd          $v0, 0xD0($s7)
    ctx->pc = 0x344104u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 208), GPR_U64(ctx, 2));
    // 0x344108: 0x340488f0  ori         $a0, $zero, 0x88F0
    ctx->pc = 0x344108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x34410c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x34410cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x344110: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x344110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x344114: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x344114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x344118: 0xfee200f0  sd          $v0, 0xF0($s7)
    ctx->pc = 0x344118u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 240), GPR_U64(ctx, 2));
    // 0x34411c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x344120: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x344120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x344124: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x344124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x344128: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x344128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34412c: 0xfee20050  sd          $v0, 0x50($s7)
    ctx->pc = 0x34412cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 80), GPR_U64(ctx, 2));
    // 0x344130: 0x3c05f1ab  lui         $a1, 0xF1AB
    ctx->pc = 0x344130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61867 << 16));
    // 0x344134: 0x34a24000  ori         $v0, $a1, 0x4000
    ctx->pc = 0x344134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x344138: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x344138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34413c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344140: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x344140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x344144: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x344144u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x344148: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x344148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x34414c: 0x347100a0  ori         $s1, $v1, 0xA0
    ctx->pc = 0x34414cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x344150: 0xfef10170  sd          $s1, 0x170($s7)
    ctx->pc = 0x344150u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 368), GPR_U64(ctx, 17));
    // 0x344154: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x344154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x344158: 0xfee201b0  sd          $v0, 0x1B0($s7)
    ctx->pc = 0x344158u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 432), GPR_U64(ctx, 2));
    // 0x34415c: 0xfee001f0  sd          $zero, 0x1F0($s7)
    ctx->pc = 0x34415cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 496), GPR_U64(ctx, 0));
    // 0x344160: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x344160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x344164: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x344164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x344168: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x344168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x34416c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x34416cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344170: 0xfee50220  sd          $a1, 0x220($s7)
    ctx->pc = 0x344170u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 544), GPR_U64(ctx, 5));
    // 0x344174: 0x340488f0  ori         $a0, $zero, 0x88F0
    ctx->pc = 0x344174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x344178: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x344178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x34417c: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x34417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x344180: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x344180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x344184: 0xfee20240  sd          $v0, 0x240($s7)
    ctx->pc = 0x344184u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 576), GPR_U64(ctx, 2));
    // 0x344188: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x344188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34418c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x34418cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x344190: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x344190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x344194: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x344194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x344198: 0xfee601a0  sd          $a2, 0x1A0($s7)
    ctx->pc = 0x344198u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 416), GPR_U64(ctx, 6));
    // 0x34419c: 0x3c08f1ab  lui         $t0, 0xF1AB
    ctx->pc = 0x34419cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61867 << 16));
    // 0x3441a0: 0x35114000  ori         $s1, $t0, 0x4000
    ctx->pc = 0x3441a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x3441a4: 0x11483c  dsll32      $t1, $s1, 0
    ctx->pc = 0x3441a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3441a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3441a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3441ac: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x3441acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x3441b0: 0xfee30150  sd          $v1, 0x150($s7)
    ctx->pc = 0x3441b0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 336), GPR_U64(ctx, 3));
    // 0x3441b4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x3441b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3441b8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3441b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3441bc: 0x90431308  lbu         $v1, 0x1308($v0)
    ctx->pc = 0x3441bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x3441c0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3441c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3441c4: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x3441c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3441c8: 0x24900284  addiu       $s0, $a0, 0x284
    ctx->pc = 0x3441c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    // 0x3441cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3441ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3441d0: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x3441d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x3441d4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x3441D4u;
    SET_GPR_U32(ctx, 31, 0x3441DCu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x3441D4u, 0x3441DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441DCu;
label_3441dc:
    // 0x3441dc: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3441dcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3441e0: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x3441e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x3441e4: 0x27c50150  addiu       $a1, $fp, 0x150
    ctx->pc = 0x3441e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x3441e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3441e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3441ec: 0xdc265c80  ld          $a2, 0x5C80($at)
    ctx->pc = 0x3441ecu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x895C80u));
    // 0x3441f0: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x3441F0u;
    SET_GPR_U32(ctx, 31, 0x3441F8u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x3441F0u, 0x3441F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441F8u;
label_3441f8:
    // 0x3441f8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3441f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3441fc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x344200: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x344200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x344204: 0xffc20020  sd          $v0, 0x20($fp)
    ctx->pc = 0x344204u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 2));
    // 0x344208: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x344208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x34420c: 0xffc20060  sd          $v0, 0x60($fp)
    ctx->pc = 0x34420cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 96), GPR_U64(ctx, 2));
    // 0x344210: 0xffc000a0  sd          $zero, 0xA0($fp)
    ctx->pc = 0x344210u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 160), GPR_U64(ctx, 0));
    // 0x344214: 0x24040ff0  addiu       $a0, $zero, 0xFF0
    ctx->pc = 0x344214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x344218: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x344218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x34421c: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x34421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x344220: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x344220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344224: 0xffc400d0  sd          $a0, 0xD0($fp)
    ctx->pc = 0x344224u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 208), GPR_U64(ctx, 4));
    // 0x344228: 0x340288f0  ori         $v0, $zero, 0x88F0
    ctx->pc = 0x344228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x34422c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34422cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x344230: 0x24027ff0  addiu       $v0, $zero, 0x7FF0
    ctx->pc = 0x344230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x344234: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x344234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344238: 0xffc500f0  sd          $a1, 0xF0($fp)
    ctx->pc = 0x344238u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 240), GPR_U64(ctx, 5));
    // 0x34423c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x344240: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x344240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x344244: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x344244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x344248: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x344248u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34424c: 0xffd10050  sd          $s1, 0x50($fp)
    ctx->pc = 0x34424cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 80), GPR_U64(ctx, 17));
    // 0x344250: 0x3c10f1ab  lui         $s0, 0xF1AB
    ctx->pc = 0x344250u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61867 << 16));
    // 0x344254: 0x36024000  ori         $v0, $s0, 0x4000
    ctx->pc = 0x344254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x344258: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x344258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34425c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344260: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x344260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x344264: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x344264u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x344268: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x344268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x34426c: 0x348200a0  ori         $v0, $a0, 0xA0
    ctx->pc = 0x34426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x344270: 0xffc20170  sd          $v0, 0x170($fp)
    ctx->pc = 0x344270u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 368), GPR_U64(ctx, 2));
    // 0x344274: 0x24031001  addiu       $v1, $zero, 0x1001
    ctx->pc = 0x344274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x344278: 0xffc301b0  sd          $v1, 0x1B0($fp)
    ctx->pc = 0x344278u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 432), GPR_U64(ctx, 3));
    // 0x34427c: 0xffc001f0  sd          $zero, 0x1F0($fp)
    ctx->pc = 0x34427cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 496), GPR_U64(ctx, 0));
    // 0x344280: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x344280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x344284: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x344284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x344288: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x344288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x34428c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x34428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x344290: 0xffc20220  sd          $v0, 0x220($fp)
    ctx->pc = 0x344290u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 544), GPR_U64(ctx, 2));
    // 0x344294: 0x340588f0  ori         $a1, $zero, 0x88F0
    ctx->pc = 0x344294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35056);
    // 0x344298: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x344298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34429c: 0x24057ff0  addiu       $a1, $zero, 0x7FF0
    ctx->pc = 0x34429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x3442a0: 0xa33825  or          $a3, $a1, $v1
    ctx->pc = 0x3442a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3442a4: 0xffc70240  sd          $a3, 0x240($fp)
    ctx->pc = 0x3442a4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 576), GPR_U64(ctx, 7));
    // 0x3442a8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3442a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3442ac: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x3442acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3442b0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3442b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3442b4: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x3442b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3442b8: 0xffc501a0  sd          $a1, 0x1A0($fp)
    ctx->pc = 0x3442b8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 416), GPR_U64(ctx, 5));
    // 0x3442bc: 0x3c04f1ab  lui         $a0, 0xF1AB
    ctx->pc = 0x3442bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61867 << 16));
    // 0x3442c0: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x3442c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x3442c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3442c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3442c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3442c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3442cc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3442ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3442d0: 0xffc20150  sd          $v0, 0x150($fp)
    ctx->pc = 0x3442d0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 336), GPR_U64(ctx, 2));
    // 0x3442d4: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3442d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3442d8: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x3442d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3442dc: 0x245036b0  addiu       $s0, $v0, 0x36B0
    ctx->pc = 0x3442dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x3442e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3442e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3442e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3442e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3442e8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x3442e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3442ec: 0x3444000c  ori         $a0, $v0, 0xC
    ctx->pc = 0x3442ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x3442f0: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x3442f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x3442f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3442f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3442f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3442f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3442fc: 0x0  nop
    ctx->pc = 0x3442fcu;
    // NOP
    // 0x344300: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x344300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x344304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x344308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34430c: 0x0  nop
    ctx->pc = 0x34430cu;
    // NOP
    // 0x344310: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x344310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x344314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x344318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34431c: 0x0  nop
    ctx->pc = 0x34431cu;
    // NOP
    // 0x344320: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x344320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x344324: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x344324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344328: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x344328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34432c: 0x24a239d0  addiu       $v0, $a1, 0x39D0
    ctx->pc = 0x34432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
    // 0x344330: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x344330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x344334: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x344334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x344338: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x344338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x34433c: 0x96110140  lhu         $s1, 0x140($s0)
    ctx->pc = 0x34433cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x344340: 0x3622000c  ori         $v0, $s1, 0xC
    ctx->pc = 0x344340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12);
    // 0x344344: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x344344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x344348: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x344348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x34434c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34434cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344350: 0x0  nop
    ctx->pc = 0x344350u;
    // NOP
    // 0x344354: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x344354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x344358: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x344358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34435c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34435cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344360: 0x0  nop
    ctx->pc = 0x344360u;
    // NOP
    // 0x344364: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x344364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x344368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34436c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34436cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344370: 0x0  nop
    ctx->pc = 0x344370u;
    // NOP
    // 0x344374: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x344374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x344378: 0x8fb00158  lw          $s0, 0x158($sp)
    ctx->pc = 0x344378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34437c: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x34437cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x344380: 0x24c43b60  addiu       $a0, $a2, 0x3B60
    ctx->pc = 0x344380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15200));
    // 0x344384: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x344384u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x344388: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x344388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34438c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x34438cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x344390: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x344390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x344394: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x344394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x344398: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x344398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x34439c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3443a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3443a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3443a4: 0x0  nop
    ctx->pc = 0x3443a4u;
    // NOP
    // 0x3443a8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3443a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3443ac: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3443acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3443b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3443b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3443b4: 0x0  nop
    ctx->pc = 0x3443b4u;
    // NOP
    // 0x3443b8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3443b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3443bc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x3443bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x3443c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3443c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3443c4: 0x0  nop
    ctx->pc = 0x3443c4u;
    // NOP
    // 0x3443c8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3443c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3443cc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3443ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3443d0: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x3443d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3443d4: 0x26023cf0  addiu       $v0, $s0, 0x3CF0
    ctx->pc = 0x3443d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15600));
    // 0x3443d8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3443d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3443dc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3443dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3443e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3443e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3443e4: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x3443e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3443e8: 0x34a2000c  ori         $v0, $a1, 0xC
    ctx->pc = 0x3443e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
    // 0x3443ec: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x3443ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3443f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3443f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3443f4: 0x0  nop
    ctx->pc = 0x3443f4u;
    // NOP
    // 0x3443f8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3443f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3443fc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3443fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x344400: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x344400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344404: 0x0  nop
    ctx->pc = 0x344404u;
    // NOP
    // 0x344408: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x344408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34440c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34440cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344410: 0x0  nop
    ctx->pc = 0x344410u;
    // NOP
    // 0x344414: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x344414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x344418: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34441c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x344420: 0x245007d0  addiu       $s0, $v0, 0x7D0
    ctx->pc = 0x344420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x344424: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x344424u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x344428: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x344428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x34442c: 0xa6050140  sh          $a1, 0x140($s0)
    ctx->pc = 0x34442cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x344430: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x344430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x344434: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x344434u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344438: 0x0  nop
    ctx->pc = 0x344438u;
    // NOP
    // 0x34443c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x344440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x344444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344448: 0x0  nop
    ctx->pc = 0x344448u;
    // NOP
    // 0x34444c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x344450: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x344450u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x344454: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x344454u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344458: 0x0  nop
    ctx->pc = 0x344458u;
    // NOP
    // 0x34445c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34445cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x344460: 0x8fa90158  lw          $t1, 0x158($sp)
    ctx->pc = 0x344460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344464: 0x8d2202d0  lw          $v0, 0x2D0($t1)
    ctx->pc = 0x344464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
    // 0x344468: 0x244a3840  addiu       $t2, $v0, 0x3840
    ctx->pc = 0x344468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 14400));
    // 0x34446c: 0x71408628  paddub      $s0, $t2, $zero
    ctx->pc = 0x34446cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x344470: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x344470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x344474: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x344474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x344478: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x344478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x34447c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x34447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x344480: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x344480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x344484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344488: 0x0  nop
    ctx->pc = 0x344488u;
    // NOP
    // 0x34448c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34448cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x344490: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x344490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x344494: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x344494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x344498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34449c: 0x0  nop
    ctx->pc = 0x34449cu;
    // NOP
    // 0x3444a0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3444a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3444a4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3444a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3444a8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3444a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3444ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3444acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444b0: 0x0  nop
    ctx->pc = 0x3444b0u;
    // NOP
    // 0x3444b4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3444b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3444b8: 0x3c02c20a  lui         $v0, 0xC20A
    ctx->pc = 0x3444b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49674 << 16));
    // 0x3444bc: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x3444bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3444c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3444c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444c4: 0x0  nop
    ctx->pc = 0x3444c4u;
    // NOP
    // 0x3444c8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3444c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3444cc: 0x3c03c235  lui         $v1, 0xC235
    ctx->pc = 0x3444ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49717 << 16));
    // 0x3444d0: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x3444d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x3444d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3444d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444d8: 0x0  nop
    ctx->pc = 0x3444d8u;
    // NOP
    // 0x3444dc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3444dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3444e0: 0x3c034308  lui         $v1, 0x4308
    ctx->pc = 0x3444e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17160 << 16));
    // 0x3444e4: 0x3462e666  ori         $v0, $v1, 0xE666
    ctx->pc = 0x3444e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58982);
    // 0x3444e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3444e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444ec: 0x0  nop
    ctx->pc = 0x3444ecu;
    // NOP
    // 0x3444f0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3444f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3444f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3444f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3444f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3444f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444fc: 0x0  nop
    ctx->pc = 0x3444fcu;
    // NOP
    // 0x344500: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x344500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x344504: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x344504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344508: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x344508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34450c: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x34450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x344510: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x344510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x344514: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x344514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x344518: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x344518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34451c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x34451cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x344520: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x344520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x344524: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x344524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x344528: 0x24041713  addiu       $a0, $zero, 0x1713
    ctx->pc = 0x344528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5907));
    // 0x34452c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34452cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x344530: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x344530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x344534: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x344534u;
    SET_GPR_U32(ctx, 31, 0x34453Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x344534u, 0x34453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34453Cu;
label_34453c:
    // 0x34453c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34453cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x344540: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x344540u;
    SET_GPR_U32(ctx, 31, 0x344548u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x344540u, 0x344548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344548u;
label_344548:
    // 0x344548: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x344548u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34454c: 0x3c04420a  lui         $a0, 0x420A
    ctx->pc = 0x34454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16906 << 16));
    // 0x344550: 0x34866666  ori         $a2, $a0, 0x6666
    ctx->pc = 0x344550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x344554: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x344554u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344558: 0x0  nop
    ctx->pc = 0x344558u;
    // NOP
    // 0x34455c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x34455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x344560: 0x3c02c235  lui         $v0, 0xC235
    ctx->pc = 0x344560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49717 << 16));
    // 0x344564: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x344564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x344568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34456c: 0x0  nop
    ctx->pc = 0x34456cu;
    // NOP
    // 0x344570: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x344570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x344574: 0x3c064308  lui         $a2, 0x4308
    ctx->pc = 0x344574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17160 << 16));
    // 0x344578: 0x34c5e666  ori         $a1, $a2, 0xE666
    ctx->pc = 0x344578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)58982);
    // 0x34457c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34457cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344580: 0x0  nop
    ctx->pc = 0x344580u;
    // NOP
    // 0x344584: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x344584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x344588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34458c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34458cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344590: 0x0  nop
    ctx->pc = 0x344590u;
    // NOP
    // 0x344594: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x344594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x344598: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34459c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x34459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3445a0: 0x24850180  addiu       $a1, $a0, 0x180
    ctx->pc = 0x3445a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x3445a4: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3445a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3445a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3445a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3445ac: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3445acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3445b0: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x3445b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x3445b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3445b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3445b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3445b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3445bc: 0x24091713  addiu       $t1, $zero, 0x1713
    ctx->pc = 0x3445bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5907));
    // 0x3445c0: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x3445c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x3445c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3445c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3445c8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x3445c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3445cc: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x3445ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3445d0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x3445d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3445d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3445D4u;
    SET_GPR_U32(ctx, 31, 0x3445DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3445D4u, 0x3445DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445DCu;
label_3445dc:
    // 0x3445dc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x3445dcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3445e0: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x3445e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x3445e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3445E4u;
    SET_GPR_U32(ctx, 31, 0x3445ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3445E4u, 0x3445ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445ECu;
label_3445ec:
    // 0x3445ec: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x3445ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3445f0: 0x90851308  lbu         $a1, 0x1308($a0)
    ctx->pc = 0x3445f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x3445f4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3445f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3445f8: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x3445f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x3445fc: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x3445FCu;
    {
        const bool branch_taken_0x3445fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3445fc) {
            ctx->pc = 0x344630u;
            goto label_344630;
        }
    }
    ctx->pc = 0x344604u;
    // 0x344604: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x344604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x344608: 0x8fa90158  lw          $t1, 0x158($sp)
    ctx->pc = 0x344608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34460c: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x34460cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x344610: 0x8faa0158  lw          $t2, 0x158($sp)
    ctx->pc = 0x344610u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344614: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x344614u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x344618: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34461c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34461cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344620: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x344620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344624: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344628: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x344628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34462c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x34462cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_344630:
    // 0x344630: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x344630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x344634: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x344634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x344638: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x344638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x34463c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x34463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x344640: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x344640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x344644: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x344644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x344648: 0x24830ae8  addiu       $v1, $a0, 0xAE8
    ctx->pc = 0x344648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x34464c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34464cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x344650: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x344650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x344654: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x344654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x344658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x344658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34465c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x34465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x344660: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x344660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x344664: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x344664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x344668: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34466c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x34466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x344670: 0x248301b0  addiu       $v1, $a0, 0x1B0
    ctx->pc = 0x344670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x344674: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x344674u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x344678: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x344678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x34467c: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x34467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x344680: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x344680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x344684: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x344684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x344688: 0x8fb10134  lw          $s1, 0x134($sp)
    ctx->pc = 0x344688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x34468c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x34468cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x344690: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x344690u;
    SET_GPR_U32(ctx, 31, 0x344698u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x344690u, 0x344698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344698u;
label_344698:
    // 0x344698: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x344698u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34469c: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x34469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x3446a0: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x3446a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x3446a4: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x3446a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x3446a8: 0x24a20ae8  addiu       $v0, $a1, 0xAE8
    ctx->pc = 0x3446a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x3446ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3446acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x3446b0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x3446b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x3446b4: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x3446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x3446b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3446b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3446bc: 0x24b1000f  addiu       $s1, $a1, 0xF
    ctx->pc = 0x3446bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3446c0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3446c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x3446c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3446c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3446c8: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x3446c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x3446cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3446ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3446d0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3446d4: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x3446d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3446d8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3446d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3446dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3446dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3446e0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x3446e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3446e4: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x3446e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x3446e8: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3446e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3446ec: 0x8cb10058  lw          $s1, 0x58($a1)
    ctx->pc = 0x3446ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3446f0: 0x26220360  addiu       $v0, $s1, 0x360
    ctx->pc = 0x3446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x3446f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3446f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3446f8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3446f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3446fc: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x3446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x344700: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x344700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x344704: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x344704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x344708: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x344708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x34470c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x34470Cu;
    SET_GPR_U32(ctx, 31, 0x344714u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x34470Cu, 0x344714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344714u;
label_344714:
    // 0x344714: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x344714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x344718: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x344718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x34471c: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x34471cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x344720: 0x26220ae8  addiu       $v0, $s1, 0xAE8
    ctx->pc = 0x344720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2792));
    // 0x344724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x344724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x344728: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x344728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34472c: 0xc05da88  jal         func_176A20
    ctx->pc = 0x34472Cu;
    SET_GPR_U32(ctx, 31, 0x344734u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x34472Cu, 0x344734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344734u;
label_344734:
    // 0x344734: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344738: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34473c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344740: 0xa04300c4  sb          $v1, 0xC4($v0)
    ctx->pc = 0x344740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 3));
    // 0x344744: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x344744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344748: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x344748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34474c: 0x906200c4  lbu         $v0, 0xC4($v1)
    ctx->pc = 0x34474cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x344750: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x344750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344754: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x344754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x344758: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x344758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34475c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34475cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x344760: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x344760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x344764: 0x2451bd00  addiu       $s1, $v0, -0x4300
    ctx->pc = 0x344764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x344768: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x344768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34476c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x34476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x344770: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x344770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x344774: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x344774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x344778: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x344778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34477c: 0x946210a4  lhu         $v0, 0x10A4($v1)
    ctx->pc = 0x34477cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x344780: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x344780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x344784: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x344784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x344788: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x344788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34478c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x34478cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x344790: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x344790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x344794: 0x24455ac0  addiu       $a1, $v0, 0x5AC0
    ctx->pc = 0x344794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x344798: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x344798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34479c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34479cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3447a0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x3447a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3447a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3447a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3447a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3447a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3447ac: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x3447acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3447b0: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x3447b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3447b4: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x3447b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3447b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3447b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3447bc: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x3447bcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3447c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3447c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3447c4: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x3447C4u;
    SET_GPR_U32(ctx, 31, 0x3447CCu);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x3447C4u, 0x3447CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447CCu;
label_3447cc:
    // 0x3447cc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3447ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3447d0: 0x946410a4  lhu         $a0, 0x10A4($v1)
    ctx->pc = 0x3447d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x3447d4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3447d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3447d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3447d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3447dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3447dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3447e0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x3447e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3447e4: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x3447e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x3447e8: 0x26055ac0  addiu       $a1, $s0, 0x5AC0
    ctx->pc = 0x3447e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23232));
    // 0x3447ec: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3447f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3447f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3447f4: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x3447F4u;
    SET_GPR_U32(ctx, 31, 0x3447FCu);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x3447F4u, 0x3447FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447FCu;
label_3447fc:
    // 0x3447fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3447fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x344800: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x344800u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x344804: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x344804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x344808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x344808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34480c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34480cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x344810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x344810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x344814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x344814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x344818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x344818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34481c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34481cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344828: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x344828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x34482c: 0x3e00008  jr          $ra
    ctx->pc = 0x34482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344834u;
}
