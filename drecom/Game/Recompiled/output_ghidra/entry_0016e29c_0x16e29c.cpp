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

// Function: entry_0016e29c
// Address: 0x16e29c - 0x16e2f0
void entry_0016e29c_0x16e29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e29c_0x16e29c");
#endif

    switch (ctx->pc) {
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2e8u: goto label_16e2e8;
        default: break;
    }

    ctx->pc = 0x16e29cu;

    // 0x16e29c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e2a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e2a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e2a8: 0x0  nop
    ctx->pc = 0x16e2a8u;
    // NOP
    // 0x16e2ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e2acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e2b0: 0x0  nop
    ctx->pc = 0x16e2b0u;
    // NOP
    // 0x16e2b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16E2B4u;
    {
        const bool branch_taken_0x16e2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e2b4) {
            ctx->pc = 0x16E2F0u;
            return;
        }
    }
    ctx->pc = 0x16E2BCu;
    // 0x16e2bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e2c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16e2c4: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x16e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e2c8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16E2C8u;
    SET_GPR_U32(ctx, 31, 0x16E2D0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16E2D0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E2D0u) { return; }
    ctx->pc = 0x16E2D0u;
label_16e2d0:
    // 0x16e2d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e2d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e2d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e2dc: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x16e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16e2e0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16E2E0u;
    SET_GPR_U32(ctx, 31, 0x16E2E8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16E2E8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E2E8u) { return; }
    ctx->pc = 0x16E2E8u;
label_16e2e8:
    // 0x16e2e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16E2E8u;
    {
        const bool branch_taken_0x16e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2e8) {
            ctx->pc = 0x16E304u;
            return;
        }
    }
    ctx->pc = 0x16E2F0u;
}
