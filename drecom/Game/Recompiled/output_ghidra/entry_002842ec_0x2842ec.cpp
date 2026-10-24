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

// Function: entry_002842ec
// Address: 0x2842ec - 0x284300
void entry_002842ec_0x2842ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002842ec_0x2842ec");
#endif

    ctx->pc = 0x2842ecu;

    // 0x2842ec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2842ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2842f0: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x2842f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x2842f4: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x2842f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x2842f8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2842F8u;
    {
        const bool branch_taken_0x2842f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842f8) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x284300u;
}
