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

// Function: caseD_b
// Address: 0x150460 - 0x150484
void caseD_b_0x150460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x150460");
#endif

    ctx->pc = 0x150460u;

    // 0x150460: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150464: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15046c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15046Cu;
    {
        const bool branch_taken_0x15046c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15046c) {
            ctx->pc = 0x1504ACu;
            return;
        }
    }
    ctx->pc = 0x150474u;
    // 0x150474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150474u;
    {
        const bool branch_taken_0x150474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150474) {
            ctx->pc = 0x150484u;
            return;
        }
    }
    ctx->pc = 0x15047Cu;
    // 0x15047c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15047Cu;
    {
        const bool branch_taken_0x15047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15047c) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150484u;
}
