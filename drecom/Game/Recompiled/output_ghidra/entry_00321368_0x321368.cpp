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

// Function: entry_00321368
// Address: 0x321368 - 0x321390
void entry_00321368_0x321368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321368_0x321368");
#endif

    ctx->pc = 0x321368u;

    // 0x321368: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x321368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32136c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321370: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x321370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x321374: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x321374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321378: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x321378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32137c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321380: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x321380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321384: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x321384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x321388: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x321388u;
    SET_GPR_U32(ctx, 31, 0x321390u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x321390u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321390u) { return; }
    ctx->pc = 0x321390u;
}
