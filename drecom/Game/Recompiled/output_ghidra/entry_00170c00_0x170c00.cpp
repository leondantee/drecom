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

// Function: entry_00170c00
// Address: 0x170c00 - 0x170c40
void entry_00170c00_0x170c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c00_0x170c00");
#endif

    ctx->pc = 0x170c00u;

    // 0x170c00: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x170c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170c04: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x170c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170c0c: 0x0  nop
    ctx->pc = 0x170c0cu;
    // NOP
    // 0x170c10: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170C10u;
    {
        const bool branch_taken_0x170c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170c10) {
            ctx->pc = 0x170C40u;
            return;
        }
    }
    ctx->pc = 0x170C18u;
    // 0x170c18: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x170c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c1c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x170c20: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x170c20u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x170c24: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x170c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c28: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170c2c: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x170c2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x170c30: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c34: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x170c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170c38: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x170c38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x170c3c: 0x0  nop
    ctx->pc = 0x170c3cu;
    // NOP
    ctx->pc = 0x170c40u;
}
