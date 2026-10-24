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

// Function: entry_00157f14
// Address: 0x157f14 - 0x157f40
void entry_00157f14_0x157f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f14_0x157f14");
#endif

    ctx->pc = 0x157f14u;

    // 0x157f14: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157f18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157f1c: 0x2444f7d0  addiu       $a0, $v0, -0x830
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157f20: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x157f24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x157f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f28: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x157f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157f2c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x157f2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x157f30: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f34: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157f34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157f38: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x157f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x157f3c: 0x0  nop
    ctx->pc = 0x157f3cu;
    // NOP
    ctx->pc = 0x157f40u;
}
