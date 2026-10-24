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

// Function: entry_00299070
// Address: 0x299070 - 0x29908c
void entry_00299070_0x299070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299070_0x299070");
#endif

    ctx->pc = 0x299070u;

    // 0x299070: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299074: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299078: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x299078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29907c: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x29907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x299080: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x299080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299084: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x299084u;
    SET_GPR_U32(ctx, 31, 0x29908Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29908Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29908Cu) { return; }
    ctx->pc = 0x29908Cu;
}
