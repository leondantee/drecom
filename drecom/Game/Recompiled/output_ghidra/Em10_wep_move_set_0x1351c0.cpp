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

// Function: Em10_wep_move_set
// Address: 0x1351c0 - 0x135674
void Em10_wep_move_set_0x1351c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_wep_move_set_0x1351c0");
#endif

    switch (ctx->pc) {
        case 0x1351f4u: goto label_1351f4;
        case 0x135220u: goto label_135220;
        case 0x135244u: goto label_135244;
        case 0x135258u: goto label_135258;
        case 0x1352f0u: goto label_1352f0;
        case 0x135304u: goto label_135304;
        case 0x135418u: goto label_135418;
        case 0x13542cu: goto label_13542c;
        case 0x13544cu: goto label_13544c;
        case 0x135460u: goto label_135460;
        case 0x13546cu: goto label_13546c;
        case 0x135490u: goto label_135490;
        case 0x1354b0u: goto label_1354b0;
        case 0x1354bcu: goto label_1354bc;
        case 0x1354e0u: goto label_1354e0;
        case 0x1354ecu: goto label_1354ec;
        case 0x135518u: goto label_135518;
        case 0x135540u: goto label_135540;
        case 0x135564u: goto label_135564;
        case 0x135578u: goto label_135578;
        case 0x135598u: goto label_135598;
        case 0x1355bcu: goto label_1355bc;
        case 0x1355d0u: goto label_1355d0;
        case 0x1355f4u: goto label_1355f4;
        case 0x135624u: goto label_135624;
        default: break;
    }

    ctx->pc = 0x1351c0u;

    // 0x1351c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1351c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1351c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1351c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1351c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1351c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1351cc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1351ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1351d0: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1351d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x1351d4: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x1351d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x1351d8: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x1351d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x1351dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1351dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1351e0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1351e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1351e4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1351e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1351e8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1351e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1351ec: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x1351ECu;
    SET_GPR_U32(ctx, 31, 0x1351F4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x1351ECu, 0x1351F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351F4u;
label_1351f4:
    // 0x1351f4: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x1351f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1351f8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1351f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1351fc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x135200: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x135200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x135204: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x135204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x135208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13520c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x135210: 0x24a500f0  addiu       $a1, $a1, 0xF0
    ctx->pc = 0x135210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x135214: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x135214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135218: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x135218u;
    SET_GPR_U32(ctx, 31, 0x135220u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x135218u, 0x135220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135220u;
label_135220:
    // 0x135220: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x135220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135224: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x135224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135228: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x135228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13522c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x13522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135230: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x135230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135238: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x135238u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13523c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x13523Cu;
    SET_GPR_U32(ctx, 31, 0x135244u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x13523Cu, 0x135244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135244u;
label_135244:
    // 0x135244: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x135244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x135248: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x135248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13524c: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x13524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x135250: 0xc0455e6  jal         func_115798
    ctx->pc = 0x135250u;
    SET_GPR_U32(ctx, 31, 0x135258u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x135250u, 0x135258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135258u;
label_135258:
    // 0x135258: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x135258u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x13525c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x135260: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x135260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x135264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135268: 0x0  nop
    ctx->pc = 0x135268u;
    // NOP
    // 0x13526c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13526cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x135270: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x135270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x135274: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x135274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135278: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x135278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x13527c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x135280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135284: 0x0  nop
    ctx->pc = 0x135284u;
    // NOP
    // 0x135288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13528c: 0x0  nop
    ctx->pc = 0x13528cu;
    // NOP
    // 0x135290: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x135290u;
    {
        const bool branch_taken_0x135290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135290) {
            ctx->pc = 0x1352ACu;
            goto label_1352ac;
        }
    }
    ctx->pc = 0x135298u;
    // 0x135298: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x135298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x13529c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1352a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1352a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1352a4: 0x0  nop
    ctx->pc = 0x1352a4u;
    // NOP
    // 0x1352a8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1352a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1352ac:
    // 0x1352ac: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1352acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352b0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1352b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x1352b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1352b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1352b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1352b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1352bc: 0x0  nop
    ctx->pc = 0x1352bcu;
    // NOP
    // 0x1352c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1352c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1352c4: 0x0  nop
    ctx->pc = 0x1352c4u;
    // NOP
    // 0x1352c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1352C8u;
    {
        const bool branch_taken_0x1352c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1352c8) {
            ctx->pc = 0x1352E4u;
            goto label_1352e4;
        }
    }
    ctx->pc = 0x1352D0u;
    // 0x1352d0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1352d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x1352d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1352d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1352d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1352d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1352dc: 0x0  nop
    ctx->pc = 0x1352dcu;
    // NOP
    // 0x1352e0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1352e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1352e4:
    // 0x1352e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1352e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1352e8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1352E8u;
    SET_GPR_U32(ctx, 31, 0x1352F0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1352F0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1352F0u) { return; }
    ctx->pc = 0x1352F0u;
label_1352f0:
    // 0x1352f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1352f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1352f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1352f8: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x1352f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1352fc: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1352FCu;
    SET_GPR_U32(ctx, 31, 0x135304u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x135304u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135304u) { return; }
    ctx->pc = 0x135304u;
label_135304:
    // 0x135304: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135308: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x135308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x13530c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x135310: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x135310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x135314: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x135314u;
    {
        const bool branch_taken_0x135314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135314) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x13531Cu;
    // 0x13531c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135320: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x135320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135324: 0x3c02458c  lui         $v0, 0x458C
    ctx->pc = 0x135324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17804 << 16));
    // 0x135328: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x135328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x13532c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13532cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135330: 0x0  nop
    ctx->pc = 0x135330u;
    // NOP
    // 0x135334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135338: 0x0  nop
    ctx->pc = 0x135338u;
    // NOP
    // 0x13533c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13533Cu;
    {
        const bool branch_taken_0x13533c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13533c) {
            ctx->pc = 0x135360u;
            goto label_135360;
        }
    }
    ctx->pc = 0x135344u;
    // 0x135344: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x135344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x135348: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x135348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13534c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135350: 0x0  nop
    ctx->pc = 0x135350u;
    // NOP
    // 0x135354: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x135354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x135358: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x135358u;
    {
        const bool branch_taken_0x135358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135358) {
            ctx->pc = 0x1353F4u;
            goto label_1353f4;
        }
    }
    ctx->pc = 0x135360u;
