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

// Function: entry_0026dd48
// Address: 0x26dd48 - 0x26dd88
void entry_0026dd48_0x26dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dd48_0x26dd48");
#endif

    ctx->pc = 0x26dd48u;

    // 0x26dd48: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd4c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x26dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x26dd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd54: 0x0  nop
    ctx->pc = 0x26dd54u;
    // NOP
    // 0x26dd58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd5c: 0x0  nop
    ctx->pc = 0x26dd5cu;
    // NOP
    // 0x26dd60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x26DD60u;
    {
        const bool branch_taken_0x26dd60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dd60) {
            ctx->pc = 0x26DD88u;
            return;
        }
    }
    ctx->pc = 0x26DD68u;
    // 0x26dd68: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd74: 0x0  nop
    ctx->pc = 0x26dd74u;
    // NOP
    // 0x26dd78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26dd78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26dd7c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    // 0x26dd80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26DD80u;
    {
        const bool branch_taken_0x26dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd80) {
            ctx->pc = 0x26DD94u;
            return;
        }
    }
    ctx->pc = 0x26DD88u;
}
