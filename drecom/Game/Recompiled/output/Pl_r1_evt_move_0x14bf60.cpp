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

// Function: Pl_r1_evt_move
// Address: 0x14bf60 - 0x14c2b8
void Pl_r1_evt_move_0x14bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_evt_move_0x14bf60");
#endif

    switch (ctx->pc) {
        case 0x14bf60u: goto label_14bf60;
        case 0x14bf64u: goto label_14bf64;
        case 0x14bf68u: goto label_14bf68;
        case 0x14bf6cu: goto label_14bf6c;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf74u: goto label_14bf74;
        case 0x14bf78u: goto label_14bf78;
        case 0x14bf7cu: goto label_14bf7c;
        case 0x14bf80u: goto label_14bf80;
        case 0x14bf84u: goto label_14bf84;
        case 0x14bf88u: goto label_14bf88;
        case 0x14bf8cu: goto label_14bf8c;
        case 0x14bf90u: goto label_14bf90;
        case 0x14bf94u: goto label_14bf94;
        case 0x14bf98u: goto label_14bf98;
        case 0x14bf9cu: goto label_14bf9c;
        case 0x14bfa0u: goto label_14bfa0;
        case 0x14bfa4u: goto label_14bfa4;
        case 0x14bfa8u: goto label_14bfa8;
        case 0x14bfacu: goto label_14bfac;
        case 0x14bfb0u: goto label_14bfb0;
        case 0x14bfb4u: goto label_14bfb4;
        case 0x14bfb8u: goto label_14bfb8;
        case 0x14bfbcu: goto label_14bfbc;
        case 0x14bfc0u: goto label_14bfc0;
        case 0x14bfc4u: goto label_14bfc4;
        case 0x14bfc8u: goto label_14bfc8;
        case 0x14bfccu: goto label_14bfcc;
        case 0x14bfd0u: goto label_14bfd0;
        case 0x14bfd4u: goto label_14bfd4;
        case 0x14bfd8u: goto label_14bfd8;
        case 0x14bfdcu: goto label_14bfdc;
        case 0x14bfe0u: goto label_14bfe0;
        case 0x14bfe4u: goto label_14bfe4;
        case 0x14bfe8u: goto label_14bfe8;
        case 0x14bfecu: goto label_14bfec;
        case 0x14bff0u: goto label_14bff0;
        case 0x14bff4u: goto label_14bff4;
        case 0x14bff8u: goto label_14bff8;
        case 0x14bffcu: goto label_14bffc;
        case 0x14c000u: goto label_14c000;
        case 0x14c004u: goto label_14c004;
        case 0x14c008u: goto label_14c008;
        case 0x14c00cu: goto label_14c00c;
        case 0x14c010u: goto label_14c010;
        case 0x14c014u: goto label_14c014;
        case 0x14c018u: goto label_14c018;
        case 0x14c01cu: goto label_14c01c;
        case 0x14c020u: goto label_14c020;
        case 0x14c024u: goto label_14c024;
        case 0x14c028u: goto label_14c028;
        case 0x14c02cu: goto label_14c02c;
        case 0x14c030u: goto label_14c030;
        case 0x14c034u: goto label_14c034;
        case 0x14c038u: goto label_14c038;
        case 0x14c03cu: goto label_14c03c;
        case 0x14c040u: goto label_14c040;
        case 0x14c044u: goto label_14c044;
        case 0x14c048u: goto label_14c048;
        case 0x14c04cu: goto label_14c04c;
        case 0x14c050u: goto label_14c050;
        case 0x14c054u: goto label_14c054;
        case 0x14c058u: goto label_14c058;
        case 0x14c05cu: goto label_14c05c;
        case 0x14c060u: goto label_14c060;
        case 0x14c064u: goto label_14c064;
        case 0x14c068u: goto label_14c068;
        case 0x14c06cu: goto label_14c06c;
        case 0x14c070u: goto label_14c070;
        case 0x14c074u: goto label_14c074;
        case 0x14c078u: goto label_14c078;
        case 0x14c07cu: goto label_14c07c;
        case 0x14c080u: goto label_14c080;
        case 0x14c084u: goto label_14c084;
        case 0x14c088u: goto label_14c088;
        case 0x14c08cu: goto label_14c08c;
        case 0x14c090u: goto label_14c090;
        case 0x14c094u: goto label_14c094;
        case 0x14c098u: goto label_14c098;
        case 0x14c09cu: goto label_14c09c;
        case 0x14c0a0u: goto label_14c0a0;
        case 0x14c0a4u: goto label_14c0a4;
        case 0x14c0a8u: goto label_14c0a8;
        case 0x14c0acu: goto label_14c0ac;
        case 0x14c0b0u: goto label_14c0b0;
        case 0x14c0b4u: goto label_14c0b4;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0bcu: goto label_14c0bc;
        case 0x14c0c0u: goto label_14c0c0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0c8u: goto label_14c0c8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d0u: goto label_14c0d0;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0d8u: goto label_14c0d8;
        case 0x14c0dcu: goto label_14c0dc;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0e4u: goto label_14c0e4;
        case 0x14c0e8u: goto label_14c0e8;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c0f0u: goto label_14c0f0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c0f8u: goto label_14c0f8;
        case 0x14c0fcu: goto label_14c0fc;
        case 0x14c100u: goto label_14c100;
        case 0x14c104u: goto label_14c104;
        case 0x14c108u: goto label_14c108;
        case 0x14c10cu: goto label_14c10c;
        case 0x14c110u: goto label_14c110;
        case 0x14c114u: goto label_14c114;
        case 0x14c118u: goto label_14c118;
        case 0x14c11cu: goto label_14c11c;
        case 0x14c120u: goto label_14c120;
        case 0x14c124u: goto label_14c124;
        case 0x14c128u: goto label_14c128;
        case 0x14c12cu: goto label_14c12c;
        case 0x14c130u: goto label_14c130;
        case 0x14c134u: goto label_14c134;
        case 0x14c138u: goto label_14c138;
        case 0x14c13cu: goto label_14c13c;
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        case 0x14c240u: goto label_14c240;
        case 0x14c244u: goto label_14c244;
        case 0x14c248u: goto label_14c248;
        case 0x14c24cu: goto label_14c24c;
        case 0x14c250u: goto label_14c250;
        case 0x14c254u: goto label_14c254;
        case 0x14c258u: goto label_14c258;
        case 0x14c25cu: goto label_14c25c;
        case 0x14c260u: goto label_14c260;
        case 0x14c264u: goto label_14c264;
        case 0x14c268u: goto label_14c268;
        case 0x14c26cu: goto label_14c26c;
        case 0x14c270u: goto label_14c270;
        case 0x14c274u: goto label_14c274;
        case 0x14c278u: goto label_14c278;
        case 0x14c27cu: goto label_14c27c;
        case 0x14c280u: goto label_14c280;
        case 0x14c284u: goto label_14c284;
        case 0x14c288u: goto label_14c288;
        case 0x14c28cu: goto label_14c28c;
        case 0x14c290u: goto label_14c290;
        case 0x14c294u: goto label_14c294;
        case 0x14c298u: goto label_14c298;
        case 0x14c29cu: goto label_14c29c;
        case 0x14c2a0u: goto label_14c2a0;
        case 0x14c2a4u: goto label_14c2a4;
        case 0x14c2a8u: goto label_14c2a8;
        case 0x14c2acu: goto label_14c2ac;
        case 0x14c2b0u: goto label_14c2b0;
        case 0x14c2b4u: goto label_14c2b4;
        default: break;
    }

    ctx->pc = 0x14bf60u;

