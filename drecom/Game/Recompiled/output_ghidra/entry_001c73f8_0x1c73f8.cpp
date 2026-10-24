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

// Function: entry_001c73f8
// Address: 0x1c73f8 - 0x1c7410
void entry_001c73f8_0x1c73f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c73f8_0x1c73f8");
#endif

    ctx->pc = 0x1c73f8u;

    // 0x1c73f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c73fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c7400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c7404: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c7404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7408: 0x100003d6  b           . + 4 + (0x3D6 << 2)
    ctx->pc = 0x1C7408u;
    {
        const bool branch_taken_0x1c7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7408) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7410u;
}
