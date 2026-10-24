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

// Function: entry_00299d5c
// Address: 0x299d5c - 0x299d78
void entry_00299d5c_0x299d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299d5c_0x299d5c");
#endif

    ctx->pc = 0x299d5cu;

    // 0x299d5c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x299d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d60: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x299d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x299d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299d68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x299d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x299d6c: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x299d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x299d70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x299D70u;
    SET_GPR_U32(ctx, 31, 0x299D78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x299D78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299D78u) { return; }
    ctx->pc = 0x299D78u;
}
