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

// Function: entry_001e7efc
// Address: 0x1e7efc - 0x1e7f10
void entry_001e7efc_0x1e7efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7efc_0x1e7efc");
#endif

    ctx->pc = 0x1e7efcu;

    // 0x1e7efc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7f00: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e7f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e7f04: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7f08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e7f0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e7f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1e7f10u;
}
