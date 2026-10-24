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

// Function: entry_00200838
// Address: 0x200838 - 0x200988
void entry_00200838_0x200838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200838_0x200838");
#endif

    switch (ctx->pc) {
        case 0x20086cu: goto label_20086c;
        case 0x200874u: goto label_200874;
        case 0x2008acu: goto label_2008ac;
        case 0x2008d0u: goto label_2008d0;
        case 0x200904u: goto label_200904;
        case 0x20090cu: goto label_20090c;
        case 0x200954u: goto label_200954;
        case 0x20095cu: goto label_20095c;
        default: break;
    }

    ctx->pc = 0x200838u;

    // 0x200838: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x200838u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20083c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200840: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x200844: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200848: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20084c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20085c: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x20085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200860: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x200864: 0xc040c80  jal         func_103200
    ctx->pc = 0x200864u;
    SET_GPR_U32(ctx, 31, 0x20086Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x20086Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20086Cu) { return; }
    ctx->pc = 0x20086Cu;
label_20086c:
    // 0x20086c: 0xc067648  jal         func_19D920
    ctx->pc = 0x20086Cu;
    SET_GPR_U32(ctx, 31, 0x200874u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x20086Cu, 0x200874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200874u;
label_200874:
    // 0x200874: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x200874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x200878: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x200878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x20087c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20087cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200880: 0x0  nop
    ctx->pc = 0x200880u;
    // NOP
    // 0x200884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200888: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x200888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x20088c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200894: 0x0  nop
    ctx->pc = 0x200894u;
    // NOP
    // 0x200898: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200898u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20089c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2008a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2008a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2008a4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2008A4u;
    SET_GPR_U32(ctx, 31, 0x2008ACu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2008ACu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2008ACu) { return; }
    ctx->pc = 0x2008ACu;
label_2008ac:
    // 0x2008ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2008b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2008c8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2008C8u;
    SET_GPR_U32(ctx, 31, 0x2008D0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2008D0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2008D0u) { return; }
    ctx->pc = 0x2008D0u;
label_2008d0:
    // 0x2008d0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2008d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008e4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2008e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008f4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2008f8: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x2008fc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2008FCu;
    SET_GPR_U32(ctx, 31, 0x200904u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2008FCu, 0x200904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200904u;
label_200904:
    // 0x200904: 0xc067648  jal         func_19D920
    ctx->pc = 0x200904u;
    SET_GPR_U32(ctx, 31, 0x20090Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200904u, 0x20090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20090Cu;
label_20090c:
    // 0x20090c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
    // 0x200910: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x200910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x200914: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200918: 0x0  nop
    ctx->pc = 0x200918u;
    // NOP
    // 0x20091c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20091cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200920: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x200924: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20092c: 0x0  nop
    ctx->pc = 0x20092cu;
    // NOP
    // 0x200930: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200930u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200934: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20093c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200940: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200948: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20094c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x20094Cu;
    SET_GPR_U32(ctx, 31, 0x200954u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200954u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200954u) { return; }
    ctx->pc = 0x200954u;
label_200954:
    // 0x200954: 0xc067648  jal         func_19D920
    ctx->pc = 0x200954u;
    SET_GPR_U32(ctx, 31, 0x20095Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200954u, 0x20095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20095Cu;
label_20095c:
    // 0x20095c: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x200960: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x200960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x200964: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200968: 0x0  nop
    ctx->pc = 0x200968u;
    // NOP
    // 0x20096c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20096cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200970: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200974: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20097c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x20097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200980: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x200980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x200984: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x200984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x200988u;
}
