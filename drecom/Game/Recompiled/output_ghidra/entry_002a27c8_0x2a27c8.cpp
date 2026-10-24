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

// Function: entry_002a27c8
// Address: 0x2a27c8 - 0x2a2880
void entry_002a27c8_0x2a27c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a27c8_0x2a27c8");
#endif

    switch (ctx->pc) {
        case 0x2a27f4u: goto label_2a27f4;
        case 0x2a2820u: goto label_2a2820;
        case 0x2a283cu: goto label_2a283c;
        case 0x2a2858u: goto label_2a2858;
        case 0x2a2868u: goto label_2a2868;
        default: break;
    }

    ctx->pc = 0x2a27c8u;

    // 0x2a27c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a27cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a27d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a27d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a27dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a27e0: 0x24060823  addiu       $a2, $zero, 0x823
    ctx->pc = 0x2a27e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2083));
    // 0x2a27e4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a27e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a27e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a27e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a27ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A27ECu;
    SET_GPR_U32(ctx, 31, 0x2A27F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A27ECu, 0x2A27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27F4u;
label_2a27f4:
    // 0x2a27f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27f8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2a27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2a2800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a2800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a2804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2808: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a280c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2810: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2814: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2818: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2818u;
    SET_GPR_U32(ctx, 31, 0x2A2820u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2818u, 0x2A2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2820u;
label_2a2820:
    // 0x2a2820: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a2824: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2828: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a282c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2830: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2830u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2834: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2834u;
    SET_GPR_U32(ctx, 31, 0x2A283Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2834u, 0x2A283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A283Cu;
label_2a283c:
    // 0x2a283c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2840: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2844: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2848: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a284c: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x2a284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x2a2850: 0xc096c60  jal         func_25B180
    ctx->pc = 0x2A2850u;
    SET_GPR_U32(ctx, 31, 0x2A2858u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x2A2850u, 0x2A2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2858u;
label_2a2858:
    // 0x2a2858: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x2a2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x2a285c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a2860: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2860u;
    SET_GPR_U32(ctx, 31, 0x2A2868u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2868u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2868u) { return; }
    ctx->pc = 0x2A2868u;
label_2a2868:
    // 0x2a2868: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a286c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2870: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x2a2874: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2a2874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a2878: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2878u;
    SET_GPR_U32(ctx, 31, 0x2A2880u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2880u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2880u) { return; }
    ctx->pc = 0x2A2880u;
}
