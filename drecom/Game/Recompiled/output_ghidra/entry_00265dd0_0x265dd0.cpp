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

// Function: entry_00265dd0
// Address: 0x265dd0 - 0x265de0
void entry_00265dd0_0x265dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265dd0_0x265dd0");
#endif

    ctx->pc = 0x265dd0u;

    // 0x265dd0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x265dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x265dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x265dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x265dd8: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x265dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x265ddc: 0x0  nop
    ctx->pc = 0x265ddcu;
    // NOP
    ctx->pc = 0x265de0u;
}
