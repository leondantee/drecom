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

// Function: entry_00140008
// Address: 0x140008 - 0x140018
void entry_00140008_0x140008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140008_0x140008");
#endif

    ctx->pc = 0x140008u;

    // 0x140008: 0x8fa71670  lw          $a3, 0x1670($sp)
    ctx->pc = 0x140008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x14000c: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x14000cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x140010: 0x8fa81670  lw          $t0, 0x1670($sp)
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x140014: 0xafa816a8  sw          $t0, 0x16A8($sp)
    ctx->pc = 0x140014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 8));
    ctx->pc = 0x140018u;
}
