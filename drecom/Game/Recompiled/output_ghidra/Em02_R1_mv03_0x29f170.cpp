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

// Function: Em02_R1_mv03
// Address: 0x29f170 - 0x29f448
void Em02_R1_mv03_0x29f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv03_0x29f170");
#endif

    switch (ctx->pc) {
        case 0x29f208u: goto label_29f208;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f280u: goto label_29f280;
        case 0x29f288u: goto label_29f288;
        case 0x29f338u: goto label_29f338;
        case 0x29f354u: goto label_29f354;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f378u: goto label_29f378;
        case 0x29f388u: goto label_29f388;
        case 0x29f394u: goto label_29f394;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3f0u: goto label_29f3f0;
        default: break;
    }

    ctx->pc = 0x29f170u;

    // 0x29f170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29f174: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x29f178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29f17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f180: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x29f180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x29f184: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f188: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x29f18c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29f190: 0x24636b58  addiu       $v1, $v1, 0x6B58
    ctx->pc = 0x29f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27480));
    // 0x29f194: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x29f194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x29f198: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f198u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B58u));
    // 0x29f19c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29f1a0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29f1a4: 0x24636b60  addiu       $v1, $v1, 0x6B60
    ctx->pc = 0x29f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27488));
    // 0x29f1a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29f1ac: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f1acu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B60u));
    // 0x29f1b0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29f1b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f1b8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29f1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29f1bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29f1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29f1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f1c4: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x29F1C4u;
    {
        const bool branch_taken_0x29f1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29f1c4) {
            ctx->pc = 0x29F30Cu;
            goto label_29f30c;
        }
    }
    ctx->pc = 0x29F1CCu;
    // 0x29f1cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F1CCu;
    {
        const bool branch_taken_0x29f1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1cc) {
            ctx->pc = 0x29F1DCu;
            goto label_29f1dc;
        }
    }
    ctx->pc = 0x29F1D4u;
    // 0x29f1d4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x29F1D4u;
    {
        const bool branch_taken_0x29f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1d4) {
            ctx->pc = 0x29F430u;
            goto label_29f430;
        }
    }
    ctx->pc = 0x29F1DCu;
label_29f1dc:
    // 0x29f1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f1e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f1e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29f1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f1e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f1ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f1f0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29f1f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29f1f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29F1F8u;
    {
        const bool branch_taken_0x29f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1f8) {
            ctx->pc = 0x29F244u;
            goto label_29f244;
        }
    }
    ctx->pc = 0x29F200u;
    // 0x29f200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F200u;
    SET_GPR_U32(ctx, 31, 0x29F208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F200u, 0x29F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F208u;
label_29f208:
    // 0x29f208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f20c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f210: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f214: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x29f214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29f218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f21c: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29f220: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f224: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f228: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f22c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f230: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f234: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F234u;
    SET_GPR_U32(ctx, 31, 0x29F23Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F234u, 0x29F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29F23Cu;
    {
        const bool branch_taken_0x29f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f23c) {
            ctx->pc = 0x29F280u;
            goto label_29f280;
        }
    }
    ctx->pc = 0x29F244u;
label_29f244:
    // 0x29f244: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F244u;
    SET_GPR_U32(ctx, 31, 0x29F24Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F244u, 0x29F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F24Cu;
label_29f24c:
    // 0x29f24c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f250: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f254: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f258: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x29f258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29f25c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f260: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29f264: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f268: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f26c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f274: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f278: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F278u;
    SET_GPR_U32(ctx, 31, 0x29F280u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F278u, 0x29F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F280u;
label_29f280:
    // 0x29f280: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F280u;
    SET_GPR_U32(ctx, 31, 0x29F288u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F280u, 0x29F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F288u;
label_29f288:
    // 0x29f288: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f28c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x29f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x29f290: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x29f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x29f294: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29f294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29f298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29f29c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f2a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29f2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f2a4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29f2a8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29f2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f2b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f2b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f2b8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29f2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29f2bc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29f2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29f2c0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x29f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29f2c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F2C4u;
    {
        const bool branch_taken_0x29f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f2c4) {
            ctx->pc = 0x29F2E4u;
            goto label_29f2e4;
        }
    }
    ctx->pc = 0x29F2CCu;
    // 0x29f2cc: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x29f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x29f2d0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29f2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f2d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f2dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f2e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29f2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_29f2e4:
    // 0x29f2e4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29f2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29f2e8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x29f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x29f2ec: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F2ECu;
    {
        const bool branch_taken_0x29f2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f2ec) {
            ctx->pc = 0x29F30Cu;
            goto label_29f30c;
        }
    }
    ctx->pc = 0x29F2F4u;
    // 0x29f2f4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x29f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x29f2f8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29f2fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f300: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f304: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f308: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_29f30c:
    // 0x29f30c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f310: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f314: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f318: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29f318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f31c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f320: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x29f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f324: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f328: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f32c: 0xc46d0018  lwc1        $f13, 0x18($v1)
    ctx->pc = 0x29f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29f330: 0xc05c848  jal         func_172120
    ctx->pc = 0x29F330u;
    SET_GPR_U32(ctx, 31, 0x29F338u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29F330u, 0x29F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F338u;
label_29f338:
    // 0x29f338: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29f33c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f340: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f344: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f348: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29f348u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29f34c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29F34Cu;
    SET_GPR_U32(ctx, 31, 0x29F354u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29F34Cu, 0x29F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F354u;
label_29f354:
    // 0x29f354: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f358: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29f358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29f35c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29F364u;
    SET_GPR_U32(ctx, 31, 0x29F36Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29F364u, 0x29F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F36Cu;
label_29f36c:
    // 0x29f36c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f370: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29F370u;
    SET_GPR_U32(ctx, 31, 0x29F378u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29F370u, 0x29F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F378u;
label_29f378:
    // 0x29f378: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f37c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f37cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f380: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29F380u;
    SET_GPR_U32(ctx, 31, 0x29F388u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29F380u, 0x29F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F388u;
label_29f388:
    // 0x29f388: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f38c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29F38Cu;
    SET_GPR_U32(ctx, 31, 0x29F394u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29F38Cu, 0x29F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F394u;
label_29f394:
    // 0x29f394: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f398: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29F398u;
    SET_GPR_U32(ctx, 31, 0x29F3A0u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29F398u, 0x29F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3A0u;
label_29f3a0:
    // 0x29f3a0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3a4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29f3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29f3a8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29f3ac: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29f3acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f3b0: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29F3B0u;
    {
        const bool branch_taken_0x29f3b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f3b0) {
            ctx->pc = 0x29F430u;
            goto label_29f430;
        }
    }
    ctx->pc = 0x29F3B8u;
    // 0x29f3b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f3bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3c0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29f3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f3c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f3c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3cc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f3d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29f3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f3d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3dc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29f3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f3e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29f3e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F3E8u;
    SET_GPR_U32(ctx, 31, 0x29F3F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F3E8u, 0x29F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3F0u;
label_29f3f0:
    // 0x29f3f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f3f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29f3f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F3F8u;
    {
        const bool branch_taken_0x29f3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f3f8) {
            ctx->pc = 0x29F430u;
            goto label_29f430;
        }
    }
    ctx->pc = 0x29F400u;
    // 0x29f400: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f404: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f408: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f40c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29f410: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f414: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f418: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f41c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f424: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f42c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f430:
    // 0x29f430: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29f430u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f43c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29f43cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29f440: 0x3e00008  jr          $ra
    ctx->pc = 0x29F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F448u;
}
