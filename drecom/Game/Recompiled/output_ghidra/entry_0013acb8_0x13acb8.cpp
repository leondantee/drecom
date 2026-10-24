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

// Function: entry_0013acb8
// Address: 0x13acb8 - 0x13b1e8
void entry_0013acb8_0x13acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013acb8_0x13acb8");
#endif

    switch (ctx->pc) {
        case 0x13ada8u: goto label_13ada8;
        case 0x13adc8u: goto label_13adc8;
        case 0x13ade8u: goto label_13ade8;
        case 0x13ae08u: goto label_13ae08;
        case 0x13b068u: goto label_13b068;
        case 0x13b128u: goto label_13b128;
        default: break;
    }

    ctx->pc = 0x13acb8u;

    // 0x13acb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13acbc: 0x24424e90  addiu       $v0, $v0, 0x4E90
    ctx->pc = 0x13acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20112));
    // 0x13acc0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13acc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13acc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13acc8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13acc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13accc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x13acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13acd0: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x13acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x13acd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x13acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13acd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13acdc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13ace0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13ace0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ace4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ace8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13acec: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13acecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13acf0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13acf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13acf4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13acf8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13acfc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ad00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13ad00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ad04: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x13ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13ad08: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13ad0c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ad10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13ad10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ad14: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x13ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13ad18: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13ad1c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x13ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad20: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x13ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x13ad24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ad24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad28: 0x0  nop
    ctx->pc = 0x13ad28u;
    // NOP
    // 0x13ad2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ad2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ad30: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x13ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x13ad34: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x13ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad38: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x13ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x13ad3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x13ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x13ad40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ad40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad44: 0x0  nop
    ctx->pc = 0x13ad44u;
    // NOP
    // 0x13ad48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ad48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ad4c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x13ad4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13ad50: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x13ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad54: 0x3c02449c  lui         $v0, 0x449C
    ctx->pc = 0x13ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17564 << 16));
    // 0x13ad58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13ad5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ad5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad60: 0x0  nop
    ctx->pc = 0x13ad60u;
    // NOP
    // 0x13ad64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ad64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ad68: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x13ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x13ad6c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x13ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad70: 0x3c0244c1  lui         $v0, 0x44C1
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17601 << 16));
    // 0x13ad74: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x13ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x13ad78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ad78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad7c: 0x0  nop
    ctx->pc = 0x13ad7cu;
    // NOP
    // 0x13ad80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ad80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ad84: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x13ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x13ad88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13ad88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13ad8c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13ad90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13ad94: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x13ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13ad98: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13ad98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ad9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13ad9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ada0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x13ADA0u;
    SET_GPR_U32(ctx, 31, 0x13ADA8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x13ADA8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13ADA8u) { return; }
    ctx->pc = 0x13ADA8u;
label_13ada8:
    // 0x13ada8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13adac: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13adacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13adb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13adb4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x13adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13adb8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13adbc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13adbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13adc0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x13ADC0u;
    SET_GPR_U32(ctx, 31, 0x13ADC8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x13ADC8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13ADC8u) { return; }
    ctx->pc = 0x13ADC8u;
label_13adc8:
    // 0x13adc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13adcc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13adccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13add0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13add4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x13add4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13add8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x13add8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13addc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13addcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ade0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x13ADE0u;
    SET_GPR_U32(ctx, 31, 0x13ADE8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x13ADE8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13ADE8u) { return; }
    ctx->pc = 0x13ADE8u;
label_13ade8:
    // 0x13ade8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13ade8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13adec: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13adecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13adf0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13adf4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x13adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13adf8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x13adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13adfc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13adfcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ae00: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x13AE00u;
    SET_GPR_U32(ctx, 31, 0x13AE08u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x13AE08u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13AE08u) { return; }
    ctx->pc = 0x13AE08u;
