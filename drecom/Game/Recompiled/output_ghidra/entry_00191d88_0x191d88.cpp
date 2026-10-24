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

// Function: entry_00191d88
// Address: 0x191d88 - 0x191d90
void entry_00191d88_0x191d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d88_0x191d88");
#endif

    ctx->pc = 0x191d88u;

    // 0x191d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191d8c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x191d8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x191d90u;
}
