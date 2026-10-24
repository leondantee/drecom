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

// Function: entry_0029bda0
// Address: 0x29bda0 - 0x29bdfc
void entry_0029bda0_0x29bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bda0_0x29bda0");
#endif

    ctx->pc = 0x29bda0u;

    // 0x29bda0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bda4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bda8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bdac: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x29bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bdb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29bdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bdb4: 0x0  nop
    ctx->pc = 0x29bdb4u;
    // NOP
    // 0x29bdb8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x29BDB8u;
    {
        const bool branch_taken_0x29bdb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bdb8) {
            ctx->pc = 0x29BEC4u;
            return;
        }
    }
    ctx->pc = 0x29BDC0u;
    // 0x29bdc0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x29bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bdc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bdc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bdc8: 0x0  nop
    ctx->pc = 0x29bdc8u;
    // NOP
    // 0x29bdcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bdccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bdd0: 0x0  nop
    ctx->pc = 0x29bdd0u;
    // NOP
    // 0x29bdd4: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x29BDD4u;
    {
        const bool branch_taken_0x29bdd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bdd4) {
            ctx->pc = 0x29BEC4u;
            return;
        }
    }
    ctx->pc = 0x29BDDCu;
    // 0x29bddc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29bddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29bde0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BDE0u;
    {
        const bool branch_taken_0x29bde0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bde0) {
            ctx->pc = 0x29BDFCu;
            return;
        }
    }
    ctx->pc = 0x29BDE8u;
    // 0x29bde8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bde8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bdec: 0x0  nop
    ctx->pc = 0x29bdecu;
    // NOP
    // 0x29bdf0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bdf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bdf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BDF4u;
    {
        const bool branch_taken_0x29bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bdf4) {
            ctx->pc = 0x29BE18u;
            return;
        }
    }
    ctx->pc = 0x29BDFCu;
}
