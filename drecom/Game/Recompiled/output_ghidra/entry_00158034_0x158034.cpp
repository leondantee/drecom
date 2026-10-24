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

// Function: entry_00158034
// Address: 0x158034 - 0x158060
void entry_00158034_0x158034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158034_0x158034");
#endif

    ctx->pc = 0x158034u;

    // 0x158034: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x158034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158038: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x158038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x15803c: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x15803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x158040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158044: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x158044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158048: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x158048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15804c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15804cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x158050: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x158050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158054: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x158054u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x158058: 0xe7a1020c  swc1        $f1, 0x20C($sp)
    ctx->pc = 0x158058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x15805c: 0x0  nop
    ctx->pc = 0x15805cu;
    // NOP
    ctx->pc = 0x158060u;
}
