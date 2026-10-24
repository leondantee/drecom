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

// Function: entry_00336cf4
// Address: 0x336cf4 - 0x336d00
void entry_00336cf4_0x336cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336cf4_0x336cf4");
#endif

    ctx->pc = 0x336cf4u;

    // 0x336cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336cf8: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x336cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x336cfc: 0xae005dd4  sw          $zero, 0x5DD4($s0)
    ctx->pc = 0x336cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 0));
    ctx->pc = 0x336d00u;
}
