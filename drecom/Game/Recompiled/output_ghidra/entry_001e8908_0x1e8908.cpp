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

// Function: entry_001e8908
// Address: 0x1e8908 - 0x1e8928
void entry_001e8908_0x1e8908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8908_0x1e8908");
#endif

    ctx->pc = 0x1e8908u;

    // 0x1e8908: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e890c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x1e890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x1e8910: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8910u;
    {
        const bool branch_taken_0x1e8910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8910) {
            ctx->pc = 0x1E8928u;
            return;
        }
    }
    ctx->pc = 0x1E8918u;
    // 0x1e8918: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e891c: 0xa46011f4  sh          $zero, 0x11F4($v1)
    ctx->pc = 0x1e891cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4596), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e8920: 0x100004c3  b           . + 4 + (0x4C3 << 2)
    ctx->pc = 0x1E8920u;
    {
        const bool branch_taken_0x1e8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8920) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E8928u;
}
