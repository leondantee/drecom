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

// Function: entry_002df520
// Address: 0x2df520 - 0x2df570
void entry_002df520_0x2df520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df520_0x2df520");
#endif

    ctx->pc = 0x2df520u;

    // 0x2df520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df524: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df528: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF528u;
    {
        const bool branch_taken_0x2df528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df528) {
            ctx->pc = 0x2DF570u;
            return;
        }
    }
    ctx->pc = 0x2DF530u;
    // 0x2df530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df534: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2df534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df53c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df540: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df544: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df54c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df54cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df554: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df55c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df55cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df564: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df568: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DF568u;
    {
        const bool branch_taken_0x2df568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df568) {
            ctx->pc = 0x2DF570u;
            return;
        }
    }
    ctx->pc = 0x2DF570u;
}
