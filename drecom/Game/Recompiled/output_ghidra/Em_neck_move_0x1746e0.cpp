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

// Function: Em_neck_move
// Address: 0x1746e0 - 0x17496c
void Em_neck_move_0x1746e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_neck_move_0x1746e0");
#endif

    switch (ctx->pc) {
        case 0x174738u: goto label_174738;
        case 0x17476cu: goto label_17476c;
        case 0x174788u: goto label_174788;
        case 0x1747f8u: goto label_1747f8;
        default: break;
    }

    ctx->pc = 0x1746e0u;

    // 0x1746e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1746e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1746e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1746e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1746e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1746e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1746ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1746ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1746f0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1746f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1746f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1746f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1746f8: 0x8c711310  lw          $s1, 0x1310($v1)
    ctx->pc = 0x1746f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x1746fc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1746fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x174700: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x174700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x174704: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174708: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17470c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x17470cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x174710: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x174710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174714: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x174714u;
    {
        const bool branch_taken_0x174714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174714) {
            ctx->pc = 0x174890u;
            goto label_174890;
        }
    }
    ctx->pc = 0x17471Cu;
    // 0x17471c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174720: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174724: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x174724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x174728: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x174728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17472c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x17472cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174730: 0xc05cc90  jal         func_173240
    ctx->pc = 0x174730u;
    SET_GPR_U32(ctx, 31, 0x174738u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x174730u, 0x174738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174738u;
label_174738:
    // 0x174738: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x174738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17473c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17473Cu;
    {
        const bool branch_taken_0x17473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17473c) {
            ctx->pc = 0x174758u;
            goto label_174758;
        }
    }
    ctx->pc = 0x174744u;
    // 0x174744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174748: 0x0  nop
    ctx->pc = 0x174748u;
    // NOP
    // 0x17474c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x174750: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x174750u;
    {
        const bool branch_taken_0x174750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174750) {
            ctx->pc = 0x17478Cu;
            goto label_17478c;
        }
    }
    ctx->pc = 0x174758u;
label_174758:
    // 0x174758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17475c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x174760: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x174760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174764: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x174764u;
    SET_GPR_U32(ctx, 31, 0x17476Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x174764u, 0x17476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17476Cu;
label_17476c:
    // 0x17476c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x174770: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174774: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x174774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174778: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x174778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17477c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x17477cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174780: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x174780u;
    SET_GPR_U32(ctx, 31, 0x174788u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x174780u, 0x174788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174788u;
label_174788:
    // 0x174788: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x174788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_17478c:
    // 0x17478c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17478cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174790: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174794: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x174794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174798: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17479c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17479cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1747a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1747a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1747acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1747b0: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1747b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747b8: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x1747b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x1747bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1747bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1747c0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1747c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1747c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1747c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1747c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1747c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1747ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1747dc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1747dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1747e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747e4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1747e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1747e8: 0xc44d0120  lwc1        $f13, 0x120($v0)
    ctx->pc = 0x1747e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1747ec: 0xc62e0004  lwc1        $f14, 0x4($s1)
    ctx->pc = 0x1747ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1747f0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1747F0u;
    SET_GPR_U32(ctx, 31, 0x1747F8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1747F0u, 0x1747F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747F8u;
label_1747f8:
    // 0x1747f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1747fc: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1747fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174800: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174800u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174804: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174808: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17480c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174810: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174814: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174818: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x17481c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174820: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x174820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x174824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174828: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17482c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17482cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174830: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174830u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174834: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174838: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17483c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17483cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174844: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174848: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x17484c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174850: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x174850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x174854: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174858: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x174858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17485c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17485cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174864: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174868: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17486c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174870: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174874: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x174878: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17487c: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x17487cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x174880: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x174884: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x174884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x174888: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x174888u;
    {
        const bool branch_taken_0x174888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174888) {
            ctx->pc = 0x174954u;
            goto label_174954;
        }
    }
    ctx->pc = 0x174890u;
label_174890:
    // 0x174890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174894: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174898: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x174898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17489c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17489cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1748a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1748a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1748b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1748b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1748b4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x1748b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1748b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748bc: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x1748bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x1748c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1748c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1748c4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1748c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1748c8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1748c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1748cc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1748ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1748d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1748d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1748e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1748e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1748e4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x1748e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1748e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1748e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748ec: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1748ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1748f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1748f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1748f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1748f8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1748f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1748fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1748fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174900: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174904: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174908: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17490c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174910: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174914: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x174918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17491c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x17491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x174920: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174924: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x174924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174928: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174928u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17492c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174930: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174934: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174938: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17493c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17493cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174940: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x174944: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174948: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x174948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x17494c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x174950: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x174950u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
label_174954:
    // 0x174954: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x174954u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17495c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17495cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174960: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174964: 0x3e00008  jr          $ra
    ctx->pc = 0x174964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17496Cu;
}
