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

// Function: entry_001dd568
// Address: 0x1dd568 - 0x1dd5a8
void entry_001dd568_0x1dd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd568_0x1dd568");
#endif

    ctx->pc = 0x1dd568u;

    // 0x1dd568: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1dd568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd56c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd570: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd574: 0x0  nop
    ctx->pc = 0x1dd574u;
    // NOP
    // 0x1dd578: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DD578u;
    {
        const bool branch_taken_0x1dd578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd578) {
            ctx->pc = 0x1DD5A8u;
            return;
        }
    }
    ctx->pc = 0x1DD580u;
    // 0x1dd580: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd584: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd588: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1dd588u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dd58c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd590: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd594: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1dd594u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dd598: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd59c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dd5a0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1dd5a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dd5a4: 0x0  nop
    ctx->pc = 0x1dd5a4u;
    // NOP
    ctx->pc = 0x1dd5a8u;
}
