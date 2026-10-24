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

// Function: entry_0022e818
// Address: 0x22e818 - 0x22e858
void entry_0022e818_0x22e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e818_0x22e818");
#endif

    ctx->pc = 0x22e818u;

    // 0x22e818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e81c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x22e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e824: 0x0  nop
    ctx->pc = 0x22e824u;
    // NOP
    // 0x22e828: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22e828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e82c: 0x0  nop
    ctx->pc = 0x22e82cu;
    // NOP
    // 0x22e830: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22E830u;
    {
        const bool branch_taken_0x22e830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e830) {
            ctx->pc = 0x22E858u;
            return;
        }
    }
    ctx->pc = 0x22E838u;
    // 0x22e838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e83c: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x22e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e844: 0x0  nop
    ctx->pc = 0x22e844u;
    // NOP
    // 0x22e848: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22e848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e84c: 0x0  nop
    ctx->pc = 0x22e84cu;
    // NOP
    // 0x22e850: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x22E850u;
    {
        const bool branch_taken_0x22e850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e850) {
            ctx->pc = 0x22E90Cu;
            return;
        }
    }
    ctx->pc = 0x22E858u;
}
