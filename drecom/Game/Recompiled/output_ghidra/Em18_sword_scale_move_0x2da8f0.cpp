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

// Function: Em18_sword_scale_move
// Address: 0x2da8f0 - 0x2dac98
void Em18_sword_scale_move_0x2da8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_sword_scale_move_0x2da8f0");
#endif

    switch (ctx->pc) {
        case 0x2daa80u: goto label_2daa80;
        case 0x2daafcu: goto label_2daafc;
        case 0x2dab78u: goto label_2dab78;
        case 0x2dabf4u: goto label_2dabf4;
        case 0x2dac70u: goto label_2dac70;
        default: break;
    }

    ctx->pc = 0x2da8f0u;

    // 0x2da8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2da8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2da8f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2da8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2da8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da900: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2da900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2da904: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2da904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2da908: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2da908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2da90c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2da90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2da910: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2da910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2da914: 0x24702d50  addiu       $s0, $v1, 0x2D50
    ctx->pc = 0x2da914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x2da918: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2da918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2da91c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2da91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2da920: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2da920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2da924: 0x922300d7  lbu         $v1, 0xD7($s1)
    ctx->pc = 0x2da924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 215)));
    // 0x2da928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2da928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2da92c: 0xa22300d7  sb          $v1, 0xD7($s1)
    ctx->pc = 0x2da92cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 215), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da930: 0x922300d6  lbu         $v1, 0xD6($s1)
    ctx->pc = 0x2da930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 214)));
    // 0x2da934: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2da934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2da938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da93c: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DA93Cu;
    {
        const bool branch_taken_0x2da93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2da93c) {
            ctx->pc = 0x2DA9CCu;
            goto label_2da9cc;
        }
    }
    ctx->pc = 0x2DA944u;
    // 0x2da944: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA944u;
    {
        const bool branch_taken_0x2da944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da944) {
            ctx->pc = 0x2DA954u;
            goto label_2da954;
        }
    }
    ctx->pc = 0x2DA94Cu;
    // 0x2da94c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2DA94Cu;
    {
        const bool branch_taken_0x2da94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da94c) {
            ctx->pc = 0x2DAA50u;
            goto label_2daa50;
        }
    }
    ctx->pc = 0x2DA954u;
label_2da954:
    // 0x2da954: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da95c: 0x0  nop
    ctx->pc = 0x2da95cu;
    // NOP
    // 0x2da960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da964: 0x0  nop
    ctx->pc = 0x2da964u;
    // NOP
    // 0x2da968: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x2DA968u;
    {
        const bool branch_taken_0x2da968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da968) {
            ctx->pc = 0x2DAA50u;
            goto label_2daa50;
        }
    }
    ctx->pc = 0x2DA970u;
    // 0x2da970: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da974: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2da974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2da978: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2da978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2da97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da980: 0x0  nop
    ctx->pc = 0x2da980u;
    // NOP
    // 0x2da984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da988: 0x0  nop
    ctx->pc = 0x2da988u;
    // NOP
    // 0x2da98c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA98Cu;
    {
        const bool branch_taken_0x2da98c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da98c) {
            ctx->pc = 0x2DA9B8u;
            goto label_2da9b8;
        }
    }
    ctx->pc = 0x2DA994u;
    // 0x2da994: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da998: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2da998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2da99c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2da99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2da9a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9a4: 0x0  nop
    ctx->pc = 0x2da9a4u;
    // NOP
    // 0x2da9a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da9ac: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2da9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2da9b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DA9B0u;
    {
        const bool branch_taken_0x2da9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9b0) {
            ctx->pc = 0x2DAA50u;
            goto label_2daa50;
        }
    }
    ctx->pc = 0x2DA9B8u;
label_2da9b8:
    // 0x2da9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9bc: 0x0  nop
    ctx->pc = 0x2da9bcu;
    // NOP
    // 0x2da9c0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2da9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2da9c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2DA9C4u;
    {
        const bool branch_taken_0x2da9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9c4) {
            ctx->pc = 0x2DAA50u;
            goto label_2daa50;
        }
    }
    ctx->pc = 0x2DA9CCu;
label_2da9cc:
    // 0x2da9cc: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da9d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2da9d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9d8: 0x0  nop
    ctx->pc = 0x2da9d8u;
    // NOP
    // 0x2da9dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da9e0: 0x0  nop
    ctx->pc = 0x2da9e0u;
    // NOP
    // 0x2da9e4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA9E4u;
    {
        const bool branch_taken_0x2da9e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da9e4) {
            ctx->pc = 0x2DAA50u;
            goto label_2daa50;
        }
    }
    ctx->pc = 0x2DA9ECu;
    // 0x2da9ec: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da9f0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2da9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2da9f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2da9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2da9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9fc: 0x0  nop
    ctx->pc = 0x2da9fcu;
    // NOP
    // 0x2daa00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2daa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daa04: 0x0  nop
    ctx->pc = 0x2daa04u;
    // NOP
    // 0x2daa08: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DAA08u;
    {
        const bool branch_taken_0x2daa08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daa08) {
            ctx->pc = 0x2DAA34u;
            goto label_2daa34;
        }
    }
    ctx->pc = 0x2DAA10u;
    // 0x2daa10: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2daa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daa14: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2daa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2daa18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2daa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2daa1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daa1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa20: 0x0  nop
    ctx->pc = 0x2daa20u;
    // NOP
    // 0x2daa24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daa24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daa28: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2daa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2daa2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAA2Cu;
    {
        const bool branch_taken_0x2daa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa2c) {
            ctx->pc = 0x2DAA50u;
            goto label_2daa50;
        }
    }
    ctx->pc = 0x2DAA34u;
