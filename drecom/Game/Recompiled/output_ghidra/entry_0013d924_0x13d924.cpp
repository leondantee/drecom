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

// Function: entry_0013d924
// Address: 0x13d924 - 0x13d930
void entry_0013d924_0x13d924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d924_0x13d924");
#endif

    ctx->pc = 0x13d924u;

    // 0x13d924: 0x2404023c  addiu       $a0, $zero, 0x23C
    ctx->pc = 0x13d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x13d928: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d92c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x13d930u;
}
