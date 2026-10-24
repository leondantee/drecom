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

// Function: caseD_0
// Address: 0x14ff14 - 0x14ff38
void caseD_0_0x14ff14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14ff14");
#endif

    ctx->pc = 0x14ff14u;

    // 0x14ff14: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ff14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14ff18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ff18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ff1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ff20: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14FF20u;
    {
        const bool branch_taken_0x14ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff20) {
            ctx->pc = 0x14FF60u;
            return;
        }
    }
    ctx->pc = 0x14FF28u;
    // 0x14ff28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FF28u;
    {
        const bool branch_taken_0x14ff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff28) {
            ctx->pc = 0x14FF38u;
            return;
        }
    }
    ctx->pc = 0x14FF30u;
    // 0x14ff30: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x14FF30u;
    {
        const bool branch_taken_0x14ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff30) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x14FF38u;
}
