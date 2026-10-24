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

// Function: entry_0029bf8c
// Address: 0x29bf8c - 0x29c000
void entry_0029bf8c_0x29bf8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bf8c_0x29bf8c");
#endif

    ctx->pc = 0x29bf8cu;

    // 0x29bf8c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bf90: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bf94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bf98: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bf9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bfa0: 0x0  nop
    ctx->pc = 0x29bfa0u;
    // NOP
    // 0x29bfa4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bfa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bfa8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bfac: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x29bfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfb0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bfb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bfb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bfb8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x29bfb8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bfbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bfc0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x29bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29bfc4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x29bfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bfc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bfc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bfcc: 0x0  nop
    ctx->pc = 0x29bfccu;
    // NOP
    // 0x29bfd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bfd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bfd4: 0x0  nop
    ctx->pc = 0x29bfd4u;
    // NOP
    // 0x29bfd8: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x29BFD8u;
    {
        const bool branch_taken_0x29bfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bfd8) {
            ctx->pc = 0x29C144u;
            return;
        }
    }
    ctx->pc = 0x29BFE0u;
    // 0x29bfe0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bfe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bfe4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BFE4u;
    {
        const bool branch_taken_0x29bfe4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bfe4) {
            ctx->pc = 0x29C000u;
            return;
        }
    }
    ctx->pc = 0x29BFECu;
    // 0x29bfec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bfecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bff0: 0x0  nop
    ctx->pc = 0x29bff0u;
    // NOP
    // 0x29bff4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BFF8u;
    {
        const bool branch_taken_0x29bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bff8) {
            ctx->pc = 0x29C01Cu;
            return;
        }
    }
    ctx->pc = 0x29C000u;
}
