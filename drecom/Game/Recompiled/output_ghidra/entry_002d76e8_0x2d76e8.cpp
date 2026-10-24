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

// Function: entry_002d76e8
// Address: 0x2d76e8 - 0x2d7778
void entry_002d76e8_0x2d76e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d76e8_0x2d76e8");
#endif

    switch (ctx->pc) {
        case 0x2d7708u: goto label_2d7708;
        case 0x2d7738u: goto label_2d7738;
        default: break;
    }

    ctx->pc = 0x2d76e8u;

    // 0x2d76e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d76ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d76f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d76f4: 0x24063c0c  addiu       $a2, $zero, 0x3C0C
    ctx->pc = 0x2d76f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15372));
    // 0x2d76f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d76fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d76fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7700: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7700u;
    SET_GPR_U32(ctx, 31, 0x2D7708u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7700u, 0x2D7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7708u;
label_2d7708:
    // 0x2d7708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d770c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7710: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7714: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7718: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d771c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7720: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d7724: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d7728: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d7728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d772c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d7730: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D7730u;
    SET_GPR_U32(ctx, 31, 0x2D7738u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D7730u, 0x2D7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7738u;
label_2d7738:
    // 0x2d7738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d773c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d7740: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7748: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d7748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d774c: 0x3c02438d  lui         $v0, 0x438D
    ctx->pc = 0x2d774cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17293 << 16));
    // 0x2d7750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7754: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7758: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7758u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d775c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d775cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7764: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2d7764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7768: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d776c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d776cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7774: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d7774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d7778u;
}
