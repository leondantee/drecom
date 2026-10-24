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

// Function: entry_001dcf08
// Address: 0x1dcf08 - 0x1dcf48
void entry_001dcf08_0x1dcf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf08_0x1dcf08");
#endif

    ctx->pc = 0x1dcf08u;

    // 0x1dcf08: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1dcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcf0c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcf10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcf14: 0x0  nop
    ctx->pc = 0x1dcf14u;
    // NOP
    // 0x1dcf18: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DCF18u;
    {
        const bool branch_taken_0x1dcf18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcf18) {
            ctx->pc = 0x1DCF48u;
            return;
        }
    }
    ctx->pc = 0x1DCF20u;
    // 0x1dcf20: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf24: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dcf28: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1dcf28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dcf2c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dcf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf30: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dcf34: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1dcf34u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dcf38: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf3c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dcf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dcf40: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1dcf40u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcf44: 0x0  nop
    ctx->pc = 0x1dcf44u;
    // NOP
    ctx->pc = 0x1dcf48u;
}
