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

// Function: entry_00157c5c
// Address: 0x157c5c - 0x157cd4
void entry_00157c5c_0x157c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157c5c_0x157c5c");
#endif

    ctx->pc = 0x157c5cu;

    // 0x157c5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157c60: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x157c60u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
    // 0x157c64: 0x27c2f7d0  addiu       $v0, $fp, -0x830
    ctx->pc = 0x157c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965200));
    // 0x157c68: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x157c68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157c6c: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x157c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c70: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157c78: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157c7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157c80: 0x0  nop
    ctx->pc = 0x157c80u;
    // NOP
    // 0x157c84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c88: 0x0  nop
    ctx->pc = 0x157c88u;
    // NOP
    // 0x157c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c90: 0x0  nop
    ctx->pc = 0x157c90u;
    // NOP
    // 0x157c94: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157C94u;
    {
        const bool branch_taken_0x157c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157c94) {
            ctx->pc = 0x157CD4u;
            return;
        }
    }
    ctx->pc = 0x157C9Cu;
    // 0x157c9c: 0x13b080  sll         $s6, $s3, 2
    ctx->pc = 0x157c9cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ca0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ca4: 0x2445f7d0  addiu       $a1, $v0, -0x830
    ctx->pc = 0x157ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157ca8: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x157ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x157cac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157cb0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157cb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157cb8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cbc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157cbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157cc0: 0x0  nop
    ctx->pc = 0x157cc0u;
    // NOP
    // 0x157cc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157cc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157cc8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x157cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x157ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157CCCu;
    {
        const bool branch_taken_0x157ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ccc) {
            ctx->pc = 0x157D00u;
            return;
        }
    }
    ctx->pc = 0x157CD4u;
}
