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

// Function: entry_00378434
// Address: 0x378434 - 0x37845c
void entry_00378434_0x378434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378434_0x378434");
#endif

    ctx->pc = 0x378434u;

    // 0x378434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378438: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x378438u;
    {
        const bool branch_taken_0x378438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x378438) {
            ctx->pc = 0x37845Cu;
            return;
        }
    }
    ctx->pc = 0x378440u;
    // 0x378440: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378444: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x378444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x378448: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37844c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x37844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x378450: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x378450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x378454: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x378454u;
    {
        const bool branch_taken_0x378454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378454) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x37845Cu;
}
