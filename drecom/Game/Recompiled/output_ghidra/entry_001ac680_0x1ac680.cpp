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

// Function: entry_001ac680
// Address: 0x1ac680 - 0x1ac690
void entry_001ac680_0x1ac680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac680_0x1ac680");
#endif

    ctx->pc = 0x1ac680u;

    // 0x1ac680: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1ac680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ac684: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AC684u;
    {
        const bool branch_taken_0x1ac684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac684) {
            ctx->pc = 0x1AC650u;
            return;
        }
    }
    ctx->pc = 0x1AC68Cu;
    // 0x1ac68c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1ac690u;
}
