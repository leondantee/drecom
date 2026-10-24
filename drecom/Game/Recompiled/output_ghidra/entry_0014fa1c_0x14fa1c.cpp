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

// Function: entry_0014fa1c
// Address: 0x14fa1c - 0x14fa28
void entry_0014fa1c_0x14fa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa1c_0x14fa1c");
#endif

    ctx->pc = 0x14fa1cu;

    // 0x14fa1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fa20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14fa24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x14fa28u;
}
