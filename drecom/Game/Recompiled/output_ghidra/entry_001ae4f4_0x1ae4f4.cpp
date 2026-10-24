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

// Function: entry_001ae4f4
// Address: 0x1ae4f4 - 0x1ae538
void entry_001ae4f4_0x1ae4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae4f4_0x1ae4f4");
#endif

    ctx->pc = 0x1ae4f4u;

    // 0x1ae4f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4f8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4fc: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae504: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae508: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae508u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae50c: 0xa422b504  sh          $v0, -0x4AFC($at)
    ctx->pc = 0x1ae50cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948100), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae514: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae518: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae51c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE51Cu;
    {
        const bool branch_taken_0x1ae51c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae51c) {
            ctx->pc = 0x1AE538u;
            return;
        }
    }
    ctx->pc = 0x1AE524u;
    // 0x1ae524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae528: 0x0  nop
    ctx->pc = 0x1ae528u;
    // NOP
    // 0x1ae52c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae530: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE530u;
    {
        const bool branch_taken_0x1ae530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae530) {
            ctx->pc = 0x1AE554u;
            return;
        }
    }
    ctx->pc = 0x1AE538u;
}
