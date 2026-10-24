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

// Function: entry_0018c258
// Address: 0x18c258 - 0x18c260
void entry_0018c258_0x18c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c258_0x18c258");
#endif

    ctx->pc = 0x18c258u;

    // 0x18c258: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18c25c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    ctx->pc = 0x18c260u;
}
