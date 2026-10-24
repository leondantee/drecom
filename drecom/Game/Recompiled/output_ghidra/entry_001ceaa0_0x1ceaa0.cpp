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

// Function: entry_001ceaa0
// Address: 0x1ceaa0 - 0x1ceac4
void entry_001ceaa0_0x1ceaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceaa0_0x1ceaa0");
#endif

    ctx->pc = 0x1ceaa0u;

    // 0x1ceaa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceaa4: 0x907009db  lbu         $s0, 0x9DB($v1)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1ceaa8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1ceaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ceaac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ceaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ceab0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEAB0u;
    {
        const bool branch_taken_0x1ceab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceab0) {
            ctx->pc = 0x1CEAC4u;
            return;
        }
    }
    ctx->pc = 0x1CEAB8u;
    // 0x1ceab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ceab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ceabc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceac0: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ceac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1ceac4u;
}
