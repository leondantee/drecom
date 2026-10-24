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

// Function: entry_002f7b68
// Address: 0x2f7b68 - 0x2f7b8c
void entry_002f7b68_0x2f7b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7b68_0x2f7b68");
#endif

    ctx->pc = 0x2f7b68u;

    // 0x2f7b68: 0x33d200ff  andi        $s2, $fp, 0xFF
    ctx->pc = 0x2f7b68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2f7b6c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7b70: 0xa0920100  sb          $s2, 0x100($a0)
    ctx->pc = 0x2f7b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 18));
    // 0x2f7b74: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7b78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f7b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7b7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7b80: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f7b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7b84: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2F7B84u;
    {
        const bool branch_taken_0x2f7b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b84) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7B8Cu;
}
