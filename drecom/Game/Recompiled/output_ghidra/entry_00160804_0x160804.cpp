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

// Function: entry_00160804
// Address: 0x160804 - 0x160834
void entry_00160804_0x160804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160804_0x160804");
#endif

    ctx->pc = 0x160804u;

    // 0x160804: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x160804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160808: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x160808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x16080c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x16080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x160810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160814: 0x0  nop
    ctx->pc = 0x160814u;
    // NOP
    // 0x160818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16081c: 0x0  nop
    ctx->pc = 0x16081cu;
    // NOP
    // 0x160820: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x160820u;
    {
        const bool branch_taken_0x160820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160820) {
            ctx->pc = 0x160834u;
            return;
        }
    }
    ctx->pc = 0x160828u;
    // 0x160828: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160828u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16082c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x16082Cu;
    {
        const bool branch_taken_0x16082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16082c) {
            ctx->pc = 0x1608B0u;
            return;
        }
    }
    ctx->pc = 0x160834u;
}
