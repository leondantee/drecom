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

// Function: Efm_1wave_mul3
// Address: 0x1d7ef0 - 0x1d8658
void Efm_1wave_mul3_0x1d7ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_1wave_mul3_0x1d7ef0");
#endif

    switch (ctx->pc) {
        case 0x1d7f74u: goto label_1d7f74;
        case 0x1d8038u: goto label_1d8038;
        case 0x1d8118u: goto label_1d8118;
        case 0x1d8124u: goto label_1d8124;
        case 0x1d8194u: goto label_1d8194;
        default: break;
    }

    ctx->pc = 0x1d7ef0u;

    // 0x1d7ef0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1d7ef4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d7ef8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d7efc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d7efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d7f00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d7f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d7f04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d7f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d7f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d7f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d7f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7f14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7f1c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1d7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1d7f20: 0xe7ac00d8  swc1        $f12, 0xD8($sp)
    ctx->pc = 0x1d7f20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1d7f24: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x1d7f24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d7f28: 0xe7ae00e8  swc1        $f14, 0xE8($sp)
    ctx->pc = 0x1d7f28u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d7f2c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1d7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1d7f30: 0xe7af00f8  swc1        $f15, 0xF8($sp)
    ctx->pc = 0x1d7f30u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1d7f34: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d7f38: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d7f3c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1d7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1d7f40: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7f44: 0x8c5600c0  lw          $s6, 0xC0($v0)
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1d7f48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7f4c: 0x8c570058  lw          $s7, 0x58($v0)
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1d7f50: 0x8ef50034  lw          $s5, 0x34($s7)
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1d7f54: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1d7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1d7f58: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7f5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7f60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7F60u;
    {
        const bool branch_taken_0x1d7f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f60) {
            ctx->pc = 0x1D7F74u;
            goto label_1d7f74;
        }
    }
    ctx->pc = 0x1D7F68u;
    // 0x1d7f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7f6c: 0x0  nop
    ctx->pc = 0x1d7f6cu;
    // NOP
    // 0x1d7f70: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d7f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1d7f74:
    // 0x1d7f74: 0x8eb00068  lw          $s0, 0x68($s5)
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1d7f78: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1d7f78u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d7f7c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7f80: 0x8ea200a8  lw          $v0, 0xA8($s5)
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x1d7f84: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d7f88: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d7f8c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d7f90: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d7f94: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d7f98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d7f9c: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x1d7f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d7fa0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x1d7fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d7fa4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d7fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d7fa8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1d7fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7fac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7fb4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7FB4u;
    {
        const bool branch_taken_0x1d7fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7fb4) {
            ctx->pc = 0x1D7FF8u;
            goto label_1d7ff8;
        }
    }
    ctx->pc = 0x1D7FBCu;
    // 0x1d7fbc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7fc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d7fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d7fc8: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x1d7fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fd0: 0x0  nop
    ctx->pc = 0x1d7fd0u;
    // NOP
    // 0x1d7fd4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d7fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d7fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fdc: 0x0  nop
    ctx->pc = 0x1d7fdcu;
    // NOP
    // 0x1d7fe0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1d7fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1d7fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fe8: 0x0  nop
    ctx->pc = 0x1d7fe8u;
    // NOP
    // 0x1d7fec: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1d7fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1d7ff0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D7FF0u;
    {
        const bool branch_taken_0x1d7ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ff0) {
            ctx->pc = 0x1D8030u;
            goto label_1d8030;
        }
    }
    ctx->pc = 0x1D7FF8u;
