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

// Function: entry_001ef1d0
// Address: 0x1ef1d0 - 0x1ef29c
void entry_001ef1d0_0x1ef1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef1d0_0x1ef1d0");
#endif

    switch (ctx->pc) {
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef280u: goto label_1ef280;
        default: break;
    }

    ctx->pc = 0x1ef1d0u;

    // 0x1ef1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef1d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1d8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ef1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef1dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ef1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ef1e8: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1ef1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1ef1ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef1f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ef1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ef1f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EF1F4u;
    SET_GPR_U32(ctx, 31, 0x1EF1FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EF1F4u, 0x1EF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1FCu;
label_1ef1fc:
    // 0x1ef1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef200: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef204: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef208: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ef208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ef20c: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1ef20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1ef210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef21c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef220: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ef224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef228: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef22c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef230: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ef230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ef234: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ef234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ef238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef23c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef240: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef244: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ef248: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ef248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef24c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef254: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef258: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef25c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ef25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ef260: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ef264: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef26c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef270: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef274: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ef274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ef278: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF278u;
    SET_GPR_U32(ctx, 31, 0x1EF280u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF278u, 0x1EF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF280u;
label_1ef280:
    // 0x1ef280: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef284: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1ef284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1ef288: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ef288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ef28c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ef28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ef290: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef294: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef298: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ef298u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ef29cu;
}
