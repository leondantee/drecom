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

// Function: entry_001aaf8c
// Address: 0x1aaf8c - 0x1aaff0
void entry_001aaf8c_0x1aaf8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf8c_0x1aaf8c");
#endif

    ctx->pc = 0x1aaf8cu;

    // 0x1aaf8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf90: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aaf90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaf94: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1aaf98: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aaf98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aaf9c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1aaf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aafa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aafa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aafa4: 0x0  nop
    ctx->pc = 0x1aafa4u;
    // NOP
    // 0x1aafa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1aafa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aafac: 0x0  nop
    ctx->pc = 0x1aafacu;
    // NOP
    // 0x1aafb0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1AAFB0u;
    {
        const bool branch_taken_0x1aafb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aafb0) {
            ctx->pc = 0x1AAFF0u;
            return;
        }
    }
    ctx->pc = 0x1AAFB8u;
    // 0x1aafb8: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1aafb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aafbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aafbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aafc0: 0x0  nop
    ctx->pc = 0x1aafc0u;
    // NOP
    // 0x1aafc4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1aafc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aafc8: 0x0  nop
    ctx->pc = 0x1aafc8u;
    // NOP
    // 0x1aafcc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAFCCu;
    {
        const bool branch_taken_0x1aafcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aafcc) {
            ctx->pc = 0x1AAFF0u;
            return;
        }
    }
    ctx->pc = 0x1AAFD4u;
    // 0x1aafd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aafd8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1aafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aafdc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1aafdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aafe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aafe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aafe4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1aafe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1aafe8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1AAFE8u;
    {
        const bool branch_taken_0x1aafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aafe8) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AAFF0u;
}
