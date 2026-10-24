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

// Function: entry_0029cde4
// Address: 0x29cde4 - 0x29ce04
void entry_0029cde4_0x29cde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cde4_0x29cde4");
#endif

    ctx->pc = 0x29cde4u;

    // 0x29cde4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cde8: 0x8c24bb58  lw          $a0, -0x44A8($at)
    ctx->pc = 0x29cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB58u));
    // 0x29cdec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cdf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cdf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cdf8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cdfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29CDFCu;
    {
        const bool branch_taken_0x29cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cdfc) {
            ctx->pc = 0x29CE40u;
            return;
        }
    }
    ctx->pc = 0x29CE04u;
}