label_2daa34:
    // 0x2daa34: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2daa34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2daa38: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2daa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2daa3c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2daa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2daa40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2daa44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daa44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa48: 0x0  nop
    ctx->pc = 0x2daa48u;
    // NOP
    // 0x2daa4c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2daa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_2daa50:
    // 0x2daa50: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2daa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daa54: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2daa54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2daa58: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2daa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2daa5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daa5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa60: 0x0  nop
    ctx->pc = 0x2daa60u;
    // NOP
    // 0x2daa64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2daa64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daa68: 0x0  nop
    ctx->pc = 0x2daa68u;
    // NOP
    // 0x2daa6c: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x2DAA6Cu;
    {
        const bool branch_taken_0x2daa6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daa6c) {
            ctx->pc = 0x2DAC70u;
            goto label_2dac70;
        }
    }
    ctx->pc = 0x2DAA74u;
    // 0x2daa74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2daa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2daa78: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DAA78u;
    SET_GPR_U32(ctx, 31, 0x2DAA80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DAA78u, 0x2DAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA80u;
label_2daa80:
    // 0x2daa80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daa80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa84: 0x0  nop
    ctx->pc = 0x2daa84u;
    // NOP
    // 0x2daa88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2daa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2daa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa90: 0x0  nop
    ctx->pc = 0x2daa90u;
    // NOP
    // 0x2daa94: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2daa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2daa98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daa98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa9c: 0x0  nop
    ctx->pc = 0x2daa9cu;
    // NOP
    // 0x2daaa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2daaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2daaa4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2daaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daaa8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2daaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2daaac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2daab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daab4: 0x0  nop
    ctx->pc = 0x2daab4u;
    // NOP
    // 0x2daab8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2daab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2daabc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2daabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2daac0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2daac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2daac4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2daac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2daac8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2daac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2daacc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2daaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2daad0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2daad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2daad4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2daad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2daad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2daadc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2daadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2daae0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2daae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2daae4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2daae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2daae8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2daae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2daaec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2daaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daaf0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2daaf0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2daaf4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DAAF4u;
    SET_GPR_U32(ctx, 31, 0x2DAAFCu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DAAF4u, 0x2DAAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAFCu;
label_2daafc:
    // 0x2daafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab00: 0x0  nop
    ctx->pc = 0x2dab00u;
    // NOP
    // 0x2dab04: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dab04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dab08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dab08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab0c: 0x0  nop
    ctx->pc = 0x2dab0cu;
    // NOP
    // 0x2dab10: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dab14: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2dab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2dab18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dab1c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dab20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dab24: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dab28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dab2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dab2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab30: 0x0  nop
    ctx->pc = 0x2dab30u;
    // NOP
    // 0x2dab34: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dab38: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dab3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dab3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dab40: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2dab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2dab44: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dab48: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2dab4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dab4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dab50: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dab54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dab54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dab58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2dab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dab5c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2dab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dab60: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dab64: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dab64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dab68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dab68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dab6c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dab6cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dab70: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DAB70u;
    SET_GPR_U32(ctx, 31, 0x2DAB78u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DAB70u, 0x2DAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB78u;
label_2dab78:
    // 0x2dab78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dab78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab7c: 0x0  nop
    ctx->pc = 0x2dab7cu;
    // NOP
    // 0x2dab80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dab80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dab84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dab84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab88: 0x0  nop
    ctx->pc = 0x2dab88u;
    // NOP
    // 0x2dab8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dab8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dab90: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2dab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2dab94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dab94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dab98: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dab9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2daba0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2daba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2daba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2daba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2daba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabac: 0x0  nop
    ctx->pc = 0x2dabacu;
    // NOP
    // 0x2dabb0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dabb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dabb4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2dabb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dabb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dabbc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dabc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dabc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dabc4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dabc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dabc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dabcc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2dabccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2dabd0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dabd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dabd4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2dabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dabd8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2dabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dabdc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dabe0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dabe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dabe4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dabe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dabe8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dabe8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dabec: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DABECu;
    SET_GPR_U32(ctx, 31, 0x2DABF4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DABECu, 0x2DABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABF4u;
label_2dabf4:
    // 0x2dabf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dabf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabf8: 0x0  nop
    ctx->pc = 0x2dabf8u;
    // NOP
    // 0x2dabfc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dabfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dac00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dac00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac04: 0x0  nop
    ctx->pc = 0x2dac04u;
    // NOP
    // 0x2dac08: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dac08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dac0c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2dac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2dac10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dac14: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dac18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dac18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dac1c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dac20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dac24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dac24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac28: 0x0  nop
    ctx->pc = 0x2dac28u;
    // NOP
    // 0x2dac2c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dac30: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2dac34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dac38: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dac3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dac3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dac40: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dac44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dac48: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2dac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2dac4c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dac4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dac50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2dac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dac54: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2dac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dac58: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dac58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dac5c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dac5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dac60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dac60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dac64: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dac64u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dac68: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DAC68u;
    SET_GPR_U32(ctx, 31, 0x2DAC70u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DAC68u, 0x2DAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC70u;
label_2dac70:
    // 0x2dac70: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dac74: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2dac74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2dac78: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dac7c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2dac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2dac80: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dac80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dac84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dac84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dac88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dac88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dac8c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2dac8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dac90: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC98u;
}
