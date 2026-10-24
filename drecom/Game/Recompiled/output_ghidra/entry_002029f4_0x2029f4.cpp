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

// Function: entry_002029f4
// Address: 0x2029f4 - 0x202a0c
void entry_002029f4_0x2029f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002029f4_0x2029f4");
#endif

    ctx->pc = 0x2029f4u;

    // 0x2029f4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2029f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2029f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2029f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2029fc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2029fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a00: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202a00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202a04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202A04u;
    {
        const bool branch_taken_0x202a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a04) {
            ctx->pc = 0x202A38u;
            return;
        }
    }
    ctx->pc = 0x202A0Cu;
}
