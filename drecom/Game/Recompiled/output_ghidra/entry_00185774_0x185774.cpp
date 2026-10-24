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

// Function: entry_00185774
// Address: 0x185774 - 0x1857a8
void entry_00185774_0x185774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185774_0x185774");
#endif

    ctx->pc = 0x185774u;

    // 0x185774: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185778: 0xc4210320  lwc1        $f1, 0x320($at)
    ctx->pc = 0x185778u;
    { uint32_t bits = FAST_READ32(0x480320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18577c: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x185780: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185788: 0x0  nop
    ctx->pc = 0x185788u;
    // NOP
    // 0x18578c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18578cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185790: 0x0  nop
    ctx->pc = 0x185790u;
    // NOP
    // 0x185794: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185794u;
    {
        const bool branch_taken_0x185794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185794) {
            ctx->pc = 0x1857B0u;
            return;
        }
    }
    ctx->pc = 0x18579Cu;
    // 0x18579c: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x1857a0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1857a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1857a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1857a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1857a8u;
}
