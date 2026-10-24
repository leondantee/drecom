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

// Function: entry_002dd8b4
// Address: 0x2dd8b4 - 0x2dd8c8
void entry_002dd8b4_0x2dd8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd8b4_0x2dd8b4");
#endif

    ctx->pc = 0x2dd8b4u;

    // 0x2dd8b4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2dd8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd8b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd8bc: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x2dd8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2dd8c0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2DD8C0u;
    {
        const bool branch_taken_0x2dd8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8c0) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD8C8u;
}
