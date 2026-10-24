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

// Function: entry_00202a0c
// Address: 0x202a0c - 0x202a28
void entry_00202a0c_0x202a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202a0c_0x202a0c");
#endif

    ctx->pc = 0x202a0cu;

    // 0x202a0c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x202a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x202a10: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202a14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a18: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a1c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202a20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202A20u;
    {
        const bool branch_taken_0x202a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a20) {
            ctx->pc = 0x202A38u;
            return;
        }
    }
    ctx->pc = 0x202A28u;
}
