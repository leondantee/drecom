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

// Function: entry_002fc334
// Address: 0x2fc334 - 0x2fc370
void entry_002fc334_0x2fc334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc334_0x2fc334");
#endif

    ctx->pc = 0x2fc334u;

    // 0x2fc334: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc338: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fc338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc33c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fc33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc340: 0x14a60143  bne         $a1, $a2, . + 4 + (0x143 << 2)
    ctx->pc = 0x2FC340u;
    {
        const bool branch_taken_0x2fc340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2fc340) {
            ctx->pc = 0x2FC850u;
            return;
        }
    }
    ctx->pc = 0x2FC348u;
    // 0x2fc348: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc34c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fc34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc350: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x2fc350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fc354: 0x1420013e  bnez        $at, . + 4 + (0x13E << 2)
    ctx->pc = 0x2FC354u;
    {
        const bool branch_taken_0x2fc354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc354) {
            ctx->pc = 0x2FC850u;
            return;
        }
    }
    ctx->pc = 0x2FC35Cu;
    // 0x2fc35c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc360: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc364: 0x28610013  slti        $at, $v1, 0x13
    ctx->pc = 0x2fc364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fc368: 0x10200139  beqz        $at, . + 4 + (0x139 << 2)
    ctx->pc = 0x2FC368u;
    {
        const bool branch_taken_0x2fc368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc368) {
            ctx->pc = 0x2FC850u;
            return;
        }
    }
    ctx->pc = 0x2FC370u;
}
