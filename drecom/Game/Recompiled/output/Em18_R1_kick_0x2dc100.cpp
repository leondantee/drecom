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

// Function: Em18_R1_kick
// Address: 0x2dc100 - 0x2dc604
void Em18_R1_kick_0x2dc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_kick_0x2dc100");
#endif

    switch (ctx->pc) {
        case 0x2dc188u: goto label_2dc188;
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc20cu: goto label_2dc20c;
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc240u: goto label_2dc240;
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc258u: goto label_2dc258;
        case 0x2dc2c4u: goto label_2dc2c4;
        case 0x2dc2f8u: goto label_2dc2f8;
        case 0x2dc314u: goto label_2dc314;
        case 0x2dc3d0u: goto label_2dc3d0;
        case 0x2dc428u: goto label_2dc428;
        case 0x2dc454u: goto label_2dc454;
        case 0x2dc46cu: goto label_2dc46c;
        case 0x2dc478u: goto label_2dc478;
        case 0x2dc488u: goto label_2dc488;
        case 0x2dc494u: goto label_2dc494;
        case 0x2dc4a0u: goto label_2dc4a0;
        case 0x2dc50cu: goto label_2dc50c;
        case 0x2dc540u: goto label_2dc540;
        case 0x2dc55cu: goto label_2dc55c;
        default: break;
    }

    ctx->pc = 0x2dc100u;

    // 0x2dc100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dc100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dc104: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2dc104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2dc108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc110: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2dc110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2dc114: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2dc114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2dc118: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x2dc118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2dc11c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc120: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2dc120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2dc124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc128: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dc128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc12c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dc12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dc130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc134: 0x108300b0  beq         $a0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2DC134u;
    {
        const bool branch_taken_0x2dc134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc134) {
            ctx->pc = 0x2DC3F8u;
            goto label_2dc3f8;
        }
    }
    ctx->pc = 0x2DC13Cu;
    // 0x2dc13c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dc13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc140: 0x1083009a  beq         $a0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2DC140u;
    {
        const bool branch_taken_0x2dc140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc140) {
            ctx->pc = 0x2DC3ACu;
            goto label_2dc3ac;
        }
    }
    ctx->pc = 0x2DC148u;
    // 0x2dc148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc14c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC14Cu;
    {
        const bool branch_taken_0x2dc14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc14c) {
            ctx->pc = 0x2DC1B0u;
            goto label_2dc1b0;
        }
    }
    ctx->pc = 0x2DC154u;
    // 0x2dc154: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC154u;
    {
        const bool branch_taken_0x2dc154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc154) {
            ctx->pc = 0x2DC164u;
            goto label_2dc164;
        }
    }
    ctx->pc = 0x2DC15Cu;
    // 0x2dc15c: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x2DC15Cu;
    {
        const bool branch_taken_0x2dc15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc15c) {
            ctx->pc = 0x2DC5ECu;
            goto label_2dc5ec;
        }
    }
    ctx->pc = 0x2DC164u;
