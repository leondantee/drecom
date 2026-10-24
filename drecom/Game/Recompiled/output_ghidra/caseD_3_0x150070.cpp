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

// Function: caseD_3
// Address: 0x150070 - 0x150094
void caseD_3_0x150070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x150070");
#endif

    ctx->pc = 0x150070u;

    // 0x150070: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150074: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15007c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15007Cu;
    {
        const bool branch_taken_0x15007c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15007c) {
            ctx->pc = 0x1500BCu;
            return;
        }
    }
    ctx->pc = 0x150084u;
    // 0x150084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150084u;
    {
        const bool branch_taken_0x150084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150084) {
            ctx->pc = 0x150094u;
            return;
        }
    }
    ctx->pc = 0x15008Cu;
    // 0x15008c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x15008Cu;
    {
        const bool branch_taken_0x15008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15008c) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150094u;
}
