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

// Function: entry_001bc954
// Address: 0x1bc954 - 0x1bc97c
void entry_001bc954_0x1bc954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc954_0x1bc954");
#endif

    ctx->pc = 0x1bc954u;

    // 0x1bc954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc958: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bc958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bc95c: 0x106001f3  beqz        $v1, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x1BC95Cu;
    {
        const bool branch_taken_0x1bc95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc95c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC964u;
    // 0x1bc964: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc968: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bc968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bc96c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bc970: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bc970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bc974: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x1BC974u;
    {
        const bool branch_taken_0x1bc974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc974) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC97Cu;
}
