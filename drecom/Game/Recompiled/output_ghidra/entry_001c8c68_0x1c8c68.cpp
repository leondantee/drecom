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

// Function: entry_001c8c68
// Address: 0x1c8c68 - 0x1c8c88
void entry_001c8c68_0x1c8c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c68_0x1c8c68");
#endif

    ctx->pc = 0x1c8c68u;

    // 0x1c8c68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c6c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c8c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c8c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c8c74: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c8c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c8c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8C78u;
    {
        const bool branch_taken_0x1c8c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c78) {
            ctx->pc = 0x1C8C88u;
            return;
        }
    }
    ctx->pc = 0x1C8C80u;
    // 0x1c8c80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c84: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c8c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1c8c88u;
}
