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

// Function: entry_001ac9b0
// Address: 0x1ac9b0 - 0x1acc68
void entry_001ac9b0_0x1ac9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac9b0_0x1ac9b0");
#endif

    switch (ctx->pc) {
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc30u: goto label_1acc30;
        default: break;
    }

    ctx->pc = 0x1ac9b0u;

    // 0x1ac9b0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac9b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ac9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ac9b8: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x1AC9B8u;
    {
        const bool branch_taken_0x1ac9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9b8) {
            ctx->pc = 0x1ACC68u;
            return;
        }
    }
    ctx->pc = 0x1AC9C0u;
    // 0x1ac9c0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1ac9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac9c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ac9c8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1ac9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac9cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1ac9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1ac9d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1ac9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1ac9d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ac9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ac9d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac9e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ac9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ac9e4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1ac9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ac9e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1ac9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1ac9ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1ac9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1ac9f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ac9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ac9f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac9fc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1ac9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aca00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aca04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aca08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aca0c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aca0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aca10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aca14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aca14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aca18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aca18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aca1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca20: 0x0  nop
    ctx->pc = 0x1aca20u;
    // NOP
    // 0x1aca24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aca24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aca28: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x1aca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x1aca2c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1aca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1aca30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca34: 0x0  nop
    ctx->pc = 0x1aca34u;
    // NOP
    // 0x1aca38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aca38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aca3c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aca40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca44: 0x0  nop
    ctx->pc = 0x1aca44u;
    // NOP
    // 0x1aca48: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aca48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aca4c: 0x938380c8  lbu         $v1, -0x7F38($gp)
    ctx->pc = 0x1aca4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1aca50: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aca54: 0xa38280c8  sb          $v0, -0x7F38($gp)
    ctx->pc = 0x1aca54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934728), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aca58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aca5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aca60: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aca64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aca68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aca68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aca6c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aca70: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aca70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aca74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aca78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aca78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aca7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca84: 0x0  nop
    ctx->pc = 0x1aca84u;
    // NOP
    // 0x1aca88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aca88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aca8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aca8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aca90: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1aca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1aca94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aca98: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aca9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acaa0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acaa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acaac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1acaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1acab0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acab4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1acab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1acab8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1acab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acabc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acac4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1acac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1acac8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1acac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1acacc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1acaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1acad0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acad4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1acad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1acad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acadc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acae0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acae8: 0x0  nop
    ctx->pc = 0x1acae8u;
    // NOP
    // 0x1acaec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1acaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1acaf0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1acaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1acaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acaf8: 0x0  nop
    ctx->pc = 0x1acaf8u;
    // NOP
    // 0x1acafc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1acafcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1acb00: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1acb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1acb04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1acb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1acb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb0c: 0x0  nop
    ctx->pc = 0x1acb0cu;
    // NOP
    // 0x1acb10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1acb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1acb14: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1acb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1acb18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acb1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1acb20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acb24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acb28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acb2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acb30: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1acb30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1acb34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acb38: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1acb38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1acb3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1acb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acb40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acb48: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1acb4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1acb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1acb50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1acb54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acb58: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1acb58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1acb5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acb60: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acb64: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acb64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acb68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb6c: 0x0  nop
    ctx->pc = 0x1acb6cu;
    // NOP
    // 0x1acb70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1acb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1acb74: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x1acb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x1acb78: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1acb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1acb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb80: 0x0  nop
    ctx->pc = 0x1acb80u;
    // NOP
    // 0x1acb84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1acb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1acb88: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1acb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb90: 0x0  nop
    ctx->pc = 0x1acb90u;
    // NOP
    // 0x1acb94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1acb94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1acb98: 0x938380c8  lbu         $v1, -0x7F38($gp)
    ctx->pc = 0x1acb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1acb9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1acba0: 0xa38280c8  sb          $v0, -0x7F38($gp)
    ctx->pc = 0x1acba0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934728), (uint8_t)GPR_U32(ctx, 2));
    // 0x1acba4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1acba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1acba8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1acba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1acbac: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1acbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1acbb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acbb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1acbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acbb8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acbbc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acbbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acbc0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acbc4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acbc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1acbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1acbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acbd0: 0x0  nop
    ctx->pc = 0x1acbd0u;
    // NOP
    // 0x1acbd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1acbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1acbd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1acbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1acbdc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1acbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1acbe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1acbe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acbe4: 0x0  nop
    ctx->pc = 0x1acbe4u;
    // NOP
    // 0x1acbe8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1acbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1acbec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1acbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1acbf0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1acbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1acbf4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1acbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1acbf8: 0x2445eff0  addiu       $a1, $v0, -0x1010
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1acbfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1acc00: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1ACC00u;
    SET_GPR_U32(ctx, 31, 0x1ACC08u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1ACC08u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACC08u) { return; }
    ctx->pc = 0x1ACC08u;
label_1acc08:
    // 0x1acc08: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1acc0c: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1acc10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1acc14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acc18: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1acc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1acc1c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC24u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1ACC24u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACC24u) { return; }
    ctx->pc = 0x1ACC24u;
label_1acc24:
    // 0x1acc24: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1acc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1acc28: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1ACC28u;
    SET_GPR_U32(ctx, 31, 0x1ACC30u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1ACC28u, 0x1ACC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC30u;
label_1acc30:
    // 0x1acc30: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1acc34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1acc34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1acc38: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1acc3c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1acc40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acc44: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1acc44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1acc48: 0xa424a4d0  sh          $a0, -0x5B30($at)
    ctx->pc = 0x1acc48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 4));
    // 0x1acc4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1acc50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acc54: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1acc54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1acc58: 0x9023b500  lbu         $v1, -0x4B00($at)
    ctx->pc = 0x1acc58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948096)));
    // 0x1acc5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1acc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1acc60: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACC60u;
    {
        const bool branch_taken_0x1acc60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x1acc60) {
            ctx->pc = 0x1ACC80u;
            return;
        }
    }
    ctx->pc = 0x1ACC68u;
}
