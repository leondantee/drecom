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

// Function: entry_00192d18
// Address: 0x192d18 - 0x192d30
void entry_00192d18_0x192d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d18_0x192d18");
#endif

    ctx->pc = 0x192d18u;

    // 0x192d18: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x192d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x192d1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192D1Cu;
    {
        const bool branch_taken_0x192d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d1c) {
            ctx->pc = 0x192D30u;
            return;
        }
    }
    ctx->pc = 0x192D24u;
    // 0x192d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d28: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x192d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x192d2c: 0x0  nop
    ctx->pc = 0x192d2cu;
    // NOP
    ctx->pc = 0x192d30u;
}
