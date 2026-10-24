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

// Function: entry_0019d344
// Address: 0x19d344 - 0x19d350
void entry_0019d344_0x19d344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d344_0x19d344");
#endif

    ctx->pc = 0x19d344u;

    // 0x19d344: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d34c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x19d350u;
}
