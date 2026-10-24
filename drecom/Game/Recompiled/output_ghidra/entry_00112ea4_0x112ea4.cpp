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

// Function: entry_00112ea4
// Address: 0x112ea4 - 0x112eac
void entry_00112ea4_0x112ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ea4_0x112ea4");
#endif

    ctx->pc = 0x112ea4u;

    // 0x112ea4: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x112ea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x112ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x112eacu;
}
