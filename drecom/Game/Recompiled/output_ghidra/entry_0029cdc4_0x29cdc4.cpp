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

// Function: entry_0029cdc4
// Address: 0x29cdc4 - 0x29cde4
void entry_0029cdc4_0x29cdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cdc4_0x29cdc4");
#endif

    ctx->pc = 0x29cdc4u;

    // 0x29cdc4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cdc8: 0x8c24bb54  lw          $a0, -0x44AC($at)
    ctx->pc = 0x29cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB54u));
    // 0x29cdcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cdd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cdd4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cdd8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cddc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29CDDCu;
    {
        const bool branch_taken_0x29cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cddc) {
            ctx->pc = 0x29CE40u;
            return;
        }
    }
    ctx->pc = 0x29CDE4u;
}
