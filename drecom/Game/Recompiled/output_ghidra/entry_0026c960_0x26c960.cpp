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

// Function: entry_0026c960
// Address: 0x26c960 - 0x26c978
void entry_0026c960_0x26c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c960_0x26c960");
#endif

    ctx->pc = 0x26c960u;

    // 0x26c960: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c964: 0x8ca41b68  lw          $a0, 0x1B68($a1)
    ctx->pc = 0x26c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7016)));
    // 0x26c968: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x26c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26c96c: 0xaca31b68  sw          $v1, 0x1B68($a1)
    ctx->pc = 0x26c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 3));
    // 0x26c970: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26C970u;
    {
        const bool branch_taken_0x26c970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c970) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C978u;
}
