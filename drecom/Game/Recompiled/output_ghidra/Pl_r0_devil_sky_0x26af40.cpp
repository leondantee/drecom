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

// Function: Pl_r0_devil_sky
// Address: 0x26af40 - 0x26b2e4
void Pl_r0_devil_sky_0x26af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_devil_sky_0x26af40");
#endif

    switch (ctx->pc) {
        case 0x26af40u: goto label_26af40;
        case 0x26af44u: goto label_26af44;
        case 0x26af48u: goto label_26af48;
        case 0x26af4cu: goto label_26af4c;
        case 0x26af50u: goto label_26af50;
        case 0x26af54u: goto label_26af54;
        case 0x26af58u: goto label_26af58;
        case 0x26af5cu: goto label_26af5c;
        case 0x26af60u: goto label_26af60;
        case 0x26af64u: goto label_26af64;
        case 0x26af68u: goto label_26af68;
        case 0x26af6cu: goto label_26af6c;
        case 0x26af70u: goto label_26af70;
        case 0x26af74u: goto label_26af74;
        case 0x26af78u: goto label_26af78;
        case 0x26af7cu: goto label_26af7c;
        case 0x26af80u: goto label_26af80;
        case 0x26af84u: goto label_26af84;
        case 0x26af88u: goto label_26af88;
        case 0x26af8cu: goto label_26af8c;
        case 0x26af90u: goto label_26af90;
        case 0x26af94u: goto label_26af94;
        case 0x26af98u: goto label_26af98;
        case 0x26af9cu: goto label_26af9c;
        case 0x26afa0u: goto label_26afa0;
        case 0x26afa4u: goto label_26afa4;
        case 0x26afa8u: goto label_26afa8;
        case 0x26afacu: goto label_26afac;
        case 0x26afb0u: goto label_26afb0;
        case 0x26afb4u: goto label_26afb4;
        case 0x26afb8u: goto label_26afb8;
        case 0x26afbcu: goto label_26afbc;
        case 0x26afc0u: goto label_26afc0;
        case 0x26afc4u: goto label_26afc4;
        case 0x26afc8u: goto label_26afc8;
        case 0x26afccu: goto label_26afcc;
        case 0x26afd0u: goto label_26afd0;
        case 0x26afd4u: goto label_26afd4;
        case 0x26afd8u: goto label_26afd8;
        case 0x26afdcu: goto label_26afdc;
        case 0x26afe0u: goto label_26afe0;
        case 0x26afe4u: goto label_26afe4;
        case 0x26afe8u: goto label_26afe8;
        case 0x26afecu: goto label_26afec;
        case 0x26aff0u: goto label_26aff0;
        case 0x26aff4u: goto label_26aff4;
        case 0x26aff8u: goto label_26aff8;
        case 0x26affcu: goto label_26affc;
        case 0x26b000u: goto label_26b000;
        case 0x26b004u: goto label_26b004;
        case 0x26b008u: goto label_26b008;
        case 0x26b00cu: goto label_26b00c;
        case 0x26b010u: goto label_26b010;
        case 0x26b014u: goto label_26b014;
        case 0x26b018u: goto label_26b018;
        case 0x26b01cu: goto label_26b01c;
        case 0x26b020u: goto label_26b020;
        case 0x26b024u: goto label_26b024;
        case 0x26b028u: goto label_26b028;
        case 0x26b02cu: goto label_26b02c;
        case 0x26b030u: goto label_26b030;
        case 0x26b034u: goto label_26b034;
        case 0x26b038u: goto label_26b038;
        case 0x26b03cu: goto label_26b03c;
        case 0x26b040u: goto label_26b040;
        case 0x26b044u: goto label_26b044;
        case 0x26b048u: goto label_26b048;
        case 0x26b04cu: goto label_26b04c;
        case 0x26b050u: goto label_26b050;
        case 0x26b054u: goto label_26b054;
        case 0x26b058u: goto label_26b058;
        case 0x26b05cu: goto label_26b05c;
        case 0x26b060u: goto label_26b060;
        case 0x26b064u: goto label_26b064;
        case 0x26b068u: goto label_26b068;
        case 0x26b06cu: goto label_26b06c;
        case 0x26b070u: goto label_26b070;
        case 0x26b074u: goto label_26b074;
        case 0x26b078u: goto label_26b078;
        case 0x26b07cu: goto label_26b07c;
        case 0x26b080u: goto label_26b080;
        case 0x26b084u: goto label_26b084;
        case 0x26b088u: goto label_26b088;
        case 0x26b08cu: goto label_26b08c;
        case 0x26b090u: goto label_26b090;
        case 0x26b094u: goto label_26b094;
        case 0x26b098u: goto label_26b098;
        case 0x26b09cu: goto label_26b09c;
        case 0x26b0a0u: goto label_26b0a0;
        case 0x26b0a4u: goto label_26b0a4;
        case 0x26b0a8u: goto label_26b0a8;
        case 0x26b0acu: goto label_26b0ac;
        case 0x26b0b0u: goto label_26b0b0;
        case 0x26b0b4u: goto label_26b0b4;
        case 0x26b0b8u: goto label_26b0b8;
        case 0x26b0bcu: goto label_26b0bc;
        case 0x26b0c0u: goto label_26b0c0;
        case 0x26b0c4u: goto label_26b0c4;
        case 0x26b0c8u: goto label_26b0c8;
        case 0x26b0ccu: goto label_26b0cc;
        case 0x26b0d0u: goto label_26b0d0;
        case 0x26b0d4u: goto label_26b0d4;
        case 0x26b0d8u: goto label_26b0d8;
        case 0x26b0dcu: goto label_26b0dc;
        case 0x26b0e0u: goto label_26b0e0;
        case 0x26b0e4u: goto label_26b0e4;
        case 0x26b0e8u: goto label_26b0e8;
        case 0x26b0ecu: goto label_26b0ec;
        case 0x26b0f0u: goto label_26b0f0;
        case 0x26b0f4u: goto label_26b0f4;
        case 0x26b0f8u: goto label_26b0f8;
        case 0x26b0fcu: goto label_26b0fc;
        case 0x26b100u: goto label_26b100;
        case 0x26b104u: goto label_26b104;
        case 0x26b108u: goto label_26b108;
        case 0x26b10cu: goto label_26b10c;
        case 0x26b110u: goto label_26b110;
        case 0x26b114u: goto label_26b114;
        case 0x26b118u: goto label_26b118;
        case 0x26b11cu: goto label_26b11c;
        case 0x26b120u: goto label_26b120;
        case 0x26b124u: goto label_26b124;
        case 0x26b128u: goto label_26b128;
        case 0x26b12cu: goto label_26b12c;
        case 0x26b130u: goto label_26b130;
        case 0x26b134u: goto label_26b134;
        case 0x26b138u: goto label_26b138;
        case 0x26b13cu: goto label_26b13c;
        case 0x26b140u: goto label_26b140;
        case 0x26b144u: goto label_26b144;
        case 0x26b148u: goto label_26b148;
        case 0x26b14cu: goto label_26b14c;
        case 0x26b150u: goto label_26b150;
        case 0x26b154u: goto label_26b154;
        case 0x26b158u: goto label_26b158;
        case 0x26b15cu: goto label_26b15c;
        case 0x26b160u: goto label_26b160;
        case 0x26b164u: goto label_26b164;
        case 0x26b168u: goto label_26b168;
        case 0x26b16cu: goto label_26b16c;
        case 0x26b170u: goto label_26b170;
        case 0x26b174u: goto label_26b174;
        case 0x26b178u: goto label_26b178;
        case 0x26b17cu: goto label_26b17c;
        case 0x26b180u: goto label_26b180;
        case 0x26b184u: goto label_26b184;
        case 0x26b188u: goto label_26b188;
        case 0x26b18cu: goto label_26b18c;
        case 0x26b190u: goto label_26b190;
        case 0x26b194u: goto label_26b194;
        case 0x26b198u: goto label_26b198;
        case 0x26b19cu: goto label_26b19c;
        case 0x26b1a0u: goto label_26b1a0;
        case 0x26b1a4u: goto label_26b1a4;
        case 0x26b1a8u: goto label_26b1a8;
        case 0x26b1acu: goto label_26b1ac;
        case 0x26b1b0u: goto label_26b1b0;
        case 0x26b1b4u: goto label_26b1b4;
        case 0x26b1b8u: goto label_26b1b8;
        case 0x26b1bcu: goto label_26b1bc;
        case 0x26b1c0u: goto label_26b1c0;
        case 0x26b1c4u: goto label_26b1c4;
        case 0x26b1c8u: goto label_26b1c8;
        case 0x26b1ccu: goto label_26b1cc;
        case 0x26b1d0u: goto label_26b1d0;
        case 0x26b1d4u: goto label_26b1d4;
        case 0x26b1d8u: goto label_26b1d8;
        case 0x26b1dcu: goto label_26b1dc;
        case 0x26b1e0u: goto label_26b1e0;
        case 0x26b1e4u: goto label_26b1e4;
        case 0x26b1e8u: goto label_26b1e8;
        case 0x26b1ecu: goto label_26b1ec;
        case 0x26b1f0u: goto label_26b1f0;
        case 0x26b1f4u: goto label_26b1f4;
        case 0x26b1f8u: goto label_26b1f8;
        case 0x26b1fcu: goto label_26b1fc;
        case 0x26b200u: goto label_26b200;
        case 0x26b204u: goto label_26b204;
        case 0x26b208u: goto label_26b208;
        case 0x26b20cu: goto label_26b20c;
        case 0x26b210u: goto label_26b210;
        case 0x26b214u: goto label_26b214;
        case 0x26b218u: goto label_26b218;
        case 0x26b21cu: goto label_26b21c;
        case 0x26b220u: goto label_26b220;
        case 0x26b224u: goto label_26b224;
        case 0x26b228u: goto label_26b228;
        case 0x26b22cu: goto label_26b22c;
        case 0x26b230u: goto label_26b230;
        case 0x26b234u: goto label_26b234;
        case 0x26b238u: goto label_26b238;
        case 0x26b23cu: goto label_26b23c;
        case 0x26b240u: goto label_26b240;
        case 0x26b244u: goto label_26b244;
        case 0x26b248u: goto label_26b248;
        case 0x26b24cu: goto label_26b24c;
        case 0x26b250u: goto label_26b250;
        case 0x26b254u: goto label_26b254;
        case 0x26b258u: goto label_26b258;
        case 0x26b25cu: goto label_26b25c;
        case 0x26b260u: goto label_26b260;
        case 0x26b264u: goto label_26b264;
        case 0x26b268u: goto label_26b268;
        case 0x26b26cu: goto label_26b26c;
        case 0x26b270u: goto label_26b270;
        case 0x26b274u: goto label_26b274;
        case 0x26b278u: goto label_26b278;
        case 0x26b27cu: goto label_26b27c;
        case 0x26b280u: goto label_26b280;
        case 0x26b284u: goto label_26b284;
        case 0x26b288u: goto label_26b288;
        case 0x26b28cu: goto label_26b28c;
        case 0x26b290u: goto label_26b290;
        case 0x26b294u: goto label_26b294;
        case 0x26b298u: goto label_26b298;
        case 0x26b29cu: goto label_26b29c;
        case 0x26b2a0u: goto label_26b2a0;
        case 0x26b2a4u: goto label_26b2a4;
        case 0x26b2a8u: goto label_26b2a8;
        case 0x26b2acu: goto label_26b2ac;
        case 0x26b2b0u: goto label_26b2b0;
        case 0x26b2b4u: goto label_26b2b4;
        case 0x26b2b8u: goto label_26b2b8;
        case 0x26b2bcu: goto label_26b2bc;
        case 0x26b2c0u: goto label_26b2c0;
        case 0x26b2c4u: goto label_26b2c4;
        case 0x26b2c8u: goto label_26b2c8;
        case 0x26b2ccu: goto label_26b2cc;
        case 0x26b2d0u: goto label_26b2d0;
        case 0x26b2d4u: goto label_26b2d4;
        case 0x26b2d8u: goto label_26b2d8;
        case 0x26b2dcu: goto label_26b2dc;
        case 0x26b2e0u: goto label_26b2e0;
        default: break;
    }

    ctx->pc = 0x26af40u;

