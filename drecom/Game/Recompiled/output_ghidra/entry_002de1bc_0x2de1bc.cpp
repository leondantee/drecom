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

// Function: entry_002de1bc
// Address: 0x2de1bc - 0x2de1d4
void entry_002de1bc_0x2de1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de1bc_0x2de1bc");
#endif

    ctx->pc = 0x2de1bcu;

    // 0x2de1bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de1c0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de1c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de1c8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de1cc: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2DE1CCu;
    {
        const bool branch_taken_0x2de1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de1cc) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DE1D4u;
}
