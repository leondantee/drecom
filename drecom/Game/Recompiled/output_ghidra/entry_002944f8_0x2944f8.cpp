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

// Function: entry_002944f8
// Address: 0x2944f8 - 0x294510
void entry_002944f8_0x2944f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002944f8_0x2944f8");
#endif

    ctx->pc = 0x2944f8u;

    // 0x2944f8: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x2944f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2944fc: 0x1460ff3c  bnez        $v1, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x2944FCu;
    {
        const bool branch_taken_0x2944fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2944fc) {
            ctx->pc = 0x2941F0u;
            return;
        }
    }
    ctx->pc = 0x294504u;
    // 0x294504: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x294504u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x294508: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x294508u;
    {
        const bool branch_taken_0x294508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294508) {
            ctx->pc = 0x2946A0u;
            return;
        }
    }
    ctx->pc = 0x294510u;
}
