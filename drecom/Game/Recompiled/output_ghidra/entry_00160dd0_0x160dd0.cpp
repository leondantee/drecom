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

// Function: entry_00160dd0
// Address: 0x160dd0 - 0x160e0c
void entry_00160dd0_0x160dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160dd0_0x160dd0");
#endif

    ctx->pc = 0x160dd0u;

    // 0x160dd0: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x160dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x160dd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x160dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160dd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160ddc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x160DDCu;
    {
        const bool branch_taken_0x160ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ddc) {
            ctx->pc = 0x160EA8u;
            return;
        }
    }
    ctx->pc = 0x160DE4u;
    // 0x160de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160de8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x160DE8u;
    {
        const bool branch_taken_0x160de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160de8) {
            ctx->pc = 0x160EA8u;
            return;
        }
    }
    ctx->pc = 0x160DF0u;
    // 0x160df0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160df4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160DF4u;
    {
        const bool branch_taken_0x160df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160df4) {
            ctx->pc = 0x160E0Cu;
            return;
        }
    }
    ctx->pc = 0x160DFCu;
    // 0x160dfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160DFCu;
    {
        const bool branch_taken_0x160dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160dfc) {
            ctx->pc = 0x160E0Cu;
            return;
        }
    }
    ctx->pc = 0x160E04u;
    // 0x160e04: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x160E04u;
    {
        const bool branch_taken_0x160e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e04) {
            ctx->pc = 0x161024u;
            return;
        }
    }
    ctx->pc = 0x160E0Cu;
}
