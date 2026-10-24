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

// Function: entry_0029bc9c
// Address: 0x29bc9c - 0x29bcf4
void entry_0029bc9c_0x29bc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bc9c_0x29bc9c");
#endif

    ctx->pc = 0x29bc9cu;

    // 0x29bc9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bca0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bca4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bca8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bcac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bcb0: 0x0  nop
    ctx->pc = 0x29bcb0u;
    // NOP
    // 0x29bcb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bcb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bcb8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bcbc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x29bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bcc0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bcc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bcc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bcc8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x29bcc8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bccc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bcccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bcd0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x29bcd4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29bcd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29bcd8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BCD8u;
    {
        const bool branch_taken_0x29bcd8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bcd8) {
            ctx->pc = 0x29BCF4u;
            return;
        }
    }
    ctx->pc = 0x29BCE0u;
    // 0x29bce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bce4: 0x0  nop
    ctx->pc = 0x29bce4u;
    // NOP
    // 0x29bce8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bcec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BCECu;
    {
        const bool branch_taken_0x29bcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bcec) {
            ctx->pc = 0x29BD10u;
            return;
        }
    }
    ctx->pc = 0x29BCF4u;
}
