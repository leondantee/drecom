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

// Function: entry_001d918c
// Address: 0x1d918c - 0x1d91e4
void entry_001d918c_0x1d918c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d918c_0x1d918c");
#endif

    switch (ctx->pc) {
        case 0x1d9198u: goto label_1d9198;
        case 0x1d91d0u: goto label_1d91d0;
        default: break;
    }

    ctx->pc = 0x1d918cu;

    // 0x1d918c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d918cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9190: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1D9190u;
    SET_GPR_U32(ctx, 31, 0x1D9198u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1D9198u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9198u) { return; }
    ctx->pc = 0x1D9198u;
label_1d9198:
    // 0x1d9198: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d919c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d919cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d91a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d91a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d91a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d91a8: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d91a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d91ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d91b0: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d91b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d91b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d91b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91bc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d91bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d91c4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d91c4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91c8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D91C8u;
    SET_GPR_U32(ctx, 31, 0x1D91D0u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D91D0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D91D0u) { return; }
    ctx->pc = 0x1D91D0u;
label_1d91d0:
    // 0x1d91d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d91d4: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d91d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d91dc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d91e0: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d91e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    ctx->pc = 0x1d91e4u;
}
