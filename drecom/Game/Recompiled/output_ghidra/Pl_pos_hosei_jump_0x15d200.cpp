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

// Function: Pl_pos_hosei_jump
// Address: 0x15d200 - 0x15d3c4
void Pl_pos_hosei_jump_0x15d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_pos_hosei_jump_0x15d200");
#endif

    switch (ctx->pc) {
        case 0x15d24cu: goto label_15d24c;
        case 0x15d264u: goto label_15d264;
        case 0x15d280u: goto label_15d280;
        case 0x15d2b0u: goto label_15d2b0;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d2fcu: goto label_15d2fc;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d3a8u: goto label_15d3a8;
        case 0x15d3b4u: goto label_15d3b4;
        default: break;
    }

    ctx->pc = 0x15d200u;

    // 0x15d200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d204: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15d204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15d208: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15d208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x15d20c: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x15d20cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15d210: 0xa3a50048  sb          $a1, 0x48($sp)
    ctx->pc = 0x15d210u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x15d214: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15d214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d21c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d220: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D220u;
    {
        const bool branch_taken_0x15d220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d220) {
            ctx->pc = 0x15D23Cu;
            goto label_15d23c;
        }
    }
    ctx->pc = 0x15D228u;
    // 0x15d228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d22c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d230: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15d234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D234u;
    {
        const bool branch_taken_0x15d234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d234) {
            ctx->pc = 0x15D254u;
            goto label_15d254;
        }
    }
    ctx->pc = 0x15D23Cu;
label_15d23c:
    // 0x15d23c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d240: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d244: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15D244u;
    SET_GPR_U32(ctx, 31, 0x15D24Cu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15D244u, 0x15D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D24Cu;
label_15d24c:
    // 0x15d24c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15D24Cu;
    {
        const bool branch_taken_0x15d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d24c) {
            ctx->pc = 0x15D32Cu;
            goto label_15d32c;
        }
    }
    ctx->pc = 0x15D254u;
label_15d254:
    // 0x15d254: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d258: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d25c: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15D25Cu;
    SET_GPR_U32(ctx, 31, 0x15D264u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15D25Cu, 0x15D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D264u;
label_15d264:
    // 0x15d264: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d26c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d270: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d274: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15d274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15d278: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15D278u;
    SET_GPR_U32(ctx, 31, 0x15D280u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15D278u, 0x15D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D280u;
label_15d280:
    // 0x15d280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d284: 0x0  nop
    ctx->pc = 0x15d284u;
    // NOP
    // 0x15d288: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15d28c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d290: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d294: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15d294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d298: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d29c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d2a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d2a4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d2a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d2a8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D2A8u;
    SET_GPR_U32(ctx, 31, 0x15D2B0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D2A8u, 0x15D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2B0u;
label_15d2b0:
    // 0x15d2b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15d2b4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d2b8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d2c0: 0x0  nop
    ctx->pc = 0x15d2c0u;
    // NOP
    // 0x15d2c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d2c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d2c8: 0x0  nop
    ctx->pc = 0x15d2c8u;
    // NOP
    // 0x15d2cc: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D2CCu;
    {
        const bool branch_taken_0x15d2cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d2cc) {
            ctx->pc = 0x15D32Cu;
            goto label_15d32c;
        }
    }
    ctx->pc = 0x15D2D4u;
    // 0x15d2d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2dc: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D2DCu;
    SET_GPR_U32(ctx, 31, 0x15D2E4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D2E4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D2E4u) { return; }
    ctx->pc = 0x15D2E4u;
label_15d2e4:
    // 0x15d2e4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d2e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d2ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2f4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D2F4u;
    SET_GPR_U32(ctx, 31, 0x15D2FCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D2FCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D2FCu) { return; }
    ctx->pc = 0x15D2FCu;
label_15d2fc:
    // 0x15d2fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d300: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d304: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d30c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d310: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d318: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d31c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d328: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_15d32c:
    // 0x15d32c: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15d32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d334: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d338: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D338u;
    {
        const bool branch_taken_0x15d338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d338) {
            ctx->pc = 0x15D354u;
            goto label_15d354;
        }
    }
    ctx->pc = 0x15D340u;
    // 0x15d340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d344: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d348: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d34c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D34Cu;
    {
        const bool branch_taken_0x15d34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d34c) {
            ctx->pc = 0x15D384u;
            goto label_15d384;
        }
    }
    ctx->pc = 0x15D354u;
label_15d354:
    // 0x15d354: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d35c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d360: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d364: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d368: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d36c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d370: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d374: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D374u;
    SET_GPR_U32(ctx, 31, 0x15D37Cu);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D374u, 0x15D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D37Cu;
label_15d37c:
    // 0x15d37c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D37Cu;
    {
        const bool branch_taken_0x15d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d37c) {
            ctx->pc = 0x15D3A8u;
            goto label_15d3a8;
        }
    }
    ctx->pc = 0x15D384u;
label_15d384:
    // 0x15d384: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d388: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d38c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d390: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d394: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d398: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d39c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x15d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15d3a0: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D3A0u;
    SET_GPR_U32(ctx, 31, 0x15D3A8u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D3A0u, 0x15D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3A8u;
label_15d3a8:
    // 0x15d3a8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x15d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d3ac: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D3ACu;
    SET_GPR_U32(ctx, 31, 0x15D3B4u);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D3ACu, 0x15D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3B4u;
label_15d3b4:
    // 0x15d3b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d3b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d3b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D3C4u;
}
