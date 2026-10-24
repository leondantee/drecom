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

// Function: entry_001d8f20
// Address: 0x1d8f20 - 0x1d8f74
void entry_001d8f20_0x1d8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8f20_0x1d8f20");
#endif

    switch (ctx->pc) {
        case 0x1d8f58u: goto label_1d8f58;
        default: break;
    }

    ctx->pc = 0x1d8f20u;

    // 0x1d8f20: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8f24: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8f28: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8f2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f30: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8f34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f38: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8f3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8f3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d8f40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d8f44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f48: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8f4c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8f4cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f50: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8F50u;
    SET_GPR_U32(ctx, 31, 0x1D8F58u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8F58u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8F58u) { return; }
    ctx->pc = 0x1D8F58u;
label_1d8f58:
    // 0x1d8f58: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f5c: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8f64: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f68: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8f6c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1D8F6Cu;
    {
        const bool branch_taken_0x1d8f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f6c) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D8F74u;
}
