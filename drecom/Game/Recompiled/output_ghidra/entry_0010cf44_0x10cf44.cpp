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

// Function: entry_0010cf44
// Address: 0x10cf44 - 0x10cf50
void entry_0010cf44_0x10cf44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cf44_0x10cf44");
#endif

    ctx->pc = 0x10cf44u;

    // 0x10cf44: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cf48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10cf4c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x10cf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x10cf50u;
}
