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

// Function: entry_001c7410
// Address: 0x1c7410 - 0x1c7424
void entry_001c7410_0x1c7410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7410_0x1c7410");
#endif

    ctx->pc = 0x1c7410u;

    // 0x1c7410: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c7414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7418: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c7418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c741c: 0x100003d1  b           . + 4 + (0x3D1 << 2)
    ctx->pc = 0x1C741Cu;
    {
        const bool branch_taken_0x1c741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c741c) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7424u;
}
