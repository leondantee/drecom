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

// Function: Om18_R1_mv03
// Address: 0x3187c0 - 0x318bf4
void Om18_R1_mv03_0x3187c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_mv03_0x3187c0");
#endif

    switch (ctx->pc) {
        case 0x3188c4u: goto label_3188c4;
        case 0x318910u: goto label_318910;
        case 0x31892cu: goto label_31892c;
        case 0x318944u: goto label_318944;
        case 0x31896cu: goto label_31896c;
        case 0x318988u: goto label_318988;
        case 0x318a14u: goto label_318a14;
        case 0x318a20u: goto label_318a20;
        case 0x318a7cu: goto label_318a7c;
        default: break;
    }

    ctx->pc = 0x3187c0u;

    // 0x3187c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3187c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3187c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3187c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3187c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3187c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3187cc: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x3187ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x3187d0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3187d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3187d4: 0x24639c10  addiu       $v1, $v1, -0x63F0
    ctx->pc = 0x3187d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941712));
    // 0x3187d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3187d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3187dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3187dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399C10u));
    // 0x3187e0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3187e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3187e4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3187e8: 0x8c7012a4  lw          $s0, 0x12A4($v1)
    ctx->pc = 0x3187e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
    // 0x3187ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3187ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3187f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3187f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3187f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3187f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3187f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3187f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3187fc: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3187FCu;
    {
        const bool branch_taken_0x3187fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3187fc) {
            ctx->pc = 0x31884Cu;
            goto label_31884c;
        }
    }
    ctx->pc = 0x318804u;
    // 0x318804: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318804u;
    {
        const bool branch_taken_0x318804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x318804) {
            ctx->pc = 0x318814u;
            goto label_318814;
        }
    }
    ctx->pc = 0x31880Cu;
    // 0x31880c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x31880Cu;
    {
        const bool branch_taken_0x31880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31880c) {
            ctx->pc = 0x318BE0u;
            goto label_318be0;
        }
    }
    ctx->pc = 0x318814u;
label_318814:
    // 0x318814: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x318814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x318818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31881c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318820: 0xe44012d0  swc1        $f0, 0x12D0($v0)
    ctx->pc = 0x318820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4816), bits); }
    // 0x318824: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x318824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x318828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31882c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318830: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x318830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x318834: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318838: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x318838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x31883c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x31883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318840: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x318840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x318844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318848: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x318848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31884c:
    // 0x31884c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318850: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x318850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318854: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x318854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318858: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31885c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x318860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318864: 0x0  nop
    ctx->pc = 0x318864u;
    // NOP
    // 0x318868: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31886c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x31886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x318870: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318874: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318878: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x318878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31887c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x318880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x318884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318888: 0x0  nop
    ctx->pc = 0x318888u;
    // NOP
    // 0x31888c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31888cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318890: 0x0  nop
    ctx->pc = 0x318890u;
    // NOP
    // 0x318894: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x318894u;
    {
        const bool branch_taken_0x318894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318894) {
            ctx->pc = 0x3188B4u;
            goto label_3188b4;
        }
    }
    ctx->pc = 0x31889Cu;
    // 0x31889c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x31889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x3188a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3188a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3188a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3188a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3188a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188b0: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x3188b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_3188b4:
    // 0x3188b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188b8: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x3188b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188bc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3188BCu;
    SET_GPR_U32(ctx, 31, 0x3188C4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3188C4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3188C4u) { return; }
    ctx->pc = 0x3188C4u;
label_3188c4:
    // 0x3188c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3188c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3188c8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188cc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188d0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3188d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3188d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188d8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188dc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3188dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3188e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188e4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188e8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3188e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3188ec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3188ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3188f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188f8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188fc: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x3188fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x318900: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x318900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x318904: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x318904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x318908: 0xc040d62  jal         func_103588
    ctx->pc = 0x318908u;
    SET_GPR_U32(ctx, 31, 0x318910u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x318910u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318910u) { return; }
    ctx->pc = 0x318910u;
label_318910:
    // 0x318910: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318914: 0xc44012d0  lwc1        $f0, 0x12D0($v0)
    ctx->pc = 0x318914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318918: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31891c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x31891cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x318920: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318924: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x318924u;
    SET_GPR_U32(ctx, 31, 0x31892Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31892Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31892Cu) { return; }
    ctx->pc = 0x31892Cu;
label_31892c:
    // 0x31892c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318930: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318934: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318938: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x318938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x31893c: 0xc040d62  jal         func_103588
    ctx->pc = 0x31893Cu;
    SET_GPR_U32(ctx, 31, 0x318944u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x318944u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318944u) { return; }
    ctx->pc = 0x318944u;
label_318944:
    // 0x318944: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318948: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x318948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31894c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31894cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318950: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x318950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x318954: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x318954u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x318958: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x318958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31895c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318960: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x318960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x318964: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x318964u;
    SET_GPR_U32(ctx, 31, 0x31896Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31896Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31896Cu) { return; }
    ctx->pc = 0x31896Cu;
