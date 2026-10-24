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

// Function: entry_002792ac
// Address: 0x2792ac - 0x2792b4
void entry_002792ac_0x2792ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002792ac_0x2792ac");
#endif

    ctx->pc = 0x2792acu;

    // 0x2792ac: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x2792acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
    // 0x2792b0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x2792b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2792b4u;
}
