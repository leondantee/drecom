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

// Function: entry_00164634
// Address: 0x164634 - 0x164638
void entry_00164634_0x164634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164634_0x164634");
#endif

    ctx->pc = 0x164634u;

    // 0x164634: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x164634u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 448), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x164638u;
}
