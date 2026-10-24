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

// Function: entry_00191dcc
// Address: 0x191dcc - 0x191dd4
void entry_00191dcc_0x191dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191dcc_0x191dcc");
#endif

    ctx->pc = 0x191dccu;

    // 0x191dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191dd0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x191dd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x191dd4u;
}
