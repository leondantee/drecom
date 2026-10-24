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

// Function: entry_00358614
// Address: 0x358614 - 0x358660
void entry_00358614_0x358614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358614_0x358614");
#endif

    switch (ctx->pc) {
        case 0x358620u: goto label_358620;
        case 0x358638u: goto label_358638;
        case 0x35864cu: goto label_35864c;
        default: break;
    }

    ctx->pc = 0x358614u;

    // 0x358614: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358618: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x358618u;
    SET_GPR_U32(ctx, 31, 0x358620u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358620u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358620u) { return; }
    ctx->pc = 0x358620u;
label_358620:
    // 0x358620: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358624: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358628: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35862c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x35862cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x358630: 0xc040d62  jal         func_103588
    ctx->pc = 0x358630u;
    SET_GPR_U32(ctx, 31, 0x358638u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358638u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358638u) { return; }
    ctx->pc = 0x358638u;
label_358638:
    // 0x358638: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x358638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x35863c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358640: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x358640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x358644: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358644u;
    SET_GPR_U32(ctx, 31, 0x35864Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x35864Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35864Cu) { return; }
    ctx->pc = 0x35864Cu;
label_35864c:
    // 0x35864c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x35864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358650: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358654: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358658: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358658u;
    SET_GPR_U32(ctx, 31, 0x358660u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358660u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358660u) { return; }
    ctx->pc = 0x358660u;
}
