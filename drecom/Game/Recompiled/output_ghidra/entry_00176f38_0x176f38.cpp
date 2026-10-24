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

// Function: entry_00176f38
// Address: 0x176f38 - 0x176f48
void entry_00176f38_0x176f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176f38_0x176f38");
#endif

    ctx->pc = 0x176f38u;

    // 0x176f38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f3c: 0x1603fffa  bne         $s0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176F3Cu;
    {
        const bool branch_taken_0x176f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x176f3c) {
            ctx->pc = 0x176F28u;
            return;
        }
    }
    ctx->pc = 0x176F44u;
    // 0x176f44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x176f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x176f48u;
}
