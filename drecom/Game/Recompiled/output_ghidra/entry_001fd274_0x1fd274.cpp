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

// Function: entry_001fd274
// Address: 0x1fd274 - 0x1fd290
void entry_001fd274_0x1fd274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd274_0x1fd274");
#endif

    switch (ctx->pc) {
        case 0x1fd284u: goto label_1fd284;
        default: break;
    }

    ctx->pc = 0x1fd274u;

    // 0x1fd274: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd278: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd27c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FD27Cu;
    SET_GPR_U32(ctx, 31, 0x1FD284u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FD284u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD284u) { return; }
    ctx->pc = 0x1FD284u;
label_1fd284:
    // 0x1fd284: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fd284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fd288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fd288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd28c: 0x0  nop
    ctx->pc = 0x1fd28cu;
    // NOP
    ctx->pc = 0x1fd290u;
}
