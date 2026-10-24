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

// Function: entry_001242e4
// Address: 0x1242e4 - 0x1242f8
void entry_001242e4_0x1242e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001242e4_0x1242e4");
#endif

    ctx->pc = 0x1242e4u;

    // 0x1242e4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1242e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1242e8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1242ec: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1242ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1242f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1242F0u;
    {
        const bool branch_taken_0x1242f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242f0) {
            ctx->pc = 0x12434Cu;
            return;
        }
    }
    ctx->pc = 0x1242F8u;
}
