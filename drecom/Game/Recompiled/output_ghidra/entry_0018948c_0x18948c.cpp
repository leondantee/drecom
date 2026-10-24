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

// Function: entry_0018948c
// Address: 0x18948c - 0x1894d0
void entry_0018948c_0x18948c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018948c_0x18948c");
#endif

    switch (ctx->pc) {
        case 0x1894c4u: goto label_1894c4;
        default: break;
    }

    ctx->pc = 0x18948cu;

    // 0x18948c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189490: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189494: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x189494u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189498: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18949c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1894a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1894a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1894a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1894a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1894a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894b0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1894b4: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x1894b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1894b8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1894b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1894bc: 0xc040d62  jal         func_103588
    ctx->pc = 0x1894BCu;
    SET_GPR_U32(ctx, 31, 0x1894C4u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1894C4u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1894C4u) { return; }
    ctx->pc = 0x1894C4u;
label_1894c4:
    // 0x1894c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894c8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1894c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1894cc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1894ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    ctx->pc = 0x1894d0u;
}
