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

// Function: entry_0036dc18
// Address: 0x36dc18 - 0x36dc44
void entry_0036dc18_0x36dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036dc18_0x36dc18");
#endif

    ctx->pc = 0x36dc18u;

    // 0x36dc18: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x36dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x36dc1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36dc20: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x36dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x36dc24: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x36DC24u;
    {
        const bool branch_taken_0x36dc24 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x36dc24) {
            ctx->pc = 0x36DC58u;
            return;
        }
    }
    ctx->pc = 0x36DC2Cu;
    // 0x36dc2c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x36dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x36dc30: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x36dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36dc34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36DC34u;
    {
        const bool branch_taken_0x36dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dc34) {
            ctx->pc = 0x36DC44u;
            return;
        }
    }
    ctx->pc = 0x36DC3Cu;
    // 0x36dc3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36DC3Cu;
    {
        const bool branch_taken_0x36dc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dc3c) {
            ctx->pc = 0x36DC58u;
            return;
        }
    }
    ctx->pc = 0x36DC44u;
}
