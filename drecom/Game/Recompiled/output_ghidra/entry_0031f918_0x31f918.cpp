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

// Function: entry_0031f918
// Address: 0x31f918 - 0x31f940
void entry_0031f918_0x31f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f918_0x31f918");
#endif

    switch (ctx->pc) {
        case 0x31f93cu: goto label_31f93c;
        default: break;
    }

    ctx->pc = 0x31f918u;

    // 0x31f918: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f91c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f920: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f924: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f928: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x31f928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f930: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31f934: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x31F934u;
    SET_GPR_U32(ctx, 31, 0x31F93Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x31F93Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31F93Cu) { return; }
    ctx->pc = 0x31F93Cu;
label_31f93c:
    // 0x31f93c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31f93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31f940u;
}
