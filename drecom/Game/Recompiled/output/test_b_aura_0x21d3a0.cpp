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

// Function: test_b_aura
// Address: 0x21d3a0 - 0x21d6c8
void test_b_aura_0x21d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("test_b_aura_0x21d3a0");
#endif

    switch (ctx->pc) {
        case 0x21d410u: goto label_21d410;
        case 0x21d42cu: goto label_21d42c;
        case 0x21d448u: goto label_21d448;
        case 0x21d4e8u: goto label_21d4e8;
        case 0x21d628u: goto label_21d628;
        case 0x21d678u: goto label_21d678;
        case 0x21d6b4u: goto label_21d6b4;
        default: break;
    }

    ctx->pc = 0x21d3a0u;

    // 0x21d3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21d3a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21d3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21d3ac: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x21d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x21d3b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d3b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d3b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d3bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d3c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d3c8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d3cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d3d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d3d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d3d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d3e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d3e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d3e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d3ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d3f0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d3f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21d3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d3f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d3fc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x21d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x21d400: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x21D400u;
    {
        const bool branch_taken_0x21d400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d400) {
            ctx->pc = 0x21D628u;
            goto label_21d628;
        }
    }
    ctx->pc = 0x21D408u;
    // 0x21d408: 0xc067648  jal         func_19D920
    ctx->pc = 0x21D408u;
    SET_GPR_U32(ctx, 31, 0x21D410u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x21D408u, 0x21D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D410u;
label_21d410:
    // 0x21d410: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x21d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x21d414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d418: 0x0  nop
    ctx->pc = 0x21d418u;
    // NOP
    // 0x21d41c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d420: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x21d420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21d424: 0xc067648  jal         func_19D920
    ctx->pc = 0x21D424u;
    SET_GPR_U32(ctx, 31, 0x21D42Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x21D424u, 0x21D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D42Cu;
label_21d42c:
    // 0x21d42c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x21d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x21d430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d434: 0x0  nop
    ctx->pc = 0x21d434u;
    // NOP
    // 0x21d438: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d43c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x21d43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21d440: 0xc067648  jal         func_19D920
    ctx->pc = 0x21D440u;
    SET_GPR_U32(ctx, 31, 0x21D448u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x21D440u, 0x21D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D448u;
label_21d448:
    // 0x21d448: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x21d448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x21d44c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d450: 0x0  nop
    ctx->pc = 0x21d450u;
    // NOP
    // 0x21d454: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d458: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x21d458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x21d45c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21d460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d464: 0x0  nop
    ctx->pc = 0x21d464u;
    // NOP
    // 0x21d468: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x21d468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x21d46c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d470: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d474: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d478: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d47c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d480: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d484: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d488: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d48c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d490: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d494: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d49c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d4a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d4a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d4a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d4ac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d4acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d4b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21d4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d4b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d4b8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21d4b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x21d4bc: 0x0  nop
    ctx->pc = 0x21d4bcu;
    // NOP
    // 0x21d4c0: 0x0  nop
    ctx->pc = 0x21d4c0u;
    // NOP
    // 0x21d4c4: 0x1010  mfhi        $v0
    ctx->pc = 0x21d4c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21d4c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D4C8u;
    {
        const bool branch_taken_0x21d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d4c8) {
            ctx->pc = 0x21D4DCu;
            goto label_21d4dc;
        }
    }
    ctx->pc = 0x21D4D0u;
    // 0x21d4d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21d4d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d4d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D4D4u;
    {
        const bool branch_taken_0x21d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d4d4) {
            ctx->pc = 0x21D4E0u;
            goto label_21d4e0;
        }
    }
    ctx->pc = 0x21D4DCu;
label_21d4dc:
    // 0x21d4dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21d4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d4e0:
    // 0x21d4e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x21D4E0u;
    SET_GPR_U32(ctx, 31, 0x21D4E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x21D4E0u, 0x21D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4E8u;
label_21d4e8:
    // 0x21d4e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21d4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d4f0: 0x0  nop
    ctx->pc = 0x21d4f0u;
    // NOP
    // 0x21d4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d4f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21d4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d500: 0x0  nop
    ctx->pc = 0x21d500u;
    // NOP
    // 0x21d504: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x21d504u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d508: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x21d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x21d50c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21d50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21d510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d514: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x21d518: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d51c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d520: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d530: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d534: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d538: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d53c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d540: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d548: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d54c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d550: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d554: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d558: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d55c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21d55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d560: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x21d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21d564: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21d564u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x21d568: 0x0  nop
    ctx->pc = 0x21d568u;
    // NOP
    // 0x21d56c: 0x0  nop
    ctx->pc = 0x21d56cu;
    // NOP
    // 0x21d570: 0x1810  mfhi        $v1
    ctx->pc = 0x21d570u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21d574: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d578: 0x244210f0  addiu       $v0, $v0, 0x10F0
    ctx->pc = 0x21d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
    // 0x21d57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d580: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21d580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d584: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x21d584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d588: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d58c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d590: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d594: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d5a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d5a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d5ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d5b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d5b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d5b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d5bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d5c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d5c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d5c8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d5c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d5cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5d0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x21d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21d5d4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21d5d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x21d5d8: 0x0  nop
    ctx->pc = 0x21d5d8u;
    // NOP
    // 0x21d5dc: 0x0  nop
    ctx->pc = 0x21d5dcu;
    // NOP
    // 0x21d5e0: 0x1810  mfhi        $v1
    ctx->pc = 0x21d5e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21d5e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d5e8: 0x244210f0  addiu       $v0, $v0, 0x10F0
    ctx->pc = 0x21d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
    // 0x21d5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d5f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21d5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d5f4: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x21d5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5f8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21d5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d600: 0x320b00ff  andi        $t3, $s0, 0xFF
    ctx->pc = 0x21d600u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x21d604: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21d604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d608: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d60c: 0x244610e0  addiu       $a2, $v0, 0x10E0
    ctx->pc = 0x21d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d610: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x21d610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d614: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d618: 0x244910e0  addiu       $t1, $v0, 0x10E0
    ctx->pc = 0x21d618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d61c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x21d61cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21d620: 0xc087348  jal         func_21CD20
    ctx->pc = 0x21D620u;
    SET_GPR_U32(ctx, 31, 0x21D628u);
    ctx->pc = 0x21CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD20u, 0x21D620u, 0x21D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D628u;
label_21d628:
    // 0x21d628: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x21d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21d62c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21d62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21d630: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21d634: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21d638: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21d63c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x21d63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x21d640: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21d644: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x21d644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x21d648: 0x3c02447c  lui         $v0, 0x447C
    ctx->pc = 0x21d648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17532 << 16));
    // 0x21d64c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x21d64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x21d650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d654: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d658: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21d658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d65c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d660: 0x244610e0  addiu       $a2, $v0, 0x10E0
    ctx->pc = 0x21d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d664: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d668: 0x244710e0  addiu       $a3, $v0, 0x10E0
    ctx->pc = 0x21d668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d66c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21d66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d670: 0xc08741c  jal         func_21D070
    ctx->pc = 0x21D670u;
    SET_GPR_U32(ctx, 31, 0x21D678u);
    ctx->pc = 0x21D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D070u, 0x21D670u, 0x21D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D678u;
label_21d678:
    // 0x21d678: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x21d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x21d67c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d680: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x21d680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x21d684: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21d684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21d688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d68c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x21d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x21d690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21d694: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21d694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21d698: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x21d698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d69c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x21d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21d6a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d6a4: 0x244610e0  addiu       $a2, $v0, 0x10E0
    ctx->pc = 0x21d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21d6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d6ac: 0xc086488  jal         func_219220
    ctx->pc = 0x21D6ACu;
    SET_GPR_U32(ctx, 31, 0x21D6B4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x21D6ACu, 0x21D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6B4u;
label_21d6b4:
    // 0x21d6b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21d6b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d6b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d6bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21d6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D6C8u;
}
