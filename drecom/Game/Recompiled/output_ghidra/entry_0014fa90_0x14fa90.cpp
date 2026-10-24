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

// Function: entry_0014fa90
// Address: 0x14fa90 - 0x14fa9c
void entry_0014fa90_0x14fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa90_0x14fa90");
#endif

    ctx->pc = 0x14fa90u;

    // 0x14fa90: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14fa94: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14fa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14fa98: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x14fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x14fa9cu;
}