label_14bf60:
    // 0x14bf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14bf64:
    // 0x14bf64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14bf68:
    // 0x14bf68: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14bf6c:
    // 0x14bf6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14bf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14bf70:
    // 0x14bf70: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_14bf74:
    // 0x14bf74: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x14bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_14bf78:
    // 0x14bf78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14bf7c:
    // 0x14bf7c: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x14bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_14bf80:
    // 0x14bf80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bf84:
    // 0x14bf84: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14bf84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14bf88:
    // 0x14bf88: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14bf88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14bf8c:
    // 0x14bf8c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x14bf8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14bf90:
    // 0x14bf90: 0x102000c5  beqz        $at, . + 4 + (0xC5 << 2)
label_14bf94:
    if (ctx->pc == 0x14BF94u) {
        ctx->pc = 0x14BF98u;
        goto label_14bf98;
    }
    ctx->pc = 0x14BF90u;
    {
        const bool branch_taken_0x14bf90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf90) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14BF98u;
label_14bf98:
    // 0x14bf98: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14bf9c:
    // 0x14bf9c: 0x2464e8c0  addiu       $a0, $v1, -0x1740
    ctx->pc = 0x14bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961344));
label_14bfa0:
    // 0x14bfa0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14bfa4:
    // 0x14bfa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14bfa8:
    // 0x14bfa8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14bfac:
    // 0x14bfac: 0x600008  jr          $v1
