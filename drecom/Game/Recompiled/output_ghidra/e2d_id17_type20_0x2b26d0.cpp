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

// Function: e2d_id17_type20
// Address: 0x2b26d0 - 0x2b27c8
void e2d_id17_type20_0x2b26d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type20_0x2b26d0");
#endif

    switch (ctx->pc) {
        case 0x2b274cu: goto label_2b274c;
        case 0x2b277cu: goto label_2b277c;
        default: break;
    }

    ctx->pc = 0x2b26d0u;

    // 0x2b26d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b26d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b26d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b26d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b26d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b26dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b26e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b26e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b26e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b26e8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b26e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b26ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b26f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b26f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b26f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b26f8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b26f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b26fc: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x2b26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x2b2700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2704: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2708: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b2708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b270c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b270cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b2710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2718: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b2718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b271c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b2720: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b2720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b2724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2728: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b272c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b2730: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b2734: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b2734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b2738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b273c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2740: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b2740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b2744: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2744u;
    SET_GPR_U32(ctx, 31, 0x2B274Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2744u, 0x2B274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B274Cu;
label_2b274c:
    // 0x2b274c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b274cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b2750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2754: 0x0  nop
    ctx->pc = 0x2b2754u;
    // NOP
    // 0x2b2758: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b275c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2b275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2b2760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2764: 0x0  nop
    ctx->pc = 0x2b2764u;
    // NOP
    // 0x2b2768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b276c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2770: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b2770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b2774: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2774u;
    SET_GPR_U32(ctx, 31, 0x2B277Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2774u, 0x2B277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B277Cu;
label_2b277c:
    // 0x2b277c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b277cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b2780: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b2784: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2788: 0x0  nop
    ctx->pc = 0x2b2788u;
    // NOP
    // 0x2b278c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b278cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2790: 0x3c033e23  lui         $v1, 0x3E23
    ctx->pc = 0x2b2790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15907 << 16));
    // 0x2b2794: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b2794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b2798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b279c: 0x0  nop
    ctx->pc = 0x2b279cu;
    // NOP
    // 0x2b27a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b27a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b27a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b27a8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b27a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b27ac: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x2b27acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2b27b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b27b4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b27b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b27b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b27bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b27bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b27c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B27C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B27C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B27C8u;
}
