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

// Function: entry_00164504
// Address: 0x164504 - 0x164508
void entry_00164504_0x164504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164504_0x164504");
#endif

    ctx->pc = 0x164504u;

    // 0x164504: 0xa02302f2  sb          $v1, 0x2F2($at)
    ctx->pc = 0x164504u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 754), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x164508u;
}
