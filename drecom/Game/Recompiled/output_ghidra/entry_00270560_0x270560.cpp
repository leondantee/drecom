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

// Function: entry_00270560
// Address: 0x270560 - 0x270588
void entry_00270560_0x270560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270560_0x270560");
#endif

    ctx->pc = 0x270560u;

    // 0x270560: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270564: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x270564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x270568: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x270568u;
    {
        const bool branch_taken_0x270568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270568) {
            ctx->pc = 0x270774u;
            return;
        }
    }
    ctx->pc = 0x270570u;
    // 0x270570: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270574: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x270578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27057c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x27057cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x270580: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x270580u;
    {
        const bool branch_taken_0x270580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270580) {
            ctx->pc = 0x270774u;
            return;
        }
    }
    ctx->pc = 0x270588u;
}
