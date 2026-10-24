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

// Function: entry_0016fd0c
// Address: 0x16fd0c - 0x16fd20
void entry_0016fd0c_0x16fd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fd0c_0x16fd0c");
#endif

    ctx->pc = 0x16fd0cu;

    // 0x16fd0c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fd10: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fd14: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fd18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fd1c: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x16fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    ctx->pc = 0x16fd20u;
}
