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

// Function: caseD_1
// Address: 0x137a0c - 0x137ab0
void caseD_1_0x137a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x137a0c");
#endif

    switch (ctx->pc) {
        case 0x137a40u: goto label_137a40;
        case 0x137a5cu: goto label_137a5c;
        case 0x137a90u: goto label_137a90;
        default: break;
    }

    ctx->pc = 0x137a0cu;

    // 0x137a0c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137a10: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x137a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x137a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a18: 0x0  nop
    ctx->pc = 0x137a18u;
    // NOP
    // 0x137a1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x137a20: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x137a24: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137a28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137a2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137a30: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x137a34: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x137a38: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x137A38u;
    SET_GPR_U32(ctx, 31, 0x137A40u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137A38u, 0x137A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A40u;
label_137a40:
    // 0x137a40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x137a40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x137a44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x137a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x137a48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x137a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x137a4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137a50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137a54: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x137A54u;
    SET_GPR_U32(ctx, 31, 0x137A5Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137A5Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137A5Cu) { return; }
    ctx->pc = 0x137A5Cu;
label_137a5c:
    // 0x137a5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x137a5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x137a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a64: 0x0  nop
    ctx->pc = 0x137a64u;
    // NOP
    // 0x137a68: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x137a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x137a6c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x137a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x137a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a74: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x137a74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137a78: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x137a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137a7c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x137a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137a84: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x137a84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x137a88: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x137A88u;
    SET_GPR_U32(ctx, 31, 0x137A90u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x137A88u, 0x137A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A90u;
label_137a90:
    // 0x137a90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x137a94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137a98: 0x0  nop
    ctx->pc = 0x137a98u;
    // NOP
    // 0x137a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137aa0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x137aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x137aa4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137aa4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137aa8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x137AA8u;
    {
        const bool branch_taken_0x137aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137aa8) {
            ctx->pc = 0x137B98u;
            return;
        }
    }
    ctx->pc = 0x137AB0u;
}
