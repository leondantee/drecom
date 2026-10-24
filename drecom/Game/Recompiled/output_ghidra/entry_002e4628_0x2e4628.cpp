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

// Function: entry_002e4628
// Address: 0x2e4628 - 0x2e4648
void entry_002e4628_0x2e4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4628_0x2e4628");
#endif

    ctx->pc = 0x2e4628u;

    // 0x2e4628: 0x8623006e  lh          $v1, 0x6E($s1)
    ctx->pc = 0x2e4628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x2e462c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E462Cu;
    {
        const bool branch_taken_0x2e462c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e462c) {
            ctx->pc = 0x2E4648u;
            return;
        }
    }
    ctx->pc = 0x2E4634u;
    // 0x2e4634: 0x8623006e  lh          $v1, 0x6E($s1)
    ctx->pc = 0x2e4634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x2e4638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e463c: 0xa623006e  sh          $v1, 0x6E($s1)
    ctx->pc = 0x2e463cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e4640: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E4640u;
    {
        const bool branch_taken_0x2e4640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4640) {
            ctx->pc = 0x2E4704u;
            return;
        }
    }
    ctx->pc = 0x2E4648u;
}
