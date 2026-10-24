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

// Function: entry_001aed58
// Address: 0x1aed58 - 0x1af038
void entry_001aed58_0x1aed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aed58_0x1aed58");
#endif

    switch (ctx->pc) {
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af018u: goto label_1af018;
        default: break;
    }

    ctx->pc = 0x1aed58u;

    // 0x1aed58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1aed58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aed5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aed60: 0x146000b5  bnez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1AED60u;
    {
        const bool branch_taken_0x1aed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed60) {
            ctx->pc = 0x1AF038u;
            return;
        }
    }
    ctx->pc = 0x1AED68u;
    // 0x1aed68: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aed68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aed6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1aed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1aed70: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1aed70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aed74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aed78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aed78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aed7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aed7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aed80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aed84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aed88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aed8c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aed90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aed94: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aed94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aed98: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aed9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aeda0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeda4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aeda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aeda8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aedac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aedacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aedb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aedb4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aedb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aedb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aedb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aedbc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aedbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aedc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aedc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aedc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aedc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aedc8: 0x0  nop
    ctx->pc = 0x1aedc8u;
    // NOP
    // 0x1aedcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aedccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aedd0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1aedd4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1aedd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1aedd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aedd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeddc: 0x0  nop
    ctx->pc = 0x1aeddcu;
    // NOP
    // 0x1aede0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aede0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aede4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aedec: 0x0  nop
    ctx->pc = 0x1aedecu;
    // NOP
    // 0x1aedf0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aedf0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aedf4: 0x938380cc  lbu         $v1, -0x7F34($gp)
    ctx->pc = 0x1aedf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934732)));
    // 0x1aedf8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aedfc: 0xa38280cc  sb          $v0, -0x7F34($gp)
    ctx->pc = 0x1aedfcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934732), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aee00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aee00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aee04: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aee08: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aee0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aee10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aee14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aee18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aee18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aee1c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aee20: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aee20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aee24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aee2c: 0x0  nop
    ctx->pc = 0x1aee2cu;
    // NOP
    // 0x1aee30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aee30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aee34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aee34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aee38: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1aee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1aee3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aee3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aee40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aee44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aee48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aee4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aee54: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aee54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aee58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aee5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aee60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aee64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aee64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aee68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee6c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aee70: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aee74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aee78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aee78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aee7c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aee7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aee80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aee84: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aee88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aee88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aee8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aee90: 0x0  nop
    ctx->pc = 0x1aee90u;
    // NOP
    // 0x1aee94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aee94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aee98: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1aee9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeea0: 0x0  nop
    ctx->pc = 0x1aeea0u;
    // NOP
    // 0x1aeea4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aeea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aeea8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aeeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aeeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeeb0: 0x0  nop
    ctx->pc = 0x1aeeb0u;
    // NOP
    // 0x1aeeb4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aeeb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aeeb8: 0x938380cc  lbu         $v1, -0x7F34($gp)
    ctx->pc = 0x1aeeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934732)));
    // 0x1aeebc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aeec0: 0xa38280cc  sb          $v0, -0x7F34($gp)
    ctx->pc = 0x1aeec0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934732), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aeec4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aeec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aeec8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aeecc: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aeed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeed4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aeed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aeed8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aeed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aeedc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aeedcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aeee0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aeee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aeee4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aeee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aeee8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aeeec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aeeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeef0: 0x0  nop
    ctx->pc = 0x1aeef0u;
    // NOP
    // 0x1aeef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aeef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aeef8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aeef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aeefc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1aeefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1aef00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aef00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aef04: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aef08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aef0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aef10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aef14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef18: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aef18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aef1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aef1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aef20: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aef24: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aef28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aef2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aef30: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aef34: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aef38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aef3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aef40: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aef40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aef44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aef4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aef4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aef50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef54: 0x0  nop
    ctx->pc = 0x1aef54u;
    // NOP
    // 0x1aef58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aef58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aef5c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1aef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1aef60: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1aef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1aef64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef68: 0x0  nop
    ctx->pc = 0x1aef68u;
    // NOP
    // 0x1aef6c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aef6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aef70: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aef74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef78: 0x0  nop
    ctx->pc = 0x1aef78u;
    // NOP
    // 0x1aef7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aef7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aef80: 0x938380cc  lbu         $v1, -0x7F34($gp)
    ctx->pc = 0x1aef80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934732)));
    // 0x1aef84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aef88: 0xa38280cc  sb          $v0, -0x7F34($gp)
    ctx->pc = 0x1aef88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934732), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aef8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aef8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aef90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aef94: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aef98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aef9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aef9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aefa0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aefa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aefa4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aefa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aefa8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aefa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aefac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aefacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aefb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aefb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aefb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefb8: 0x0  nop
    ctx->pc = 0x1aefb8u;
    // NOP
    // 0x1aefbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aefbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aefc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aefc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aefc4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1aefc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1aefc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aefc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefcc: 0x0  nop
    ctx->pc = 0x1aefccu;
    // NOP
    // 0x1aefd0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1aefd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1aefd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1aefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1aefd8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1aefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1aefdc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1aefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1aefe0: 0x2445eff0  addiu       $a1, $v0, -0x1010
    ctx->pc = 0x1aefe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1aefe4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1aefe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aefe8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1AEFE8u;
    SET_GPR_U32(ctx, 31, 0x1AEFF0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1AEFF0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AEFF0u) { return; }
    ctx->pc = 0x1AEFF0u;
label_1aeff0:
    // 0x1aeff0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1aeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1aeff4: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1aeff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1aeff8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeffc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1af000: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1af000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1af004: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AF004u;
    SET_GPR_U32(ctx, 31, 0x1AF00Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AF00Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF00Cu) { return; }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1af00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1af010: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1AF010u;
    SET_GPR_U32(ctx, 31, 0x1AF018u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1AF010u, 0x1AF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF018u;
label_1af018:
    // 0x1af018: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1af018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af01c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1af01cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1af020: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1af024: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1af024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1af028: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af02c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1af02cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1af030: 0xa424a4d0  sh          $a0, -0x5B30($at)
    ctx->pc = 0x1af030u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 4));
    // 0x1af034: 0x0  nop
    ctx->pc = 0x1af034u;
    // NOP
    ctx->pc = 0x1af038u;
}
