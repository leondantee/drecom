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

// Function: entry_00193544
// Address: 0x193544 - 0x193558
void entry_00193544_0x193544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193544_0x193544");
#endif

    ctx->pc = 0x193544u;

    // 0x193544: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x193544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x193548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193548u;
    {
        const bool branch_taken_0x193548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193548) {
            ctx->pc = 0x193558u;
            return;
        }
    }
    ctx->pc = 0x193550u;
    // 0x193550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193554: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x193554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x193558u;
}
