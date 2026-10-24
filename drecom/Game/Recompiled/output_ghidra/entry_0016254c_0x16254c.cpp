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

// Function: entry_0016254c
// Address: 0x16254c - 0x162568
void entry_0016254c_0x16254c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016254c_0x16254c");
#endif

    ctx->pc = 0x16254cu;

    // 0x16254c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162550: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x162550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x162554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162554u;
    {
        const bool branch_taken_0x162554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162554) {
            ctx->pc = 0x162568u;
            return;
        }
    }
    ctx->pc = 0x16255Cu;
    // 0x16255c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162560: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x162560u;
    {
        const bool branch_taken_0x162560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162560) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x162568u;
}