label_1d7ff8:
    // 0x1d7ff8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ffc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d8004: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1d8004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1d8008: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d8008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d800c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8014: 0x0  nop
    ctx->pc = 0x1d8014u;
    // NOP
    // 0x1d8018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d8018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d801c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d8020: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8024: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d802c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1d802cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_1d8030:
    // 0x1d8030: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x1d8030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1d8034: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x1d8034u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1d8038:
    // 0x1d8038: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1d8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d803c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1d803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d8040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d8044: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1d8048: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1d8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d804c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d804cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8050: 0x0  nop
    ctx->pc = 0x1d8050u;
    // NOP
    // 0x1d8054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8058: 0x0  nop
    ctx->pc = 0x1d8058u;
    // NOP
    // 0x1d805c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D805Cu;
    {
        const bool branch_taken_0x1d805c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d805c) {
            ctx->pc = 0x1D8070u;
            goto label_1d8070;
        }
    }
    ctx->pc = 0x1D8064u;
    // 0x1d8064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8068: 0x0  nop
    ctx->pc = 0x1d8068u;
    // NOP
    // 0x1d806c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d806cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1d8070:
    // 0x1d8070: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1d8070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8074: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8078: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d8078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d807c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1d807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8080: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d8080u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8084: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1d8088: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d808c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1d808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8094: 0x0  nop
    ctx->pc = 0x1d8094u;
    // NOP
    // 0x1d8098: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8098u;
    {
        const bool branch_taken_0x1d8098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8098) {
            ctx->pc = 0x1D80F0u;
            goto label_1d80f0;
        }
    }
    ctx->pc = 0x1D80A0u;
    // 0x1d80a0: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x1d80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d80a4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1d80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d80a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d80ac: 0x0  nop
    ctx->pc = 0x1d80acu;
    // NOP
    // 0x1d80b0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1D80B0u;
    {
        const bool branch_taken_0x1d80b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d80b0) {
            ctx->pc = 0x1D80F0u;
            goto label_1d80f0;
        }
    }
    ctx->pc = 0x1D80B8u;
    // 0x1d80b8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80bc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d80c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d80c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d80c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1d80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d80c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d80cc: 0x0  nop
    ctx->pc = 0x1d80ccu;
    // NOP
    // 0x1d80d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D80D0u;
    {
        const bool branch_taken_0x1d80d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d80d0) {
            ctx->pc = 0x1D80F0u;
            goto label_1d80f0;
        }
    }
    ctx->pc = 0x1D80D8u;
    // 0x1d80d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d80dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d80dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d80e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80E0u;
    {
        const bool branch_taken_0x1d80e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d80e0) {
            ctx->pc = 0x1D80F0u;
            goto label_1d80f0;
        }
    }
    ctx->pc = 0x1D80E8u;
    // 0x1d80e8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d80ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1d80f0:
    // 0x1d80f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d80f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d80f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d80f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d80f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d80fc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1d80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8100: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d8100u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8104: 0x0  nop
    ctx->pc = 0x1d8104u;
    // NOP
    // 0x1d8108: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1d8108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d810c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1d810cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d8110: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1D8110u;
    SET_GPR_U32(ctx, 31, 0x1D8118u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1D8110u, 0x1D8118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8118u;
label_1d8118:
    // 0x1d8118: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d8118u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1d811c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x1D811Cu;
    SET_GPR_U32(ctx, 31, 0x1D8124u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x1D811Cu, 0x1D8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8124u;
label_1d8124:
    // 0x1d8124: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8128: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d8128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d812c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1d812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8134: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d8138: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d813c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8144: 0x0  nop
    ctx->pc = 0x1d8144u;
    // NOP
    // 0x1d8148: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d8148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d814c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d8150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8154: 0x0  nop
    ctx->pc = 0x1d8154u;
    // NOP
    // 0x1d8158: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d815c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8160: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d8160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d8164: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d8164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8168: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d816c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d816cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d8170: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d8170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1d8174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d817c: 0x0  nop
    ctx->pc = 0x1d817cu;
    // NOP
    // 0x1d8180: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1d8180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1d8184: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d8184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d8188: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d8188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d818c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D818Cu;
    SET_GPR_U32(ctx, 31, 0x1D8194u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D8194u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8194u) { return; }
    ctx->pc = 0x1D8194u;
label_1d8194:
    // 0x1d8194: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8198: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d8198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d819c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d81a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1d81a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d81a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D81A4u;
    {
        const bool branch_taken_0x1d81a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d81a4) {
            ctx->pc = 0x1D81B8u;
            goto label_1d81b8;
        }
    }
    ctx->pc = 0x1D81ACu;
    // 0x1d81ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d81acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d81b0: 0x0  nop
    ctx->pc = 0x1d81b0u;
    // NOP
    // 0x1d81b4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d81b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1d81b8:
    // 0x1d81b8: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d81b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d81bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d81bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d81c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d81c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d81c4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D81C4u;
    {
        const bool branch_taken_0x1d81c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d81c4) {
            ctx->pc = 0x1D8250u;
            goto label_1d8250;
        }
    }
    ctx->pc = 0x1D81CCu;
    // 0x1d81cc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d81d0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d81d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d81d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d81d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d81d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d81dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d81e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d81e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d81e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d81e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d81ec: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d81f0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d81f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d81f4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d81f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d81f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d81fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8200: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8204: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8208: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d8208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d820c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8210: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d8210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d8214: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8218: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d821c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8224: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8228: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d822c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8230: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d8230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d8234: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8238: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d823c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8244: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8248: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d824c: 0x0  nop
    ctx->pc = 0x1d824cu;
    // NOP
