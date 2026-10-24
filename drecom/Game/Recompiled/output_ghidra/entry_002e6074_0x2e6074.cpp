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

// Function: entry_002e6074
// Address: 0x2e6074 - 0x2e60a8
void entry_002e6074_0x2e6074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6074_0x2e6074");
#endif

    ctx->pc = 0x2e6074u;

    // 0x2e6074: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e6074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6078: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2e6078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2e607c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e6080: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e6080u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e6084: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x2e6084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x2e6088: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6088u;
    {
        const bool branch_taken_0x2e6088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6088) {
            ctx->pc = 0x2E60A8u;
            return;
        }
    }
    ctx->pc = 0x2E6090u;
    // 0x2e6090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6094: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x2e6094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e609c: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x2e609cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e60a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E60A0u;
    {
        const bool branch_taken_0x2e60a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e60a0) {
            ctx->pc = 0x2E60B0u;
            return;
        }
    }
    ctx->pc = 0x2E60A8u;
}