label_135360:
    // 0x135360: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135364: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x135364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135368: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x135368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x13536c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x13536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x135370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135374: 0x0  nop
    ctx->pc = 0x135374u;
    // NOP
    // 0x135378: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13537c: 0x0  nop
    ctx->pc = 0x13537cu;
    // NOP
    // 0x135380: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x135380u;
    {
        const bool branch_taken_0x135380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135380) {
            ctx->pc = 0x1353A4u;
            goto label_1353a4;
        }
    }
    ctx->pc = 0x135388u;
    // 0x135388: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x135388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x13538c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x13538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x135390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135394: 0x0  nop
    ctx->pc = 0x135394u;
    // NOP
    // 0x135398: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x135398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x13539c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13539Cu;
    {
        const bool branch_taken_0x13539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13539c) {
            ctx->pc = 0x1353F4u;
            goto label_1353f4;
        }
    }
    ctx->pc = 0x1353A4u;
label_1353a4:
    // 0x1353a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1353a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1353a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1353ac: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1353acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1353b0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1353b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1353b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1353b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1353b8: 0x0  nop
    ctx->pc = 0x1353b8u;
    // NOP
    // 0x1353bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1353bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1353c0: 0x0  nop
    ctx->pc = 0x1353c0u;
    // NOP
    // 0x1353c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1353C4u;
    {
        const bool branch_taken_0x1353c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1353c4) {
            ctx->pc = 0x1353E8u;
            goto label_1353e8;
        }
    }
    ctx->pc = 0x1353CCu;
    // 0x1353cc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1353d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1353d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1353d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1353d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1353d8: 0x0  nop
    ctx->pc = 0x1353d8u;
    // NOP
    // 0x1353dc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1353dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1353e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1353E0u;
    {
        const bool branch_taken_0x1353e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353e0) {
            ctx->pc = 0x1353F4u;
            goto label_1353f4;
        }
    }
    ctx->pc = 0x1353E8u;
