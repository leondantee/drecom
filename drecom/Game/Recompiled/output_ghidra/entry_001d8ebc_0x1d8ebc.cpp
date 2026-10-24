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

// Function: entry_001d8ebc
// Address: 0x1d8ebc - 0x1d8f04
void entry_001d8ebc_0x1d8ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8ebc_0x1d8ebc");
#endif

    switch (ctx->pc) {
        case 0x1d8ef4u: goto label_1d8ef4;
        default: break;
    }

    ctx->pc = 0x1d8ebcu;

    // 0x1d8ebc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8ec0: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8ec4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8ec8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ecc: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8ed0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ed4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8ed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8edc: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d8edcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8ee0: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d8ee4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ee8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8ee8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8eec: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8EECu;
    SET_GPR_U32(ctx, 31, 0x1D8EF4u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8EF4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8EF4u) { return; }
    ctx->pc = 0x1D8EF4u;
label_1d8ef4:
    // 0x1d8ef4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d8ef4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8efc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f00: 0xac22c400  sw          $v0, -0x3C00($at)
    ctx->pc = 0x1d8f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC400u, _value); } while (0);
    ctx->pc = 0x1d8f04u;
}
