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

// Function: entry_00358474
// Address: 0x358474 - 0x3584c0
void entry_00358474_0x358474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358474_0x358474");
#endif

    switch (ctx->pc) {
        case 0x358480u: goto label_358480;
        case 0x358498u: goto label_358498;
        case 0x3584acu: goto label_3584ac;
        default: break;
    }

    ctx->pc = 0x358474u;

    // 0x358474: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358478: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x358478u;
    SET_GPR_U32(ctx, 31, 0x358480u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358480u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358480u) { return; }
    ctx->pc = 0x358480u;
label_358480:
    // 0x358480: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358484: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358488: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35848c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x35848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x358490: 0xc040d62  jal         func_103588
    ctx->pc = 0x358490u;
    SET_GPR_U32(ctx, 31, 0x358498u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358498u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358498u) { return; }
    ctx->pc = 0x358498u;
label_358498:
    // 0x358498: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x358498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x35849c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3584a0: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x3584a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x3584a4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3584A4u;
    SET_GPR_U32(ctx, 31, 0x3584ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3584ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3584ACu) { return; }
    ctx->pc = 0x3584ACu;
label_3584ac:
    // 0x3584ac: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x3584acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x3584b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3584b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3584b4: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x3584b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x3584b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3584B8u;
    SET_GPR_U32(ctx, 31, 0x3584C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3584C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3584C0u) { return; }
    ctx->pc = 0x3584C0u;
}
