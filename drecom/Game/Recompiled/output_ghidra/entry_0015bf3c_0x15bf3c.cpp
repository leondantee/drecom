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

// Function: entry_0015bf3c
// Address: 0x15bf3c - 0x15bf44
void entry_0015bf3c_0x15bf3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bf3c_0x15bf3c");
#endif

    ctx->pc = 0x15bf3cu;

    // 0x15bf3c: 0xae6013ec  sw          $zero, 0x13EC($s3)
    ctx->pc = 0x15bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 0));
    // 0x15bf40: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15bf40u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15bf44u;
}
