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

// Function: entry_002910b4
// Address: 0x2910b4 - 0x2910e8
void entry_002910b4_0x2910b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002910b4_0x2910b4");
#endif

    ctx->pc = 0x2910b4u;

    // 0x2910b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2910b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2910bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2910bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2910c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2910c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2910c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2910c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2910cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2910ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2910d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2910d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2910d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2910d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2910d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2910d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2910dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2910e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2910e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2910e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2910e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2910e8u;
}
