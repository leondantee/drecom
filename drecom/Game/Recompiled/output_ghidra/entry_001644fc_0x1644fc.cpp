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

// Function: entry_001644fc
// Address: 0x1644fc - 0x164500
void entry_001644fc_0x1644fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644fc_0x1644fc");
#endif

    ctx->pc = 0x1644fcu;

    // 0x1644fc: 0xa0230462  sb          $v1, 0x462($at)
    ctx->pc = 0x1644fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1122), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x164500u;
}
