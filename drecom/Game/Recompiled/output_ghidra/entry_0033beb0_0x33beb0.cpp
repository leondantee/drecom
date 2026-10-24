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

// Function: entry_0033beb0
// Address: 0x33beb0 - 0x33bee4
void entry_0033beb0_0x33beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033beb0_0x33beb0");
#endif

    ctx->pc = 0x33beb0u;

    // 0x33beb0: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x33beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33beb4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33beb8: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x33beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x33bebc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x33bec0: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x33bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33bec4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33bec8: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x33bec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x33becc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33beccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x33bed0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x33bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x33bed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33bed8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33bedc: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x33BEDCu;
    {
        const bool branch_taken_0x33bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bedc) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BEE4u;
}
