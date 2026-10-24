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

// Function: entry_00121f4c
// Address: 0x121f4c - 0x121f68
void entry_00121f4c_0x121f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f4c_0x121f4c");
#endif

    ctx->pc = 0x121f4cu;

    // 0x121f4c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121f50: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121f54: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x121f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x121f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x121f5c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x121f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x121f60: 0x10000373  b           . + 4 + (0x373 << 2)
    ctx->pc = 0x121F60u;
    {
        const bool branch_taken_0x121f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f60) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121F68u;
}
