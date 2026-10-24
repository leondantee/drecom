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

// Function: entry_001bc1c8
// Address: 0x1bc1c8 - 0x1bc21c
void entry_001bc1c8_0x1bc1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc1c8_0x1bc1c8");
#endif

    ctx->pc = 0x1bc1c8u;

    // 0x1bc1c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc1cc: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1bc1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc1d0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1bc1d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bc1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bc1d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc1dc: 0x0  nop
    ctx->pc = 0x1bc1dcu;
    // NOP
    // 0x1bc1e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bc1e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bc1e4: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1bc1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1bc1e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc1ec: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1bc1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc1f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bc1f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc1f8: 0x0  nop
    ctx->pc = 0x1bc1f8u;
    // NOP
    // 0x1bc1fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc200: 0x0  nop
    ctx->pc = 0x1bc200u;
    // NOP
    // 0x1bc204: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC204u;
    {
        const bool branch_taken_0x1bc204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc204) {
            ctx->pc = 0x1BC21Cu;
            return;
        }
    }
    ctx->pc = 0x1BC20Cu;
    // 0x1bc20c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1bc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1bc210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc214: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc218: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bc218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1bc21cu;
}
