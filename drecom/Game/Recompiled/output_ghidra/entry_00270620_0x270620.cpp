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

// Function: entry_00270620
// Address: 0x270620 - 0x270648
void entry_00270620_0x270620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270620_0x270620");
#endif

    ctx->pc = 0x270620u;

    // 0x270620: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270624: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x270624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x270628: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x270628u;
    {
        const bool branch_taken_0x270628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270628) {
            ctx->pc = 0x270774u;
            return;
        }
    }
    ctx->pc = 0x270630u;
    // 0x270630: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270634: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x270638: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27063c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x27063cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x270640: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x270640u;
    {
        const bool branch_taken_0x270640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270640) {
            ctx->pc = 0x270774u;
            return;
        }
    }
    ctx->pc = 0x270648u;
}
