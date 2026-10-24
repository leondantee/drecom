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

// Function: entry_001ef50c
// Address: 0x1ef50c - 0x1ef538
void entry_001ef50c_0x1ef50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef50c_0x1ef50c");
#endif

    ctx->pc = 0x1ef50cu;

    // 0x1ef50c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef510: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef514: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef518: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ef518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ef51c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF51Cu;
    {
        const bool branch_taken_0x1ef51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef51c) {
            ctx->pc = 0x1EF538u;
            return;
        }
    }
    ctx->pc = 0x1EF524u;
    // 0x1ef524: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1ef524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1ef528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef52c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef530: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef534: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x1ef538u;
}