label_1353e8:
    // 0x1353e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1353e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1353ec: 0x0  nop
    ctx->pc = 0x1353ecu;
    // NOP
    // 0x1353f0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1353f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1353f4:
    // 0x1353f4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1353f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1353f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1353F8u;
    {
        const bool branch_taken_0x1353f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353f8) {
            ctx->pc = 0x135434u;
            goto label_135434;
        }
    }
    ctx->pc = 0x135400u;
    // 0x135400: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135404: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x135404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135408: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x135408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13540c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x13540cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135410: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x135410u;
    SET_GPR_U32(ctx, 31, 0x135418u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x135410u, 0x135418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135418u;
label_135418:
    // 0x135418: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13541c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135420: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135424: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x135424u;
    SET_GPR_U32(ctx, 31, 0x13542Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x13542Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13542Cu) { return; }
    ctx->pc = 0x13542Cu;
label_13542c:
    // 0x13542c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13542Cu;
    {
        const bool branch_taken_0x13542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13542c) {
            ctx->pc = 0x135460u;
            goto label_135460;
        }
    }
    ctx->pc = 0x135434u;
label_135434:
    // 0x135434: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135438: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x135438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13543c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x13543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135440: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x135440u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135444: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x135444u;
    SET_GPR_U32(ctx, 31, 0x13544Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x135444u, 0x13544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13544Cu;
label_13544c:
    // 0x13544c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135450: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135454: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135458: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x135458u;
    SET_GPR_U32(ctx, 31, 0x135460u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x135460u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135460u) { return; }
    ctx->pc = 0x135460u;
label_135460:
    // 0x135460: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135464: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x135464u;
    SET_GPR_U32(ctx, 31, 0x13546Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x135464u, 0x13546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13546Cu;
label_13546c:
    // 0x13546c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x13546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x135470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135474: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135478: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x135478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13547c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x13547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135480: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135484: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x135484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135488: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x135488u;
    SET_GPR_U32(ctx, 31, 0x135490u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x135490u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135490u) { return; }
    ctx->pc = 0x135490u;
label_135490:
    // 0x135490: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x135490u;
    {
        const bool branch_taken_0x135490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135490) {
            ctx->pc = 0x1354E0u;
            goto label_1354e0;
        }
    }
    ctx->pc = 0x135498u;
label_135498:
    // 0x135498: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13549c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354a4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1354a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1354a8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1354A8u;
    SET_GPR_U32(ctx, 31, 0x1354B0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1354B0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1354B0u) { return; }
    ctx->pc = 0x1354B0u;
label_1354b0:
    // 0x1354b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1354b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1354B4u;
    SET_GPR_U32(ctx, 31, 0x1354BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1354B4u, 0x1354BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354BCu;
label_1354bc:
    // 0x1354bc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1354bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1354c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1354c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1354c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1354c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1354c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1354cc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354d4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1354d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354d8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1354D8u;
    SET_GPR_U32(ctx, 31, 0x1354E0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1354E0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1354E0u) { return; }
    ctx->pc = 0x1354E0u;
label_1354e0:
    // 0x1354e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1354e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354e4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1354E4u;
    SET_GPR_U32(ctx, 31, 0x1354ECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1354ECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1354ECu) { return; }
    ctx->pc = 0x1354ECu;
label_1354ec:
    // 0x1354ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1354ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1354f0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1354f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1354f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1354f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1354f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1354f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1354fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1354FCu;
    {
        const bool branch_taken_0x1354fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354fc) {
            ctx->pc = 0x135580u;
            goto label_135580;
        }
    }
    ctx->pc = 0x135504u;
    // 0x135504: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135508: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x135508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13550c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x13550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135510: 0xc067844  jal         func_19E110
    ctx->pc = 0x135510u;
    SET_GPR_U32(ctx, 31, 0x135518u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x135510u, 0x135518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135518u;
label_135518:
    // 0x135518: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x135518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13551c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13551Cu;
    {
        const bool branch_taken_0x13551c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13551c) {
            ctx->pc = 0x135548u;
            goto label_135548;
        }
    }
    ctx->pc = 0x135524u;
    // 0x135524: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x135528: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x135528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13552c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135530: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135534: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135538: 0xc040ce4  jal         func_103390
    ctx->pc = 0x135538u;
    SET_GPR_U32(ctx, 31, 0x135540u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x135540u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135540u) { return; }
    ctx->pc = 0x135540u;
label_135540:
    // 0x135540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135540u;
    {
        const bool branch_taken_0x135540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135540) {
            ctx->pc = 0x135564u;
            goto label_135564;
        }
    }
    ctx->pc = 0x135548u;
