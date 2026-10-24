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

// Function: entry_001afb64
// Address: 0x1afb64 - 0x1afb78
void entry_001afb64_0x1afb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb64_0x1afb64");
#endif

    ctx->pc = 0x1afb64u;

    // 0x1afb64: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1afb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1afb68: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afb6c: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x1afb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    // 0x1afb70: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afb70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afb74: 0x0  nop
    ctx->pc = 0x1afb74u;
    // NOP
    ctx->pc = 0x1afb78u;
}
