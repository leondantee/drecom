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

// Function: entry_00118020
// Address: 0x118020 - 0x118028
void entry_00118020_0x118020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118020_0x118020");
#endif

    ctx->pc = 0x118020u;

    // 0x118020: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x118020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118024: 0xafc24d58  sw          $v0, 0x4D58($fp)
    ctx->pc = 0x118024u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 19800), GPR_U32(ctx, 2));
    ctx->pc = 0x118028u;
}
