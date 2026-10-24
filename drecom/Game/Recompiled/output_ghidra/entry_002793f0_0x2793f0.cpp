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

// Function: entry_002793f0
// Address: 0x2793f0 - 0x2793f8
void entry_002793f0_0x2793f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002793f0_0x2793f0");
#endif

    ctx->pc = 0x2793f0u;

    // 0x2793f0: 0xa023d5f1  sb          $v1, -0x2A0F($at)
    ctx->pc = 0x2793f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294956529), (uint8_t)GPR_U32(ctx, 3));
    // 0x2793f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2793f8u;
}
