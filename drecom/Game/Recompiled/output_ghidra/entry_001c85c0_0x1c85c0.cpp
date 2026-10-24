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

// Function: entry_001c85c0
// Address: 0x1c85c0 - 0x1c85e4
void entry_001c85c0_0x1c85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c85c0_0x1c85c0");
#endif

    ctx->pc = 0x1c85c0u;

    // 0x1c85c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c85c4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c85c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c85c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c85c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c85cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c85ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c85d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C85D0u;
    {
        const bool branch_taken_0x1c85d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85d0) {
            ctx->pc = 0x1C85E4u;
            return;
        }
    }
    ctx->pc = 0x1C85D8u;
    // 0x1c85d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c85dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c85e0: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1c85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1c85e4u;
}
