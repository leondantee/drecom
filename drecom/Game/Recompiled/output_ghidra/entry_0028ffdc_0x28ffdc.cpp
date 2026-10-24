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

// Function: entry_0028ffdc
// Address: 0x28ffdc - 0x290038
void entry_0028ffdc_0x28ffdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ffdc_0x28ffdc");
#endif

    ctx->pc = 0x28ffdcu;

    // 0x28ffdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28ffe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ffe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ffe4: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28ffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ffe8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28ffe8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28ffec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28fff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fff4: 0x0  nop
    ctx->pc = 0x28fff4u;
    // NOP
    // 0x28fff8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28fff8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28fffc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x290000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290004: 0x0  nop
    ctx->pc = 0x290004u;
    // NOP
    // 0x290008: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29000c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x290010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290014: 0x0  nop
    ctx->pc = 0x290014u;
    // NOP
    // 0x290018: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x290018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29001c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29001Cu;
    {
        const bool branch_taken_0x29001c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x29001c) {
            ctx->pc = 0x290038u;
            return;
        }
    }
    ctx->pc = 0x290024u;
    // 0x290024: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x290024u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290028: 0x0  nop
    ctx->pc = 0x290028u;
    // NOP
    // 0x29002c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29002cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x290030: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x290030u;
    {
        const bool branch_taken_0x290030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290030) {
            ctx->pc = 0x290054u;
            return;
        }
    }
    ctx->pc = 0x290038u;
}
