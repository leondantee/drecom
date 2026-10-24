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

// Function: entry_0028ff30
// Address: 0x28ff30 - 0x28ffa8
void entry_0028ff30_0x28ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ff30_0x28ff30");
#endif

    ctx->pc = 0x28ff30u;

    // 0x28ff30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28ff34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ff34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ff38: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff3c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28ff3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28ff40: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28ff44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ff44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff48: 0x0  nop
    ctx->pc = 0x28ff48u;
    // NOP
    // 0x28ff4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28ff4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ff50: 0x0  nop
    ctx->pc = 0x28ff50u;
    // NOP
    // 0x28ff54: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x28FF54u;
    {
        const bool branch_taken_0x28ff54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ff54) {
            ctx->pc = 0x28FFDCu;
            return;
        }
    }
    ctx->pc = 0x28FF5Cu;
    // 0x28ff5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28ff60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ff60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ff64: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28ff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff68: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28ff68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28ff6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x28ff70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ff70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff74: 0x0  nop
    ctx->pc = 0x28ff74u;
    // NOP
    // 0x28ff78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28ff78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ff7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28ff80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ff80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff84: 0x0  nop
    ctx->pc = 0x28ff84u;
    // NOP
    // 0x28ff88: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28ff88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28ff8c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FF8Cu;
    {
        const bool branch_taken_0x28ff8c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28ff8c) {
            ctx->pc = 0x28FFA8u;
            return;
        }
    }
    ctx->pc = 0x28FF94u;
    // 0x28ff94: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28ff94u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff98: 0x0  nop
    ctx->pc = 0x28ff98u;
    // NOP
    // 0x28ff9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ff9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ffa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28FFA0u;
    {
        const bool branch_taken_0x28ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ffa0) {
            ctx->pc = 0x28FFC4u;
            return;
        }
    }
    ctx->pc = 0x28FFA8u;
}