label_1d8250:
    // 0x1d8250: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d8250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d8254: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8258: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d8258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d825c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D825Cu;
    {
        const bool branch_taken_0x1d825c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d825c) {
            ctx->pc = 0x1D82E8u;
            goto label_1d82e8;
        }
    }
    ctx->pc = 0x1D8264u;
    // 0x1d8264: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8268: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d8268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d826c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d826cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8270: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d827c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d8280: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d8284: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d8284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8288: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d8288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d828c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d828cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8290: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d829c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d82a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d82a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d82a4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82a8: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d82a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d82ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d82acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d82b0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d82b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d82b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d82bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d82c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d82c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d82c4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82c8: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d82c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d82cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d82ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d82d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d82d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d82d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d82dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d82e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d82e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d82e4: 0x0  nop
    ctx->pc = 0x1d82e4u;
    // NOP
label_1d82e8:
    // 0x1d82e8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d82e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d82ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d82ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d82f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d82f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d82f4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D82F4u;
    {
        const bool branch_taken_0x1d82f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d82f4) {
            ctx->pc = 0x1D8380u;
            goto label_1d8380;
        }
    }
    ctx->pc = 0x1D82FCu;
    // 0x1d82fc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d82fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8300: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8304: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8308: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d830c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8314: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d8314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d8318: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d831c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8320: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8324: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8328: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d832c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8334: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8338: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d8338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d833c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8340: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8344: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8348: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d834c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8354: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8358: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d835c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8360: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8364: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8368: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d836c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8374: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8378: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d837c: 0x0  nop
    ctx->pc = 0x1d837cu;
    // NOP
label_1d8380:
    // 0x1d8380: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d8380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d8384: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8388: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d8388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d838c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D838Cu;
    {
        const bool branch_taken_0x1d838c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d838c) {
            ctx->pc = 0x1D8418u;
            goto label_1d8418;
        }
    }
    ctx->pc = 0x1D8394u;
    // 0x1d8394: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8398: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d8398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d839c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d839cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d83a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d83a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d83a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d83ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d83acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d83b0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d83b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d83b4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83b8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d83b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d83bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d83bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d83c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d83c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d83c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d83cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d83d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d83d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d83d4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d83d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83d8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d83d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d83dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d83dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d83e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d83e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d83e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d83e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d83ec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d83f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d83f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d83f4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83f8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d83f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d83fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d83fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8400: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d840c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8410: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d8414: 0x0  nop
    ctx->pc = 0x1d8414u;
    // NOP
label_1d8418:
    // 0x1d8418: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d841c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8420: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D8420u;
    {
        const bool branch_taken_0x1d8420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8420) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D8428u;
    // 0x1d8428: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d842c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d842cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8430: 0x0  nop
    ctx->pc = 0x1d8430u;
    // NOP
    // 0x1d8434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8438: 0x0  nop
    ctx->pc = 0x1d8438u;
    // NOP
    // 0x1d843c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1D843Cu;
    {
        const bool branch_taken_0x1d843c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d843c) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D8444u;
    // 0x1d8444: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d8444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8448: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d8448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1d844c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d844cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8450: 0x0  nop
    ctx->pc = 0x1d8450u;
    // NOP
    // 0x1d8454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d8454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8458: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d845c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8464: 0x0  nop
    ctx->pc = 0x1d8464u;
    // NOP
    // 0x1d8468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d846c: 0x0  nop
    ctx->pc = 0x1d846cu;
    // NOP
    // 0x1d8470: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8470u;
    {
        const bool branch_taken_0x1d8470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8470) {
            ctx->pc = 0x1D8488u;
            goto label_1d8488;
        }
    }
    ctx->pc = 0x1D8478u;
    // 0x1d8478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d847c: 0x0  nop
    ctx->pc = 0x1d847cu;
    // NOP
    // 0x1d8480: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d8484: 0x0  nop
    ctx->pc = 0x1d8484u;
    // NOP
label_1d8488:
    // 0x1d8488: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d848c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8490: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d8490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8494: 0x0  nop
    ctx->pc = 0x1d8494u;
    // NOP
    // 0x1d8498: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1D8498u;
    {
        const bool branch_taken_0x1d8498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8498) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D84A0u;
    // 0x1d84a0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84a4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1d84a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d84a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d84ac: 0x0  nop
    ctx->pc = 0x1d84acu;
    // NOP
    // 0x1d84b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d84b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d84b4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d84b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d84b8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84bc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d84c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d84c4: 0x0  nop
    ctx->pc = 0x1d84c4u;
    // NOP
    // 0x1d84c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D84C8u;
    {
        const bool branch_taken_0x1d84c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d84c8) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D84D0u;
    // 0x1d84d0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84d4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d84d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1d84d8:
    // 0x1d84d8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84dc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d84e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d84e4: 0x0  nop
    ctx->pc = 0x1d84e4u;
    // NOP
    // 0x1d84e8: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x1D84E8u;
    {
        const bool branch_taken_0x1d84e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d84e8) {
            ctx->pc = 0x1D8588u;
            goto label_1d8588;
        }
    }
    ctx->pc = 0x1D84F0u;
    // 0x1d84f0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84f4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d84f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d84fc: 0x0  nop
    ctx->pc = 0x1d84fcu;
    // NOP
    // 0x1d8500: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8500u;
    {
        const bool branch_taken_0x1d8500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8500) {
            ctx->pc = 0x1D854Cu;
            goto label_1d854c;
        }
    }
    ctx->pc = 0x1D8508u;
    // 0x1d8508: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d850c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1d8510: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1d8510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1d8514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8518: 0x0  nop
    ctx->pc = 0x1d8518u;
    // NOP
    // 0x1d851c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d851cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8520: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8524: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8528: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d852c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d852cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8530: 0x0  nop
    ctx->pc = 0x1d8530u;
    // NOP
    // 0x1d8534: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8534u;
    {
        const bool branch_taken_0x1d8534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8534) {
            ctx->pc = 0x1D8588u;
            goto label_1d8588;
        }
    }
    ctx->pc = 0x1D853Cu;
    // 0x1d853c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8540: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8544: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8544u;
    {
        const bool branch_taken_0x1d8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8544) {
            ctx->pc = 0x1D8588u;
            goto label_1d8588;
        }
    }
    ctx->pc = 0x1D854Cu;
