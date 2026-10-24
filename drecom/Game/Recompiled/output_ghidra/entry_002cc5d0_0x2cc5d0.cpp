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

// Function: entry_002cc5d0
// Address: 0x2cc5d0 - 0x2cc710
void entry_002cc5d0_0x2cc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc5d0_0x2cc5d0");
#endif

    switch (ctx->pc) {
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc620u: goto label_2cc620;
        case 0x2cc638u: goto label_2cc638;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc678u: goto label_2cc678;
        default: break;
    }

    ctx->pc = 0x2cc5d0u;

    // 0x2cc5d0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2cc5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5d4: 0xc4c100d8  lwc1        $f1, 0xD8($a2)
    ctx->pc = 0x2cc5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc5d8: 0x3c083f0e  lui         $t0, 0x3F0E
    ctx->pc = 0x2cc5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16142 << 16));
    // 0x2cc5dc: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x2cc5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
    // 0x2cc5e0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2cc5e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc5e4: 0x0  nop
    ctx->pc = 0x2cc5e4u;
    // NOP
    // 0x2cc5e8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc5e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc5ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC5ECu;
    SET_GPR_U32(ctx, 31, 0x2CC5F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC5ECu, 0x2CC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5F4u;
label_2cc5f4:
    // 0x2cc5f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5f8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cc5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cc5fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc600: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2cc600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc604: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cc604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cc608: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cc608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cc60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc610: 0x0  nop
    ctx->pc = 0x2cc610u;
    // NOP
    // 0x2cc614: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc614u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc618: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC618u;
    SET_GPR_U32(ctx, 31, 0x2CC620u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC618u, 0x2CC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC620u;
label_2cc620:
    // 0x2cc620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc624: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cc624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cc628: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc62c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cc630: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CC630u;
    SET_GPR_U32(ctx, 31, 0x2CC638u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CC630u, 0x2CC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC638u;
label_2cc638:
    // 0x2cc638: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc644: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cc644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cc648: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cc64c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cc650: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CC650u;
    SET_GPR_U32(ctx, 31, 0x2CC658u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CC650u, 0x2CC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC658u;
label_2cc658:
    // 0x2cc658: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc65c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cc65cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cc660: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CC660u;
    SET_GPR_U32(ctx, 31, 0x2CC668u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CC660u, 0x2CC668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cc668u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cc66c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc670: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CC670u;
    SET_GPR_U32(ctx, 31, 0x2CC678u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CC670u, 0x2CC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC678u;
label_2cc678:
    // 0x2cc678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc67c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc680: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cc680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc684: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2cc688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc68c: 0x0  nop
    ctx->pc = 0x2cc68cu;
    // NOP
    // 0x2cc690: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc694: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cc694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cc698: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc69c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc6a0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2cc6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc6a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2cc6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc6ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cc6b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cc6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cc6b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc6bc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2cc6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc6c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6c4: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2cc6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc6c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cc6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc6cc: 0x0  nop
    ctx->pc = 0x2cc6ccu;
    // NOP
    // 0x2cc6d0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2CC6D0u;
    {
        const bool branch_taken_0x2cc6d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc6d0) {
            ctx->pc = 0x2CC710u;
            return;
        }
    }
    ctx->pc = 0x2CC6D8u;
    // 0x2cc6d8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cc6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6dc: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2cc6e0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc6e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6e8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cc6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cc6ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc6f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6f4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cc6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc6f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6fc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cc6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cc700: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2cc700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2cc704: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cc704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc708: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc70c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2cc70cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2cc710u;
}
