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

// Function: entry_001d8cbc
// Address: 0x1d8cbc - 0x1d8d10
void entry_001d8cbc_0x1d8cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8cbc_0x1d8cbc");
#endif

    switch (ctx->pc) {
        case 0x1d8cf4u: goto label_1d8cf4;
        default: break;
    }

    ctx->pc = 0x1d8cbcu;

    // 0x1d8cbc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8cc0: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8cc4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8cc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ccc: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8cd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8cd4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8cd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8cd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8cdc: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d8cdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8ce0: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d8ce4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ce8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8ce8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8cec: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8CECu;
    SET_GPR_U32(ctx, 31, 0x1D8CF4u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8CF4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8CF4u) { return; }
    ctx->pc = 0x1D8CF4u;
label_1d8cf4:
    // 0x1d8cf4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8cf8: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8d00: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8d04: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8d08: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1D8D08u;
    {
        const bool branch_taken_0x1d8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d08) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D8D10u;
}
