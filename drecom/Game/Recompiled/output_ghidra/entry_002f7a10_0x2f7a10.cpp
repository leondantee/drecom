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

// Function: entry_002f7a10
// Address: 0x2f7a10 - 0x2f7a30
void entry_002f7a10_0x2f7a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7a10_0x2f7a10");
#endif

    ctx->pc = 0x2f7a10u;

    // 0x2f7a10: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2f7a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2f7a14: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7a18: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f7a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7a1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7a20: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7a24: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f7a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7a28: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2F7A28u;
    {
        const bool branch_taken_0x2f7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7a28) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7A30u;
}
