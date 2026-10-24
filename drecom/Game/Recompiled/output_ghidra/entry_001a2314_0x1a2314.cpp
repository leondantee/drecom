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

// Function: entry_001a2314
// Address: 0x1a2314 - 0x1a233c
void entry_001a2314_0x1a2314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2314_0x1a2314");
#endif

    ctx->pc = 0x1a2314u;

    // 0x1a2314: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a2314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a2318: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a2318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a231c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2320: 0x94220080  lhu         $v0, 0x80($at)
    ctx->pc = 0x1a2320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x1a2324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2324u;
    {
        const bool branch_taken_0x1a2324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2324) {
            ctx->pc = 0x1A233Cu;
            return;
        }
    }
    ctx->pc = 0x1A232Cu;
    // 0x1a232c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2330: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a2334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2338: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1a2338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1a233cu;
}
