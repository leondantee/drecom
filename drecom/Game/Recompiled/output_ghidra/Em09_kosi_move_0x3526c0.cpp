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

// Function: Em09_kosi_move
// Address: 0x3526c0 - 0x352a78
void Em09_kosi_move_0x3526c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_kosi_move_0x3526c0");
#endif

    switch (ctx->pc) {
        case 0x352740u: goto label_352740;
        case 0x352768u: goto label_352768;
        case 0x352788u: goto label_352788;
        case 0x352820u: goto label_352820;
        case 0x352848u: goto label_352848;
        case 0x352868u: goto label_352868;
        case 0x3528bcu: goto label_3528bc;
        case 0x352a24u: goto label_352a24;
        default: break;
    }

    ctx->pc = 0x3526c0u;

    // 0x3526c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3526c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3526c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3526c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3526c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3526c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3526cc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x3526ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x3526d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3526d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3526d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3526d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3526d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3526d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3526dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3526dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3526e0: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x3526E0u;
    {
        const bool branch_taken_0x3526e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3526e0) {
            ctx->pc = 0x352900u;
            goto label_352900;
        }
    }
    ctx->pc = 0x3526E8u;
    // 0x3526e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3526e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3526ec: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3526ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3526f0: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x3526f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x3526f4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3526f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3526f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3526f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3526fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3526fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352700: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352704: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x352704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352708: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35270c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352710: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352714: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35271c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35271cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352720: 0x0  nop
    ctx->pc = 0x352720u;
    // NOP
    // 0x352724: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352728: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35272c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352730: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352734: 0x244500f0  addiu       $a1, $v0, 0xF0
    ctx->pc = 0x352734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x352738: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x352738u;
    SET_GPR_U32(ctx, 31, 0x352740u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x352738u, 0x352740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352740u;
label_352740:
    // 0x352740: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x352740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x352744: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352748: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x352748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35274c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x35274cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352750: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x352750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352754: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x352754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x352758: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x352758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35275c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x35275cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352760: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352760u;
    SET_GPR_U32(ctx, 31, 0x352768u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352760u, 0x352768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352768u;
label_352768:
    // 0x352768: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x352768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x35276c: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x35276cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x352770: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x352770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x352774: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x352774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x352778: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x352778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35277c: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x35277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352780: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352780u;
    SET_GPR_U32(ctx, 31, 0x352788u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352780u, 0x352788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352788u;
label_352788:
    // 0x352788: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x35278c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352790: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352794: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x352794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352798: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35279c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x35279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3527a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3527a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3527a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3527a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3527a8: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x3527a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3527ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3527acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3527b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3527b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3527b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3527b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3527b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3527b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3527bc: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x3527bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3527c0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3527c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3527c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3527c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3527c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3527c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3527cc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3527ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3527d0: 0x24500640  addiu       $s0, $v0, 0x640
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x3527d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3527d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3527d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3527d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3527dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3527dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3527e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3527e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3527e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3527e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3527e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3527ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3527f0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3527f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3527f4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3527f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3527f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3527fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3527fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352800: 0x0  nop
    ctx->pc = 0x352800u;
    // NOP
    // 0x352804: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352808: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35280c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352810: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352814: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x352814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x352818: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x352818u;
    SET_GPR_U32(ctx, 31, 0x352820u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x352818u, 0x352820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352820u;
label_352820:
    // 0x352820: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x352820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x352824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352828: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x352828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35282c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x35282cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352830: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x352830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x352834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x352838: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x352838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35283c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x35283cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352840: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352840u;
    SET_GPR_U32(ctx, 31, 0x352848u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352840u, 0x352848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352848u;
label_352848:
    // 0x352848: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x352848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x35284c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x35284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x352850: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x352850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x352854: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x352854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x352858: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x352858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35285c: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x35285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352860: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352860u;
    SET_GPR_U32(ctx, 31, 0x352868u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352860u, 0x352868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352868u;
label_352868:
    // 0x352868: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x35286c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35286cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352870: 0x0  nop
    ctx->pc = 0x352870u;
    // NOP
    // 0x352874: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352878: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35287c: 0x0  nop
    ctx->pc = 0x35287cu;
    // NOP
    // 0x352880: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352888: 0x0  nop
    ctx->pc = 0x352888u;
    // NOP
    // 0x35288c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x35288cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352890: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352898: 0x0  nop
    ctx->pc = 0x352898u;
    // NOP
    // 0x35289c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x35289cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3528a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3528a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3528a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3528a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3528a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3528a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3528ac: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x3528acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x3528b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3528b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3528b4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3528B4u;
    SET_GPR_U32(ctx, 31, 0x3528BCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3528BCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3528BCu) { return; }
    ctx->pc = 0x3528BCu;
label_3528bc:
    // 0x3528bc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3528bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3528c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3528c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3528c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3528c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3528c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3528c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3528cc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3528ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3528d0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3528d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3528d4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3528d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3528d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3528d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3528dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3528dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3528e0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3528e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3528e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3528e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3528e8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3528e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3528ec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3528ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3528f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3528f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3528f4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3528f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3528f8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3528F8u;
    {
        const bool branch_taken_0x3528f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3528f8) {
            ctx->pc = 0x352A64u;
            goto label_352a64;
        }
    }
    ctx->pc = 0x352900u;
label_352900:
    // 0x352900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352904: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x352904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352908: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x352908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x35290c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352910: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352914: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352918: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35291c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x35291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352920: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352924: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352928: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35292c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x35292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352930: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352938: 0x0  nop
    ctx->pc = 0x352938u;
    // NOP
    // 0x35293c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x35293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352944: 0x0  nop
    ctx->pc = 0x352944u;
    // NOP
    // 0x352948: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x35294c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352950: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352954: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x352954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352958: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35295c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x35295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x352960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352964: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352968: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x352968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35296c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352970: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x352970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x352974: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352978: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x35297c: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x35297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352980: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352984: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x352984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x352988: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35298c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x35298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352990: 0x24500640  addiu       $s0, $v0, 0x640
    ctx->pc = 0x352990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x352994: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352998: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35299c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3529a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3529a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3529a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3529a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3529a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3529ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3529acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3529b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3529b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3529b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3529b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3529b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3529bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3529bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529c0: 0x0  nop
    ctx->pc = 0x3529c0u;
    // NOP
    // 0x3529c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3529c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3529c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529cc: 0x0  nop
    ctx->pc = 0x3529ccu;
    // NOP
    // 0x3529d0: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3529d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3529d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529d8: 0x0  nop
    ctx->pc = 0x3529d8u;
    // NOP
    // 0x3529dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3529dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3529e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529e4: 0x0  nop
    ctx->pc = 0x3529e4u;
    // NOP
    // 0x3529e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3529e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3529ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3529ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529f0: 0x0  nop
    ctx->pc = 0x3529f0u;
    // NOP
    // 0x3529f4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3529f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3529f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3529fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3529fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352a00: 0x0  nop
    ctx->pc = 0x352a00u;
    // NOP
    // 0x352a04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352a08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352a10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352a14: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x352a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x352a18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x352a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352a1c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x352A1Cu;
    SET_GPR_U32(ctx, 31, 0x352A24u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x352A24u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x352A24u) { return; }
    ctx->pc = 0x352A24u;
label_352a24:
    // 0x352a24: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x352a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a28: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352a2c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a34: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352a38: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x352a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a3c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352a40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352a44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a48: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352a4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x352a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a50: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352a54: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352a58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a5c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352a60: 0x0  nop
    ctx->pc = 0x352a60u;
    // NOP
label_352a64:
    // 0x352a64: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x352a64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352a6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x352a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x352a70: 0x3e00008  jr          $ra
    ctx->pc = 0x352A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352A78u;
}
