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

// Function: entry_00197f10
// Address: 0x197f10 - 0x197f34
void entry_00197f10_0x197f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197f10_0x197f10");
#endif

    ctx->pc = 0x197f10u;

    // 0x197f10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197f14: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x197f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x197f18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x197f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x197f1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x197F1Cu;
    {
        const bool branch_taken_0x197f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f1c) {
            ctx->pc = 0x197F34u;
            return;
        }
    }
    ctx->pc = 0x197F24u;
    // 0x197f24: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197f28: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x197f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x197f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197f30: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x197f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x197f34u;
}
