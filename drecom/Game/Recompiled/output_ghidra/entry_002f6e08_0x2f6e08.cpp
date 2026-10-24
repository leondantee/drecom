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

// Function: entry_002f6e08
// Address: 0x2f6e08 - 0x2f6e28
void entry_002f6e08_0x2f6e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6e08_0x2f6e08");
#endif

    ctx->pc = 0x2f6e08u;

    // 0x2f6e08: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x2f6e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2f6e0c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e10: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6e14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6e18: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e1c: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6e20: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2F6E20u;
    {
        const bool branch_taken_0x2f6e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e20) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6E28u;
}
