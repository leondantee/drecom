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

// Function: e2d_id79_type00
// Address: 0x2bc840 - 0x2bc968
void e2d_id79_type00_0x2bc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id79_type00_0x2bc840");
#endif

    switch (ctx->pc) {
        case 0x2bc854u: goto label_2bc854;
        case 0x2bc92cu: goto label_2bc92c;
        default: break;
    }

    ctx->pc = 0x2bc840u;

    // 0x2bc840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc84c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC84Cu;
    SET_GPR_U32(ctx, 31, 0x2BC854u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC84Cu, 0x2BC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC854u;
label_2bc854:
    // 0x2bc854: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2bc854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2bc858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bc858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc85c: 0x0  nop
    ctx->pc = 0x2bc85cu;
    // NOP
    // 0x2bc860: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc864: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2bc864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2bc868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc86c: 0x0  nop
    ctx->pc = 0x2bc86cu;
    // NOP
    // 0x2bc870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc878: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bc878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bc87c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bc880: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc884: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2bc884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc888: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bc888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc890: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc894: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bc894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bc898: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bc898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc8a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc8a4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bc8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bc8a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc8b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc8b4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bc8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bc8b8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bc8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc8c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc8c4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bc8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bc8c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc8cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc8d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc8d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc8dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc8e0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc8e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc8e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc8ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc8f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc8f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc8f8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc8fc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc900: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc904: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc908: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc90c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc914: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bc914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bc918: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc91c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc920: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bc920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc924: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BC924u;
    SET_GPR_U32(ctx, 31, 0x2BC92Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BC924u, 0x2BC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC92Cu;
label_2bc92c:
    // 0x2bc92c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bc92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bc930: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc934: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc938: 0x0  nop
    ctx->pc = 0x2bc938u;
    // NOP
    // 0x2bc93c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc93cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc940: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x2bc944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc948: 0x0  nop
    ctx->pc = 0x2bc948u;
    // NOP
    // 0x2bc94c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc94cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc950: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc954: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2bc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2bc958: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc95c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc960: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC968u;
}