label_26af40:
    // 0x26af40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26af44:
    // 0x26af44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x26af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_26af48:
    // 0x26af48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26af4c:
    // 0x26af4c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x26af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_26af50:
    // 0x26af50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af54:
    // 0x26af54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26af58:
    // 0x26af58: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_26af5c:
    // 0x26af5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26af60:
    // 0x26af60: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26af60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_26af64:
    // 0x26af64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af68:
    // 0x26af68: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26af68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
label_26af6c:
    // 0x26af6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26af70:
    if (ctx->pc == 0x26AF70u) {
        ctx->pc = 0x26AF74u;
        goto label_26af74;
    }
    ctx->pc = 0x26AF6Cu;
    {
        const bool branch_taken_0x26af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af6c) {
            ctx->pc = 0x26AF84u;
            goto label_26af84;
        }
    }
    ctx->pc = 0x26AF74u;
label_26af74:
    // 0x26af74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af78:
    // 0x26af78: 0x846213ac  lh          $v0, 0x13AC($v1)
    ctx->pc = 0x26af78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
label_26af7c:
    // 0x26af7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_26af80:
    // 0x26af80: 0xa46213ac  sh          $v0, 0x13AC($v1)
    ctx->pc = 0x26af80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5036), (uint16_t)GPR_U32(ctx, 2));
