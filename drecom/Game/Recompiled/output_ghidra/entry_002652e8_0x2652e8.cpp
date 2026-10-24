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

// Function: entry_002652e8
// Address: 0x2652e8 - 0x265300
void entry_002652e8_0x2652e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002652e8_0x2652e8");
#endif

    ctx->pc = 0x2652e8u;

    // 0x2652e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2652e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2652ec: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x2652ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x2652f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2652f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2652f4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2652f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2652f8: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2652F8u;
    {
        const bool branch_taken_0x2652f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2652f8) {
            ctx->pc = 0x2651CCu;
            return;
        }
    }
    ctx->pc = 0x265300u;
}
