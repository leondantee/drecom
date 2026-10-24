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

// Function: entry_00194dd0
// Address: 0x194dd0 - 0x194de8
void entry_00194dd0_0x194dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194dd0_0x194dd0");
#endif

    ctx->pc = 0x194dd0u;

    // 0x194dd0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x194dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x194dd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194DD4u;
    {
        const bool branch_taken_0x194dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194dd4) {
            ctx->pc = 0x194DE8u;
            return;
        }
    }
    ctx->pc = 0x194DDCu;
    // 0x194ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194de0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x194de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x194de4: 0x0  nop
    ctx->pc = 0x194de4u;
    // NOP
    ctx->pc = 0x194de8u;
}
