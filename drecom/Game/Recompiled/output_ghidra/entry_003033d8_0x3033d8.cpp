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

// Function: entry_003033d8
// Address: 0x3033d8 - 0x3033fc
void entry_003033d8_0x3033d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003033d8_0x3033d8");
#endif

    ctx->pc = 0x3033d8u;

    // 0x3033d8: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x3033d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x3033dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3033DCu;
    {
        const bool branch_taken_0x3033dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033dc) {
            ctx->pc = 0x3033FCu;
            return;
        }
    }
    ctx->pc = 0x3033E4u;
    // 0x3033e4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3033e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3033e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3033E8u;
    {
        const bool branch_taken_0x3033e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033e8) {
            ctx->pc = 0x3033FCu;
            return;
        }
    }
    ctx->pc = 0x3033F0u;
    // 0x3033f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3033f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033f8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3033f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3033fcu;
}
