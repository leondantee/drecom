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

// Function: entry_00253274
// Address: 0x253274 - 0x2532cc
void entry_00253274_0x253274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253274_0x253274");
#endif

    switch (ctx->pc) {
        case 0x25328cu: goto label_25328c;
        default: break;
    }

    ctx->pc = 0x253274u;

    // 0x253274: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x253274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253278: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x253278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x25327c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x253280: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253284: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x253284u;
    SET_GPR_U32(ctx, 31, 0x25328Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25328Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25328Cu) { return; }
    ctx->pc = 0x25328Cu;
label_25328c:
    // 0x25328c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x25328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253290: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x253290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x253294: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x253294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x253298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25329c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x25329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2532a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2532a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532a4: 0x0  nop
    ctx->pc = 0x2532a4u;
    // NOP
    // 0x2532a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2532A8u;
    {
        const bool branch_taken_0x2532a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532a8) {
            ctx->pc = 0x2532CCu;
            return;
        }
    }
    ctx->pc = 0x2532B0u;
    // 0x2532b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2532b4: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x2532b4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2532b8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2532b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2532bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2532bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532c0: 0x0  nop
    ctx->pc = 0x2532c0u;
    // NOP
    // 0x2532c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2532C4u;
    {
        const bool branch_taken_0x2532c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532c4) {
            ctx->pc = 0x2532D0u;
            return;
        }
    }
    ctx->pc = 0x2532CCu;
}
