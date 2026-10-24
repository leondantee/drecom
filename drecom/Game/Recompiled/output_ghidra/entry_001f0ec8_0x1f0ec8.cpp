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

// Function: entry_001f0ec8
// Address: 0x1f0ec8 - 0x1f0ef0
void entry_001f0ec8_0x1f0ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ec8_0x1f0ec8");
#endif

    ctx->pc = 0x1f0ec8u;

    // 0x1f0ec8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0ecc: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1f0eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1f0ed0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1f0ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f0ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ed8: 0x106400be  beq         $v1, $a0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1F0ED8u;
    {
        const bool branch_taken_0x1f0ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f0ed8) {
            ctx->pc = 0x1F11D4u;
            return;
        }
    }
    ctx->pc = 0x1F0EE0u;
    // 0x1f0ee0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0EE0u;
    {
        const bool branch_taken_0x1f0ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ee0) {
            ctx->pc = 0x1F0EF0u;
            return;
        }
    }
    ctx->pc = 0x1F0EE8u;
    // 0x1f0ee8: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x1F0EE8u;
    {
        const bool branch_taken_0x1f0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ee8) {
            ctx->pc = 0x1F1790u;
            return;
        }
    }
    ctx->pc = 0x1F0EF0u;
}
