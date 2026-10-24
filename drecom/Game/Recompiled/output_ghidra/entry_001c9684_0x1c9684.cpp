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

// Function: entry_001c9684
// Address: 0x1c9684 - 0x1c9690
void entry_001c9684_0x1c9684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9684_0x1c9684");
#endif

    ctx->pc = 0x1c9684u;

    // 0x1c9684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9688: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c968c: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1c968cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1c9690u;
}
