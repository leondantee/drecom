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

// Function: caseD_2
// Address: 0x1501c0 - 0x1501e4
void caseD_2_0x1501c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1501c0");
#endif

    ctx->pc = 0x1501c0u;

    // 0x1501c0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1501c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1501c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1501c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1501c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1501c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1501cc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1501CCu;
    {
        const bool branch_taken_0x1501cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1501cc) {
            ctx->pc = 0x15020Cu;
            return;
        }
    }
    ctx->pc = 0x1501D4u;
    // 0x1501d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1501D4u;
    {
        const bool branch_taken_0x1501d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501d4) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x1501DCu;
    // 0x1501dc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1501DCu;
    {
        const bool branch_taken_0x1501dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501dc) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x1501E4u;
}
