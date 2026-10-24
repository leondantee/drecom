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

// Function: entry_0024773c
// Address: 0x24773c - 0x247754
void entry_0024773c_0x24773c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024773c_0x24773c");
#endif

    ctx->pc = 0x24773cu;

    // 0x24773c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247740: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x247740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x247744: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x247744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x247748: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x247748u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x24774c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x24774Cu;
    {
        const bool branch_taken_0x24774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24774c) {
            ctx->pc = 0x2477B4u;
            return;
        }
    }
    ctx->pc = 0x247754u;
}
