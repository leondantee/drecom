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

// Function: entry_0015a28c
// Address: 0x15a28c - 0x15a310
void entry_0015a28c_0x15a28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a28c_0x15a28c");
#endif

    switch (ctx->pc) {
        case 0x15a29cu: goto label_15a29c;
        case 0x15a2b0u: goto label_15a2b0;
        case 0x15a2c4u: goto label_15a2c4;
        case 0x15a2d8u: goto label_15a2d8;
        case 0x15a2f0u: goto label_15a2f0;
        default: break;
    }

    ctx->pc = 0x15a28cu;

    // 0x15a28c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a290: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a294: 0xc040c32  jal         func_1030C8
    ctx->pc = 0x15A294u;
    SET_GPR_U32(ctx, 31, 0x15A29Cu);
    ctx->pc = 0x1030C8u;
    {
        ctx->pc = 0x15A29Cu;
        ps2_stubs::sceVu0TransposeMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A29Cu) { return; }
    ctx->pc = 0x15A29Cu;
label_15a29c:
    // 0x15a29c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a2a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a2a4: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x15a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a2a8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x15A2A8u;
    SET_GPR_U32(ctx, 31, 0x15A2B0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x15A2B0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2B0u) { return; }
    ctx->pc = 0x15A2B0u;
label_15a2b0:
    // 0x15a2b0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a2b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a2bc: 0xc040c00  jal         func_103000
    ctx->pc = 0x15A2BCu;
    SET_GPR_U32(ctx, 31, 0x15A2C4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15A2C4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2C4u) { return; }
    ctx->pc = 0x15A2C4u;
label_15a2c4:
    // 0x15a2c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a2c8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2cc: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x15a2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15a2d0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15A2D0u;
    SET_GPR_U32(ctx, 31, 0x15A2D8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15A2D8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2D8u) { return; }
    ctx->pc = 0x15A2D8u;
label_15a2d8:
    // 0x15a2d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2dc: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a2e0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x15a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15a2e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15a2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a2e8: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A2E8u;
    SET_GPR_U32(ctx, 31, 0x15A2F0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A2F0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2F0u) { return; }
    ctx->pc = 0x15A2F0u;
label_15a2f0:
    // 0x15a2f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15a2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15a2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a2f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2fc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x15a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x15a300: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15a300u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a304: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x15a304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15a308: 0x3e00008  jr          $ra
    ctx->pc = 0x15A308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A310u;
}
