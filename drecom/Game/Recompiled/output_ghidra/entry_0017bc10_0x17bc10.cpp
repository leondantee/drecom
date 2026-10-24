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

// Function: entry_0017bc10
// Address: 0x17bc10 - 0x17bc44
void entry_0017bc10_0x17bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc10_0x17bc10");
#endif

    ctx->pc = 0x17bc10u;

    // 0x17bc10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17bc14: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bc18: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc20: 0x0  nop
    ctx->pc = 0x17bc20u;
    // NOP
    // 0x17bc24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17bc24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bc28: 0x0  nop
    ctx->pc = 0x17bc28u;
    // NOP
    // 0x17bc2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17BC2Cu;
    {
        const bool branch_taken_0x17bc2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bc2c) {
            ctx->pc = 0x17BC44u;
            return;
        }
    }
    ctx->pc = 0x17BC34u;
    // 0x17bc34: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc3c: 0x0  nop
    ctx->pc = 0x17bc3cu;
    // NOP
    // 0x17bc40: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17bc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x17bc44u;
}
