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

// Function: entry_001d9138
// Address: 0x1d9138 - 0x1d918c
void entry_001d9138_0x1d9138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9138_0x1d9138");
#endif

    switch (ctx->pc) {
        case 0x1d9170u: goto label_1d9170;
        default: break;
    }

    ctx->pc = 0x1d9138u;

    // 0x1d9138: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d9138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d913c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d913cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9140: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d9140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d9144: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9148: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d9148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d914c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9150: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d9154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9158: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d9158u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d915c: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d9160: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9164: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d9164u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9168: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9168u;
    SET_GPR_U32(ctx, 31, 0x1D9170u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D9170u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9170u) { return; }
    ctx->pc = 0x1D9170u;
label_1d9170:
    // 0x1d9170: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9174: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d9178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d917c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9180: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d9184: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D9184u;
    {
        const bool branch_taken_0x1d9184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9184) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D918Cu;
}
