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

// Function: entry_00271284
// Address: 0x271284 - 0x2712b4
void entry_00271284_0x271284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271284_0x271284");
#endif

    ctx->pc = 0x271284u;

    // 0x271284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271288: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x271288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27128c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x27128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x271290: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x271290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x271294: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271294u;
    {
        const bool branch_taken_0x271294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271294) {
            ctx->pc = 0x2712B4u;
            return;
        }
    }
    ctx->pc = 0x27129Cu;
    // 0x27129c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2712a0: 0x24421980  addiu       $v0, $v0, 0x1980
    ctx->pc = 0x2712a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x2712a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712a8: 0xac22d69c  sw          $v0, -0x2964($at)
    ctx->pc = 0x2712a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD69Cu, _value); } while (0);
    // 0x2712ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2712ACu;
    {
        const bool branch_taken_0x2712ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712ac) {
            ctx->pc = 0x2712C0u;
            return;
        }
    }
    ctx->pc = 0x2712B4u;
}
