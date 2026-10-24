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

// Function: entry_0026acd4
// Address: 0x26acd4 - 0x26ad40
void entry_0026acd4_0x26acd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026acd4_0x26acd4");
#endif

    ctx->pc = 0x26acd4u;

    // 0x26acd4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26acd8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x26acdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26acdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ace0: 0xc6001b54  lwc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ace4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26ace4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ace8: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ace8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26acec: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26acf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26acf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26acf4: 0x0  nop
    ctx->pc = 0x26acf4u;
    // NOP
    // 0x26acf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26acf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26acfc: 0x0  nop
    ctx->pc = 0x26acfcu;
    // NOP
    // 0x26ad00: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x26AD00u;
    {
        const bool branch_taken_0x26ad00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad00) {
            ctx->pc = 0x26AD40u;
            return;
        }
    }
    ctx->pc = 0x26AD08u;
    // 0x26ad08: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad0c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26ad10: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ad14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad18: 0x0  nop
    ctx->pc = 0x26ad18u;
    // NOP
    // 0x26ad1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ad1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad20: 0x0  nop
    ctx->pc = 0x26ad20u;
    // NOP
    // 0x26ad24: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x26AD24u;
    {
        const bool branch_taken_0x26ad24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad24) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26AD2Cu;
    // 0x26ad2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ad2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad30: 0x0  nop
    ctx->pc = 0x26ad30u;
    // NOP
    // 0x26ad34: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ad38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26AD38u;
    {
        const bool branch_taken_0x26ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad38) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26AD40u;
}
