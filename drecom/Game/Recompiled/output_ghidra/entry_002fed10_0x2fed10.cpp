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

// Function: entry_002fed10
// Address: 0x2fed10 - 0x2fee20
void entry_002fed10_0x2fed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fed10_0x2fed10");
#endif

    switch (ctx->pc) {
        case 0x2fed28u: goto label_2fed28;
        case 0x2fed4cu: goto label_2fed4c;
        case 0x2fed70u: goto label_2fed70;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedb4u: goto label_2fedb4;
        default: break;
    }

    ctx->pc = 0x2fed10u;

    // 0x2fed10: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fed14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fed14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fed18: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2fed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fed20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FED20u;
    SET_GPR_U32(ctx, 31, 0x2FED28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FED20u, 0x2FED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED28u;
label_2fed28:
    // 0x2fed28: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2fed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2fed2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fed2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fed30: 0x0  nop
    ctx->pc = 0x2fed30u;
    // NOP
    // 0x2fed34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fed34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fed38: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2fed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fed3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fed40: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fed44: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FED44u;
    SET_GPR_U32(ctx, 31, 0x2FED4Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FED44u, 0x2FED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED4Cu;
label_2fed4c:
    // 0x2fed4c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2fed50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fed50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fed54: 0x0  nop
    ctx->pc = 0x2fed54u;
    // NOP
    // 0x2fed58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fed58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fed5c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2fed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fed60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fed64: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fed68: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FED68u;
    SET_GPR_U32(ctx, 31, 0x2FED70u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FED68u, 0x2FED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED70u;
label_2fed70:
    // 0x2fed70: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2fed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2fed74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fed74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fed78: 0x0  nop
    ctx->pc = 0x2fed78u;
    // NOP
    // 0x2fed7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fed7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fed80: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2fed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fed84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fed88: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fed8c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2fed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fed90: 0x24040429  addiu       $a0, $zero, 0x429
    ctx->pc = 0x2fed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x2fed94: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2fed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2fed98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2fed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fed9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fed9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2feda0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FEDA0u;
    SET_GPR_U32(ctx, 31, 0x2FEDA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FEDA0u, 0x2FEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDA8u;
label_2feda8:
    // 0x2feda8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2feda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fedac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FEDACu;
    SET_GPR_U32(ctx, 31, 0x2FEDB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FEDACu, 0x2FEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDB4u;
label_2fedb4:
    // 0x2fedb4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fedb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fedb8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fedbc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fedc0: 0x1203003d  beq         $s0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2FEDC0u;
    {
        const bool branch_taken_0x2fedc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fedc0) {
            ctx->pc = 0x2FEEB8u;
            return;
        }
    }
    ctx->pc = 0x2FEDC8u;
    // 0x2fedc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fedcc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fedd0: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x2fedd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fedd4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FEDD4u;
    {
        const bool branch_taken_0x2fedd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fedd4) {
            ctx->pc = 0x2FEE20u;
            return;
        }
    }
    ctx->pc = 0x2FEDDCu;
    // 0x2feddc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fede0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fede4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fede8: 0x0  nop
    ctx->pc = 0x2fede8u;
    // NOP
    // 0x2fedec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2fedecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fedf0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2fedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2fedf4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fedf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fedf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fedf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fedfc: 0x0  nop
    ctx->pc = 0x2fedfcu;
    // NOP
    // 0x2fee00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fee00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fee04: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2fee04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2fee08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee0c: 0x0  nop
    ctx->pc = 0x2fee0cu;
    // NOP
    // 0x2fee10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fee10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fee14: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fee18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FEE18u;
    {
        const bool branch_taken_0x2fee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee18) {
            ctx->pc = 0x2FEE88u;
            return;
        }
    }
    ctx->pc = 0x2FEE20u;
}
