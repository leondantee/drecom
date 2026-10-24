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

// Function: caseD_5
// Address: 0x137ee4 - 0x137f78
void caseD_5_0x137ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x137ee4");
#endif

    switch (ctx->pc) {
        case 0x137f18u: goto label_137f18;
        case 0x137f30u: goto label_137f30;
        case 0x137f58u: goto label_137f58;
        default: break;
    }

    ctx->pc = 0x137ee4u;

    // 0x137ee4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137ee8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x137eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137ef0: 0x0  nop
    ctx->pc = 0x137ef0u;
    // NOP
    // 0x137ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x137ef8: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x137efc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137f00: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137f04: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137f08: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x137f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x137f0c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x137f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x137f10: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x137F10u;
    SET_GPR_U32(ctx, 31, 0x137F18u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137F10u, 0x137F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F18u;
label_137f18:
    // 0x137f18: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x137f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x137f1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x137f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x137f20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137f24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137f28: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x137F28u;
    SET_GPR_U32(ctx, 31, 0x137F30u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137F30u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137F30u) { return; }
    ctx->pc = 0x137F30u;
label_137f30:
    // 0x137f30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x137f30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x137f34: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x137f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137f38: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x137f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137f3c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x137f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137f40: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x137f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137f44: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x137f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137f4c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x137f4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x137f50: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x137F50u;
    SET_GPR_U32(ctx, 31, 0x137F58u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x137F50u, 0x137F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F58u;
label_137f58:
    // 0x137f58: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x137f5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137f60: 0x0  nop
    ctx->pc = 0x137f60u;
    // NOP
    // 0x137f64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137f68: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x137f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x137f6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137f6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137f70: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x137F70u;
    {
        const bool branch_taken_0x137f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f70) {
            ctx->pc = 0x138070u;
            return;
        }
    }
    ctx->pc = 0x137F78u;
}
