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

// Function: entry_0016252c
// Address: 0x16252c - 0x16254c
void entry_0016252c_0x16252c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016252c_0x16252c");
#endif

    ctx->pc = 0x16252cu;

    // 0x16252c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162530: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x162530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x162534: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162534u;
    {
        const bool branch_taken_0x162534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162534) {
            ctx->pc = 0x16254Cu;
            return;
        }
    }
    ctx->pc = 0x16253Cu;
    // 0x16253c: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x16253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x162540: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x162544: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x162544u;
    {
        const bool branch_taken_0x162544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162544) {
            ctx->pc = 0x1625A4u;
            return;
        }
    }
    ctx->pc = 0x16254Cu;
}
