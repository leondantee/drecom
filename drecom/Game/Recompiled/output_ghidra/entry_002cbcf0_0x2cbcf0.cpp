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

// Function: entry_002cbcf0
// Address: 0x2cbcf0 - 0x2cc11c
void entry_002cbcf0_0x2cbcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cbcf0_0x2cbcf0");
#endif

    switch (ctx->pc) {
        case 0x2cbd1cu: goto label_2cbd1c;
        case 0x2cbd24u: goto label_2cbd24;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbee4u: goto label_2cbee4;
        case 0x2cbf1cu: goto label_2cbf1c;
        case 0x2cbf90u: goto label_2cbf90;
        case 0x2cbfc8u: goto label_2cbfc8;
        case 0x2cc000u: goto label_2cc000;
        case 0x2cc07cu: goto label_2cc07c;
        case 0x2cc0b4u: goto label_2cc0b4;
        case 0x2cc0ecu: goto label_2cc0ec;
        default: break;
    }

    ctx->pc = 0x2cbcf0u;

    // 0x2cbcf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbcf4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbcf8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2cbcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cbcfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cbd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd04: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2cbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2cbd08: 0x24060401  addiu       $a2, $zero, 0x401
    ctx->pc = 0x2cbd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2cbd0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cbd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cbd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cbd14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CBD14u;
    SET_GPR_U32(ctx, 31, 0x2CBD1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CBD14u, 0x2CBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD1Cu;
label_2cbd1c:
    // 0x2cbd1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CBD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CBD1Cu, 0x2CBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD24u;
label_2cbd24:
    // 0x2cbd24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cbd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cbd28: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cbd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cbd2c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cbd30: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2cbd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cbd34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2cbd34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2cbd38: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cbd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd3c: 0xa4a4127c  sh          $a0, 0x127C($a1)
    ctx->pc = 0x2cbd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cbd40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd48: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cbd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbd4c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2cbd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2cbd50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd58: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2cbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cbd5c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cbd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cbd60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd68: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2cbd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2cbd6c: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x2cbd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2cbd70: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2cbd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd74: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2cbd78: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2cbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2cbd7c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2cbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cbd80: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2cbd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cbd84: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x2cbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x2cbd88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd90: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cbd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cbd94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd9c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cbd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cbda0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cbda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbda4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbda8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2cbda8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbdac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbdb0: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2cbdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbdb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cbdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cbdb8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2cbdb8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbdbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cbdbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cbdc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cbdc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbdc8: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2cbdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbdcc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2cbdd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbdd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cbdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cbdd8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2cbdd8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cbddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbde0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2cbde0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cbde4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cbde8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbdec: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2cbdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbdf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cbdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cbdf4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2cbdf4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbdf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cbdf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cbdfc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2cbdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cbe00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbe08: 0x0  nop
    ctx->pc = 0x2cbe08u;
    // NOP
    // 0x2cbe0c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cbe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cbe10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cbe14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2cbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cbe18: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CBE18u;
    SET_GPR_U32(ctx, 31, 0x2CBE20u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CBE20u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CBE20u) { return; }
    ctx->pc = 0x2CBE20u;
label_2cbe20:
    // 0x2cbe20: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x2cbe24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe28: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cbe2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe34: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cbe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cbe38: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x2cbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x2cbe3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbe3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe40: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cbe44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe4c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cbe4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cbe50: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x2cbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x2cbe54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbe54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe58: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cbe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cbe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe64: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cbe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cbe68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbe68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbe6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbe74: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cbe74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cbe78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cbe80: 0x24500320  addiu       $s0, $v0, 0x320
    ctx->pc = 0x2cbe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2cbe84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2cbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbe88: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2cbe88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2cbe8c: 0x34620003  ori         $v0, $v1, 0x3
    ctx->pc = 0x2cbe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2cbe90: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2cbe90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cbe94: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cbe94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cbe98: 0x3043fff7  andi        $v1, $v0, 0xFFF7
    ctx->pc = 0x2cbe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cbe9c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2cbe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbea0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBEA0u;
    SET_GPR_U32(ctx, 31, 0x2CBEA8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBEA0u, 0x2CBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEA8u;
label_2cbea8:
    // 0x2cbea8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2cbeac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbeb0: 0x0  nop
    ctx->pc = 0x2cbeb0u;
    // NOP
    // 0x2cbeb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbeb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbeb8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cbebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbec0: 0x0  nop
    ctx->pc = 0x2cbec0u;
    // NOP
    // 0x2cbec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbec8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2cbec8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2cbecc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbed4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbed8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cbed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cbedc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBEDCu;
    SET_GPR_U32(ctx, 31, 0x2CBEE4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBEDCu, 0x2CBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEE4u;
label_2cbee4:
    // 0x2cbee4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2cbee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cbee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbeec: 0x0  nop
    ctx->pc = 0x2cbeecu;
    // NOP
    // 0x2cbef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbef4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2cbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2cbef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbefc: 0x0  nop
    ctx->pc = 0x2cbefcu;
    // NOP
    // 0x2cbf00: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cbf00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf04: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbf08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbf10: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2cbf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2cbf14: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBF14u;
    SET_GPR_U32(ctx, 31, 0x2CBF1Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBF14u, 0x2CBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF1Cu;
label_2cbf1c:
    // 0x2cbf1c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2cbf20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbf24: 0x0  nop
    ctx->pc = 0x2cbf24u;
    // NOP
    // 0x2cbf28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbf28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbf2c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cbf30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbf34: 0x0  nop
    ctx->pc = 0x2cbf34u;
    // NOP
    // 0x2cbf38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf3c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2cbf3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2cbf40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cbf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbf44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbf44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf48: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbf4c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2cbf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2cbf50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbf54: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cbf58: 0x245015e0  addiu       $s0, $v0, 0x15E0
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
    // 0x2cbf5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbf60: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cbf60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cbf64: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cbf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cbf68: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cbf68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cbf6c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x2cbf6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cbf70: 0x3082fff7  andi        $v0, $a0, 0xFFF7
    ctx->pc = 0x2cbf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
    // 0x2cbf74: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cbf74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cbf78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbf7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbf80: 0x0  nop
    ctx->pc = 0x2cbf80u;
    // NOP
    // 0x2cbf84: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2cbf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2cbf88: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBF88u;
    SET_GPR_U32(ctx, 31, 0x2CBF90u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBF88u, 0x2CBF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF90u;
label_2cbf90:
    // 0x2cbf90: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x2cbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x2cbf94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cbf94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbf98: 0x0  nop
    ctx->pc = 0x2cbf98u;
    // NOP
    // 0x2cbf9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbf9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbfa0: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x2cbfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
    // 0x2cbfa4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2cbfa4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbfa8: 0x0  nop
    ctx->pc = 0x2cbfa8u;
    // NOP
    // 0x2cbfac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cbfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbfb0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbfb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbfb8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbfbc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cbfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cbfc0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBFC0u;
    SET_GPR_U32(ctx, 31, 0x2CBFC8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBFC0u, 0x2CBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFC8u;
label_2cbfc8:
    // 0x2cbfc8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cbfcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbfd0: 0x0  nop
    ctx->pc = 0x2cbfd0u;
    // NOP
    // 0x2cbfd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbfd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbfd8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cbfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbfe0: 0x0  nop
    ctx->pc = 0x2cbfe0u;
    // NOP
    // 0x2cbfe4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cbfe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbfe8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbfec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbff0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2cbff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbff4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2cbff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2cbff8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBFF8u;
    SET_GPR_U32(ctx, 31, 0x2CC000u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBFF8u, 0x2CC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC000u;
label_2cc000:
    // 0x2cc000: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x2cc000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x2cc004: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2cc004u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc008: 0x0  nop
    ctx->pc = 0x2cc008u;
    // NOP
    // 0x2cc00c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc010: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x2cc010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
    // 0x2cc014: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2cc014u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc018: 0x0  nop
    ctx->pc = 0x2cc018u;
    // NOP
    // 0x2cc01c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc020: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc028: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc02c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2cc030: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc034: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x2cc034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2cc038: 0x24501770  addiu       $s0, $v0, 0x1770
    ctx->pc = 0x2cc038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2cc03c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc040: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc044: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc048: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2cc048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2cc04c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc050: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC050u;
    {
        const bool branch_taken_0x2cc050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc050) {
            ctx->pc = 0x2CC11Cu;
            return;
        }
    }
    ctx->pc = 0x2CC058u;
    // 0x2cc058: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc05c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc060: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc064: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc064u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc068: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc06c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc070: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc074: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC074u;
    SET_GPR_U32(ctx, 31, 0x2CC07Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC074u, 0x2CC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC07Cu;
label_2cc07c:
    // 0x2cc07c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc084: 0x0  nop
    ctx->pc = 0x2cc084u;
    // NOP
    // 0x2cc088: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc08c: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc094: 0x0  nop
    ctx->pc = 0x2cc094u;
    // NOP
    // 0x2cc098: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc09c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0a4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc0a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc0ac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC0ACu;
    SET_GPR_U32(ctx, 31, 0x2CC0B4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC0ACu, 0x2CC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0B4u;
label_2cc0b4:
    // 0x2cc0b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc0b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc0bc: 0x0  nop
    ctx->pc = 0x2cc0bcu;
    // NOP
    // 0x2cc0c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc0c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc0cc: 0x0  nop
    ctx->pc = 0x2cc0ccu;
    // NOP
    // 0x2cc0d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc0d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0d4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc0e0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc0e4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC0E4u;
    SET_GPR_U32(ctx, 31, 0x2CC0ECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC0E4u, 0x2CC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0ECu;
label_2cc0ec:
    // 0x2cc0ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc0f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc0f4: 0x0  nop
    ctx->pc = 0x2cc0f4u;
    // NOP
    // 0x2cc0f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc0fc: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc104: 0x0  nop
    ctx->pc = 0x2cc104u;
    // NOP
    // 0x2cc108: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc10c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc114: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc118: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2cc11cu;
}
