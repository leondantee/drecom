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

// Function: entry_00172e74
// Address: 0x172e74 - 0x172e98
void entry_00172e74_0x172e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172e74_0x172e74");
#endif

    ctx->pc = 0x172e74u;

    // 0x172e74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172e7c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172e80: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172e8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x172E8Cu;
    {
        const bool branch_taken_0x172e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e8c) {
            ctx->pc = 0x172E98u;
            return;
        }
    }
    ctx->pc = 0x172E94u;
    // 0x172e94: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x172e94u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x172e98u;
}
