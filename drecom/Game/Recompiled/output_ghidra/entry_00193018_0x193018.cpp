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

// Function: entry_00193018
// Address: 0x193018 - 0x193038
void entry_00193018_0x193018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193018_0x193018");
#endif

    ctx->pc = 0x193018u;

    // 0x193018: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x193018u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19301c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x19301cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x193020: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x193020u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x193024: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193028: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19302c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x193030: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x193034: 0x0  nop
    ctx->pc = 0x193034u;
    // NOP
    ctx->pc = 0x193038u;
}