label_2dc164:
    // 0x2dc164: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dc164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc168: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc16c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc170: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dc174: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x2dc174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x2dc178: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dc178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc17c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dc17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc180: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DC180u;
    SET_GPR_U32(ctx, 31, 0x2DC188u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DC180u, 0x2DC188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC188u;
label_2dc188:
    // 0x2dc188: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dc188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc18c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc190: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2dc190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc19c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dc19cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc1a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dc1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc1a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc1ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dc1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dc1b0:
    // 0x2dc1b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1b4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dc1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dc1b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dc1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc1bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dc1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dc1c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC1C0u;
    {
        const bool branch_taken_0x2dc1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc1c0) {
            ctx->pc = 0x2DC214u;
            goto label_2dc214;
        }
    }
    ctx->pc = 0x2DC1C8u;
    // 0x2dc1c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1cc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dc1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dc1d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dc1d4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dc1d8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DC1D8u;
    SET_GPR_U32(ctx, 31, 0x2DC1E0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DC1D8u, 0x2DC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1E0u;
label_2dc1e0:
    // 0x2dc1e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1e4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dc1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dc1e8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dc1ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc1f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dc1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc1f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1fc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2dc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc200: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dc200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc204: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DC204u;
    SET_GPR_U32(ctx, 31, 0x2DC20Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DC204u, 0x2DC20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC20Cu;
label_2dc20c:
    // 0x2dc20c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc210: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dc210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2dc214:
    // 0x2dc214: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc218: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc218u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc21c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DC21Cu;
    SET_GPR_U32(ctx, 31, 0x2DC224u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DC21Cu, 0x2DC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC224u;
label_2dc224:
    // 0x2dc224: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc228: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DC228u;
    SET_GPR_U32(ctx, 31, 0x2DC230u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DC228u, 0x2DC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC230u;
label_2dc230:
    // 0x2dc230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc238: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DC238u;
    SET_GPR_U32(ctx, 31, 0x2DC240u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DC238u, 0x2DC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC240u;
label_2dc240:
    // 0x2dc240: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc244: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DC244u;
    SET_GPR_U32(ctx, 31, 0x2DC24Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DC244u, 0x2DC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC24Cu;
label_2dc24c:
    // 0x2dc24c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc250: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x2DC250u;
    SET_GPR_U32(ctx, 31, 0x2DC258u);
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x2DC250u, 0x2DC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC258u;
label_2dc258:
    // 0x2dc258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc25c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dc25cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dc260: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC260u;
    {
        const bool branch_taken_0x2dc260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc260) {
            ctx->pc = 0x2DC290u;
            goto label_2dc290;
        }
    }
    ctx->pc = 0x2DC268u;
    // 0x2dc268: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc26c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dc270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dc270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dc274: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc274u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc278: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc27c: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc27cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc280: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dc280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dc284: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc288: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC288u;
    {
        const bool branch_taken_0x2dc288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc288) {
            ctx->pc = 0x2DC31Cu;
            goto label_2dc31c;
        }
    }
    ctx->pc = 0x2DC290u;
label_2dc290:
    // 0x2dc290: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc294: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc298: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dc298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dc29c: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc29cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc2a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2a4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dc2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc2a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc2ac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dc2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dc2b0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC2B0u;
    {
        const bool branch_taken_0x2dc2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2b0) {
            ctx->pc = 0x2DC31Cu;
            goto label_2dc31c;
        }
    }
    ctx->pc = 0x2DC2B8u;
    // 0x2dc2b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc2bc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DC2BCu;
    SET_GPR_U32(ctx, 31, 0x2DC2C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DC2BCu, 0x2DC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2C4u;
label_2dc2c4:
    // 0x2dc2c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2c8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dc2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dc2cc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC2CCu;
    {
        const bool branch_taken_0x2dc2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2cc) {
            ctx->pc = 0x2DC31Cu;
            goto label_2dc31c;
        }
    }
    ctx->pc = 0x2DC2D4u;
    // 0x2dc2d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dc2e0: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x2dc2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2dc2e4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dc2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc2e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dc2ec: 0x24478ddc  addiu       $a3, $v0, -0x7224
    ctx->pc = 0x2dc2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x2dc2f0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DC2F0u;
    SET_GPR_U32(ctx, 31, 0x2DC2F8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DC2F0u, 0x2DC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2F8u;
label_2dc2f8:
    // 0x2dc2f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC2F8u;
    {
        const bool branch_taken_0x2dc2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2f8) {
            ctx->pc = 0x2DC31Cu;
            goto label_2dc31c;
        }
    }
    ctx->pc = 0x2DC300u;
    // 0x2dc300: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dc300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc308: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dc308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc30c: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DC30Cu;
    SET_GPR_U32(ctx, 31, 0x2DC314u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DC30Cu, 0x2DC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC314u;
label_2dc314:
    // 0x2dc314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc318: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dc318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dc31c:
    // 0x2dc31c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc320: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dc320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dc324: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2DC324u;
    {
        const bool branch_taken_0x2dc324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc324) {
            ctx->pc = 0x2DC5ECu;
            goto label_2dc5ec;
        }
    }
    ctx->pc = 0x2DC32Cu;
    // 0x2dc32c: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dc32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dc330: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc334: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dc334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc338: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC338u;
    {
        const bool branch_taken_0x2dc338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc338) {
            ctx->pc = 0x2DC378u;
            goto label_2dc378;
        }
    }
    ctx->pc = 0x2DC340u;
    // 0x2dc340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc344: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc348: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc34c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2dc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc354: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dc354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc35c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc360: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc364: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc368: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc36c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc370: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2DC370u;
    {
        const bool branch_taken_0x2dc370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc370) {
            ctx->pc = 0x2DC5ECu;
            goto label_2dc5ec;
        }
    }
    ctx->pc = 0x2DC378u;
label_2dc378:
    // 0x2dc378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc37c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc380: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc388: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dc388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc38c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc390: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc394: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc398: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc39c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc3a4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2DC3A4u;
    {
        const bool branch_taken_0x2dc3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3a4) {
            ctx->pc = 0x2DC5ECu;
            goto label_2dc5ec;
        }
    }
    ctx->pc = 0x2DC3ACu;
