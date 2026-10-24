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

// Function: Em01_R1_jump_down
// Address: 0x3041e0 - 0x304424
void Em01_R1_jump_down_0x3041e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_jump_down_0x3041e0");
#endif

    switch (ctx->pc) {
        case 0x304234u: goto label_304234;
        case 0x3042a4u: goto label_3042a4;
        case 0x3042b8u: goto label_3042b8;
        case 0x3042d0u: goto label_3042d0;
        case 0x3042dcu: goto label_3042dc;
        case 0x304358u: goto label_304358;
        case 0x304388u: goto label_304388;
        case 0x3043a0u: goto label_3043a0;
        case 0x3043acu: goto label_3043ac;
        case 0x304404u: goto label_304404;
        default: break;
    }

    ctx->pc = 0x3041e0u;

    // 0x3041e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3041e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3041e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3041e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3041e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3041e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3041ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3041f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3041f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3041f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3041f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3041f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3041f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3041fc: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3041FCu;
    {
        const bool branch_taken_0x3041fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3041fc) {
            ctx->pc = 0x30425Cu;
            goto label_30425c;
        }
    }
    ctx->pc = 0x304204u;
    // 0x304204: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304204u;
    {
        const bool branch_taken_0x304204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304204) {
            ctx->pc = 0x304214u;
            goto label_304214;
        }
    }
    ctx->pc = 0x30420Cu;
    // 0x30420c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x30420Cu;
    {
        const bool branch_taken_0x30420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30420c) {
            ctx->pc = 0x304414u;
            goto label_304414;
        }
    }
    ctx->pc = 0x304214u;
label_304214:
    // 0x304214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304218: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30421c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30421cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304220: 0x2406280c  addiu       $a2, $zero, 0x280C
    ctx->pc = 0x304220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10252));
    // 0x304224: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304228: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30422c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30422Cu;
    SET_GPR_U32(ctx, 31, 0x304234u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30422Cu, 0x304234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304234u;
label_304234:
    // 0x304234: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x304234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x304238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30423c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304240: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x304240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x304244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304248: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304248u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30424c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304250: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304258: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30425c:
    // 0x30425c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304260: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x304264: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x304264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x304268: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x304268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30426c: 0x28410023  slti        $at, $v0, 0x23
    ctx->pc = 0x30426cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x304270: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x304270u;
    {
        const bool branch_taken_0x304270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304270) {
            ctx->pc = 0x3042C0u;
            goto label_3042c0;
        }
    }
    ctx->pc = 0x304278u;
    // 0x304278: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x304278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x30427c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x30427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x304280: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x304280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x304284: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304288: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30428c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304290: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x304290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x304294: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x304294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304298: 0xc44d1264  lwc1        $f13, 0x1264($v0)
    ctx->pc = 0x304298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30429c: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x30429Cu;
    SET_GPR_U32(ctx, 31, 0x3042A4u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x30429Cu, 0x3042A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042A4u;
label_3042a4:
    // 0x3042a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042a8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3042a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3042ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3042acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3042b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3042B0u;
    SET_GPR_U32(ctx, 31, 0x3042B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3042B0u, 0x3042B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042B8u;
label_3042b8:
    // 0x3042b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3042bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_3042c0:
    // 0x3042c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3042c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3042c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3042c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3042C8u;
    SET_GPR_U32(ctx, 31, 0x3042D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3042C8u, 0x3042D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042D0u;
label_3042d0:
    // 0x3042d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3042d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3042D4u;
    SET_GPR_U32(ctx, 31, 0x3042DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3042D4u, 0x3042DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042DCu;
label_3042dc:
    // 0x3042dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3042e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3042e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3042e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3042e8: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3042e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x3042ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3042ECu;
    {
        const bool branch_taken_0x3042ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3042ec) {
            ctx->pc = 0x304390u;
            goto label_304390;
        }
    }
    ctx->pc = 0x3042F4u;
    // 0x3042f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042f8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x3042f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3042fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304300: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x304300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304304: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304308: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x304308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x30430c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304310: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x304310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304314: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x304314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x304318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30431c: 0x0  nop
    ctx->pc = 0x30431cu;
    // NOP
    // 0x304320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x304324: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x304324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x304328: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30432c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30432cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304334: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x304334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x304338: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x304338u;
    {
        const bool branch_taken_0x304338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304338) {
            ctx->pc = 0x304390u;
            goto label_304390;
        }
    }
    ctx->pc = 0x304340u;
    // 0x304340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304344: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304348: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x304348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30434c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x30434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x304350: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x304350u;
    SET_GPR_U32(ctx, 31, 0x304358u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x304350u, 0x304358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304358u;
label_304358:
    // 0x304358: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30435c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x30435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304364: 0x0  nop
    ctx->pc = 0x304364u;
    // NOP
    // 0x304368: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x304368u;
    {
        const bool branch_taken_0x304368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304368) {
            ctx->pc = 0x304390u;
            goto label_304390;
        }
    }
    ctx->pc = 0x304370u;
    // 0x304370: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304378: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30437c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x30437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x304380: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x304380u;
    SET_GPR_U32(ctx, 31, 0x304388u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x304380u, 0x304388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304388u;
label_304388:
    // 0x304388: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30438c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x30438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_304390:
    // 0x304390: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304394: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x304394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x304398: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304398u;
    SET_GPR_U32(ctx, 31, 0x3043A0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304398u, 0x3043A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043A0u;
label_3043a0:
    // 0x3043a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3043a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043a4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3043A4u;
    SET_GPR_U32(ctx, 31, 0x3043ACu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3043A4u, 0x3043ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043ACu;
label_3043ac:
    // 0x3043ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3043acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3043b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3043b4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3043B4u;
    {
        const bool branch_taken_0x3043b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3043b4) {
            ctx->pc = 0x304414u;
            goto label_304414;
        }
    }
    ctx->pc = 0x3043BCu;
    // 0x3043bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3043bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3043c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3043c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3043c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3043cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3043d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3043d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3043d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3043dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3043e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3043e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3043e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3043ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3043ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3043f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3043f8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x3043f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x3043fc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x3043FCu;
    SET_GPR_U32(ctx, 31, 0x304404u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x3043FCu, 0x304404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304404u;
label_304404:
    // 0x304404: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304408: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x304408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x30440c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304410: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x304410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
label_304414:
    // 0x304414: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x304414u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x304418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30441c: 0x3e00008  jr          $ra
    ctx->pc = 0x30441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30441Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304424u;
}
