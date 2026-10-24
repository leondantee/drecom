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

// Function: entry_00157cd4
// Address: 0x157cd4 - 0x157d00
void entry_00157cd4_0x157cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157cd4_0x157cd4");
#endif

    ctx->pc = 0x157cd4u;

    // 0x157cd4: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157cd8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x157cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x157cdc: 0x2462f7d0  addiu       $v0, $v1, -0x830
    ctx->pc = 0x157cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x157ce0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157ce4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x157ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ce8: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157cecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157cf0: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157cf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157cf8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x157cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x157cfc: 0x0  nop
    ctx->pc = 0x157cfcu;
    // NOP
    ctx->pc = 0x157d00u;
}
