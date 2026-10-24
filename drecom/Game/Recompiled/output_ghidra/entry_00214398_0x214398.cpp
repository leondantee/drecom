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

// Function: entry_00214398
// Address: 0x214398 - 0x2143b8
void entry_00214398_0x214398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214398_0x214398");
#endif

    ctx->pc = 0x214398u;

label_214398:
    // 0x214398: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x214398u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x21439c: 0x3187b  dsra        $v1, $v1, 1
    ctx->pc = 0x21439cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x2143a0: 0x0  nop
    ctx->pc = 0x2143a0u;
    // NOP
    // 0x2143a4: 0x0  nop
    ctx->pc = 0x2143a4u;
    // NOP
    // 0x2143a8: 0x0  nop
    ctx->pc = 0x2143a8u;
    // NOP
    // 0x2143ac: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2143ACu;
    {
        const bool branch_taken_0x2143ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2143ac) {
            ctx->pc = 0x214398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214398;
        }
    }
    ctx->pc = 0x2143B4u;
    // 0x2143b4: 0x28a20035  slti        $v0, $a1, 0x35
    ctx->pc = 0x2143b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
    ctx->pc = 0x2143b8u;
}
