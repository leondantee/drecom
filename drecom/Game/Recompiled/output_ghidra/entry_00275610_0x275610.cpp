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

// Function: entry_00275610
// Address: 0x275610 - 0x275618
void entry_00275610_0x275610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275610_0x275610");
#endif

    ctx->pc = 0x275610u;

    // 0x275610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275614: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x275614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    ctx->pc = 0x275618u;
}
