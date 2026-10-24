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

// Function: entry_0036a544
// Address: 0x36a544 - 0x36a56c
void entry_0036a544_0x36a544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a544_0x36a544");
#endif

    ctx->pc = 0x36a544u;

    // 0x36a544: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a548: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a54c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x36A54Cu;
    {
        const bool branch_taken_0x36a54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a54c) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A554u;
    // 0x36a554: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a558: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36a558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x36a55c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a560: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36a560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a564: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x36A564u;
    {
        const bool branch_taken_0x36a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a564) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A56Cu;
}