label_135548:
    // 0x135548: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x135548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x13554c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x13554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x135550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135554: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135558: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13555c: 0xc040ce4  jal         func_103390
    ctx->pc = 0x13555Cu;
    SET_GPR_U32(ctx, 31, 0x135564u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x135564u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135564u) { return; }
    ctx->pc = 0x135564u;
label_135564:
    // 0x135564: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135568: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x135568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13556c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13556cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135570: 0xc040c00  jal         func_103000
    ctx->pc = 0x135570u;
    SET_GPR_U32(ctx, 31, 0x135578u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x135578u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135578u) { return; }
    ctx->pc = 0x135578u;
label_135578:
    // 0x135578: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x135578u;
    {
        const bool branch_taken_0x135578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135578) {
            ctx->pc = 0x1355D0u;
            goto label_1355d0;
        }
    }
    ctx->pc = 0x135580u;
label_135580:
    // 0x135580: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x135580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135584: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x135584u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x135588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13558c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135590: 0xc040d0e  jal         func_103438
    ctx->pc = 0x135590u;
    SET_GPR_U32(ctx, 31, 0x135598u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x135598u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135598u) { return; }
    ctx->pc = 0x135598u;
label_135598:
    // 0x135598: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13559c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x13559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1355a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1355a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1355a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1355a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1355a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1355ac: 0x0  nop
    ctx->pc = 0x1355acu;
    // NOP
    // 0x1355b0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1355b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1355b4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1355B4u;
    SET_GPR_U32(ctx, 31, 0x1355BCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1355B4u, 0x1355BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355BCu;
label_1355bc:
    // 0x1355bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1355bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1355c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1355c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1355c4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1355c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1355c8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1355C8u;
    SET_GPR_U32(ctx, 31, 0x1355D0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1355D0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1355D0u) { return; }
    ctx->pc = 0x1355D0u;
label_1355d0:
    // 0x1355d0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1355d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1355d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1355d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1355d8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1355d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1355dc: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x1355dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1355e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1355e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1355e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1355e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1355e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1355ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1355ECu;
    SET_GPR_U32(ctx, 31, 0x1355F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1355F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1355F4u) { return; }
    ctx->pc = 0x1355F4u;
label_1355f4:
    // 0x1355f4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1355f8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1355fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1355fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135600: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135604: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13560c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13560cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135610: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135614: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x135614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135618: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13561c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x13561Cu;
    SET_GPR_U32(ctx, 31, 0x135624u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x135624u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135624u) { return; }
    ctx->pc = 0x135624u;
label_135624:
    // 0x135624: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135628: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135628u;
    {
        const bool branch_taken_0x135628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135628) {
            ctx->pc = 0x13564Cu;
            goto label_13564c;
        }
    }
    ctx->pc = 0x135630u;
    // 0x135630: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x135630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135634: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135638: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x135638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13563c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x135640: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x135644u;
    {
        const bool branch_taken_0x135644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135644) {
            ctx->pc = 0x135660u;
            goto label_135660;
        }
    }
    ctx->pc = 0x13564Cu;
label_13564c:
    // 0x13564c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x13564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135650: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135654: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x135654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x135658: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x135658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13565c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x13565cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_135660:
    // 0x135660: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x135660u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135668: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x135668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13566c: 0x3e00008  jr          $ra
    ctx->pc = 0x13566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135674u;
}