label_26af84:
    // 0x26af84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af88:
    // 0x26af88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af8c:
    // 0x26af8c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26af8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26af90:
    // 0x26af90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26af90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26af94:
    // 0x26af94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26af94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26af98:
    // 0x26af98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_26af9c:
    // 0x26af9c: 0x2442be50  addiu       $v0, $v0, -0x41B0
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_26afa0:
    // 0x26afa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26afa4:
    // 0x26afa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26afa8:
    // 0x26afa8: 0x40f809  jalr        $v0
label_26afac:
    if (ctx->pc == 0x26AFACu) {
        ctx->pc = 0x26AFB0u;
        goto label_26afb0;
    }
    ctx->pc = 0x26AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AFB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFA8u, 0x26AFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AFB0u;
label_26afb0:
    // 0x26afb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26afb4:
    // 0x26afb4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26afb8:
    // 0x26afb8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x26afb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_26afbc:
    // 0x26afbc: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_26afc0:
    if (ctx->pc == 0x26AFC0u) {
        ctx->pc = 0x26AFC4u;
        goto label_26afc4;
    }
    ctx->pc = 0x26AFBCu;
    {
        const bool branch_taken_0x26afbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26afbc) {
            ctx->pc = 0x26B2C0u;
            goto label_26b2c0;
        }
    }
    ctx->pc = 0x26AFC4u;
