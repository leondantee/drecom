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

// Function: entry_002cc454
// Address: 0x2cc454 - 0x2cc5d0
void entry_002cc454_0x2cc454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc454_0x2cc454");
#endif

    switch (ctx->pc) {
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4ecu: goto label_2cc4ec;
        case 0x2cc4f8u: goto label_2cc4f8;
        default: break;
    }

    ctx->pc = 0x2cc454u;

    // 0x2cc454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc458: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x2cc458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc45c: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x2cc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x2cc460: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cc460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cc464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc468: 0x0  nop
    ctx->pc = 0x2cc468u;
    // NOP
    // 0x2cc46c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc46cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc470: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC470u;
    SET_GPR_U32(ctx, 31, 0x2CC478u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC470u, 0x2CC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC478u;
label_2cc478:
    // 0x2cc478: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc47c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cc47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cc480: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc484: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2cc484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc488: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cc488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cc48c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cc48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cc490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc494: 0x0  nop
    ctx->pc = 0x2cc494u;
    // NOP
    // 0x2cc498: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc498u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc49c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC49Cu;
    SET_GPR_U32(ctx, 31, 0x2CC4A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC49Cu, 0x2CC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4A4u;
label_2cc4a4:
    // 0x2cc4a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4a8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cc4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cc4ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cc4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cc4b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CC4B4u;
    SET_GPR_U32(ctx, 31, 0x2CC4BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CC4B4u, 0x2CC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4BCu;
label_2cc4bc:
    // 0x2cc4bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4c8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cc4cc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cc4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cc4d0: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cc4d4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CC4D4u;
    SET_GPR_U32(ctx, 31, 0x2CC4DCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CC4D4u, 0x2CC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4DCu;
label_2cc4dc:
    // 0x2cc4dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cc4e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cc4e4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CC4E4u;
    SET_GPR_U32(ctx, 31, 0x2CC4ECu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CC4E4u, 0x2CC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4ECu;
label_2cc4ec:
    // 0x2cc4ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CC4F0u;
    SET_GPR_U32(ctx, 31, 0x2CC4F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CC4F0u, 0x2CC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4F8u;
label_2cc4f8:
    // 0x2cc4f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4fc: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2cc500: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cc500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc504: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc508: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc50c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc510: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cc510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cc514: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc518: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2cc51c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cc51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc524: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cc524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc528: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc52c: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cc52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cc530: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc534: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cc534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2cc538: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cc538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc53c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc540: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cc540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc548: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cc548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cc54c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc550: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cc554: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cc554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc558: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x2cc558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x2cc55c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cc55cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc560: 0x0  nop
    ctx->pc = 0x2cc560u;
    // NOP
    // 0x2cc564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc568: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cc568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cc56c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc570: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cc570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cc574: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cc574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc578: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc57c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cc57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cc584: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2cc584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2cc588: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc58c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2cc58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc590: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2cc590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc594: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cc594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc598: 0x0  nop
    ctx->pc = 0x2cc598u;
    // NOP
    // 0x2cc59c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cc59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc5a0: 0x0  nop
    ctx->pc = 0x2cc5a0u;
    // NOP
    // 0x2cc5a4: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x2CC5A4u;
    {
        const bool branch_taken_0x2cc5a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc5a4) {
            ctx->pc = 0x2CC870u;
            return;
        }
    }
    ctx->pc = 0x2CC5ACu;
    // 0x2cc5ac: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cc5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cc5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cc5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc5b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5b8: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cc5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cc5bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cc5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc5c0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5c4: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2cc5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc5c8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2CC5C8u;
    {
        const bool branch_taken_0x2cc5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5c8) {
            ctx->pc = 0x2CC870u;
            return;
        }
    }
    ctx->pc = 0x2CC5D0u;
}
