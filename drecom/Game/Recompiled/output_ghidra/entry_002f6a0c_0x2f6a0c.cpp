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

// Function: entry_002f6a0c
// Address: 0x2f6a0c - 0x2f6a2c
void entry_002f6a0c_0x2f6a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6a0c_0x2f6a0c");
#endif

    ctx->pc = 0x2f6a0cu;

    // 0x2f6a0c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2f6a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2f6a10: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a14: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6a18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6a1c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a20: 0xa0a30101  sb          $v1, 0x101($a1)
    ctx->pc = 0x2f6a20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6a24: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2F6A24u;
    {
        const bool branch_taken_0x2f6a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a24) {
            ctx->pc = 0x2F6CA0u;
            return;
        }
    }
    ctx->pc = 0x2F6A2Cu;
}
