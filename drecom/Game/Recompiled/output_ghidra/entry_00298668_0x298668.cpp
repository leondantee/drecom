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

// Function: entry_00298668
// Address: 0x298668 - 0x29869c
void entry_00298668_0x298668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298668_0x298668");
#endif

    ctx->pc = 0x298668u;

    // 0x298668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29866c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x29866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298670: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x298670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x298674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298678: 0x0  nop
    ctx->pc = 0x298678u;
    // NOP
    // 0x29867c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29867cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298680: 0x0  nop
    ctx->pc = 0x298680u;
    // NOP
    // 0x298684: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298684u;
    {
        const bool branch_taken_0x298684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298684) {
            ctx->pc = 0x29869Cu;
            return;
        }
    }
    ctx->pc = 0x29868Cu;
    // 0x29868c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x29868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x298690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298698: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x29869cu;
}
