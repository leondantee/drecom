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

// Function: entry_001c6b74
// Address: 0x1c6b74 - 0x1c6b98
void entry_001c6b74_0x1c6b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b74_0x1c6b74");
#endif

    ctx->pc = 0x1c6b74u;

    // 0x1c6b74: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b78: 0x90a609db  lbu         $a2, 0x9DB($a1)
    ctx->pc = 0x1c6b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x1c6b7c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1c6b80: 0x30e80020  andi        $t0, $a3, 0x20
    ctx->pc = 0x1c6b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x1c6b84: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6B84u;
    {
        const bool branch_taken_0x1c6b84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b84) {
            ctx->pc = 0x1C6B98u;
            return;
        }
    }
    ctx->pc = 0x1C6B8Cu;
    // 0x1c6b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b94: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1c6b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1c6b98u;
}
