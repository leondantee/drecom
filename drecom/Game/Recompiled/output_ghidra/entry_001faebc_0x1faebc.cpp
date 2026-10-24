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

// Function: entry_001faebc
// Address: 0x1faebc - 0x1faed0
void entry_001faebc_0x1faebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faebc_0x1faebc");
#endif

    ctx->pc = 0x1faebcu;

    // 0x1faebc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faec0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1faec4: 0xa0600290  sb          $zero, 0x290($v1)
    ctx->pc = 0x1faec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faec8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1faec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1faecc: 0x0  nop
    ctx->pc = 0x1faeccu;
    // NOP
    ctx->pc = 0x1faed0u;
}
