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

// Function: entry_001e3410
// Address: 0x1e3410 - 0x1e3438
void entry_001e3410_0x1e3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3410_0x1e3410");
#endif

    ctx->pc = 0x1e3410u;

    // 0x1e3410: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3414: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e3418: 0x106000fb  beqz        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x1E3418u;
    {
        const bool branch_taken_0x1e3418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3418) {
            ctx->pc = 0x1E3808u;
            return;
        }
    }
    ctx->pc = 0x1E3420u;
    // 0x1e3420: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3424: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e3424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e3428: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3428u;
    {
        const bool branch_taken_0x1e3428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3428) {
            ctx->pc = 0x1E3438u;
            return;
        }
    }
    ctx->pc = 0x1E3430u;
    // 0x1e3430: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e3430u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e3434: 0x0  nop
    ctx->pc = 0x1e3434u;
    // NOP
    ctx->pc = 0x1e3438u;
}
