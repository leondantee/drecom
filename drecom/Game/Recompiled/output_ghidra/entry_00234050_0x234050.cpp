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

// Function: entry_00234050
// Address: 0x234050 - 0x23405c
void entry_00234050_0x234050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234050_0x234050");
#endif

    ctx->pc = 0x234050u;

    // 0x234050: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234054: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234058: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x234058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23405cu;
}
