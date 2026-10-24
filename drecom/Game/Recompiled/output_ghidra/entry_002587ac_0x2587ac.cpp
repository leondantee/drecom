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

// Function: entry_002587ac
// Address: 0x2587ac - 0x2587c0
void entry_002587ac_0x2587ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002587ac_0x2587ac");
#endif

    ctx->pc = 0x2587acu;

    // 0x2587ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2587acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2587b0: 0x3442180f  ori         $v0, $v0, 0x180F
    ctx->pc = 0x2587b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x2587b4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x2587b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2587b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2587CCu;
            return;
        }
    }
    ctx->pc = 0x2587C0u;
}