label_26afc4:
    // 0x26afc4: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
label_26afc8:
    // 0x26afc8: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x26afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_26afcc:
    // 0x26afcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26afccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26afd0:
    // 0x26afd0: 0x0  nop
    ctx->pc = 0x26afd0u;
    // NOP
label_26afd4:
    // 0x26afd4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26afd8:
    // 0x26afd8: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x26afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_26afdc:
    // 0x26afdc: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x26afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_26afe0:
    // 0x26afe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26afe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26afe4:
    // 0x26afe4: 0x0  nop
    ctx->pc = 0x26afe4u;
    // NOP
label_26afe8:
    // 0x26afe8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26afec:
    // 0x26afec: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x26afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_26aff0:
    // 0x26aff0: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x26aff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_26aff4:
    // 0x26aff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26aff8:
    // 0x26aff8: 0x0  nop
    ctx->pc = 0x26aff8u;
    // NOP
label_26affc:
    // 0x26affc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26b000:
    // 0x26b000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26b004:
    // 0x26b004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b008:
    // 0x26b008: 0x0  nop
    ctx->pc = 0x26b008u;
    // NOP
label_26b00c:
    // 0x26b00c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b010:
    // 0x26b010: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b014:
    // 0x26b014: 0xc0675a4  jal         func_19D690
