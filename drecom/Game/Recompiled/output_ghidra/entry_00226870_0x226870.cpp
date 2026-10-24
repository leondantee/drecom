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

// Function: entry_00226870
// Address: 0x226870 - 0x226948
void entry_00226870_0x226870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226870_0x226870");
#endif

    switch (ctx->pc) {
        case 0x2268a0u: goto label_2268a0;
        case 0x22692cu: goto label_22692c;
        default: break;
    }

    ctx->pc = 0x226870u;

    // 0x226870: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226874: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x226874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x226878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22687c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22687cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x226880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226884: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226888: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22688c: 0x3406f002  ori         $a2, $zero, 0xF002
    ctx->pc = 0x22688cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61442);
    // 0x226890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x226890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226894: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x226894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x226898: 0xc0965d0  jal         func_259740
    ctx->pc = 0x226898u;
    SET_GPR_U32(ctx, 31, 0x2268A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x226898u, 0x2268A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268A0u;
label_2268a0:
    // 0x2268a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2268a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268ac: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2268acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2268b0: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
    // 0x2268b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268c0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2268c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2268c4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2268c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2268c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2268c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2268cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2268d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2268dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2268dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2268e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2268e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2268e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2268f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2268f4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2268f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2268f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2268f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2268fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226904: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226908: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x226908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22690c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x226910: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22691c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226920: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x226920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x226924: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226924u;
    SET_GPR_U32(ctx, 31, 0x22692Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226924u, 0x22692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22692Cu;
label_22692c:
    // 0x22692c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226930: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x226934: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x226938: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22693c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22693cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226944: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x226944u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x226948u;
}
