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

// Function: entry_0014fa5c
// Address: 0x14fa5c - 0x14fa68
void entry_0014fa5c_0x14fa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa5c_0x14fa5c");
#endif

    ctx->pc = 0x14fa5cu;

    // 0x14fa5c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14fa60: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14fa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14fa64: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x14fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x14fa68u;
}
