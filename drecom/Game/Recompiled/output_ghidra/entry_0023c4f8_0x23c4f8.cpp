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

// Function: entry_0023c4f8
// Address: 0x23c4f8 - 0x23c530
void entry_0023c4f8_0x23c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c4f8_0x23c4f8");
#endif

    ctx->pc = 0x23c4f8u;

    // 0x23c4f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4fc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c500: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c504: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23c504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c508: 0x0  nop
    ctx->pc = 0x23c508u;
    // NOP
    // 0x23c50c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23C50Cu;
    {
        const bool branch_taken_0x23c50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c50c) {
            ctx->pc = 0x23C530u;
            return;
        }
    }
    ctx->pc = 0x23C514u;
    // 0x23c514: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c518: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23c518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c51c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23c520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c524: 0x0  nop
    ctx->pc = 0x23c524u;
    // NOP
    // 0x23c528: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23c528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23c52c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23c52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x23c530u;
}
