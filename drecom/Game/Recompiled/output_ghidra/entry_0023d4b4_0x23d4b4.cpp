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

// Function: entry_0023d4b4
// Address: 0x23d4b4 - 0x23d548
void entry_0023d4b4_0x23d4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d4b4_0x23d4b4");
#endif

    switch (ctx->pc) {
        case 0x23d520u: goto label_23d520;
        default: break;
    }

    ctx->pc = 0x23d4b4u;

    // 0x23d4b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4b8: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x23d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d4bc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x23d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x23d4c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d4c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d4c8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23d4c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d4cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d4d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23d4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d4d4: 0x0  nop
    ctx->pc = 0x23d4d4u;
    // NOP
    // 0x23d4d8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x23D4D8u;
    {
        const bool branch_taken_0x23d4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d4d8) {
            ctx->pc = 0x23D548u;
            return;
        }
    }
    ctx->pc = 0x23D4E0u;
    // 0x23d4e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d4e4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4e8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23d4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d4ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4f4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23d4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23d4f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d4fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d4fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23d500: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23d504: 0x34463c00  ori         $a2, $v0, 0x3C00
    ctx->pc = 0x23d504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x23d508: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d50c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23d510: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d514: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d518: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D518u;
    SET_GPR_U32(ctx, 31, 0x23D520u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D518u, 0x23D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D520u;
label_23d520:
    // 0x23d520: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x23d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23d524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d528: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d52c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d530: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d534: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x23d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x23d538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d53c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d540: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d544: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x23d548u;
}