label_26b018:
    if (ctx->pc == 0x26B018u) {
        ctx->pc = 0x26B01Cu;
        goto label_26b01c;
    }
    ctx->pc = 0x26B014u;
    SET_GPR_U32(ctx, 31, 0x26B01Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B014u, 0x26B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B01Cu;
label_26b01c:
    // 0x26b01c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b020:
    // 0x26b020: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b024:
    // 0x26b024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b028:
    // 0x26b028: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b02c:
    // 0x26b02c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b030:
    // 0x26b030: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b034:
    // 0x26b034: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b038:
    // 0x26b038: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b03c:
    // 0x26b03c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b040:
    // 0x26b040: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b044:
    // 0x26b044: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b048:
    // 0x26b048: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b04c:
    // 0x26b04c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b050:
    // 0x26b050: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b050u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b054:
    // 0x26b054: 0xc0862f8  jal         func_218BE0
label_26b058:
    if (ctx->pc == 0x26B058u) {
        ctx->pc = 0x26B05Cu;
        goto label_26b05c;
    }
    ctx->pc = 0x26B054u;
    SET_GPR_U32(ctx, 31, 0x26B05Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B054u, 0x26B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B05Cu;
label_26b05c:
    // 0x26b05c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b060:
    // 0x26b060: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b064:
    // 0x26b064: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b068:
    // 0x26b068: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b06c:
    // 0x26b06c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b070:
    // 0x26b070: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b074:
    // 0x26b074: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b078:
    // 0x26b078: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b07c:
    // 0x26b07c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b080:
    // 0x26b080: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b084:
    // 0x26b084: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b088:
    // 0x26b088: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b08c:
    // 0x26b08c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b090:
    // 0x26b090: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b090u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b094:
    // 0x26b094: 0xc0862f8  jal         func_218BE0
label_26b098:
    if (ctx->pc == 0x26B098u) {
        ctx->pc = 0x26B09Cu;
        goto label_26b09c;
    }
    ctx->pc = 0x26B094u;
    SET_GPR_U32(ctx, 31, 0x26B09Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B094u, 0x26B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B09Cu;
label_26b09c:
    // 0x26b09c: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x26b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
label_26b0a0:
    // 0x26b0a0: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x26b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_26b0a4:
    // 0x26b0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0a8:
    // 0x26b0a8: 0x0  nop
    ctx->pc = 0x26b0a8u;
    // NOP
label_26b0ac:
    // 0x26b0ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26b0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26b0b0:
    // 0x26b0b0: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x26b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_26b0b4:
    // 0x26b0b4: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x26b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_26b0b8:
    // 0x26b0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0bc:
    // 0x26b0bc: 0x0  nop
    ctx->pc = 0x26b0bcu;
    // NOP
label_26b0c0:
    // 0x26b0c0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26b0c4:
    // 0x26b0c4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x26b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_26b0c8:
    // 0x26b0c8: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x26b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_26b0cc:
    // 0x26b0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0d0:
    // 0x26b0d0: 0x0  nop
    ctx->pc = 0x26b0d0u;
    // NOP
label_26b0d4:
    // 0x26b0d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26b0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26b0d8:
    // 0x26b0d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26b0dc:
    // 0x26b0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0e0:
    // 0x26b0e0: 0x0  nop
    ctx->pc = 0x26b0e0u;
    // NOP
label_26b0e4:
    // 0x26b0e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b0e8:
    // 0x26b0e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b0ec:
    // 0x26b0ec: 0xc0675a4  jal         func_19D690
label_26b0f0:
    if (ctx->pc == 0x26B0F0u) {
        ctx->pc = 0x26B0F4u;
        goto label_26b0f4;
    }
    ctx->pc = 0x26B0ECu;
    SET_GPR_U32(ctx, 31, 0x26B0F4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B0ECu, 0x26B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0F4u;
label_26b0f4:
    // 0x26b0f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b0f8:
    // 0x26b0f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b0fc:
    // 0x26b0fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b100:
    // 0x26b100: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b104:
    // 0x26b104: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b108:
    // 0x26b108: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b10c:
    // 0x26b10c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b110:
    // 0x26b110: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b114:
    // 0x26b114: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b118:
    // 0x26b118: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b11c:
    // 0x26b11c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b120:
    // 0x26b120: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b124:
    // 0x26b124: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b128:
    // 0x26b128: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b128u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b12c:
    // 0x26b12c: 0xc0862f8  jal         func_218BE0
label_26b130:
    if (ctx->pc == 0x26B130u) {
        ctx->pc = 0x26B134u;
        goto label_26b134;
    }
    ctx->pc = 0x26B12Cu;
    SET_GPR_U32(ctx, 31, 0x26B134u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B12Cu, 0x26B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B134u;
label_26b134:
    // 0x26b134: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b138:
    // 0x26b138: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b13c:
    // 0x26b13c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b140:
    // 0x26b140: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b144:
    // 0x26b144: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b148:
    // 0x26b148: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b14c:
    // 0x26b14c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b150:
    // 0x26b150: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b154:
    // 0x26b154: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b158:
    // 0x26b158: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b15c:
    // 0x26b15c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b160:
    // 0x26b160: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b164:
    // 0x26b164: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b168:
    // 0x26b168: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b168u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b16c:
    // 0x26b16c: 0xc0862f8  jal         func_218BE0
label_26b170:
    if (ctx->pc == 0x26B170u) {
        ctx->pc = 0x26B174u;
        goto label_26b174;
    }
    ctx->pc = 0x26B16Cu;
    SET_GPR_U32(ctx, 31, 0x26B174u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B16Cu, 0x26B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B174u;
label_26b174:
    // 0x26b174: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b178:
    // 0x26b178: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x26b178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_26b17c:
    // 0x26b17c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_26b180:
    // 0x26b180: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_26b184:
    // 0x26b184: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_26b188:
    // 0x26b188: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_26b18c:
    if (ctx->pc == 0x26B18Cu) {
        ctx->pc = 0x26B190u;
        goto label_26b190;
    }
    ctx->pc = 0x26B188u;
    {
        const bool branch_taken_0x26b188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b188) {
            ctx->pc = 0x26B1D0u;
            goto label_26b1d0;
        }
    }
    ctx->pc = 0x26B190u;
label_26b190:
    // 0x26b190: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b194:
    // 0x26b194: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_26b198:
    // 0x26b198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_26b19c:
    // 0x26b19c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b19cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_26b1a0:
    // 0x26b1a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_26b1a4:
    // 0x26b1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b1a8:
    // 0x26b1a8: 0x0  nop
    ctx->pc = 0x26b1a8u;
    // NOP
label_26b1ac:
    // 0x26b1ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26b1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26b1b0:
    // 0x26b1b0: 0x3c023fcb  lui         $v0, 0x3FCB
    ctx->pc = 0x26b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16331 << 16));
label_26b1b4:
    // 0x26b1b4: 0x34422cb4  ori         $v0, $v0, 0x2CB4
    ctx->pc = 0x26b1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11444);
label_26b1b8:
    // 0x26b1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b1bc:
    // 0x26b1bc: 0x0  nop
    ctx->pc = 0x26b1bcu;
    // NOP
label_26b1c0:
    // 0x26b1c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26b1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26b1c4:
    // 0x26b1c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b1c8:
    // 0x26b1c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_26b1cc:
    if (ctx->pc == 0x26B1CCu) {
        ctx->pc = 0x26B1D0u;
        goto label_26b1d0;
    }
    ctx->pc = 0x26B1C8u;
    {
        const bool branch_taken_0x26b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b1c8) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B1D0u;
label_26b1d0:
    // 0x26b1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b1d4:
    // 0x26b1d4: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_26b1d8:
    // 0x26b1d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_26b1dc:
    // 0x26b1dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b1dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_26b1e0:
    // 0x26b1e0: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x26b1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_26b1e4:
    // 0x26b1e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x26b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_26b1e8:
    // 0x26b1e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26b1ec:
    // 0x26b1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b1f0:
    // 0x26b1f0: 0x0  nop
    ctx->pc = 0x26b1f0u;
    // NOP
label_26b1f4:
    // 0x26b1f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26b1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26b1f8:
    // 0x26b1f8: 0x3c023fcb  lui         $v0, 0x3FCB
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16331 << 16));
label_26b1fc:
    // 0x26b1fc: 0x34422cb4  ori         $v0, $v0, 0x2CB4
    ctx->pc = 0x26b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11444);
