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

// Function: entry_0018a370
// Address: 0x18a370 - 0x18a380
void entry_0018a370_0x18a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a370_0x18a370");
#endif

    ctx->pc = 0x18a370u;

    // 0x18a370: 0xaec00b18  sw          $zero, 0xB18($s6)
    ctx->pc = 0x18a370u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2840), GPR_U32(ctx, 0));
    // 0x18a374: 0x26d60b30  addiu       $s6, $s6, 0xB30
    ctx->pc = 0x18a374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2864));
    // 0x18a378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a37c: 0x0  nop
    ctx->pc = 0x18a37cu;
    // NOP
    ctx->pc = 0x18a380u;
}
