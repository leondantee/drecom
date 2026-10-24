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

// Function: entry_002f8b5c
// Address: 0x2f8b5c - 0x2f8b70
void entry_002f8b5c_0x2f8b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8b5c_0x2f8b5c");
#endif

    ctx->pc = 0x2f8b5cu;

    // 0x2f8b5c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b60: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2f8b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f8b64: 0x38e30010  xori        $v1, $a3, 0x10
    ctx->pc = 0x2f8b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)16);
    // 0x2f8b68: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8b68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b6c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2f8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2f8b70u;
}
