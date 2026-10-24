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

// Function: entry_0020244c
// Address: 0x20244c - 0x20247c
void entry_0020244c_0x20244c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020244c_0x20244c");
#endif

    ctx->pc = 0x20244cu;

    // 0x20244c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202450: 0xc4604830  lwc1        $f0, 0x4830($v1)
    ctx->pc = 0x202450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202458: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x202458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20245c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20245cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202460: 0x0  nop
    ctx->pc = 0x202460u;
    // NOP
    // 0x202464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202468: 0x0  nop
    ctx->pc = 0x202468u;
    // NOP
    // 0x20246c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20246Cu;
    {
        const bool branch_taken_0x20246c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20246c) {
            ctx->pc = 0x20247Cu;
            return;
        }
    }
    ctx->pc = 0x202474u;
    // 0x202474: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202478: 0xac604844  sw          $zero, 0x4844($v1)
    ctx->pc = 0x202478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18500), GPR_U32(ctx, 0));
    ctx->pc = 0x20247cu;
}
