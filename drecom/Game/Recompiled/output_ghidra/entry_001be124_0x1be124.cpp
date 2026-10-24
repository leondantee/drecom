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

// Function: entry_001be124
// Address: 0x1be124 - 0x1be14c
void entry_001be124_0x1be124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be124_0x1be124");
#endif

    ctx->pc = 0x1be124u;

    // 0x1be124: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be128: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1be128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1be12c: 0x10600177  beqz        $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x1BE12Cu;
    {
        const bool branch_taken_0x1be12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be12c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE134u;
    // 0x1be134: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be138: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1be138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1be13c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be140: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1be140u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be144: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x1BE144u;
    {
        const bool branch_taken_0x1be144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be144) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE14Cu;
}