label_1d854c:
    // 0x1d854c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8550: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d8550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1d8554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8558: 0x0  nop
    ctx->pc = 0x1d8558u;
    // NOP
    // 0x1d855c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d855cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d8560: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8564: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8568: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d856c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d856cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8570: 0x0  nop
    ctx->pc = 0x1d8570u;
    // NOP
    // 0x1d8574: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8574u;
    {
        const bool branch_taken_0x1d8574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8574) {
            ctx->pc = 0x1D8588u;
            goto label_1d8588;
        }
    }
    ctx->pc = 0x1D857Cu;
    // 0x1d857c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8580: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8584: 0x0  nop
    ctx->pc = 0x1d8584u;
    // NOP
label_1d8588:
    // 0x1d8588: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d858c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d858cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8590: 0x0  nop
    ctx->pc = 0x1d8590u;
    // NOP
    // 0x1d8594: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d8594u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8598: 0x0  nop
    ctx->pc = 0x1d8598u;
    // NOP
    // 0x1d859c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D859Cu;
    {
        const bool branch_taken_0x1d859c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d859c) {
            ctx->pc = 0x1D85D0u;
            goto label_1d85d0;
        }
    }
    ctx->pc = 0x1D85A4u;
    // 0x1d85a4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d85a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d85a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d85ac: 0x0  nop
    ctx->pc = 0x1d85acu;
    // NOP
    // 0x1d85b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d85b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d85b4: 0x0  nop
    ctx->pc = 0x1d85b4u;
    // NOP
    // 0x1d85b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D85B8u;
    {
        const bool branch_taken_0x1d85b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d85b8) {
            ctx->pc = 0x1D85D0u;
            goto label_1d85d0;
        }
    }
    ctx->pc = 0x1D85C0u;
    // 0x1d85c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d85c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d85c4: 0x0  nop
    ctx->pc = 0x1d85c4u;
    // NOP
    // 0x1d85c8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d85c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d85cc: 0x0  nop
    ctx->pc = 0x1d85ccu;
    // NOP
label_1d85d0:
    // 0x1d85d0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d85d4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1d85d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d85d8: 0x1680fe97  bnez        $s4, . + 4 + (-0x169 << 2)
    ctx->pc = 0x1D85D8u;
    {
        const bool branch_taken_0x1d85d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d85d8) {
            ctx->pc = 0x1D8038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8038;
        }
    }
    ctx->pc = 0x1D85E0u;
    // 0x1d85e0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1d85e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1d85e4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d85e8: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1d85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1d85ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d85ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d85f0: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1d85f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d85f4: 0x1460fe5f  bnez        $v1, . + 4 + (-0x1A1 << 2)
    ctx->pc = 0x1D85F4u;
    {
        const bool branch_taken_0x1d85f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d85f4) {
            ctx->pc = 0x1D7F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f74;
        }
    }
    ctx->pc = 0x1D85FCu;
    // 0x1d85fc: 0x26f70090  addiu       $s7, $s7, 0x90
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x1d8600: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d8604: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d8608: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x1d8608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x1d860c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d8610: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1d8610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1d8614: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8618: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d8618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d861c: 0x1460fe55  bnez        $v1, . + 4 + (-0x1AB << 2)
    ctx->pc = 0x1D861Cu;
    {
        const bool branch_taken_0x1d861c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d861c) {
            ctx->pc = 0x1D7F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f74;
        }
    }
    ctx->pc = 0x1D8624u;
    // 0x1d8624: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d8624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8628: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d8628u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d862c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d862cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8630: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8630u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8634: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d8634u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8638: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d863c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d863cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d864c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d8650: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8658u;
}
