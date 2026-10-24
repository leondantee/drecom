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

// Function: entry_00173044
// Address: 0x173044 - 0x173068
void entry_00173044_0x173044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173044_0x173044");
#endif

    ctx->pc = 0x173044u;

    // 0x173044: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x173044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173048: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x173048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17304c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173050: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x173050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173054: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x173054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17305c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17305Cu;
    {
        const bool branch_taken_0x17305c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17305c) {
            ctx->pc = 0x173068u;
            return;
        }
    }
    ctx->pc = 0x173064u;
    // 0x173064: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173064u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x173068u;
}
