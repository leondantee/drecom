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

// Function: caseD_1
// Address: 0x14ff84 - 0x14ffc0
void caseD_1_0x14ff84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14ff84");
#endif

    ctx->pc = 0x14ff84u;

    // 0x14ff84: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ff84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14ff88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ff88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ff8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ff90: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14FF90u;
    {
        const bool branch_taken_0x14ff90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff90) {
            ctx->pc = 0x15004Cu;
            return;
        }
    }
    ctx->pc = 0x14FF98u;
    // 0x14ff98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ff9c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14FF9Cu;
    {
        const bool branch_taken_0x14ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff9c) {
            ctx->pc = 0x150024u;
            return;
        }
    }
    ctx->pc = 0x14FFA4u;
    // 0x14ffa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ffa8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14FFA8u;
    {
        const bool branch_taken_0x14ffa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ffa8) {
            ctx->pc = 0x14FFE8u;
            return;
        }
    }
    ctx->pc = 0x14FFB0u;
    // 0x14ffb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FFB0u;
    {
        const bool branch_taken_0x14ffb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffb0) {
            ctx->pc = 0x14FFC0u;
            return;
        }
    }
    ctx->pc = 0x14FFB8u;
    // 0x14ffb8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x14FFB8u;
    {
        const bool branch_taken_0x14ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffb8) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x14FFC0u;
}
