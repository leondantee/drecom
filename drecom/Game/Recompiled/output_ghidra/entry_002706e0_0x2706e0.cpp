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

// Function: entry_002706e0
// Address: 0x2706e0 - 0x270708
void entry_002706e0_0x2706e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002706e0_0x2706e0");
#endif

    ctx->pc = 0x2706e0u;

    // 0x2706e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2706e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2706e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2706e8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2706E8u;
    {
        const bool branch_taken_0x2706e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706e8) {
            ctx->pc = 0x270774u;
            return;
        }
    }
    ctx->pc = 0x2706F0u;
    // 0x2706f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2706f4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2706f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2706f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2706fc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2706fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x270700: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x270700u;
    {
        const bool branch_taken_0x270700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270700) {
            ctx->pc = 0x270774u;
            return;
        }
    }
    ctx->pc = 0x270708u;
}
