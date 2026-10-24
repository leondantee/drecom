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

// Function: ectrl04_move10_t00
// Address: 0x24ce10 - 0x24d06c
void ectrl04_move10_t00_0x24ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl04_move10_t00_0x24ce10");
#endif

    switch (ctx->pc) {
        case 0x24cedcu: goto label_24cedc;
        case 0x24cef4u: goto label_24cef4;
        case 0x24cf00u: goto label_24cf00;
        case 0x24cf1cu: goto label_24cf1c;
        case 0x24cf40u: goto label_24cf40;
        case 0x24cf64u: goto label_24cf64;
        case 0x24cf98u: goto label_24cf98;
        case 0x24cfa4u: goto label_24cfa4;
        case 0x24cfbcu: goto label_24cfbc;
        case 0x24cfe0u: goto label_24cfe0;
        case 0x24d004u: goto label_24d004;
        case 0x24d038u: goto label_24d038;
        case 0x24d044u: goto label_24d044;
        default: break;
    }

    ctx->pc = 0x24ce10u;

    // 0x24ce10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24ce14: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x24ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x24ce18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24ce1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ce20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ce24: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x24ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x24ce28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce2c: 0x8c520100  lw          $s2, 0x100($v0)
    ctx->pc = 0x24ce2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x24ce30: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x24ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x24ce34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ce34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ce38: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x24ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ce3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ce40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce44: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ce48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ce48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ce4c: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x24ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x24ce50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ce50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ce54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce58: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x24ce58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24ce5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce60: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ce64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ce64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ce68: 0x262202b0  addiu       $v0, $s1, 0x2B0
    ctx->pc = 0x24ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x24ce6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ce70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce74: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x24ce74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x24ce78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce7c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ce80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ce80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ce84: 0x262202b0  addiu       $v0, $s1, 0x2B0
    ctx->pc = 0x24ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x24ce88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ce8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce90: 0x8c51010c  lw          $s1, 0x10C($v0)
    ctx->pc = 0x24ce90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x24ce94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ce98: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ce9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ce9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cea0: 0x262202b0  addiu       $v0, $s1, 0x2B0
    ctx->pc = 0x24cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x24cea4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24cea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ceac: 0x8c51010c  lw          $s1, 0x10C($v0)
    ctx->pc = 0x24ceacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x24ceb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ceb4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ceb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ceb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cebc: 0x262202b0  addiu       $v0, $s1, 0x2B0
    ctx->pc = 0x24cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x24cec0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24cec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cec8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cecc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ced0: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ced4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x24CED4u;
    SET_GPR_U32(ctx, 31, 0x24CEDCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x24CED4u, 0x24CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEDCu;
label_24cedc:
    // 0x24cedc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x24cee0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24cee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24cee4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cee8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ceec: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x24CEECu;
    SET_GPR_U32(ctx, 31, 0x24CEF4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x24CEF4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24CEF4u) { return; }
    ctx->pc = 0x24CEF4u;
label_24cef4:
    // 0x24cef4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24cef4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cef8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x24CEF8u;
    {
        const bool branch_taken_0x24cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cef8) {
            ctx->pc = 0x24D048u;
            goto label_24d048;
        }
    }
    ctx->pc = 0x24CF00u;
label_24cf00:
    // 0x24cf00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cf04: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24cf08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24cf08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cf0c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x24cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24cf10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24cf14: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24CF14u;
    SET_GPR_U32(ctx, 31, 0x24CF1Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24CF14u, 0x24CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF1Cu;
label_24cf1c:
    // 0x24cf1c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24cf20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24cf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24cf24: 0x0  nop
    ctx->pc = 0x24cf24u;
    // NOP
    // 0x24cf28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24cf28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24cf2c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cf30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24cf30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24cf34: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24cf38: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24CF38u;
    SET_GPR_U32(ctx, 31, 0x24CF40u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24CF38u, 0x24CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF40u;
label_24cf40:
    // 0x24cf40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24cf44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24cf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24cf48: 0x0  nop
    ctx->pc = 0x24cf48u;
    // NOP
    // 0x24cf4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24cf4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24cf50: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24cf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24cf58: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24cf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24cf5c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24CF5Cu;
    SET_GPR_U32(ctx, 31, 0x24CF64u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24CF5Cu, 0x24CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF64u;
label_24cf64:
    // 0x24cf64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24cf68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24cf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24cf6c: 0x0  nop
    ctx->pc = 0x24cf6cu;
    // NOP
    // 0x24cf70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24cf70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24cf74: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cf78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24cf78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24cf7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24cf80: 0x24047800  addiu       $a0, $zero, 0x7800
    ctx->pc = 0x24cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x24cf84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24cf84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cf88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x24cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24cf8c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24cf8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cf90: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24CF90u;
    SET_GPR_U32(ctx, 31, 0x24CF98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24CF90u, 0x24CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF98u;
label_24cf98:
    // 0x24cf98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24cf98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cf9c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24CF9Cu;
    SET_GPR_U32(ctx, 31, 0x24CFA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24CF9Cu, 0x24CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFA4u;
label_24cfa4:
    // 0x24cfa4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x24cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cfa8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24cfa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cfac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x24cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24cfb0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24cfb4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24CFB4u;
    SET_GPR_U32(ctx, 31, 0x24CFBCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24CFB4u, 0x24CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFBCu;
label_24cfbc:
    // 0x24cfbc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24cfc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24cfc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24cfc4: 0x0  nop
    ctx->pc = 0x24cfc4u;
    // NOP
    // 0x24cfc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24cfc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24cfcc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cfd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24cfd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24cfd4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24cfd8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24CFD8u;
    SET_GPR_U32(ctx, 31, 0x24CFE0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24CFD8u, 0x24CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFE0u;
label_24cfe0:
    // 0x24cfe0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24cfe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24cfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24cfe8: 0x0  nop
    ctx->pc = 0x24cfe8u;
    // NOP
    // 0x24cfec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24cfecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24cff0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24cff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24cff8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24cff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24cffc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24CFFCu;
    SET_GPR_U32(ctx, 31, 0x24D004u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24CFFCu, 0x24D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D004u;
label_24d004:
    // 0x24d004: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24d008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d00c: 0x0  nop
    ctx->pc = 0x24d00cu;
    // NOP
    // 0x24d010: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24d010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d014: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d01c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24d020: 0x24047800  addiu       $a0, $zero, 0x7800
    ctx->pc = 0x24d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x24d024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d028: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x24d028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d02c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24d02cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d030: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24D030u;
    SET_GPR_U32(ctx, 31, 0x24D038u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24D030u, 0x24D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D038u;
label_24d038:
    // 0x24d038: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d038u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d03c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24D03Cu;
    SET_GPR_U32(ctx, 31, 0x24D044u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24D03Cu, 0x24D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D044u;
label_24d044:
    // 0x24d044: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24d048:
    // 0x24d048: 0x1200ffad  beqz        $s0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x24D048u;
    {
        const bool branch_taken_0x24d048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d048) {
            ctx->pc = 0x24CF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24cf00;
        }
    }
    ctx->pc = 0x24D050u;
    // 0x24d050: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x24d050u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d05c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d060: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x24d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24d064: 0x3e00008  jr          $ra
    ctx->pc = 0x24D064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D06Cu;
}
