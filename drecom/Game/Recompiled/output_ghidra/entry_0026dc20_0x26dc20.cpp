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

// Function: entry_0026dc20
// Address: 0x26dc20 - 0x26dc50
void entry_0026dc20_0x26dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dc20_0x26dc20");
#endif

    ctx->pc = 0x26dc20u;

    // 0x26dc20: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc24: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x26dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x26dc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc2c: 0x0  nop
    ctx->pc = 0x26dc2cu;
    // NOP
    // 0x26dc30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dc30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc34: 0x0  nop
    ctx->pc = 0x26dc34u;
    // NOP
    // 0x26dc38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26DC38u;
    {
        const bool branch_taken_0x26dc38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc38) {
            ctx->pc = 0x26DC50u;
            return;
        }
    }
    ctx->pc = 0x26DC40u;
    // 0x26dc40: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x26dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x26dc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc48: 0x0  nop
    ctx->pc = 0x26dc48u;
    // NOP
    // 0x26dc4c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    ctx->pc = 0x26dc50u;
}
