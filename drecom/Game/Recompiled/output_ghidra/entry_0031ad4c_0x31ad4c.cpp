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

// Function: entry_0031ad4c
// Address: 0x31ad4c - 0x31ad58
void entry_0031ad4c_0x31ad4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ad4c_0x31ad4c");
#endif

    ctx->pc = 0x31ad4cu;

    // 0x31ad4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ad50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad54: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x31ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
    ctx->pc = 0x31ad58u;
}
