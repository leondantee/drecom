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

// Function: entry_001d8f74
// Address: 0x1d8f74 - 0x1d8ff4
void entry_001d8f74_0x1d8f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8f74_0x1d8f74");
#endif

    switch (ctx->pc) {
        case 0x1d8fd8u: goto label_1d8fd8;
        default: break;
    }

    ctx->pc = 0x1d8f74u;

    // 0x1d8f74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8f78: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d8f7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8f80: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f84: 0xa422c500  sh          $v0, -0x3B00($at)
    ctx->pc = 0x1d8f84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC500u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5FC500u, _value); } while (0);
    // 0x1d8f88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8f8c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d8f90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8f94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f98: 0xa422c502  sh          $v0, -0x3AFE($at)
    ctx->pc = 0x1d8f98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC502u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5FC502u, _value); } while (0);
    // 0x1d8f9c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8fa0: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8fa4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8fa8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fac: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8fb0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fb4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8fbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fc0: 0x2447c500  addiu       $a3, $v0, -0x3B00
    ctx->pc = 0x1d8fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x1d8fc4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8fc8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1d8fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d8fcc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8fccu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8fd0: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8FD0u;
    SET_GPR_U32(ctx, 31, 0x1D8FD8u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8FD8u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8FD8u) { return; }
    ctx->pc = 0x1D8FD8u;
label_1d8fd8:
    // 0x1d8fd8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fdc: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8fe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8fe4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fe8: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8fec: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D8FECu;
    {
        const bool branch_taken_0x1d8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fec) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D8FF4u;
}
