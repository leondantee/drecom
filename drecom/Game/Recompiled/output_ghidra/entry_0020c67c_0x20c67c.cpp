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

// Function: entry_0020c67c
// Address: 0x20c67c - 0x20c688
void entry_0020c67c_0x20c67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c67c_0x20c67c");
#endif

    ctx->pc = 0x20c67cu;

    // 0x20c67c: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x20c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20c680: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c684: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20c684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    ctx->pc = 0x20c688u;
}
