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

// Function: entry_001bc54c
// Address: 0x1bc54c - 0x1bc574
void entry_001bc54c_0x1bc54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc54c_0x1bc54c");
#endif

    ctx->pc = 0x1bc54cu;

    // 0x1bc54c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc550: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1bc550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1bc554: 0x106002f5  beqz        $v1, . + 4 + (0x2F5 << 2)
    ctx->pc = 0x1BC554u;
    {
        const bool branch_taken_0x1bc554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc554) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC55Cu;
    // 0x1bc55c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc560: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bc560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bc564: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bc568: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bc568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bc56c: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x1BC56Cu;
    {
        const bool branch_taken_0x1bc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc56c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC574u;
}
