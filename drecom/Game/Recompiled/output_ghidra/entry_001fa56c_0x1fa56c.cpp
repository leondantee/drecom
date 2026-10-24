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

// Function: entry_001fa56c
// Address: 0x1fa56c - 0x1fa6bc
void entry_001fa56c_0x1fa56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa56c_0x1fa56c");
#endif

    switch (ctx->pc) {
        case 0x1fa58cu: goto label_1fa58c;
        case 0x1fa5a0u: goto label_1fa5a0;
        case 0x1fa620u: goto label_1fa620;
        case 0x1fa670u: goto label_1fa670;
        case 0x1fa69cu: goto label_1fa69c;
        default: break;
    }

    ctx->pc = 0x1fa56cu;

    // 0x1fa56c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa570: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1fa570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa574: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1fa574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa578: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa57c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1fa57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa580: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1fa580u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fa584: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1FA584u;
    SET_GPR_U32(ctx, 31, 0x1FA58Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1FA584u, 0x1FA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA58Cu;
label_1fa58c:
    // 0x1fa58c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1fa58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1fa590: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fa594: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1fa594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa598: 0xc067844  jal         func_19E110
    ctx->pc = 0x1FA598u;
    SET_GPR_U32(ctx, 31, 0x1FA5A0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x1FA598u, 0x1FA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5A0u;
label_1fa5a0:
    // 0x1fa5a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa5a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa5a8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1fa5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa5ac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1fa5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1fa5b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa5b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa5b8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1fa5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa5bc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1fa5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1fa5c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa5c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa5c8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1fa5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa5cc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1fa5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1fa5d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5d4: 0x0  nop
    ctx->pc = 0x1fa5d4u;
    // NOP
    // 0x1fa5d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1fa5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fa5dc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1fa5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5e4: 0x0  nop
    ctx->pc = 0x1fa5e4u;
    // NOP
    // 0x1fa5e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1fa5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1fa5ec: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x1fa5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x1fa5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5f4: 0x0  nop
    ctx->pc = 0x1fa5f4u;
    // NOP
    // 0x1fa5f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fa5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fa5fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa604: 0x0  nop
    ctx->pc = 0x1fa604u;
    // NOP
    // 0x1fa608: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fa608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fa60c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fa60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa610: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fa614: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fa614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa618: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FA618u;
    SET_GPR_U32(ctx, 31, 0x1FA620u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FA620u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FA620u) { return; }
    ctx->pc = 0x1FA620u;
label_1fa620:
    // 0x1fa620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa624: 0x0  nop
    ctx->pc = 0x1fa624u;
    // NOP
    // 0x1fa628: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1fa628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1fa62c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1fa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1fa630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa634: 0x0  nop
    ctx->pc = 0x1fa634u;
    // NOP
    // 0x1fa638: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1fa638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1fa63c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1fa640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa644: 0x0  nop
    ctx->pc = 0x1fa644u;
    // NOP
    // 0x1fa648: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fa648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1fa64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa654: 0x0  nop
    ctx->pc = 0x1fa654u;
    // NOP
    // 0x1fa658: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1fa658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1fa65c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa660: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fa660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fa664: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1fa664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa668: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FA668u;
    SET_GPR_U32(ctx, 31, 0x1FA670u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FA670u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FA670u) { return; }
    ctx->pc = 0x1FA670u;
label_1fa670:
    // 0x1fa670: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa674: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1fa674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa678: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1fa678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1fa67c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1fa680: 0xa4620082  sh          $v0, 0x82($v1)
    ctx->pc = 0x1fa680u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fa684: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa688: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fa688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa68c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1fa68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa690: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1fa690u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa694: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1FA694u;
    SET_GPR_U32(ctx, 31, 0x1FA69Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1FA694u, 0x1FA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA69Cu;
label_1fa69c:
    // 0x1fa69c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1fa69cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fa6a0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA6A0u;
    {
        const bool branch_taken_0x1fa6a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6a0) {
            ctx->pc = 0x1FA6BCu;
            return;
        }
    }
    ctx->pc = 0x1FA6A8u;
    // 0x1fa6a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa6ac: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa6b0: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1fa6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1fa6b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1fa6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1fa6b8: 0xa4620082  sh          $v0, 0x82($v1)
    ctx->pc = 0x1fa6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1fa6bcu;
}
