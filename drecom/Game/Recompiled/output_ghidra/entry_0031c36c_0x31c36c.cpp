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

// Function: entry_0031c36c
// Address: 0x31c36c - 0x31c384
void entry_0031c36c_0x31c36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c36c_0x31c36c");
#endif

    ctx->pc = 0x31c36cu;

    // 0x31c36c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c370: 0x8c621294  lw          $v0, 0x1294($v1)
    ctx->pc = 0x31c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
    // 0x31c374: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31c378: 0xac641294  sw          $a0, 0x1294($v1)
    ctx->pc = 0x31c378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 4));
    // 0x31c37c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x31C37Cu;
    {
        const bool branch_taken_0x31c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c37c) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C384u;
}
