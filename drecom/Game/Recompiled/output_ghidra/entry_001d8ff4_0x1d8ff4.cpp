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

// Function: entry_001d8ff4
// Address: 0x1d8ff4 - 0x1d9048
void entry_001d8ff4_0x1d8ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8ff4_0x1d8ff4");
#endif

    switch (ctx->pc) {
        case 0x1d902cu: goto label_1d902c;
        default: break;
    }

    ctx->pc = 0x1d8ff4u;

    // 0x1d8ff4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8ff8: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8ffc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d9000: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9004: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d9008: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d900c: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d9010: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9014: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d9014u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9018: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d9018u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d901c: 0x240a0098  addiu       $t2, $zero, 0x98
    ctx->pc = 0x1d901cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1d9020: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d9020u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9024: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9024u;
    SET_GPR_U32(ctx, 31, 0x1D902Cu);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D902Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D902Cu) { return; }
    ctx->pc = 0x1D902Cu;
label_1d902c:
    // 0x1d902c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9030: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d9034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9038: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d903c: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d903cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d9040: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1D9040u;
    {
        const bool branch_taken_0x1d9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9040) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D9048u;
}
