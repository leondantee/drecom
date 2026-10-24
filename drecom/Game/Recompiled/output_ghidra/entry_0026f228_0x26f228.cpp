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

// Function: entry_0026f228
// Address: 0x26f228 - 0x26f270
void entry_0026f228_0x26f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f228_0x26f228");
#endif

    ctx->pc = 0x26f228u;

    // 0x26f228: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f22c: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f230: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x26f234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f238: 0x0  nop
    ctx->pc = 0x26f238u;
    // NOP
    // 0x26f23c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26f23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f240: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f248: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f250: 0x0  nop
    ctx->pc = 0x26f250u;
    // NOP
    // 0x26f254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f258: 0x0  nop
    ctx->pc = 0x26f258u;
    // NOP
    // 0x26f25c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26F25Cu;
    {
        const bool branch_taken_0x26f25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f25c) {
            ctx->pc = 0x26F270u;
            return;
        }
    }
    ctx->pc = 0x26F264u;
    // 0x26f264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f268: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f26c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x26f270u;
}
