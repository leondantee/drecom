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

// Function: caseD_8
// Address: 0x1cc63c - 0x1cc684
void caseD_8_0x1cc63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1cc63c");
#endif

    ctx->pc = 0x1cc63cu;

    // 0x1cc63c: 0x8e280090  lw          $t0, 0x90($s1)
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1cc640: 0x31030800  andi        $v1, $t0, 0x800
    ctx->pc = 0x1cc640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1cc644: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC644u;
    {
        const bool branch_taken_0x1cc644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc644) {
            ctx->pc = 0x1CC684u;
            return;
        }
    }
    ctx->pc = 0x1CC64Cu;
    // 0x1cc64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc650: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc654: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cc654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cc658: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cc65c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc660: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1cc660u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cc664: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc668: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1cc668u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc66c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc670: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1cc670u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc674: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc678: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1cc678u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1cc67c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1CC67Cu;
    {
        const bool branch_taken_0x1cc67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc67c) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC684u;
}
