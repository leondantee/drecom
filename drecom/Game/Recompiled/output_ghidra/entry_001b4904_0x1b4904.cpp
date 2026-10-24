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

// Function: entry_001b4904
// Address: 0x1b4904 - 0x1b4928
void entry_001b4904_0x1b4904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4904_0x1b4904");
#endif

    ctx->pc = 0x1b4904u;

    // 0x1b4904: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b4908: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b490c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B490Cu;
    {
        const bool branch_taken_0x1b490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b490c) {
            ctx->pc = 0x1B4928u;
            return;
        }
    }
    ctx->pc = 0x1B4914u;
    // 0x1b4914: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4918: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b491c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4920: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4924: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1b4928u;
}
