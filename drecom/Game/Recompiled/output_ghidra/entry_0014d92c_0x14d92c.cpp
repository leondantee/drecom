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

// Function: entry_0014d92c
// Address: 0x14d92c - 0x14d944
void entry_0014d92c_0x14d92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d92c_0x14d92c");
#endif

    ctx->pc = 0x14d92cu;

    // 0x14d92c: 0x86021418  lh          $v0, 0x1418($s0)
    ctx->pc = 0x14d92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5144)));
    // 0x14d930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D930u;
    {
        const bool branch_taken_0x14d930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d930) {
            ctx->pc = 0x14D944u;
            return;
        }
    }
    ctx->pc = 0x14D938u;
    // 0x14d938: 0x86021418  lh          $v0, 0x1418($s0)
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5144)));
    // 0x14d93c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14d940: 0xa6021418  sh          $v0, 0x1418($s0)
    ctx->pc = 0x14d940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5144), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d944u;
}