label_2dc3ac:
    // 0x2dc3ac: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dc3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc3b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dc3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dc3bc: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x2dc3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x2dc3c0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2dc3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc3c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc3c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DC3C8u;
    SET_GPR_U32(ctx, 31, 0x2DC3D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DC3C8u, 0x2DC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3D0u;
label_2dc3d0:
    // 0x2dc3d0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dc3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc3d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3d8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2dc3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc3e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3e4: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dc3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc3e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dc3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc3f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc3f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dc3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dc3f8:
    // 0x2dc3f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3fc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dc3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dc400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dc400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc404: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dc404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dc408: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC408u;
    {
        const bool branch_taken_0x2dc408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc408) {
            ctx->pc = 0x2DC45Cu;
            goto label_2dc45c;
        }
    }
    ctx->pc = 0x2DC410u;
    // 0x2dc410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc414: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dc414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dc418: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dc418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dc41c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dc41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dc420: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DC420u;
    SET_GPR_U32(ctx, 31, 0x2DC428u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DC420u, 0x2DC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC428u;
label_2dc428:
    // 0x2dc428: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc42c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dc42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dc430: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dc430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dc434: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dc434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc438: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dc438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc43c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc440: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc444: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2dc444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc448: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dc448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc44c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DC44Cu;
    SET_GPR_U32(ctx, 31, 0x2DC454u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DC44Cu, 0x2DC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC454u;
label_2dc454:
    // 0x2dc454: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc458: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dc458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2dc45c:
    // 0x2dc45c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc464: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DC464u;
    SET_GPR_U32(ctx, 31, 0x2DC46Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DC464u, 0x2DC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC46Cu;
label_2dc46c:
    // 0x2dc46c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc470: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DC470u;
    SET_GPR_U32(ctx, 31, 0x2DC478u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DC470u, 0x2DC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC478u;
label_2dc478:
    // 0x2dc478: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc47c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc47cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc480: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DC480u;
    SET_GPR_U32(ctx, 31, 0x2DC488u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DC480u, 0x2DC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC488u;
label_2dc488:
    // 0x2dc488: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc48c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DC48Cu;
    SET_GPR_U32(ctx, 31, 0x2DC494u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DC48Cu, 0x2DC494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC494u;
label_2dc494:
    // 0x2dc494: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc498: 0xc0c8f48  jal         func_323D20
    ctx->pc = 0x2DC498u;
    SET_GPR_U32(ctx, 31, 0x2DC4A0u);
    ctx->pc = 0x323D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D20u, 0x2DC498u, 0x2DC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4A0u;
label_2dc4a0:
    // 0x2dc4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4a4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dc4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dc4a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC4A8u;
    {
        const bool branch_taken_0x2dc4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4a8) {
            ctx->pc = 0x2DC4D8u;
            goto label_2dc4d8;
        }
    }
    ctx->pc = 0x2DC4B0u;
    // 0x2dc4b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4b4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc4b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dc4b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dc4bc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4c4: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc4c8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dc4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dc4cc: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4d0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC4D0u;
    {
        const bool branch_taken_0x2dc4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4d0) {
            ctx->pc = 0x2DC564u;
            goto label_2dc564;
        }
    }
    ctx->pc = 0x2DC4D8u;
label_2dc4d8:
    // 0x2dc4d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4dc: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc4e0: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dc4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dc4e4: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4ec: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dc4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc4f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc4f4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dc4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dc4f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC4F8u;
    {
        const bool branch_taken_0x2dc4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4f8) {
            ctx->pc = 0x2DC564u;
            goto label_2dc564;
        }
    }
    ctx->pc = 0x2DC500u;
    // 0x2dc500: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dc500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc504: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DC504u;
    SET_GPR_U32(ctx, 31, 0x2DC50Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DC504u, 0x2DC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC50Cu;
label_2dc50c:
    // 0x2dc50c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc510: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dc510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dc514: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC514u;
    {
        const bool branch_taken_0x2dc514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc514) {
            ctx->pc = 0x2DC564u;
            goto label_2dc564;
        }
    }
    ctx->pc = 0x2DC51Cu;
    // 0x2dc51c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc520: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc524: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dc528: 0x24450680  addiu       $a1, $v0, 0x680
    ctx->pc = 0x2dc528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2dc52c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc530: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dc530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dc534: 0x24478ddc  addiu       $a3, $v0, -0x7224
    ctx->pc = 0x2dc534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x2dc538: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DC538u;
    SET_GPR_U32(ctx, 31, 0x2DC540u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DC538u, 0x2DC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC540u;
label_2dc540:
    // 0x2dc540: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC540u;
    {
        const bool branch_taken_0x2dc540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc540) {
            ctx->pc = 0x2DC564u;
            goto label_2dc564;
        }
    }
    ctx->pc = 0x2DC548u;
    // 0x2dc548: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc54c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc550: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dc550u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc554: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DC554u;
    SET_GPR_U32(ctx, 31, 0x2DC55Cu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DC554u, 0x2DC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC55Cu;
label_2dc55c:
    // 0x2dc55c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc560: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dc560u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dc564:
    // 0x2dc564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc568: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dc568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dc56c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DC56Cu;
    {
        const bool branch_taken_0x2dc56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc56c) {
            ctx->pc = 0x2DC5ECu;
            goto label_2dc5ec;
        }
    }
    ctx->pc = 0x2DC574u;
    // 0x2dc574: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dc574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dc578: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc57c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dc57cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc580: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC580u;
    {
        const bool branch_taken_0x2dc580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc580) {
            ctx->pc = 0x2DC5C0u;
            goto label_2dc5c0;
        }
    }
    ctx->pc = 0x2DC588u;
    // 0x2dc588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc58c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc590: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc594: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2dc594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc598: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc59c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dc59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc5a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc5acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc5b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC5B8u;
    {
        const bool branch_taken_0x2dc5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5b8) {
            ctx->pc = 0x2DC5ECu;
            goto label_2dc5ec;
        }
    }
    ctx->pc = 0x2DC5C0u;
label_2dc5c0:
    // 0x2dc5c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc5c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc5cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5d0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dc5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2dc5ec:
    // 0x2dc5ec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dc5ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc5f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc5f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc5f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dc5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dc5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC604u;
}
