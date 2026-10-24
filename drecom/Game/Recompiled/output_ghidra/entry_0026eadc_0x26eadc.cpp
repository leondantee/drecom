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

// Function: entry_0026eadc
// Address: 0x26eadc - 0x26eb28
void entry_0026eadc_0x26eadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026eadc_0x26eadc");
#endif

    ctx->pc = 0x26eadcu;

    // 0x26eadc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eae0: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eae4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x26eae8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x26eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x26eaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26eaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eaf0: 0x0  nop
    ctx->pc = 0x26eaf0u;
    // NOP
    // 0x26eaf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26eaf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26eaf8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26eaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26eafc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb00: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eb04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eb08: 0x0  nop
    ctx->pc = 0x26eb08u;
    // NOP
    // 0x26eb0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26eb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eb10: 0x0  nop
    ctx->pc = 0x26eb10u;
    // NOP
    // 0x26eb14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26EB14u;
    {
        const bool branch_taken_0x26eb14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eb14) {
            ctx->pc = 0x26EB28u;
            return;
        }
    }
    ctx->pc = 0x26EB1Cu;
    // 0x26eb1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eb20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb24: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26eb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x26eb28u;
}
