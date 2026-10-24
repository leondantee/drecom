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

// Function: Pl_pos_hosei_swim
// Address: 0x15d640 - 0x15d8cc
void Pl_pos_hosei_swim_0x15d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_pos_hosei_swim_0x15d640");
#endif

    switch (ctx->pc) {
        case 0x15d68cu: goto label_15d68c;
        case 0x15d6a4u: goto label_15d6a4;
        case 0x15d6c0u: goto label_15d6c0;
        case 0x15d6f0u: goto label_15d6f0;
        case 0x15d724u: goto label_15d724;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7e0u: goto label_15d7e0;
        case 0x15d80cu: goto label_15d80c;
        case 0x15d84cu: goto label_15d84c;
        case 0x15d864u: goto label_15d864;
        case 0x15d8bcu: goto label_15d8bc;
        default: break;
    }

    ctx->pc = 0x15d640u;

    // 0x15d640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d644: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15d644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15d648: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15d648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15d64c: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x15d64cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15d650: 0xa3a50058  sb          $a1, 0x58($sp)
    ctx->pc = 0x15d650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x15d654: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d658: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d65c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d660: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D660u;
    {
        const bool branch_taken_0x15d660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d660) {
            ctx->pc = 0x15D67Cu;
            goto label_15d67c;
        }
    }
    ctx->pc = 0x15D668u;
    // 0x15d668: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d66c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d670: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15d674: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D674u;
    {
        const bool branch_taken_0x15d674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d674) {
            ctx->pc = 0x15D694u;
            goto label_15d694;
        }
    }
    ctx->pc = 0x15D67Cu;
label_15d67c:
    // 0x15d67c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d680: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d684: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15D684u;
    SET_GPR_U32(ctx, 31, 0x15D68Cu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15D684u, 0x15D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D68Cu;
label_15d68c:
    // 0x15d68c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15D68Cu;
    {
        const bool branch_taken_0x15d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d68c) {
            ctx->pc = 0x15D76Cu;
            goto label_15d76c;
        }
    }
    ctx->pc = 0x15D694u;
label_15d694:
    // 0x15d694: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d698: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d69c: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15D69Cu;
    SET_GPR_U32(ctx, 31, 0x15D6A4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15D69Cu, 0x15D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6A4u;
label_15d6a4:
    // 0x15d6a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d6a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d6ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d6b0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d6b4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15d6b8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15D6B8u;
    SET_GPR_U32(ctx, 31, 0x15D6C0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15D6B8u, 0x15D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6C0u;
label_15d6c0:
    // 0x15d6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d6c4: 0x0  nop
    ctx->pc = 0x15d6c4u;
    // NOP
    // 0x15d6c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15d6cc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15d6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d6d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d6d4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15d6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d6d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d6dc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d6e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d6e4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d6e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d6e8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D6E8u;
    SET_GPR_U32(ctx, 31, 0x15D6F0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D6E8u, 0x15D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6F0u;
label_15d6f0:
    // 0x15d6f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15d6f4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d6f8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d700: 0x0  nop
    ctx->pc = 0x15d700u;
    // NOP
    // 0x15d704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d708: 0x0  nop
    ctx->pc = 0x15d708u;
    // NOP
    // 0x15d70c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D70Cu;
    {
        const bool branch_taken_0x15d70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d70c) {
            ctx->pc = 0x15D76Cu;
            goto label_15d76c;
        }
    }
    ctx->pc = 0x15D714u;
    // 0x15d714: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d718: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d71c: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D71Cu;
    SET_GPR_U32(ctx, 31, 0x15D724u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D724u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D724u) { return; }
    ctx->pc = 0x15D724u;
label_15d724:
    // 0x15d724: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d72c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d730: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d734: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D734u;
    SET_GPR_U32(ctx, 31, 0x15D73Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D73Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D73Cu) { return; }
    ctx->pc = 0x15D73Cu;
label_15d73c:
    // 0x15d73c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d740: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d744: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d748: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d750: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d758: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d75c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d760: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d768: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_15d76c:
    // 0x15d76c: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d774: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d778: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D778u;
    {
        const bool branch_taken_0x15d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d778) {
            ctx->pc = 0x15D794u;
            goto label_15d794;
        }
    }
    ctx->pc = 0x15D780u;
    // 0x15d780: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d784: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d788: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d78c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15D78Cu;
    {
        const bool branch_taken_0x15d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d78c) {
            ctx->pc = 0x15D7C0u;
            goto label_15d7c0;
        }
    }
    ctx->pc = 0x15D794u;
