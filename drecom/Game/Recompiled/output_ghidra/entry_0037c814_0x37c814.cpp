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

// Function: entry_0037c814
// Address: 0x37c814 - 0x37c854
void entry_0037c814_0x37c814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c814_0x37c814");
#endif

    ctx->pc = 0x37c814u;

    // 0x37c814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c818: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x37c818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c81c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37c820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c824: 0x0  nop
    ctx->pc = 0x37c824u;
    // NOP
    // 0x37c828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37c828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c82c: 0x0  nop
    ctx->pc = 0x37c82cu;
    // NOP
    // 0x37c830: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x37C830u;
    {
        const bool branch_taken_0x37c830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c830) {
            ctx->pc = 0x37C854u;
            return;
        }
    }
    ctx->pc = 0x37C838u;
    // 0x37c838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c83c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x37c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c840: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x37c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x37c844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c848: 0x0  nop
    ctx->pc = 0x37c848u;
    // NOP
    // 0x37c84c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c850: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x37c850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x37c854u;
}
