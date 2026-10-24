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

// Function: entry_002034cc
// Address: 0x2034cc - 0x2034e4
void entry_002034cc_0x2034cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002034cc_0x2034cc");
#endif

    ctx->pc = 0x2034ccu;

    // 0x2034cc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2034ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2034d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2034d4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2034d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2034d8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2034d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2034dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2034DCu;
    {
        const bool branch_taken_0x2034dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034dc) {
            ctx->pc = 0x203510u;
            return;
        }
    }
    ctx->pc = 0x2034E4u;
}
