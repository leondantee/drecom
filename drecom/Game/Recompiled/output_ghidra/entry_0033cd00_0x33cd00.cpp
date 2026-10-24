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

// Function: entry_0033cd00
// Address: 0x33cd00 - 0x33cd30
void entry_0033cd00_0x33cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cd00_0x33cd00");
#endif

    ctx->pc = 0x33cd00u;

    // 0x33cd00: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cd04: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33cd08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cd0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33cd10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33cd14: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x33cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x33cd18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cd1c: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x33cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x33cd20: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x33cd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x33cd24: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x33cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x33cd28: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x33CD28u;
    {
        const bool branch_taken_0x33cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd28) {
            ctx->pc = 0x33D030u;
            return;
        }
    }
    ctx->pc = 0x33CD30u;
}