label_26b200:
    // 0x26b200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b204:
    // 0x26b204: 0x0  nop
    ctx->pc = 0x26b204u;
    // NOP
label_26b208:
    // 0x26b208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26b20c:
    // 0x26b20c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b210:
    // 0x26b210: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b214:
    // 0x26b214: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b218:
    // 0x26b218: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_26b21c:
    // 0x26b21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26b21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b220:
    // 0x26b220: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b224:
    // 0x26b224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26b228:
    // 0x26b228: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x26b228u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26b22c:
    // 0x26b22c: 0xc047fa2  jal         func_11FE88
label_26b230:
    if (ctx->pc == 0x26B230u) {
        ctx->pc = 0x26B234u;
        goto label_26b234;
    }
    ctx->pc = 0x26B22Cu;
    SET_GPR_U32(ctx, 31, 0x26B234u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x26B22Cu, 0x26B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B234u;
label_26b234:
    // 0x26b234: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x26b234u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26b238:
    // 0x26b238: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x26b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b23c:
    // 0x26b23c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26b240:
    // 0x26b240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b244:
    // 0x26b244: 0x0  nop
    ctx->pc = 0x26b244u;
    // NOP
label_26b248:
    // 0x26b248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26b248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b24c:
    // 0x26b24c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b250:
    // 0x26b250: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b254:
    // 0x26b254: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x26b254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_26b258:
    // 0x26b258: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b25c:
    // 0x26b25c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x26b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_26b260:
    // 0x26b260: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b264:
    // 0x26b264: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x26b264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_26b268:
    // 0x26b268: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b26c:
    // 0x26b26c: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x26b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b270:
    // 0x26b270: 0xc0c91ec  jal         func_3247B0
label_26b274:
    if (ctx->pc == 0x26B274u) {
        ctx->pc = 0x26B278u;
        goto label_26b278;
    }
    ctx->pc = 0x26B270u;
    SET_GPR_U32(ctx, 31, 0x26B278u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x26B270u, 0x26B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B278u;
label_26b278:
    // 0x26b278: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b27c:
    // 0x26b27c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26b280:
    // 0x26b280: 0xac700450  sw          $s0, 0x450($v1)
    ctx->pc = 0x26b280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 16));
