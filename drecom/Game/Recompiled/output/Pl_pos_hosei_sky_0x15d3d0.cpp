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

// Function: Pl_pos_hosei_sky
// Address: 0x15d3d0 - 0x15d638
void Pl_pos_hosei_sky_0x15d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_pos_hosei_sky_0x15d3d0");
#endif

    switch (ctx->pc) {
        case 0x15d438u: goto label_15d438;
        case 0x15d450u: goto label_15d450;
        case 0x15d46cu: goto label_15d46c;
        case 0x15d49cu: goto label_15d49c;
        case 0x15d4d0u: goto label_15d4d0;
        case 0x15d4e8u: goto label_15d4e8;
        case 0x15d568u: goto label_15d568;
        case 0x15d594u: goto label_15d594;
        case 0x15d5bcu: goto label_15d5bc;
        case 0x15d5c8u: goto label_15d5c8;
        case 0x15d628u: goto label_15d628;
        default: break;
    }

    ctx->pc = 0x15d3d0u;

    // 0x15d3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d3d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15d3d8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15d3dc: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x15d3dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15d3e0: 0xa3a50058  sb          $a1, 0x58($sp)
    ctx->pc = 0x15d3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x15d3e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d3e8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x15d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d3ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15d3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15d3f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d3f4: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x15d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d3f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d3fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d400: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d404: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d40c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D40Cu;
    {
        const bool branch_taken_0x15d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d40c) {
            ctx->pc = 0x15D428u;
            goto label_15d428;
        }
    }
    ctx->pc = 0x15D414u;
    // 0x15d414: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d418: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d41c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15d420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D420u;
    {
        const bool branch_taken_0x15d420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d420) {
            ctx->pc = 0x15D440u;
            goto label_15d440;
        }
    }
    ctx->pc = 0x15D428u;
label_15d428:
    // 0x15d428: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d42c: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d430: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15D430u;
    SET_GPR_U32(ctx, 31, 0x15D438u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15D430u, 0x15D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D438u;
label_15d438:
    // 0x15d438: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15D438u;
    {
        const bool branch_taken_0x15d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d438) {
            ctx->pc = 0x15D518u;
            goto label_15d518;
        }
    }
    ctx->pc = 0x15D440u;
label_15d440:
    // 0x15d440: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d444: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d448: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15D448u;
    SET_GPR_U32(ctx, 31, 0x15D450u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15D448u, 0x15D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D450u;
label_15d450:
    // 0x15d450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d454: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d458: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d45c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d460: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15d464: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15D464u;
    SET_GPR_U32(ctx, 31, 0x15D46Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15D464u, 0x15D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D46Cu;
label_15d46c:
    // 0x15d46c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d470: 0x0  nop
    ctx->pc = 0x15d470u;
    // NOP
    // 0x15d474: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15d478: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d47c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d480: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15d480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d484: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d488: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d48c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d490: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d490u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d494: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D494u;
    SET_GPR_U32(ctx, 31, 0x15D49Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D494u, 0x15D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D49Cu;
label_15d49c:
    // 0x15d49c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15d4a0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d4a4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d4ac: 0x0  nop
    ctx->pc = 0x15d4acu;
    // NOP
    // 0x15d4b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d4b4: 0x0  nop
    ctx->pc = 0x15d4b4u;
    // NOP
    // 0x15d4b8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D4B8u;
    {
        const bool branch_taken_0x15d4b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d4b8) {
            ctx->pc = 0x15D518u;
            goto label_15d518;
        }
    }
    ctx->pc = 0x15D4C0u;
    // 0x15d4c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4c8: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D4C8u;
    SET_GPR_U32(ctx, 31, 0x15D4D0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D4D0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D4D0u) { return; }
    ctx->pc = 0x15D4D0u;
label_15d4d0:
    // 0x15d4d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d4d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d4d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4e0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D4E0u;
    SET_GPR_U32(ctx, 31, 0x15D4E8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D4E8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D4E8u) { return; }
    ctx->pc = 0x15D4E8u;
label_15d4e8:
    // 0x15d4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d4ec: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d4f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d4f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d4f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d4fc: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d500: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d504: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d508: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d50c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d514: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_15d518:
    // 0x15d518: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d51c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d520: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d524: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D524u;
    {
        const bool branch_taken_0x15d524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d524) {
            ctx->pc = 0x15D540u;
            goto label_15d540;
        }
    }
    ctx->pc = 0x15D52Cu;
    // 0x15d52c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d530: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d534: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d538: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D538u;
    {
        const bool branch_taken_0x15d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d538) {
            ctx->pc = 0x15D570u;
            goto label_15d570;
        }
    }
    ctx->pc = 0x15D540u;
label_15d540:
    // 0x15d540: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d548: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d54c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d554: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d558: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d55c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d560: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D560u;
    SET_GPR_U32(ctx, 31, 0x15D568u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D560u, 0x15D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D568u;
label_15d568:
    // 0x15d568: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D568u;
    {
        const bool branch_taken_0x15d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d568) {
            ctx->pc = 0x15D594u;
            goto label_15d594;
        }
    }
    ctx->pc = 0x15D570u;
label_15d570:
    // 0x15d570: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d574: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d578: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d57c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d580: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d584: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d588: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15d58c: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D58Cu;
    SET_GPR_U32(ctx, 31, 0x15D594u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D58Cu, 0x15D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D594u;
label_15d594:
    // 0x15d594: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d598: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d59c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d5a0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D610u;
            goto label_15d610;
        }
    }
    ctx->pc = 0x15D5A8u;
    // 0x15d5a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d5ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d5b0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x15d5b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15D5B4u;
    SET_GPR_U32(ctx, 31, 0x15D5BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15D5BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D5BCu) { return; }
    ctx->pc = 0x15D5BCu;
label_15d5bc:
    // 0x15d5bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d5c0: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x15D5C0u;
    SET_GPR_U32(ctx, 31, 0x15D5C8u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x15D5C0u, 0x15D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15d5cc: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x15d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d5d0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d5d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d5dc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x15d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d5e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d5e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15d5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d5e8: 0x0  nop
    ctx->pc = 0x15d5e8u;
    // NOP
    // 0x15d5ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15D5ECu;
    {
        const bool branch_taken_0x15d5ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d5ec) {
            ctx->pc = 0x15D610u;
            goto label_15d610;
        }
    }
    ctx->pc = 0x15D5F4u;
    // 0x15d5f4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d5f8: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d5fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d604: 0x0  nop
    ctx->pc = 0x15d604u;
    // NOP
    // 0x15d608: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15d608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d60c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15d60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_15d610:
    // 0x15d610: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x15d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d614: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d618: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d61c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x15d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d620: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D620u;
    SET_GPR_U32(ctx, 31, 0x15D628u);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D620u, 0x15D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d62c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15d62cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d630: 0x3e00008  jr          $ra
    ctx->pc = 0x15D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D638u;
}
