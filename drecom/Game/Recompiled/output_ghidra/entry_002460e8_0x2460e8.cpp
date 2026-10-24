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

// Function: entry_002460e8
// Address: 0x2460e8 - 0x246130
void entry_002460e8_0x2460e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002460e8_0x2460e8");
#endif

    ctx->pc = 0x2460e8u;

    // 0x2460e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2460e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2460ec: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x2460ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x2460f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2460f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2460f4: 0x0  nop
    ctx->pc = 0x2460f4u;
    // NOP
    // 0x2460f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2460f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2460fc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246100: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x246100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246108: 0x0  nop
    ctx->pc = 0x246108u;
    // NOP
    // 0x24610c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x24610Cu;
    {
        const bool branch_taken_0x24610c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24610c) {
            ctx->pc = 0x246130u;
            return;
        }
    }
    ctx->pc = 0x246114u;
    // 0x246114: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x246114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246118: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x246118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24611c: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x246120: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x246120u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246124: 0x0  nop
    ctx->pc = 0x246124u;
    // NOP
    // 0x246128: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24612c: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x24612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    ctx->pc = 0x246130u;
}
