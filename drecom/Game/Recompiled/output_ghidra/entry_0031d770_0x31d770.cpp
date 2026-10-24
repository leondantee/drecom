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

// Function: entry_0031d770
// Address: 0x31d770 - 0x31d780
void entry_0031d770_0x31d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d770_0x31d770");
#endif

    ctx->pc = 0x31d770u;

    // 0x31d770: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31d770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d774: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31d774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31d778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d77c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31d77cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x31d780u;
}
