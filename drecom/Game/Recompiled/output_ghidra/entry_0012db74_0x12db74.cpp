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

// Function: entry_0012db74
// Address: 0x12db74 - 0x12db84
void entry_0012db74_0x12db74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012db74_0x12db74");
#endif

    ctx->pc = 0x12db74u;

    // 0x12db74: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12db74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db78: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x12db78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12db7c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12db80: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x12db80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x12db84u;
}
