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

// Function: Check_sce_jump
// Address: 0x15f100 - 0x15f360
void Check_sce_jump_0x15f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_sce_jump_0x15f100");
#endif

    switch (ctx->pc) {
        case 0x15f194u: goto label_15f194;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f264u: goto label_15f264;
        default: break;
    }

    ctx->pc = 0x15f100u;

    // 0x15f100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15f104: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x15f104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x15f108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f110: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15f114: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15f118: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15f11c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15f120: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f124: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x15f124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x15f128: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15f128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15f12c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F12Cu;
    {
        const bool branch_taken_0x15f12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f12c) {
            ctx->pc = 0x15F140u;
            goto label_15f140;
        }
    }
    ctx->pc = 0x15F134u;
    // 0x15f134: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f134u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f138: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x15F138u;
    {
        const bool branch_taken_0x15f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f138) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F140u;
label_15f140:
    // 0x15f140: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f144: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x15f144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x15f148: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f14c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15f14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15f150: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f154: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x15f158: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f15c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15f15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15f160: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f164: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x15f164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x15f168: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f16c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15f170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f178: 0x0  nop
    ctx->pc = 0x15f178u;
    // NOP
    // 0x15f17c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15f17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15f180: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f184: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f188: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f18c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15F18Cu;
    SET_GPR_U32(ctx, 31, 0x15F194u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15F18Cu, 0x15F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F194u;
label_15f194:
    // 0x15f194: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x15f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f198: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x15f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15f19c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15F19Cu;
    SET_GPR_U32(ctx, 31, 0x15F1A4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15F19Cu, 0x15F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1A4u;
label_15f1a4:
    // 0x15f1a4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x15f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15f1a8: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f1ac: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x15f1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15f1b0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15F1B0u;
    SET_GPR_U32(ctx, 31, 0x15F1B8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15F1B0u, 0x15F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1B8u;
label_15f1b8:
    // 0x15f1b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15f1bc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f1c4: 0x0  nop
    ctx->pc = 0x15f1c4u;
    // NOP
    // 0x15f1c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f1cc: 0x0  nop
    ctx->pc = 0x15f1ccu;
    // NOP
    // 0x15f1d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F1D0u;
    {
        const bool branch_taken_0x15f1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f1d0) {
            ctx->pc = 0x15F1ECu;
            goto label_15f1ec;
        }
    }
    ctx->pc = 0x15F1D8u;
    // 0x15f1d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15f1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f1e0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f1e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f1e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_15f1ec:
    // 0x15f1ec: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f1f0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x15f1f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15f1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f1fc: 0x0  nop
    ctx->pc = 0x15f1fcu;
    // NOP
    // 0x15f200: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f204: 0x0  nop
    ctx->pc = 0x15f204u;
    // NOP
    // 0x15f208: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15F208u;
    {
        const bool branch_taken_0x15f208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f208) {
            ctx->pc = 0x15F21Cu;
            goto label_15f21c;
        }
    }
    ctx->pc = 0x15F210u;
    // 0x15f210: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f210u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f214: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15F214u;
    {
        const bool branch_taken_0x15f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f214) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F21Cu;
label_15f21c:
    // 0x15f21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f220: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f224: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f228: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f22c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f230: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f234: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f238: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x15f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f23c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f240: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x15f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f244: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x15f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f248: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15f248u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f24c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f250: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15f254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f258: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15f258u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15f25c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15F25Cu;
    SET_GPR_U32(ctx, 31, 0x15F264u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15F25Cu, 0x15F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F264u;
label_15f264:
    // 0x15f264: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15f268: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f26c: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x15f270: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15f274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f278: 0x0  nop
    ctx->pc = 0x15f278u;
    // NOP
    // 0x15f27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f280: 0x0  nop
    ctx->pc = 0x15f280u;
    // NOP
    // 0x15f284: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F29Cu;
            goto label_15f29c;
        }
    }
    ctx->pc = 0x15F28Cu;
    // 0x15f28c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f294: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15F294u;
    {
        const bool branch_taken_0x15f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f294) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F29Cu;
label_15f29c:
    // 0x15f29c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f2a0: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x15f2a4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x15f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x15f2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f2ac: 0x0  nop
    ctx->pc = 0x15f2acu;
    // NOP
    // 0x15f2b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f2b4: 0x0  nop
    ctx->pc = 0x15f2b4u;
    // NOP
    // 0x15f2b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F2B8u;
    {
        const bool branch_taken_0x15f2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f2b8) {
            ctx->pc = 0x15F2D4u;
            goto label_15f2d4;
        }
    }
    ctx->pc = 0x15F2C0u;
    // 0x15f2c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2c4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15F2CCu;
    {
        const bool branch_taken_0x15f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2cc) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F2D4u;
label_15f2d4:
    // 0x15f2d4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f2d8: 0x3c02452b  lui         $v0, 0x452B
    ctx->pc = 0x15f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17707 << 16));
    // 0x15f2dc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x15f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x15f2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f2e4: 0x0  nop
    ctx->pc = 0x15f2e4u;
    // NOP
    // 0x15f2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f2ec: 0x0  nop
    ctx->pc = 0x15f2ecu;
    // NOP
    // 0x15f2f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F2F0u;
    {
        const bool branch_taken_0x15f2f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f2f0) {
            ctx->pc = 0x15F30Cu;
            goto label_15f30c;
        }
    }
    ctx->pc = 0x15F2F8u;
    // 0x15f2f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f2fc: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f304: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F304u;
    {
        const bool branch_taken_0x15f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f304) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F30Cu;
label_15f30c:
    // 0x15f30c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f310: 0x3c024594  lui         $v0, 0x4594
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17812 << 16));
    // 0x15f314: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x15f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15f318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f31c: 0x0  nop
    ctx->pc = 0x15f31cu;
    // NOP
    // 0x15f320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f324: 0x0  nop
    ctx->pc = 0x15f324u;
    // NOP
    // 0x15f328: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F328u;
    {
        const bool branch_taken_0x15f328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f328) {
            ctx->pc = 0x15F344u;
            goto label_15f344;
        }
    }
    ctx->pc = 0x15F330u;
    // 0x15f330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f334: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f33c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F33Cu;
    {
        const bool branch_taken_0x15f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f33c) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F344u;
label_15f344:
    // 0x15f344: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f344u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15f348:
    // 0x15f348: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x15f348u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f354: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15f354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f358: 0x3e00008  jr          $ra
    ctx->pc = 0x15F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F360u;
}