label_15d794:
    // 0x15d794: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d798: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d79c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d7a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d7a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7a8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d7ac: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d7b0: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D7B0u;
    SET_GPR_U32(ctx, 31, 0x15D7B8u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D7B0u, 0x15D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7B8u;
label_15d7b8:
    // 0x15d7b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D7B8u;
    {
        const bool branch_taken_0x15d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7b8) {
            ctx->pc = 0x15D7E0u;
            goto label_15d7e0;
        }
    }
    ctx->pc = 0x15D7C0u;
label_15d7c0:
    // 0x15d7c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d7c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d7c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d7cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d7d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7d4: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x15d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15d7d8: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D7D8u;
    SET_GPR_U32(ctx, 31, 0x15D7E0u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D7D8u, 0x15D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7E0u;
label_15d7e0:
    // 0x15d7e0: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d7e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d7ec: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x15D7ECu;
    {
        const bool branch_taken_0x15d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d7ec) {
            ctx->pc = 0x15D8B0u;
            goto label_15d8b0;
        }
    }
    ctx->pc = 0x15D7F4u;
    // 0x15d7f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7fc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d800: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x15d804: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15D804u;
    SET_GPR_U32(ctx, 31, 0x15D80Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15D804u, 0x15D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D80Cu;
label_15d80c:
    // 0x15d80c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15d810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d814: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x15d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d818: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d81c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15d81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d820: 0x0  nop
    ctx->pc = 0x15d820u;
    // NOP
    // 0x15d824: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15D824u;
    {
        const bool branch_taken_0x15d824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d824) {
            ctx->pc = 0x15D838u;
            goto label_15d838;
        }
    }
    ctx->pc = 0x15D82Cu;
    // 0x15d82c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d830: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d834: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_15d838:
    // 0x15d838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d83c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d840: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x15d844: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15D844u;
    SET_GPR_U32(ctx, 31, 0x15D84Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15D84Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D84Cu) { return; }
    ctx->pc = 0x15D84Cu;
label_15d84c:
    // 0x15d84c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d850: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x15d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d854: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15d858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d85c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x15D85Cu;
    SET_GPR_U32(ctx, 31, 0x15D864u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x15D85Cu, 0x15D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D864u;
label_15d864:
    // 0x15d864: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15d868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d86c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x15d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d870: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d878: 0x0  nop
    ctx->pc = 0x15d878u;
    // NOP
    // 0x15d87c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x15d87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15d880: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d884: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15d884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d888: 0x0  nop
    ctx->pc = 0x15d888u;
    // NOP
    // 0x15d88c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15D88Cu;
    {
        const bool branch_taken_0x15d88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d88c) {
            ctx->pc = 0x15D8B0u;
            goto label_15d8b0;
        }
    }
    ctx->pc = 0x15D894u;
    // 0x15d894: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d898: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d8a0: 0x0  nop
    ctx->pc = 0x15d8a0u;
    // NOP
    // 0x15d8a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15d8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d8a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d8ac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_15d8b0:
    // 0x15d8b0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x15d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d8b4: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D8B4u;
    SET_GPR_U32(ctx, 31, 0x15D8BCu);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D8B4u, 0x15D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8BCu;
label_15d8bc:
    // 0x15d8bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d8bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d8c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D8CCu;
}
