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

// Function: caseD_3
// Address: 0x137c84 - 0x137d14
void caseD_3_0x137c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x137c84");
#endif

    switch (ctx->pc) {
        case 0x137cb8u: goto label_137cb8;
        case 0x137cd0u: goto label_137cd0;
        case 0x137cf4u: goto label_137cf4;
        default: break;
    }

    ctx->pc = 0x137c84u;

    // 0x137c84: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137c88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x137c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137c90: 0x0  nop
    ctx->pc = 0x137c90u;
    // NOP
    // 0x137c94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x137c98: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x137c9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137ca0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137ca4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137ca8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x137cac: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x137cb0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x137CB0u;
    SET_GPR_U32(ctx, 31, 0x137CB8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137CB0u, 0x137CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CB8u;
label_137cb8:
    // 0x137cb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x137cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x137cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x137cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x137cc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137cc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137cc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x137CC8u;
    SET_GPR_U32(ctx, 31, 0x137CD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137CD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137CD0u) { return; }
    ctx->pc = 0x137CD0u;
label_137cd0:
    // 0x137cd0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x137cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137cd4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x137cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137cd8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x137cd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137cdc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x137cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137ce0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x137ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137ce8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x137ce8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x137cec: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x137CECu;
    SET_GPR_U32(ctx, 31, 0x137CF4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x137CECu, 0x137CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CF4u;
label_137cf4:
    // 0x137cf4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x137cf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137cfc: 0x0  nop
    ctx->pc = 0x137cfcu;
    // NOP
    // 0x137d00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137d04: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x137d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x137d08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137d08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137d0c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x137D0Cu;
    {
        const bool branch_taken_0x137d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d0c) {
            ctx->pc = 0x137DF8u;
            return;
        }
    }
    ctx->pc = 0x137D14u;
}
