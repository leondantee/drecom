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

// Function: entry_00121e54
// Address: 0x121e54 - 0x121e70
void entry_00121e54_0x121e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121e54_0x121e54");
#endif

    ctx->pc = 0x121e54u;

    // 0x121e54: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x121e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121e5c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x121e60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x121e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x121e64: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x121e68: 0x100003b1  b           . + 4 + (0x3B1 << 2)
    ctx->pc = 0x121E68u;
    {
        const bool branch_taken_0x121e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e68) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121E70u;
}
