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

// Function: entry_002a3854
// Address: 0x2a3854 - 0x2a39d8
void entry_002a3854_0x2a3854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3854_0x2a3854");
#endif

    switch (ctx->pc) {
        case 0x2a3880u: goto label_2a3880;
        case 0x2a389cu: goto label_2a389c;
        case 0x2a38b4u: goto label_2a38b4;
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38e4u: goto label_2a38e4;
        case 0x2a38f0u: goto label_2a38f0;
        case 0x2a3994u: goto label_2a3994;
        default: break;
    }

    ctx->pc = 0x2a3854u;

    // 0x2a3854: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a3854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3858: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a385c: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x2a385cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x2a3860: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2a3860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a3864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a3864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3868: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x2a3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a386c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3870: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a3870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a3874: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a3874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a3878: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A3878u;
    SET_GPR_U32(ctx, 31, 0x2A3880u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A3878u, 0x2A3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3880u;
label_2a3880:
    // 0x2a3880: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a3880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a3884: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3888: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a3888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a388c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2a388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3890: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a3890u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3894: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3894u;
    SET_GPR_U32(ctx, 31, 0x2A389Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3894u, 0x2A389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A389Cu;
label_2a389c:
    // 0x2a389c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a38a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a38a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a38a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a38ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A38ACu;
    SET_GPR_U32(ctx, 31, 0x2A38B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A38ACu, 0x2A38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38B4u;
label_2a38b4:
    // 0x2a38b4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38b8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38c0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a38c4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a38c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a38c8: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a38c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a38cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A38CCu;
    SET_GPR_U32(ctx, 31, 0x2A38D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A38CCu, 0x2A38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38D4u;
label_2a38d4:
    // 0x2a38d4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a38d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a38dc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A38DCu;
    SET_GPR_U32(ctx, 31, 0x2A38E4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A38DCu, 0x2A38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38E4u;
label_2a38e4:
    // 0x2a38e4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38e8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A38E8u;
    SET_GPR_U32(ctx, 31, 0x2A38F0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A38E8u, 0x2A38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38F0u;
label_2a38f0:
    // 0x2a38f0: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a38f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38f4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2a38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2a38f8: 0x3467999a  ori         $a3, $v1, 0x999A
    ctx->pc = 0x2a38f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a38fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a38fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3900: 0xc4c00180  lwc1        $f0, 0x180($a2)
    ctx->pc = 0x2a3900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3908: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x2a3908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x2a390c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3910: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2a3914: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a3914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a3918: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a3918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a391c: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2a391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3920: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3924: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a3924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a3928: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a392c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2a392cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2a3930: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x2a3930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a3934: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a3934u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3938: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a393c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a393cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3940: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a3944: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a3944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3948: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2a3948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2a394c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2a394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a3950: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2a3950u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a3954: 0x1480005b  bnez        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2A3954u;
    {
        const bool branch_taken_0x2a3954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3954) {
            ctx->pc = 0x2A3AC4u;
            return;
        }
    }
    ctx->pc = 0x2A395Cu;
    // 0x2a395c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3960: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3964: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a3964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a396c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a396cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3970: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2a3970u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3974: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2a3974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3978: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x2a3978u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a397c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3980: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a3980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3984: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3988: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a398c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A398Cu;
    SET_GPR_U32(ctx, 31, 0x2A3994u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A398Cu, 0x2A3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3994u;
label_2a3994:
    // 0x2a3994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3998: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a3998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a399c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a39a0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A39A0u;
    {
        const bool branch_taken_0x2a39a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a39a0) {
            ctx->pc = 0x2A39D8u;
            return;
        }
    }
    ctx->pc = 0x2A39A8u;
    // 0x2a39a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a39ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a39b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a39b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a39b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a39bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a39c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39c4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a39c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a39c8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39cc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a39ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a39d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a39d8u;
}
