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

// Function: entry_00160850
// Address: 0x160850 - 0x160880
void entry_00160850_0x160850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160850_0x160850");
#endif

    ctx->pc = 0x160850u;

    // 0x160850: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x160850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160854: 0x3c0244a8  lui         $v0, 0x44A8
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17576 << 16));
    // 0x160858: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x160858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x16085c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16085cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160860: 0x0  nop
    ctx->pc = 0x160860u;
    // NOP
    // 0x160864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160868: 0x0  nop
    ctx->pc = 0x160868u;
    // NOP
    // 0x16086c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16086Cu;
    {
        const bool branch_taken_0x16086c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16086c) {
            ctx->pc = 0x160880u;
            return;
        }
    }
    ctx->pc = 0x160874u;
    // 0x160874: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160874u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160878u;
    {
        const bool branch_taken_0x160878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160878) {
            ctx->pc = 0x1608B0u;
            return;
        }
    }
    ctx->pc = 0x160880u;
}