label_26b284:
    // 0x26b284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b288:
    // 0x26b288: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26b28c:
    // 0x26b28c: 0xac700454  sw          $s0, 0x454($v1)
    ctx->pc = 0x26b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1108), GPR_U32(ctx, 16));
label_26b290:
    // 0x26b290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b294:
    // 0x26b294: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26b298:
    // 0x26b298: 0xac700458  sw          $s0, 0x458($v1)
    ctx->pc = 0x26b298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1112), GPR_U32(ctx, 16));
label_26b29c:
    // 0x26b29c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b2a0:
    // 0x26b2a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26b2a4:
    // 0x26b2a4: 0xac700960  sw          $s0, 0x960($v1)
    ctx->pc = 0x26b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2400), GPR_U32(ctx, 16));
label_26b2a8:
    // 0x26b2a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b2ac:
    // 0x26b2ac: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26b2b0:
    // 0x26b2b0: 0xac700964  sw          $s0, 0x964($v1)
    ctx->pc = 0x26b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2404), GPR_U32(ctx, 16));
label_26b2b4:
    // 0x26b2b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b2b8:
    // 0x26b2b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26b2bc:
    // 0x26b2bc: 0xac700968  sw          $s0, 0x968($v1)
    ctx->pc = 0x26b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2408), GPR_U32(ctx, 16));
label_26b2c0:
    // 0x26b2c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b2c4:
    // 0x26b2c4: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x26b2c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
label_26b2c8:
    // 0x26b2c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26b2cc:
    // 0x26b2cc: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x26b2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
label_26b2d0:
    // 0x26b2d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26b2d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b2d4:
    // 0x26b2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26b2d8:
    // 0x26b2d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26b2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26b2dc:
    // 0x26b2dc: 0x3e00008  jr          $ra
label_26b2e0:
    if (ctx->pc == 0x26B2E0u) {
        ctx->pc = 0x26B2E4u;
        goto label_fallthrough_0x26b2dc;
    }
    ctx->pc = 0x26B2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26b2dc:
    ctx->pc = 0x26B2E4u;
}
