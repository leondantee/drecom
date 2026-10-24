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

// Function: Em00_R1_atk_fire_meta
// Address: 0x2d40c0 - 0x2d4238
void Em00_R1_atk_fire_meta_0x2d40c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_fire_meta_0x2d40c0");
#endif

    switch (ctx->pc) {
        case 0x2d4114u: goto label_2d4114;
        case 0x2d4158u: goto label_2d4158;
        case 0x2d4184u: goto label_2d4184;
        case 0x2d4198u: goto label_2d4198;
        case 0x2d41c0u: goto label_2d41c0;
        case 0x2d41ccu: goto label_2d41cc;
        case 0x2d41dcu: goto label_2d41dc;
        case 0x2d41e8u: goto label_2d41e8;
        default: break;
    }

    ctx->pc = 0x2d40c0u;

    // 0x2d40c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d40c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d40c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d40c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d40c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d40cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d40d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d40d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d40d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d40d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d40d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d40dc: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D40DCu;
    {
        const bool branch_taken_0x2d40dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d40dc) {
            ctx->pc = 0x2D412Cu;
            goto label_2d412c;
        }
    }
    ctx->pc = 0x2D40E4u;
    // 0x2d40e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D40E4u;
    {
        const bool branch_taken_0x2d40e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40e4) {
            ctx->pc = 0x2D40F4u;
            goto label_2d40f4;
        }
    }
    ctx->pc = 0x2D40ECu;
    // 0x2d40ec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2D40ECu;
    {
        const bool branch_taken_0x2d40ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40ec) {
            ctx->pc = 0x2D4228u;
            goto label_2d4228;
        }
    }
    ctx->pc = 0x2D40F4u;
label_2d40f4:
    // 0x2d40f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d40f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d40f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d40fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4100: 0x24065a26  addiu       $a2, $zero, 0x5A26
    ctx->pc = 0x2d4100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23078));
    // 0x2d4104: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4108: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d410c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D410Cu;
    SET_GPR_U32(ctx, 31, 0x2D4114u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D410Cu, 0x2D4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4114u;
label_2d4114:
    // 0x2d4114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4118: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d411c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4120: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4128: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d412c:
    // 0x2d412c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4130: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d4130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d4134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d4134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4138: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d4138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d413c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D413Cu;
    {
        const bool branch_taken_0x2d413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d413c) {
            ctx->pc = 0x2D4158u;
            goto label_2d4158;
        }
    }
    ctx->pc = 0x2D4144u;
    // 0x2d4144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4148: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d414c: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x2d414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d4150: 0xc0c6c64  jal         func_31B190
    ctx->pc = 0x2D4150u;
    SET_GPR_U32(ctx, 31, 0x2D4158u);
    ctx->pc = 0x31B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B190u, 0x2D4150u, 0x2D4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4158u;
label_2d4158:
    // 0x2d4158: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d4158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d415c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d4160: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d4160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d4164: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4168: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d416c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4170: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d4174: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4178: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d4178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d417c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D417Cu;
    SET_GPR_U32(ctx, 31, 0x2D4184u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D417Cu, 0x2D4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4184u;
label_2d4184:
    // 0x2d4184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4188: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d418c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d418cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4190: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D4190u;
    SET_GPR_U32(ctx, 31, 0x2D4198u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D4190u, 0x2D4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4198u;
label_2d4198:
    // 0x2d4198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d419c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d41a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41a4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d41a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d41a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d41ac: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d41acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d41b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d41b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d41b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D41B8u;
    SET_GPR_U32(ctx, 31, 0x2D41C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D41B8u, 0x2D41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41C0u;
label_2d41c0:
    // 0x2d41c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41c4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D41C4u;
    SET_GPR_U32(ctx, 31, 0x2D41CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D41C4u, 0x2D41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41CCu;
label_2d41cc:
    // 0x2d41cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d41d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d41d4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D41D4u;
    SET_GPR_U32(ctx, 31, 0x2D41DCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D41D4u, 0x2D41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41DCu;
label_2d41dc:
    // 0x2d41dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41e0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D41E0u;
    SET_GPR_U32(ctx, 31, 0x2D41E8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D41E0u, 0x2D41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41E8u;
label_2d41e8:
    // 0x2d41e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d41ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d41f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D41F0u;
    {
        const bool branch_taken_0x2d41f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d41f0) {
            ctx->pc = 0x2D4228u;
            goto label_2d4228;
        }
    }
    ctx->pc = 0x2D41F8u;
    // 0x2d41f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d41fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4200: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4204: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d4208: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d420c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d420cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4210: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4214: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d421c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d421cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4220: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4224: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d4228:
    // 0x2d4228: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d4228u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d422c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d422cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4230: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4238u;
}