label_14bfb0:
    if (ctx->pc == 0x14BFB0u) {
        ctx->pc = 0x14BFB4u;
        goto label_14bfb4;
    }
    ctx->pc = 0x14BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BFACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14BFB4u;
label_14bfb4:
    // 0x14bfb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bfb8:
    // 0x14bfb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bfbc:
    // 0x14bfbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14bfc0:
    // 0x14bfc0: 0x24060aa5  addiu       $a2, $zero, 0xAA5
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2725));
label_14bfc4:
    // 0x14bfc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14bfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bfc8:
    // 0x14bfc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14bfc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14bfcc:
    // 0x14bfcc: 0xc0965d0  jal         func_259740
label_14bfd0:
    if (ctx->pc == 0x14BFD0u) {
        ctx->pc = 0x14BFD4u;
        goto label_14bfd4;
    }
    ctx->pc = 0x14BFCCu;
    SET_GPR_U32(ctx, 31, 0x14BFD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14BFCCu, 0x14BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFD4u;
label_14bfd4:
    // 0x14bfd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bfd8:
    // 0x14bfd8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bfdc:
    // 0x14bfdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14bfe0:
    // 0x14bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bfe4:
    // 0x14bfe4: 0x0  nop
    ctx->pc = 0x14bfe4u;
    // NOP
label_14bfe8:
    // 0x14bfe8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14bfe8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14bfec:
    // 0x14bfec: 0xc058fec  jal         func_163FB0
label_14bff0:
    if (ctx->pc == 0x14BFF0u) {
        ctx->pc = 0x14BFF4u;
        goto label_14bff4;
    }
    ctx->pc = 0x14BFECu;
    SET_GPR_U32(ctx, 31, 0x14BFF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14BFECu, 0x14BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFF4u;
label_14bff4:
    // 0x14bff4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bff8:
    // 0x14bff8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14bff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14bffc:
    // 0x14bffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c000:
    // 0x14c000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c004:
    // 0x14c004: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x14c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c008:
    // 0x14c008: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14c00c:
    // 0x14c00c: 0xc058f20  jal         func_163C80
label_14c010:
    if (ctx->pc == 0x14C010u) {
        ctx->pc = 0x14C014u;
        goto label_14c014;
    }
    ctx->pc = 0x14C00Cu;
    SET_GPR_U32(ctx, 31, 0x14C014u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14C00Cu, 0x14C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C014u;
label_14c014:
    // 0x14c014: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14c018:
    // 0x14c018: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x14c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c01c:
    // 0x14c01c: 0xc05733c  jal         func_15CCF0
label_14c020:
    if (ctx->pc == 0x14C020u) {
        ctx->pc = 0x14C024u;
        goto label_14c024;
    }
    ctx->pc = 0x14C01Cu;
    SET_GPR_U32(ctx, 31, 0x14C024u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x14C01Cu, 0x14C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C024u;
label_14c024:
    // 0x14c024: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c028:
    // 0x14c028: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x14c028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_14c02c:
    // 0x14c02c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c030:
    // 0x14c030: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c034:
    // 0x14c034: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_14c038:
    if (ctx->pc == 0x14C038u) {
        ctx->pc = 0x14C03Cu;
        goto label_14c03c;
    }
    ctx->pc = 0x14C034u;
    {
        const bool branch_taken_0x14c034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c034) {
            ctx->pc = 0x14C048u;
            goto label_14c048;
        }
    }
    ctx->pc = 0x14C03Cu;
label_14c03c:
    // 0x14c03c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14c040:
    // 0x14c040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c044:
    // 0x14c044: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14c044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_14c048:
    // 0x14c048: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c04c:
    // 0x14c04c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14c050:
    // 0x14c050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14c054:
    // 0x14c054: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c058:
    // 0x14c058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c05c:
    // 0x14c05c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x14c05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_14c060:
    // 0x14c060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c064:
    // 0x14c064: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_14c068:
    // 0x14c068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_14c06c:
    if (ctx->pc == 0x14C06Cu) {
        ctx->pc = 0x14C070u;
        goto label_14c070;
    }
    ctx->pc = 0x14C068u;
    {
        const bool branch_taken_0x14c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c068) {
            ctx->pc = 0x14C09Cu;
            goto label_14c09c;
        }
    }
    ctx->pc = 0x14C070u;
label_14c070:
    // 0x14c070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c074:
    // 0x14c074: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c078:
    // 0x14c078: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x14c078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_14c07c:
    // 0x14c07c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_14c080:
    // 0x14c080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c084:
    // 0x14c084: 0x0  nop
    ctx->pc = 0x14c084u;
    // NOP
label_14c088:
    // 0x14c088: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14c088u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14c08c:
    // 0x14c08c: 0xc058fec  jal         func_163FB0
label_14c090:
    if (ctx->pc == 0x14C090u) {
        ctx->pc = 0x14C094u;
        goto label_14c094;
    }
    ctx->pc = 0x14C08Cu;
    SET_GPR_U32(ctx, 31, 0x14C094u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14C08Cu, 0x14C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C094u;
label_14c094:
    // 0x14c094: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c098:
    // 0x14c098: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14c098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14c09c:
    // 0x14c09c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c0a0:
    // 0x14c0a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c0a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c0a4:
    // 0x14c0a4: 0xc096b40  jal         func_25AD00
label_14c0a8:
    if (ctx->pc == 0x14C0A8u) {
        ctx->pc = 0x14C0ACu;
        goto label_14c0ac;
    }
    ctx->pc = 0x14C0A4u;
    SET_GPR_U32(ctx, 31, 0x14C0ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C0A4u, 0x14C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0ACu;
label_14c0ac:
    // 0x14c0ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c0b0:
    // 0x14c0b0: 0xc05cd10  jal         func_173440
label_14c0b4:
    if (ctx->pc == 0x14C0B4u) {
        ctx->pc = 0x14C0B8u;
        goto label_14c0b8;
    }
    ctx->pc = 0x14C0B0u;
    SET_GPR_U32(ctx, 31, 0x14C0B8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C0B0u, 0x14C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0B8u;
label_14c0b8:
    // 0x14c0b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14c0bc:
    // 0x14c0bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c0c0:
    // 0x14c0c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c0c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c0c4:
    // 0x14c0c4: 0xc0573d8  jal         func_15CF60
label_14c0c8:
    if (ctx->pc == 0x14C0C8u) {
        ctx->pc = 0x14C0CCu;
        goto label_14c0cc;
    }
    ctx->pc = 0x14C0C4u;
    SET_GPR_U32(ctx, 31, 0x14C0CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C0C4u, 0x14C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0CCu;
label_14c0cc:
    // 0x14c0cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c0d0:
    // 0x14c0d0: 0xc097530  jal         func_25D4C0
label_14c0d4:
    if (ctx->pc == 0x14C0D4u) {
        ctx->pc = 0x14C0D8u;
        goto label_14c0d8;
    }
    ctx->pc = 0x14C0D0u;
    SET_GPR_U32(ctx, 31, 0x14C0D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C0D0u, 0x14C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0D8u;
label_14c0d8:
    // 0x14c0d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c0dc:
    // 0x14c0dc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14c0dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_14c0e0:
    // 0x14c0e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14c0e4:
    // 0x14c0e4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14c0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14c0e8:
    // 0x14c0e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c0ec:
    // 0x14c0ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14c0f0:
    // 0x14c0f0: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_14c0f4:
    if (ctx->pc == 0x14C0F4u) {
        ctx->pc = 0x14C0F8u;
        goto label_14c0f8;
    }
    ctx->pc = 0x14C0F0u;
    {
        const bool branch_taken_0x14c0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0f0) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C0F8u;
label_14c0f8:
    // 0x14c0f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c0fc:
    // 0x14c0fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14c0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14c100:
    // 0x14c100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14c104:
    // 0x14c104: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14c104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_14c108:
    // 0x14c108: 0x10000067  b           . + 4 + (0x67 << 2)
label_14c10c:
    if (ctx->pc == 0x14C10Cu) {
        ctx->pc = 0x14C110u;
        goto label_14c110;
    }
    ctx->pc = 0x14C108u;
    {
        const bool branch_taken_0x14c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c108) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C110u;
label_14c110:
    // 0x14c110: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c114:
    // 0x14c114: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c118:
    // 0x14c118: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14c11c:
    // 0x14c11c: 0x240600a7  addiu       $a2, $zero, 0xA7
    ctx->pc = 0x14c11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
label_14c120:
    // 0x14c120: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c124:
    // 0x14c124: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14c128:
    // 0x14c128: 0xc0965d0  jal         func_259740
label_14c12c:
    if (ctx->pc == 0x14C12Cu) {
        ctx->pc = 0x14C130u;
        goto label_14c130;
    }
    ctx->pc = 0x14C128u;
    SET_GPR_U32(ctx, 31, 0x14C130u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C128u, 0x14C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C130u;
label_14c130:
    // 0x14c130: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c134:
    // 0x14c134: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14c138:
    // 0x14c138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14c13c:
    // 0x14c13c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c140:
    // 0x14c140: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c144:
    // 0x14c144: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c144u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c148:
    // 0x14c148: 0xc096b40  jal         func_25AD00
label_14c14c:
    if (ctx->pc == 0x14C14Cu) {
        ctx->pc = 0x14C150u;
        goto label_14c150;
    }
    ctx->pc = 0x14C148u;
    SET_GPR_U32(ctx, 31, 0x14C150u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C148u, 0x14C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C150u;
label_14c150:
    // 0x14c150: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c154:
    // 0x14c154: 0xc05cd10  jal         func_173440
label_14c158:
    if (ctx->pc == 0x14C158u) {
        ctx->pc = 0x14C15Cu;
        goto label_14c15c;
    }
    ctx->pc = 0x14C154u;
    SET_GPR_U32(ctx, 31, 0x14C15Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C154u, 0x14C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C15Cu;
label_14c15c:
    // 0x14c15c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14c160:
    // 0x14c160: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c164:
    // 0x14c164: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c168:
    // 0x14c168: 0xc0573d8  jal         func_15CF60
label_14c16c:
    if (ctx->pc == 0x14C16Cu) {
        ctx->pc = 0x14C170u;
        goto label_14c170;
    }
    ctx->pc = 0x14C168u;
    SET_GPR_U32(ctx, 31, 0x14C170u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C168u, 0x14C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c174:
    // 0x14c174: 0xc097530  jal         func_25D4C0
label_14c178:
    if (ctx->pc == 0x14C178u) {
        ctx->pc = 0x14C17Cu;
        goto label_14c17c;
    }
    ctx->pc = 0x14C174u;
    SET_GPR_U32(ctx, 31, 0x14C17Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C174u, 0x14C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C17Cu;
label_14c17c:
    // 0x14c17c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c180:
    // 0x14c180: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_14c184:
    // 0x14c184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14c188:
    // 0x14c188: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14c188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14c18c:
    // 0x14c18c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c190:
    // 0x14c190: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14c194:
    // 0x14c194: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x14c194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_14c198:
    // 0x14c198: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14c198u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_14c19c:
    // 0x14c19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c1a0:
    // 0x14c1a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14c1a4:
    // 0x14c1a4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x14c1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c1a8:
    // 0x14c1a8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_14c1ac:
    if (ctx->pc == 0x14C1ACu) {
        ctx->pc = 0x14C1B0u;
        goto label_14c1b0;
    }
    ctx->pc = 0x14C1A8u;
    {
        const bool branch_taken_0x14c1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c1a8) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C1B0u;
label_14c1b0:
    // 0x14c1b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c1b4:
    // 0x14c1b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14c1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14c1b8:
    // 0x14c1b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14c1bc:
    // 0x14c1bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14c1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_14c1c0:
    // 0x14c1c0: 0x10000039  b           . + 4 + (0x39 << 2)
label_14c1c4:
    if (ctx->pc == 0x14C1C4u) {
        ctx->pc = 0x14C1C8u;
        goto label_14c1c8;
    }
    ctx->pc = 0x14C1C0u;
    {
        const bool branch_taken_0x14c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1c0) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C1C8u;
label_14c1c8:
    // 0x14c1c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c1cc:
    // 0x14c1cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c1d0:
    // 0x14c1d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14c1d4:
    // 0x14c1d4: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x14c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_14c1d8:
    // 0x14c1d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c1dc:
    // 0x14c1dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14c1e0:
    // 0x14c1e0: 0xc0965d0  jal         func_259740
label_14c1e4:
    if (ctx->pc == 0x14C1E4u) {
        ctx->pc = 0x14C1E8u;
        goto label_14c1e8;
    }
    ctx->pc = 0x14C1E0u;
    SET_GPR_U32(ctx, 31, 0x14C1E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C1E0u, 0x14C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1E8u;
label_14c1e8:
    // 0x14c1e8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x14c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_14c1ec:
    // 0x14c1ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c1f0:
    // 0x14c1f0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14c1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14c1f4:
    // 0x14c1f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c1f8:
    // 0x14c1f8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14c1fc:
    // 0x14c1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14c200:
    // 0x14c200: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c204:
    // 0x14c204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c208:
    // 0x14c208: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c20c:
    // 0x14c20c: 0xc096b40  jal         func_25AD00
label_14c210:
    if (ctx->pc == 0x14C210u) {
        ctx->pc = 0x14C214u;
        goto label_14c214;
    }
    ctx->pc = 0x14C20Cu;
    SET_GPR_U32(ctx, 31, 0x14C214u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C20Cu, 0x14C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C214u;
label_14c214:
    // 0x14c214: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c218:
    // 0x14c218: 0xc05cd10  jal         func_173440
label_14c21c:
    if (ctx->pc == 0x14C21Cu) {
        ctx->pc = 0x14C220u;
        goto label_14c220;
    }
    ctx->pc = 0x14C218u;
    SET_GPR_U32(ctx, 31, 0x14C220u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C218u, 0x14C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C220u;
label_14c220:
    // 0x14c220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14c224:
    // 0x14c224: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c228:
    // 0x14c228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c22c:
    // 0x14c22c: 0xc0573d8  jal         func_15CF60
label_14c230:
    if (ctx->pc == 0x14C230u) {
        ctx->pc = 0x14C234u;
        goto label_14c234;
    }
    ctx->pc = 0x14C22Cu;
    SET_GPR_U32(ctx, 31, 0x14C234u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C22Cu, 0x14C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C234u;
label_14c234:
    // 0x14c234: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c234u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14c238:
    // 0x14c238: 0xc097530  jal         func_25D4C0
label_14c23c:
    if (ctx->pc == 0x14C23Cu) {
        ctx->pc = 0x14C240u;
        goto label_14c240;
    }
    ctx->pc = 0x14C238u;
    SET_GPR_U32(ctx, 31, 0x14C240u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C238u, 0x14C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C240u;
label_14c240:
    // 0x14c240: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c244:
    // 0x14c244: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14c248:
    // 0x14c248: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_14c24c:
    if (ctx->pc == 0x14C24Cu) {
        ctx->pc = 0x14C250u;
        goto label_14c250;
    }
    ctx->pc = 0x14C248u;
    {
        const bool branch_taken_0x14c248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c248) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C250u;
label_14c250:
    // 0x14c250: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c254:
    // 0x14c254: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14c254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_14c258:
    // 0x14c258: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14c25c:
    // 0x14c25c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14c25cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14c260:
    // 0x14c260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c264:
    // 0x14c264: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x14c264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14c268:
    // 0x14c268: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_14c26c:
    if (ctx->pc == 0x14C26Cu) {
        ctx->pc = 0x14C270u;
        goto label_14c270;
    }
    ctx->pc = 0x14C268u;
    {
        const bool branch_taken_0x14c268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c268) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C270u;
label_14c270:
    // 0x14c270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c274:
    // 0x14c274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c278:
    // 0x14c278: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14c278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14c27c:
    // 0x14c27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c280:
    // 0x14c280: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14c280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14c284:
    // 0x14c284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c288:
    // 0x14c288: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14c288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14c28c:
    // 0x14c28c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c290:
    // 0x14c290: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14c290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14c294:
    // 0x14c294: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14c298:
    // 0x14c298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14c29c:
    // 0x14c29c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14c2a0:
    // 0x14c2a0: 0x10000001  b           . + 4 + (0x1 << 2)
label_14c2a4:
    if (ctx->pc == 0x14C2A4u) {
        ctx->pc = 0x14C2A8u;
        goto label_14c2a8;
    }
    ctx->pc = 0x14C2A0u;
    {
        const bool branch_taken_0x14c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2a0) {
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C2A8u;
label_14c2a8:
    // 0x14c2a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14c2a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c2ac:
    // 0x14c2ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14c2b0:
    // 0x14c2b0: 0x3e00008  jr          $ra
label_14c2b4:
    if (ctx->pc == 0x14C2B4u) {
        ctx->pc = 0x14C2B8u;
        goto label_fallthrough_0x14c2b0;
    }
    ctx->pc = 0x14C2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c2b0:
    ctx->pc = 0x14C2B8u;
}