label_13ae08:
    // 0x13ae08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ae0c: 0x44000f6  bltz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x13AE0Cu;
    {
        const bool branch_taken_0x13ae0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13ae0c) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE14u;
    // 0x13ae14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ae18: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13ae18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13ae1c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13ae1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13ae20: 0x102000f1  beqz        $at, . + 4 + (0xF1 << 2)
    ctx->pc = 0x13AE20u;
    {
        const bool branch_taken_0x13ae20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae20) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE28u;
    // 0x13ae28: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13ae2c: 0x44000ee  bltz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x13AE2Cu;
    {
        const bool branch_taken_0x13ae2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13ae2c) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE34u;
    // 0x13ae34: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x13ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13ae38: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13ae38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13ae3c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13ae3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13ae40: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
    ctx->pc = 0x13AE40u;
    {
        const bool branch_taken_0x13ae40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae40) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE48u;
    // 0x13ae48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ae4c: 0x44000e6  bltz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x13AE4Cu;
    {
        const bool branch_taken_0x13ae4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13ae4c) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE54u;
    // 0x13ae54: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ae58: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13ae58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13ae5c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13ae5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13ae60: 0x102000e1  beqz        $at, . + 4 + (0xE1 << 2)
    ctx->pc = 0x13AE60u;
    {
        const bool branch_taken_0x13ae60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae60) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE68u;
    // 0x13ae68: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x13ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x13ae6c: 0x44000de  bltz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x13AE6Cu;
    {
        const bool branch_taken_0x13ae6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13ae6c) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE74u;
    // 0x13ae74: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x13ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x13ae78: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13ae78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13ae7c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13ae7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13ae80: 0x102000d9  beqz        $at, . + 4 + (0xD9 << 2)
    ctx->pc = 0x13AE80u;
    {
        const bool branch_taken_0x13ae80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae80) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE88u;
    // 0x13ae88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ae8c: 0x44000d6  bltz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x13AE8Cu;
    {
        const bool branch_taken_0x13ae8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13ae8c) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AE94u;
    // 0x13ae94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ae98: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13ae98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13ae9c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13ae9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13aea0: 0x102000d1  beqz        $at, . + 4 + (0xD1 << 2)
    ctx->pc = 0x13AEA0u;
    {
        const bool branch_taken_0x13aea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aea0) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AEA8u;
    // 0x13aea8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x13aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x13aeac: 0x44000ce  bltz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x13AEACu;
    {
        const bool branch_taken_0x13aeac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13aeac) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AEB4u;
    // 0x13aeb4: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x13aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x13aeb8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13aeb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13aebc: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13aebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13aec0: 0x102000c9  beqz        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x13AEC0u;
    {
        const bool branch_taken_0x13aec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aec0) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AEC8u;
    // 0x13aec8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13aecc: 0x44000c6  bltz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x13AECCu;
    {
        const bool branch_taken_0x13aecc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13aecc) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AED4u;
    // 0x13aed4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13aed8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13aed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13aedc: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13aedcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13aee0: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
    ctx->pc = 0x13AEE0u;
    {
        const bool branch_taken_0x13aee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aee0) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AEE8u;
    // 0x13aee8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x13aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x13aeec: 0x44000be  bltz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x13AEECu;
    {
        const bool branch_taken_0x13aeec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13aeec) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AEF4u;
    // 0x13aef4: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x13aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x13aef8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x13aef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x13aefc: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13aefcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13af00: 0x102000b9  beqz        $at, . + 4 + (0xB9 << 2)
    ctx->pc = 0x13AF00u;
    {
        const bool branch_taken_0x13af00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af00) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF08u;
    // 0x13af08: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x13af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x13af0c: 0x28420640  slti        $v0, $v0, 0x640
    ctx->pc = 0x13af0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x13af10: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x13AF10u;
    {
        const bool branch_taken_0x13af10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af10) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF18u;
    // 0x13af18: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x13af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x13af1c: 0x28420640  slti        $v0, $v0, 0x640
    ctx->pc = 0x13af1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x13af20: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x13AF20u;
    {
        const bool branch_taken_0x13af20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af20) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF28u;
    // 0x13af28: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x13af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x13af2c: 0x28420640  slti        $v0, $v0, 0x640
    ctx->pc = 0x13af2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x13af30: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x13AF30u;
    {
        const bool branch_taken_0x13af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af30) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF38u;
    // 0x13af38: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x13af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x13af3c: 0x28420640  slti        $v0, $v0, 0x640
    ctx->pc = 0x13af3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x13af40: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x13AF40u;
    {
        const bool branch_taken_0x13af40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af40) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF48u;
    // 0x13af48: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x13af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x13af4c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x13af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x13af50: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x13af50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x13af54: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13af54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13af58: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
    ctx->pc = 0x13AF58u;
    {
        const bool branch_taken_0x13af58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af58) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF60u;
    // 0x13af60: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x13af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x13af64: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x13af64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x13af68: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x13af68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x13af6c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13af6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13af70: 0x1020009d  beqz        $at, . + 4 + (0x9D << 2)
    ctx->pc = 0x13AF70u;
    {
        const bool branch_taken_0x13af70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af70) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF78u;
    // 0x13af78: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x13af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x13af7c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x13af7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x13af80: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x13af80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x13af84: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13af84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13af88: 0x10200097  beqz        $at, . + 4 + (0x97 << 2)
    ctx->pc = 0x13AF88u;
    {
        const bool branch_taken_0x13af88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af88) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AF90u;
    // 0x13af90: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x13af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x13af94: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x13af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x13af98: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x13af98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x13af9c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13af9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13afa0: 0x10200091  beqz        $at, . + 4 + (0x91 << 2)
    ctx->pc = 0x13AFA0u;
    {
        const bool branch_taken_0x13afa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13afa0) {
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13AFA8u;
    // 0x13afa8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13afac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13afb0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13afb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x13afb8: 0x24427650  addiu       $v0, $v0, 0x7650
    ctx->pc = 0x13afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30288));
    // 0x13afbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13afc0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13afc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13afc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13afcc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13afccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13afd0: 0x34422209  ori         $v0, $v0, 0x2209
    ctx->pc = 0x13afd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8713);
    // 0x13afd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13afd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13afdc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x13afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x13afe0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13afe4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13afe8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13afe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13afec: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13aff0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13aff4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13aff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13aff8: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x13aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13affc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13affcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b000: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13b004: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13b008: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x13b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13b00c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b010: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b014: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13b014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b018: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x13b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x13b01c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13b020: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b024: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x13b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x13b028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b02c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x13b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13b030: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13b030u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13b034: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x13b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x13b038: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b03c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13b040: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x13b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x13b044: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b048: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b04c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x13b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13b050: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b054: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b058: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x13b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x13b05c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13b05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b060: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x13B060u;
    SET_GPR_U32(ctx, 31, 0x13B068u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x13B060u, 0x13B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B068u;
label_13b068:
    // 0x13b068: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13b068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13b06c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13b070: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13b070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13b074: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x13b078: 0x24427650  addiu       $v0, $v0, 0x7650
    ctx->pc = 0x13b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30288));
    // 0x13b07c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b080: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x13b080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x13b084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b088: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13b088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13b08c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13b090: 0x34422209  ori         $v0, $v0, 0x2209
    ctx->pc = 0x13b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8713);
    // 0x13b094: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13b094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13b098: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b09c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x13b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x13b0a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13b0a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b0a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b0ac: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x13b0b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13b0b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b0b8: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x13b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13b0bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b0c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13b0c4: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13b0c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13b0c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x13b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13b0cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b0d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b0d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13b0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b0d8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x13b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x13b0dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13b0e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b0e4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x13b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x13b0e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b0ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13b0f0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13b0f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13b0f4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x13b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x13b0f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b0fc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b100: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x13b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x13b104: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b108: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b10c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x13b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13b110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b114: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b118: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x13b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x13b11c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13b11cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b120: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x13B120u;
    SET_GPR_U32(ctx, 31, 0x13B128u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x13B120u, 0x13B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B128u;
label_13b128:
    // 0x13b128: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13b128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13b12c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13b130: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13b130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13b134: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x13b138: 0x24427650  addiu       $v0, $v0, 0x7650
    ctx->pc = 0x13b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30288));
    // 0x13b13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b140: 0x24500048  addiu       $s0, $v0, 0x48
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x13b144: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b148: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13b148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13b14c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13b150: 0x34422209  ori         $v0, $v0, 0x2209
    ctx->pc = 0x13b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8713);
    // 0x13b154: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13b154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13b158: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b15c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x13b15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x13b160: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13b160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13b164: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b168: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13b168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b16c: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x13b170: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13b174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b178: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x13b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13b17c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b180: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13b184: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13b184u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13b188: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x13b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13b18c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b190: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b194: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13b194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b198: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x13b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x13b19c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13b1a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b1a4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x13b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x13b1a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b1ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13b1b0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13b1b4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x13b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x13b1b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b1bc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b1c0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x13b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x13b1c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b1c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13b1cc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x13b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13b1d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13b1d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b1d8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x13b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x13b1dc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13b1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b1e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x13B1E0u;
    SET_GPR_U32(ctx, 31, 0x13B1E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x13B1E0u, 0x13B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1E8u;
}
