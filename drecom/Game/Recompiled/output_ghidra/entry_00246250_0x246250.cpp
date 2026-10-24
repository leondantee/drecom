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

// Function: entry_00246250
// Address: 0x246250 - 0x2462f4
void entry_00246250_0x246250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246250_0x246250");
#endif

    switch (ctx->pc) {
        case 0x246290u: goto label_246290;
        default: break;
    }

    ctx->pc = 0x246250u;

    // 0x246250: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x246250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246254: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x246254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x246258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24625c: 0x0  nop
    ctx->pc = 0x24625cu;
    // NOP
    // 0x246260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246264: 0x0  nop
    ctx->pc = 0x246264u;
    // NOP
    // 0x246268: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x246268u;
    {
        const bool branch_taken_0x246268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246268) {
            ctx->pc = 0x2462F4u;
            return;
        }
    }
    ctx->pc = 0x246270u;
    // 0x246270: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246274: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246278: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x246278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x24627c: 0x24060a23  addiu       $a2, $zero, 0xA23
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2595));
    // 0x246280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246284: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x246288: 0xc0965d0  jal         func_259740
    ctx->pc = 0x246288u;
    SET_GPR_U32(ctx, 31, 0x246290u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246288u, 0x246290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246290u;
label_246290:
    // 0x246290: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246290u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246294: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246298: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24629c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x24629cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2462a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2462a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2462a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2462a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2462ac: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2462acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2462b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2462b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2462b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2462b8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2462b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2462bc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2462bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2462c0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2462c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x2462c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2462c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2462c8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x2462c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2462cc: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2462ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2462d0: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x2462d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x2462d4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2462d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2462d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2462dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2462e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2462e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2462e4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2462e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2462e8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2462e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2462ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2462f0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x2462f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2462f4u;
}
