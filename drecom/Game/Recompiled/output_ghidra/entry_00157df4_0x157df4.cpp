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

// Function: entry_00157df4
// Address: 0x157df4 - 0x157e20
void entry_00157df4_0x157df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157df4_0x157df4");
#endif

    ctx->pc = 0x157df4u;

    // 0x157df4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157df8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157dfc: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157e04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e08: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157e0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157e10: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157e14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157e18: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x157e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x157e1c: 0x0  nop
    ctx->pc = 0x157e1cu;
    // NOP
    ctx->pc = 0x157e20u;
}
