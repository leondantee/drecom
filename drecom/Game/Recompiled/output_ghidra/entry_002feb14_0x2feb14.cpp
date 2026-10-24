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

// Function: entry_002feb14
// Address: 0x2feb14 - 0x2feb90
void entry_002feb14_0x2feb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002feb14_0x2feb14");
#endif

    switch (ctx->pc) {
        case 0x2feb64u: goto label_2feb64;
        case 0x2feb70u: goto label_2feb70;
        default: break;
    }

    ctx->pc = 0x2feb14u;

    // 0x2feb14: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2feb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feb18: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2feb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2feb1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2feb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2feb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb24: 0x0  nop
    ctx->pc = 0x2feb24u;
    // NOP
    // 0x2feb28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2feb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2feb2c: 0x3c02c46b  lui         $v0, 0xC46B
    ctx->pc = 0x2feb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50283 << 16));
    // 0x2feb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2feb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb34: 0x0  nop
    ctx->pc = 0x2feb34u;
    // NOP
    // 0x2feb38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2feb38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2feb3c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2feb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2feb40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2feb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2feb44: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2feb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2feb48: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feb4c: 0x24040427  addiu       $a0, $zero, 0x427
    ctx->pc = 0x2feb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
    // 0x2feb50: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2feb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2feb54: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2feb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2feb58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2feb58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2feb5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FEB5Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FEB5Cu, 0x2FEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB64u;
label_2feb64:
    // 0x2feb64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2feb64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2feb68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FEB68u;
    SET_GPR_U32(ctx, 31, 0x2FEB70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FEB68u, 0x2FEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB70u;
label_2feb70:
    // 0x2feb70: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2feb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2feb74: 0x3c03c26b  lui         $v1, 0xC26B
    ctx->pc = 0x2feb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49771 << 16));
    // 0x2feb78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2feb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb7c: 0x0  nop
    ctx->pc = 0x2feb7cu;
    // NOP
    // 0x2feb80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2feb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2feb84: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2feb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2feb88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2feb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2feb8c: 0x0  nop
    ctx->pc = 0x2feb8cu;
    // NOP
    ctx->pc = 0x2feb90u;
}
