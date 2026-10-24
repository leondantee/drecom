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

// Function: entry_0022cf84
// Address: 0x22cf84 - 0x22cfb4
void entry_0022cf84_0x22cf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cf84_0x22cf84");
#endif

    ctx->pc = 0x22cf84u;

    // 0x22cf84: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x22cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cf88: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x22cf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cf90: 0x0  nop
    ctx->pc = 0x22cf90u;
    // NOP
    // 0x22cf94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cf94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cf98: 0x0  nop
    ctx->pc = 0x22cf98u;
    // NOP
    // 0x22cf9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22CF9Cu;
    {
        const bool branch_taken_0x22cf9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cf9c) {
            ctx->pc = 0x22CFB4u;
            return;
        }
    }
    ctx->pc = 0x22CFA4u;
    // 0x22cfa4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x22cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x22cfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cfac: 0x0  nop
    ctx->pc = 0x22cfacu;
    // NOP
    // 0x22cfb0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x22cfb4u;
}
