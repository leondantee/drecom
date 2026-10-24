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

// Function: entry_00145618
// Address: 0x145618 - 0x145624
void entry_00145618_0x145618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145618_0x145618");
#endif

    ctx->pc = 0x145618u;

    // 0x145618: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14561c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145620: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x145624u;
}
