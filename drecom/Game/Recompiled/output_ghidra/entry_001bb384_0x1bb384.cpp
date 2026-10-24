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

// Function: entry_001bb384
// Address: 0x1bb384 - 0x1bb3ac
void entry_001bb384_0x1bb384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb384_0x1bb384");
#endif

    ctx->pc = 0x1bb384u;

    // 0x1bb384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb388: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bb388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bb38c: 0x106001e0  beqz        $v1, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x1BB38Cu;
    {
        const bool branch_taken_0x1bb38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb38c) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB394u;
    // 0x1bb394: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb398: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bb398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bb39c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bb39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bb3a0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb3a4: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x1BB3A4u;
    {
        const bool branch_taken_0x1bb3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3a4) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB3ACu;
}
