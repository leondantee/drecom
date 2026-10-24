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

// Function: caseD_9
// Address: 0x150380 - 0x1503a4
void caseD_9_0x150380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x150380");
#endif

    ctx->pc = 0x150380u;

    // 0x150380: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150384: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15038c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15038Cu;
    {
        const bool branch_taken_0x15038c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15038c) {
            ctx->pc = 0x1503CCu;
            return;
        }
    }
    ctx->pc = 0x150394u;
    // 0x150394: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150394u;
    {
        const bool branch_taken_0x150394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150394) {
            ctx->pc = 0x1503A4u;
            return;
        }
    }
    ctx->pc = 0x15039Cu;
    // 0x15039c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x15039Cu;
    {
        const bool branch_taken_0x15039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15039c) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x1503A4u;
}
