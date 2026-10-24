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

// Function: entry_001670fc
// Address: 0x1670fc - 0x167104
void entry_001670fc_0x1670fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001670fc_0x1670fc");
#endif

    ctx->pc = 0x1670fcu;

    // 0x1670fc: 0xac239ab0  sw          $v1, -0x6550($at)
    ctx->pc = 0x1670fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941360), GPR_U32(ctx, 3));
    // 0x167100: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x167104u;
}