label_31896c:
    // 0x31896c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x31896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318970: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318974: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x318974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x318978: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x318978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31897c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x31897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x318980: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x318980u;
    SET_GPR_U32(ctx, 31, 0x318988u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x318980u, 0x318988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318988u;
label_318988:
    // 0x318988: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31898c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x318990: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x318990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318994: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318998: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x318998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31899c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3189a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3189a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3189a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3189a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189a8: 0x0  nop
    ctx->pc = 0x3189a8u;
    // NOP
    // 0x3189ac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3189acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3189b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3189b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189b4: 0x0  nop
    ctx->pc = 0x3189b4u;
    // NOP
    // 0x3189b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3189b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3189bc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3189bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3189c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3189c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189c4: 0x0  nop
    ctx->pc = 0x3189c4u;
    // NOP
    // 0x3189c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3189c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3189cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3189ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3189d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3189d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189d4: 0x0  nop
    ctx->pc = 0x3189d4u;
    // NOP
    // 0x3189d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3189d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3189dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3189e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3189e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3189e4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x3189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x3189e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3189e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3189ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3189ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3189f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3189f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3189f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3189f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3189f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3189f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3189fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3189fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x318a00: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x318a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x318a04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318a08: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x318a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318a0c: 0xc086488  jal         func_219220
    ctx->pc = 0x318A0Cu;
    SET_GPR_U32(ctx, 31, 0x318A14u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x318A0Cu, 0x318A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A14u;
label_318a14:
    // 0x318a14: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a18: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x318A18u;
    SET_GPR_U32(ctx, 31, 0x318A20u);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x318A18u, 0x318A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A20u;
label_318a20:
    // 0x318a20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x318A20u;
    {
        const bool branch_taken_0x318a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a20) {
            ctx->pc = 0x318A5Cu;
            goto label_318a5c;
        }
    }
    ctx->pc = 0x318A28u;
    // 0x318a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318a2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318a34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a38: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x318a54: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x318A54u;
    {
        const bool branch_taken_0x318a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a54) {
            ctx->pc = 0x318BE0u;
            goto label_318be0;
        }
    }
    ctx->pc = 0x318A5Cu;
label_318a5c:
    // 0x318a5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x318a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x318a64: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x318a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x318a68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318a6c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x318a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x318a70: 0x2447ae90  addiu       $a3, $v0, -0x5170
    ctx->pc = 0x318a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x318a74: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x318A74u;
    SET_GPR_U32(ctx, 31, 0x318A7Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x318A74u, 0x318A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A7Cu;
label_318a7c:
    // 0x318a7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x318A7Cu;
    {
        const bool branch_taken_0x318a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a7c) {
            ctx->pc = 0x318AB8u;
            goto label_318ab8;
        }
    }
    ctx->pc = 0x318A84u;
    // 0x318a84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318a88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318a90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318aa0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318aa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318aa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318aac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x318ab0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x318AB0u;
    {
        const bool branch_taken_0x318ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ab0) {
            ctx->pc = 0x318BE0u;
            goto label_318be0;
        }
    }
    ctx->pc = 0x318AB8u;
label_318ab8:
    // 0x318ab8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318abc: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318ac0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x318ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318ac4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318acc: 0x0  nop
    ctx->pc = 0x318accu;
    // NOP
    // 0x318ad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318ad4: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318ad8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318adc: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318ae0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x318ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318ae4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318aec: 0x0  nop
    ctx->pc = 0x318aecu;
    // NOP
    // 0x318af0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318af4: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x318af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318af8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318afc: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b00: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x318b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318b04: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b0c: 0x0  nop
    ctx->pc = 0x318b0cu;
    // NOP
    // 0x318b10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b14: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x318b18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b1c: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x318b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b28: 0x0  nop
    ctx->pc = 0x318b28u;
    // NOP
    // 0x318b2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318b2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318b30: 0x0  nop
    ctx->pc = 0x318b30u;
    // NOP
    // 0x318b34: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x318B34u;
    {
        const bool branch_taken_0x318b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318b34) {
            ctx->pc = 0x318B90u;
            goto label_318b90;
        }
    }
    ctx->pc = 0x318B3Cu;
    // 0x318b3c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b40: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b4c: 0x0  nop
    ctx->pc = 0x318b4cu;
    // NOP
    // 0x318b50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b54: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318b58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b5c: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b68: 0x0  nop
    ctx->pc = 0x318b68u;
    // NOP
    // 0x318b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b70: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x318b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318b74: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b78: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b84: 0x0  nop
    ctx->pc = 0x318b84u;
    // NOP
    // 0x318b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b8c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_318b90:
    // 0x318b90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b94: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x318b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x318b98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318b9c: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x318b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x318ba0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318ba4: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x318ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x318ba8: 0x2c610033  sltiu       $at, $v1, 0x33
    ctx->pc = 0x318ba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x318bac: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x318BACu;
    {
        const bool branch_taken_0x318bac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318bac) {
            ctx->pc = 0x318BE0u;
            goto label_318be0;
        }
    }
    ctx->pc = 0x318BB4u;
    // 0x318bb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318bb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318bc0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bc4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318bc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318bd0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318bd8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318bdc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_318be0:
    // 0x318be0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x318be0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318be8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x318be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x318bec: 0x3e00008  jr          $ra
    ctx->pc = 0x318BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318BF4u;
}
