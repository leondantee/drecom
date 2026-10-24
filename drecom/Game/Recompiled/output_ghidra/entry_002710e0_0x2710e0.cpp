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

// Function: entry_002710e0
// Address: 0x2710e0 - 0x271228
void entry_002710e0_0x2710e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002710e0_0x2710e0");
#endif

    switch (ctx->pc) {
        case 0x271104u: goto label_271104;
        case 0x271110u: goto label_271110;
        case 0x271134u: goto label_271134;
        case 0x271158u: goto label_271158;
        case 0x27117cu: goto label_27117c;
        case 0x2711b0u: goto label_2711b0;
        case 0x2711bcu: goto label_2711bc;
        case 0x271218u: goto label_271218;
        case 0x271224u: goto label_271224;
        default: break;
    }

    ctx->pc = 0x2710e0u;

    // 0x2710e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2710e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2710e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2710e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2710e8: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x2710ec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2710ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2710f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2710f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2710f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2710f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2710f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2710FCu;
    SET_GPR_U32(ctx, 31, 0x271104u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2710FCu, 0x271104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271104u;
label_271104:
    // 0x271104: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x271104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x271108: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x271108u;
    SET_GPR_U32(ctx, 31, 0x271110u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x271108u, 0x271110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271110u;
label_271110:
    // 0x271110: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x271110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x271114: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271118: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x27111c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271120: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x271120u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271124: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x271124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271128: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x271128u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27112c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27112Cu;
    SET_GPR_U32(ctx, 31, 0x271134u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27112Cu, 0x271134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271134u;
label_271134:
    // 0x271134: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x271134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x271138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27113c: 0x0  nop
    ctx->pc = 0x27113cu;
    // NOP
    // 0x271140: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271144: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x271144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27114c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x271150: 0xc06765c  jal         func_19D970
    ctx->pc = 0x271150u;
    SET_GPR_U32(ctx, 31, 0x271158u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x271150u, 0x271158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x271158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27115c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27115cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271160: 0x0  nop
    ctx->pc = 0x271160u;
    // NOP
    // 0x271164: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271168: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x271168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27116c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27116cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271170: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x271170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x271174: 0xc06765c  jal         func_19D970
    ctx->pc = 0x271174u;
    SET_GPR_U32(ctx, 31, 0x27117Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x271174u, 0x27117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27117Cu;
label_27117c:
    // 0x27117c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x271180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271184: 0x0  nop
    ctx->pc = 0x271184u;
    // NOP
    // 0x271188: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27118c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271194: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x271194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x271198: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x271198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x27119c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27119cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2711a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2711a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2711a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2711a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2711a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2711A8u;
    SET_GPR_U32(ctx, 31, 0x2711B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2711A8u, 0x2711B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711B0u;
label_2711b0:
    // 0x2711b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2711b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2711b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2711B4u;
    SET_GPR_U32(ctx, 31, 0x2711BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2711B4u, 0x2711BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711BCu;
label_2711bc:
    // 0x2711bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2711bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2711c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2711c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2711c4: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x2711c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x2711c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2711c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2711cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2711ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2711d0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2711d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2711d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2711d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2711d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2711dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2711dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2711e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2711e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2711e4: 0x0  nop
    ctx->pc = 0x2711e4u;
    // NOP
    // 0x2711e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2711e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2711ec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2711ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2711f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2711f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2711f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2711f8: 0x0  nop
    ctx->pc = 0x2711f8u;
    // NOP
    // 0x2711fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2711fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x271200: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x271200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x271204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271208: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x271208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27120c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27120cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271210: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x271210u;
    SET_GPR_U32(ctx, 31, 0x271218u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x271210u, 0x271218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271218u;
label_271218:
    // 0x271218: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x271218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27121c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27121Cu;
    SET_GPR_U32(ctx, 31, 0x271224u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27121Cu, 0x271224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271224u;
label_271224:
    // 0x271224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x271224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x271228u;
}
