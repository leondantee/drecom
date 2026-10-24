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

// Function: entry_00285658
// Address: 0x285658 - 0x285660
void entry_00285658_0x285658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285658_0x285658");
#endif

    ctx->pc = 0x285658u;

    // 0x285658: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x285658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28565c: 0xae045dd4  sw          $a0, 0x5DD4($s0)
    ctx->pc = 0x28565cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 4));
    ctx->pc = 0x285660u;
}
