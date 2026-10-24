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

// Function: entry_00265818
// Address: 0x265818 - 0x265830
void entry_00265818_0x265818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265818_0x265818");
#endif

    ctx->pc = 0x265818u;

    // 0x265818: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26581c: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x26581cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x265820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x265824: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x265824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265828: 0x1460ff8b  bnez        $v1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x265828u;
    {
        const bool branch_taken_0x265828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265828) {
            ctx->pc = 0x265658u;
            return;
        }
    }
    ctx->pc = 0x265830u;
}
