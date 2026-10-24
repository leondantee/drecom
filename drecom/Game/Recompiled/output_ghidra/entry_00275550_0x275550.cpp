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

// Function: entry_00275550
// Address: 0x275550 - 0x275558
void entry_00275550_0x275550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275550_0x275550");
#endif

    ctx->pc = 0x275550u;

    // 0x275550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275554: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x275554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    ctx->pc = 0x275558u;
}
