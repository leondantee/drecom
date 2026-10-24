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

// Function: entry_001f7a9c
// Address: 0x1f7a9c - 0x1f7ac4
void entry_001f7a9c_0x1f7a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7a9c_0x1f7a9c");
#endif

    ctx->pc = 0x1f7a9cu;

    // 0x1f7a9c: 0x860410a6  lh          $a0, 0x10A6($s0)
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1f7aa0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1f7aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f7aa4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f7aa8: 0x4a1016c  bgez        $a1, . + 4 + (0x16C << 2)
    ctx->pc = 0x1F7AA8u;
    {
        const bool branch_taken_0x1f7aa8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1f7aa8) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F7AB0u;
    // 0x1f7ab0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f7ab4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ab8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f7ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7abc: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1F7ABCu;
    {
        const bool branch_taken_0x1f7abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7abc) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F7AC4u;
}
