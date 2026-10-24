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

// Function: R201_main
// Address: 0x281700 - 0x281900
void R201_main_0x281700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R201_main_0x281700");
#endif

    switch (ctx->pc) {
        case 0x281858u: goto label_281858;
        case 0x281860u: goto label_281860;
        case 0x2818e4u: goto label_2818e4;
        case 0x2818ecu: goto label_2818ec;
        default: break;
    }

    ctx->pc = 0x281700u;

    // 0x281700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281704: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x281704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x281708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28170c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28170cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281710: 0x8c30fb20  lw          $s0, -0x4E0($at)
    ctx->pc = 0x281710u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FB20u));
    // 0x281714: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281718: 0x3c033951  lui         $v1, 0x3951
    ctx->pc = 0x281718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14673 << 16));
    // 0x28171c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x28171cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x281720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281724: 0x0  nop
    ctx->pc = 0x281724u;
    // NOP
    // 0x281728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28172c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x28172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x281730: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281734: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x281734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x281738: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x281738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28173c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28173cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281740: 0x0  nop
    ctx->pc = 0x281740u;
    // NOP
    // 0x281744: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x281744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281748: 0x0  nop
    ctx->pc = 0x281748u;
    // NOP
    // 0x28174c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28174Cu;
    {
        const bool branch_taken_0x28174c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28174c) {
            ctx->pc = 0x281770u;
            goto label_281770;
        }
    }
    ctx->pc = 0x281754u;
    // 0x281754: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281758: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x281758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x28175c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x281760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281764: 0x0  nop
    ctx->pc = 0x281764u;
    // NOP
    // 0x281768: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x281768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28176c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x28176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_281770:
    // 0x281770: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281774: 0x8c30fb24  lw          $s0, -0x4DC($at)
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FB24u));
    // 0x281778: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28177c: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x28177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x281780: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x281780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x281784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281788: 0x0  nop
    ctx->pc = 0x281788u;
    // NOP
    // 0x28178c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28178cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281790: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x281790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x281794: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x281794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281798: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x281798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x28179c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2817a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2817a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2817a4: 0x0  nop
    ctx->pc = 0x2817a4u;
    // NOP
    // 0x2817a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2817a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2817ac: 0x0  nop
    ctx->pc = 0x2817acu;
    // NOP
    // 0x2817b0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2817B0u;
    {
        const bool branch_taken_0x2817b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2817b0) {
            ctx->pc = 0x2817D4u;
            goto label_2817d4;
        }
    }
    ctx->pc = 0x2817B8u;
    // 0x2817b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2817b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2817bc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2817bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x2817c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2817c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2817c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2817c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2817c8: 0x0  nop
    ctx->pc = 0x2817c8u;
    // NOP
    // 0x2817cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2817ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2817d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2817d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_2817d4:
    // 0x2817d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2817d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2817d8: 0x8c231b80  lw          $v1, 0x1B80($at)
    ctx->pc = 0x2817d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B80u));
    // 0x2817dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2817dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2817e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2817e4: 0xac231b80  sw          $v1, 0x1B80($at)
    ctx->pc = 0x2817e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B80u, _value); } while (0);
    // 0x2817e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2817ec: 0x8c231b80  lw          $v1, 0x1B80($at)
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B80u));
    // 0x2817f0: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2817F0u;
    {
        const bool branch_taken_0x2817f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2817f0) {
            ctx->pc = 0x281860u;
            goto label_281860;
        }
    }
    ctx->pc = 0x2817F8u;
    // 0x2817f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2817f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2817fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2817fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x281800: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x281800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28180c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281810: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x281810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x281814: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281818: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x281818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28181c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281820: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281828: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x281828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x28182c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x28182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x281830: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x281830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281834: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281838: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x281838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28183c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281840: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x281840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x281844: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x281844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x281848: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28184c: 0xac221b80  sw          $v0, 0x1B80($at)
    ctx->pc = 0x28184cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B80u, _value); } while (0);
    // 0x281850: 0xc0a072c  jal         func_281CB0
    ctx->pc = 0x281850u;
    SET_GPR_U32(ctx, 31, 0x281858u);
    ctx->pc = 0x281CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CB0u, 0x281850u, 0x281858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281858u;
label_281858:
    // 0x281858: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x281858u;
    SET_GPR_U32(ctx, 31, 0x281860u);
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x281858u, 0x281860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281860u;
label_281860:
    // 0x281860: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281864: 0x8c231b88  lw          $v1, 0x1B88($at)
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B88u));
    // 0x281868: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x281868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28186c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281870: 0xac231b88  sw          $v1, 0x1B88($at)
    ctx->pc = 0x281870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B88u, _value); } while (0);
    // 0x281874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281878: 0x8c231b88  lw          $v1, 0x1B88($at)
    ctx->pc = 0x281878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B88u));
    // 0x28187c: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28187Cu;
    {
        const bool branch_taken_0x28187c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28187c) {
            ctx->pc = 0x2818ECu;
            goto label_2818ec;
        }
    }
    ctx->pc = 0x281884u;
    // 0x281884: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281888: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x281888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28188c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281890: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x281898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28189c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2818a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2818a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2818a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2818a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2818a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2818ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2818acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2818b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2818b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2818b4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2818b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2818b8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2818b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2818bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2818bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2818c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2818c4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2818c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2818c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2818c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2818cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2818ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2818d0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2818d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2818d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2818d8: 0xac221b88  sw          $v0, 0x1B88($at)
    ctx->pc = 0x2818d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B88u, _value); } while (0);
    // 0x2818dc: 0xc0a07f4  jal         func_281FD0
    ctx->pc = 0x2818DCu;
    SET_GPR_U32(ctx, 31, 0x2818E4u);
    ctx->pc = 0x281FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FD0u, 0x2818DCu, 0x2818E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818E4u;
label_2818e4:
    // 0x2818e4: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2818E4u;
    SET_GPR_U32(ctx, 31, 0x2818ECu);
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x2818E4u, 0x2818ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818ECu;
label_2818ec:
    // 0x2818ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2818ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2818f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2818f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2818f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2818f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2818F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281900u;
}
