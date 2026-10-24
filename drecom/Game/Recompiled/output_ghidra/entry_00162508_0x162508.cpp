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

// Function: entry_00162508
// Address: 0x162508 - 0x16252c
void entry_00162508_0x162508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162508_0x162508");
#endif

    ctx->pc = 0x162508u;

    // 0x162508: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x162508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x16250c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16250cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162514: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162514u;
    {
        const bool branch_taken_0x162514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162514) {
            ctx->pc = 0x16252Cu;
            return;
        }
    }
    ctx->pc = 0x16251Cu;
    // 0x16251c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16251Cu;
    {
        const bool branch_taken_0x16251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16251c) {
            ctx->pc = 0x16252Cu;
            return;
        }
    }
    ctx->pc = 0x162524u;
    // 0x162524: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x162524u;
    {
        const bool branch_taken_0x162524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162524) {
            ctx->pc = 0x1625A4u;
            return;
        }
    }
    ctx->pc = 0x16252Cu;
}
