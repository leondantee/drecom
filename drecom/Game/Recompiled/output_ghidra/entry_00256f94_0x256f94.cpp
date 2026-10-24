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

// Function: entry_00256f94
// Address: 0x256f94 - 0x256fc0
void entry_00256f94_0x256f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256f94_0x256f94");
#endif

    ctx->pc = 0x256f94u;

    // 0x256f94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x256f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256f98: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x256f9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x256f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x256fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256FA0u;
    {
        const bool branch_taken_0x256fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fa0) {
            ctx->pc = 0x256FC0u;
            return;
        }
    }
    ctx->pc = 0x256FA8u;
    // 0x256fa8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x256fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x256fac: 0x34431001  ori         $v1, $v0, 0x1001
    ctx->pc = 0x256facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x256fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256fb4: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x256fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x256fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x256FB8u;
    {
        const bool branch_taken_0x256fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fb8) {
            ctx->pc = 0x256FD0u;
            return;
        }
    }
    ctx->pc = 0x256FC0u;
}
