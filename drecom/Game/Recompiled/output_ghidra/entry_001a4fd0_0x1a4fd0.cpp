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

// Function: entry_001a4fd0
// Address: 0x1a4fd0 - 0x1a4fe0
void entry_001a4fd0_0x1a4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fd0_0x1a4fd0");
#endif

    ctx->pc = 0x1a4fd0u;

    // 0x1a4fd0: 0x92030319  lbu         $v1, 0x319($s0)
    ctx->pc = 0x1a4fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 793)));
    // 0x1a4fd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FD4u;
    {
        const bool branch_taken_0x1a4fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fd4) {
            ctx->pc = 0x1A4FE8u;
            return;
        }
    }
    ctx->pc = 0x1A4FDCu;
    // 0x1a4fdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x1a4fe0u;
}
