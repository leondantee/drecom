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

// Function: entry_00265480
// Address: 0x265480 - 0x265498
void entry_00265480_0x265480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265480_0x265480");
#endif

    ctx->pc = 0x265480u;

    // 0x265480: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265484: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x265484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x265488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26548c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x26548cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265490: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x265490u;
    {
        const bool branch_taken_0x265490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265490) {
            ctx->pc = 0x26535Cu;
            return;
        }
    }
    ctx->pc = 0x265498u;
}
