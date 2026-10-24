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

// Function: entry_002e7604
// Address: 0x2e7604 - 0x2e762c
void entry_002e7604_0x2e7604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7604_0x2e7604");
#endif

    ctx->pc = 0x2e7604u;

    // 0x2e7604: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7608: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e7608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e760c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E760Cu;
    {
        const bool branch_taken_0x2e760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e760c) {
            ctx->pc = 0x2E762Cu;
            return;
        }
    }
    ctx->pc = 0x2E7614u;
    // 0x2e7614: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7618: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2e7618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2e761c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e7620: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2e7620u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7624: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2E7624u;
    {
        const bool branch_taken_0x2e7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7624) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E762Cu;
}
