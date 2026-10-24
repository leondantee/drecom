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

// Function: Pl_r1_damage_air
// Address: 0x14cf30 - 0x14d2e0
void Pl_r1_damage_air_0x14cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_damage_air_0x14cf30");
#endif

    switch (ctx->pc) {
        case 0x14cf30u: goto label_14cf30;
        case 0x14cf34u: goto label_14cf34;
        case 0x14cf38u: goto label_14cf38;
        case 0x14cf3cu: goto label_14cf3c;
        case 0x14cf40u: goto label_14cf40;
        case 0x14cf44u: goto label_14cf44;
        case 0x14cf48u: goto label_14cf48;
        case 0x14cf4cu: goto label_14cf4c;
        case 0x14cf50u: goto label_14cf50;
        case 0x14cf54u: goto label_14cf54;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf5cu: goto label_14cf5c;
        case 0x14cf60u: goto label_14cf60;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf68u: goto label_14cf68;
        case 0x14cf6cu: goto label_14cf6c;
        case 0x14cf70u: goto label_14cf70;
        case 0x14cf74u: goto label_14cf74;
        case 0x14cf78u: goto label_14cf78;
        case 0x14cf7cu: goto label_14cf7c;
        case 0x14cf80u: goto label_14cf80;
        case 0x14cf84u: goto label_14cf84;
        case 0x14cf88u: goto label_14cf88;
        case 0x14cf8cu: goto label_14cf8c;
        case 0x14cf90u: goto label_14cf90;
        case 0x14cf94u: goto label_14cf94;
        case 0x14cf98u: goto label_14cf98;
        case 0x14cf9cu: goto label_14cf9c;
        case 0x14cfa0u: goto label_14cfa0;
        case 0x14cfa4u: goto label_14cfa4;
        case 0x14cfa8u: goto label_14cfa8;
        case 0x14cfacu: goto label_14cfac;
        case 0x14cfb0u: goto label_14cfb0;
        case 0x14cfb4u: goto label_14cfb4;
        case 0x14cfb8u: goto label_14cfb8;
        case 0x14cfbcu: goto label_14cfbc;
        case 0x14cfc0u: goto label_14cfc0;
        case 0x14cfc4u: goto label_14cfc4;
        case 0x14cfc8u: goto label_14cfc8;
        case 0x14cfccu: goto label_14cfcc;
        case 0x14cfd0u: goto label_14cfd0;
        case 0x14cfd4u: goto label_14cfd4;
        case 0x14cfd8u: goto label_14cfd8;
        case 0x14cfdcu: goto label_14cfdc;
        case 0x14cfe0u: goto label_14cfe0;
        case 0x14cfe4u: goto label_14cfe4;
        case 0x14cfe8u: goto label_14cfe8;
        case 0x14cfecu: goto label_14cfec;
        case 0x14cff0u: goto label_14cff0;
        case 0x14cff4u: goto label_14cff4;
        case 0x14cff8u: goto label_14cff8;
        case 0x14cffcu: goto label_14cffc;
        case 0x14d000u: goto label_14d000;
        case 0x14d004u: goto label_14d004;
        case 0x14d008u: goto label_14d008;
        case 0x14d00cu: goto label_14d00c;
        case 0x14d010u: goto label_14d010;
        case 0x14d014u: goto label_14d014;
        case 0x14d018u: goto label_14d018;
        case 0x14d01cu: goto label_14d01c;
        case 0x14d020u: goto label_14d020;
        case 0x14d024u: goto label_14d024;
        case 0x14d028u: goto label_14d028;
        case 0x14d02cu: goto label_14d02c;
        case 0x14d030u: goto label_14d030;
        case 0x14d034u: goto label_14d034;
        case 0x14d038u: goto label_14d038;
        case 0x14d03cu: goto label_14d03c;
        case 0x14d040u: goto label_14d040;
        case 0x14d044u: goto label_14d044;
        case 0x14d048u: goto label_14d048;
        case 0x14d04cu: goto label_14d04c;
        case 0x14d050u: goto label_14d050;
        case 0x14d054u: goto label_14d054;
        case 0x14d058u: goto label_14d058;
        case 0x14d05cu: goto label_14d05c;
        case 0x14d060u: goto label_14d060;
        case 0x14d064u: goto label_14d064;
        case 0x14d068u: goto label_14d068;
        case 0x14d06cu: goto label_14d06c;
        case 0x14d070u: goto label_14d070;
        case 0x14d074u: goto label_14d074;
        case 0x14d078u: goto label_14d078;
        case 0x14d07cu: goto label_14d07c;
        case 0x14d080u: goto label_14d080;
        case 0x14d084u: goto label_14d084;
        case 0x14d088u: goto label_14d088;
        case 0x14d08cu: goto label_14d08c;
        case 0x14d090u: goto label_14d090;
        case 0x14d094u: goto label_14d094;
        case 0x14d098u: goto label_14d098;
        case 0x14d09cu: goto label_14d09c;
        case 0x14d0a0u: goto label_14d0a0;
        case 0x14d0a4u: goto label_14d0a4;
        case 0x14d0a8u: goto label_14d0a8;
        case 0x14d0acu: goto label_14d0ac;
        case 0x14d0b0u: goto label_14d0b0;
        case 0x14d0b4u: goto label_14d0b4;
        case 0x14d0b8u: goto label_14d0b8;
        case 0x14d0bcu: goto label_14d0bc;
        case 0x14d0c0u: goto label_14d0c0;
        case 0x14d0c4u: goto label_14d0c4;
        case 0x14d0c8u: goto label_14d0c8;
        case 0x14d0ccu: goto label_14d0cc;
        case 0x14d0d0u: goto label_14d0d0;
        case 0x14d0d4u: goto label_14d0d4;
        case 0x14d0d8u: goto label_14d0d8;
        case 0x14d0dcu: goto label_14d0dc;
        case 0x14d0e0u: goto label_14d0e0;
        case 0x14d0e4u: goto label_14d0e4;
        case 0x14d0e8u: goto label_14d0e8;
        case 0x14d0ecu: goto label_14d0ec;
        case 0x14d0f0u: goto label_14d0f0;
        case 0x14d0f4u: goto label_14d0f4;
        case 0x14d0f8u: goto label_14d0f8;
        case 0x14d0fcu: goto label_14d0fc;
        case 0x14d100u: goto label_14d100;
        case 0x14d104u: goto label_14d104;
        case 0x14d108u: goto label_14d108;
        case 0x14d10cu: goto label_14d10c;
        case 0x14d110u: goto label_14d110;
        case 0x14d114u: goto label_14d114;
        case 0x14d118u: goto label_14d118;
        case 0x14d11cu: goto label_14d11c;
        case 0x14d120u: goto label_14d120;
        case 0x14d124u: goto label_14d124;
        case 0x14d128u: goto label_14d128;
        case 0x14d12cu: goto label_14d12c;
        case 0x14d130u: goto label_14d130;
        case 0x14d134u: goto label_14d134;
        case 0x14d138u: goto label_14d138;
        case 0x14d13cu: goto label_14d13c;
        case 0x14d140u: goto label_14d140;
        case 0x14d144u: goto label_14d144;
        case 0x14d148u: goto label_14d148;
        case 0x14d14cu: goto label_14d14c;
        case 0x14d150u: goto label_14d150;
        case 0x14d154u: goto label_14d154;
        case 0x14d158u: goto label_14d158;
        case 0x14d15cu: goto label_14d15c;
        case 0x14d160u: goto label_14d160;
        case 0x14d164u: goto label_14d164;
        case 0x14d168u: goto label_14d168;
        case 0x14d16cu: goto label_14d16c;
        case 0x14d170u: goto label_14d170;
        case 0x14d174u: goto label_14d174;
        case 0x14d178u: goto label_14d178;
        case 0x14d17cu: goto label_14d17c;
        case 0x14d180u: goto label_14d180;
        case 0x14d184u: goto label_14d184;
        case 0x14d188u: goto label_14d188;
        case 0x14d18cu: goto label_14d18c;
        case 0x14d190u: goto label_14d190;
        case 0x14d194u: goto label_14d194;
        case 0x14d198u: goto label_14d198;
        case 0x14d19cu: goto label_14d19c;
        case 0x14d1a0u: goto label_14d1a0;
        case 0x14d1a4u: goto label_14d1a4;
        case 0x14d1a8u: goto label_14d1a8;
        case 0x14d1acu: goto label_14d1ac;
        case 0x14d1b0u: goto label_14d1b0;
        case 0x14d1b4u: goto label_14d1b4;
        case 0x14d1b8u: goto label_14d1b8;
        case 0x14d1bcu: goto label_14d1bc;
        case 0x14d1c0u: goto label_14d1c0;
        case 0x14d1c4u: goto label_14d1c4;
        case 0x14d1c8u: goto label_14d1c8;
        case 0x14d1ccu: goto label_14d1cc;
        case 0x14d1d0u: goto label_14d1d0;
        case 0x14d1d4u: goto label_14d1d4;
        case 0x14d1d8u: goto label_14d1d8;
        case 0x14d1dcu: goto label_14d1dc;
        case 0x14d1e0u: goto label_14d1e0;
        case 0x14d1e4u: goto label_14d1e4;
        case 0x14d1e8u: goto label_14d1e8;
        case 0x14d1ecu: goto label_14d1ec;
        case 0x14d1f0u: goto label_14d1f0;
        case 0x14d1f4u: goto label_14d1f4;
        case 0x14d1f8u: goto label_14d1f8;
        case 0x14d1fcu: goto label_14d1fc;
        case 0x14d200u: goto label_14d200;
        case 0x14d204u: goto label_14d204;
        case 0x14d208u: goto label_14d208;
        case 0x14d20cu: goto label_14d20c;
        case 0x14d210u: goto label_14d210;
        case 0x14d214u: goto label_14d214;
        case 0x14d218u: goto label_14d218;
        case 0x14d21cu: goto label_14d21c;
        case 0x14d220u: goto label_14d220;
        case 0x14d224u: goto label_14d224;
        case 0x14d228u: goto label_14d228;
        case 0x14d22cu: goto label_14d22c;
        case 0x14d230u: goto label_14d230;
        case 0x14d234u: goto label_14d234;
        case 0x14d238u: goto label_14d238;
        case 0x14d23cu: goto label_14d23c;
        case 0x14d240u: goto label_14d240;
        case 0x14d244u: goto label_14d244;
        case 0x14d248u: goto label_14d248;
        case 0x14d24cu: goto label_14d24c;
        case 0x14d250u: goto label_14d250;
        case 0x14d254u: goto label_14d254;
        case 0x14d258u: goto label_14d258;
        case 0x14d25cu: goto label_14d25c;
        case 0x14d260u: goto label_14d260;
        case 0x14d264u: goto label_14d264;
        case 0x14d268u: goto label_14d268;
        case 0x14d26cu: goto label_14d26c;
        case 0x14d270u: goto label_14d270;
        case 0x14d274u: goto label_14d274;
        case 0x14d278u: goto label_14d278;
        case 0x14d27cu: goto label_14d27c;
        case 0x14d280u: goto label_14d280;
        case 0x14d284u: goto label_14d284;
        case 0x14d288u: goto label_14d288;
        case 0x14d28cu: goto label_14d28c;
        case 0x14d290u: goto label_14d290;
        case 0x14d294u: goto label_14d294;
        case 0x14d298u: goto label_14d298;
        case 0x14d29cu: goto label_14d29c;
        case 0x14d2a0u: goto label_14d2a0;
        case 0x14d2a4u: goto label_14d2a4;
        case 0x14d2a8u: goto label_14d2a8;
        case 0x14d2acu: goto label_14d2ac;
        case 0x14d2b0u: goto label_14d2b0;
        case 0x14d2b4u: goto label_14d2b4;
        case 0x14d2b8u: goto label_14d2b8;
        case 0x14d2bcu: goto label_14d2bc;
        case 0x14d2c0u: goto label_14d2c0;
        case 0x14d2c4u: goto label_14d2c4;
        case 0x14d2c8u: goto label_14d2c8;
        case 0x14d2ccu: goto label_14d2cc;
        case 0x14d2d0u: goto label_14d2d0;
        case 0x14d2d4u: goto label_14d2d4;
        case 0x14d2d8u: goto label_14d2d8;
        case 0x14d2dcu: goto label_14d2dc;
        default: break;
    }

    ctx->pc = 0x14cf30u;

label_14cf30:
    // 0x14cf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14cf34:
    // 0x14cf34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x14cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_14cf38:
    // 0x14cf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14cf3c:
    // 0x14cf3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14cf40:
    // 0x14cf40: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_14cf44:
    // 0x14cf44: 0x2470fe10  addiu       $s0, $v1, -0x1F0
    ctx->pc = 0x14cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
label_14cf48:
    // 0x14cf48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cf4c:
    // 0x14cf4c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14cf4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14cf50:
    // 0x14cf50: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14cf50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14cf54:
    // 0x14cf54: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x14cf54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14cf58:
    // 0x14cf58: 0x102000dc  beqz        $at, . + 4 + (0xDC << 2)
label_14cf5c:
    if (ctx->pc == 0x14CF5Cu) {
        ctx->pc = 0x14CF60u;
        goto label_14cf60;
    }
    ctx->pc = 0x14CF58u;
    {
        const bool branch_taken_0x14cf58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf58) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14CF60u;
label_14cf60:
    // 0x14cf60: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14cf64:
    // 0x14cf64: 0x2464e8e0  addiu       $a0, $v1, -0x1720
    ctx->pc = 0x14cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961376));
label_14cf68:
    // 0x14cf68: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14cf6c:
    // 0x14cf6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14cf70:
    // 0x14cf70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14cf74:
    // 0x14cf74: 0x600008  jr          $v1
label_14cf78:
    if (ctx->pc == 0x14CF78u) {
        ctx->pc = 0x14CF7Cu;
        goto label_14cf7c;
    }
    ctx->pc = 0x14CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14CF7Cu;
label_14cf7c:
    // 0x14cf7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cf80:
    // 0x14cf80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cf84:
    // 0x14cf84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14cf88:
    // 0x14cf88: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x14cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_14cf8c:
    // 0x14cf8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cf90:
    // 0x14cf90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14cf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14cf94:
    // 0x14cf94: 0xc0965d0  jal         func_259740
label_14cf98:
    if (ctx->pc == 0x14CF98u) {
        ctx->pc = 0x14CF9Cu;
        goto label_14cf9c;
    }
    ctx->pc = 0x14CF94u;
    SET_GPR_U32(ctx, 31, 0x14CF9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CF94u, 0x14CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF9Cu;
label_14cf9c:
    // 0x14cf9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14cfa0:
    // 0x14cfa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cfa4:
    // 0x14cfa4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14cfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_14cfa8:
    // 0x14cfa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cfac:
    // 0x14cfac: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x14cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14cfb0:
    // 0x14cfb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cfb4:
    // 0x14cfb4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14cfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14cfb8:
    // 0x14cfb8: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x14cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_14cfbc:
    // 0x14cfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cfc0:
    // 0x14cfc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cfc4:
    // 0x14cfc4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14cfc8:
    // 0x14cfc8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_14cfcc:
    // 0x14cfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cfd0:
    // 0x14cfd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14cfd4:
    // 0x14cfd4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_14cfd8:
    // 0x14cfd8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_14cfdc:
    // 0x14cfdc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_14cfe0:
    // 0x14cfe0: 0xc0684d8  jal         func_1A1360
label_14cfe4:
    if (ctx->pc == 0x14CFE4u) {
        ctx->pc = 0x14CFE8u;
        goto label_14cfe8;
    }
    ctx->pc = 0x14CFE0u;
    SET_GPR_U32(ctx, 31, 0x14CFE8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CFE0u, 0x14CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFE8u;
label_14cfe8:
    // 0x14cfe8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_14cfec:
    // 0x14cfec: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14cfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_14cff0:
    // 0x14cff0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x14cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_14cff4:
    // 0x14cff4: 0xc0684d8  jal         func_1A1360
label_14cff8:
    if (ctx->pc == 0x14CFF8u) {
        ctx->pc = 0x14CFFCu;
        goto label_14cffc;
    }
    ctx->pc = 0x14CFF4u;
    SET_GPR_U32(ctx, 31, 0x14CFFCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CFF4u, 0x14CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFFCu;
label_14cffc:
    // 0x14cffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d000:
    // 0x14d000: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14d004:
    // 0x14d004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14d008:
    // 0x14d008: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d00c:
    // 0x14d00c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d010:
    // 0x14d010: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_14d014:
    // 0x14d014: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_14d018:
    // 0x14d018: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d01c:
    // 0x14d01c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x14d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_14d020:
    // 0x14d020: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d024:
    // 0x14d024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14d028:
    // 0x14d028: 0xc096b40  jal         func_25AD00
label_14d02c:
    if (ctx->pc == 0x14D02Cu) {
        ctx->pc = 0x14D030u;
        goto label_14d030;
    }
    ctx->pc = 0x14D028u;
    SET_GPR_U32(ctx, 31, 0x14D030u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D028u, 0x14D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D030u;
label_14d030:
    // 0x14d030: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d034:
    // 0x14d034: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14d038:
    // 0x14d038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d03c:
    // 0x14d03c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x14d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d040:
    // 0x14d040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14d044:
    // 0x14d044: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x14d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_14d048:
    // 0x14d048: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d04c:
    // 0x14d04c: 0xc05cd10  jal         func_173440
label_14d050:
    if (ctx->pc == 0x14D050u) {
        ctx->pc = 0x14D054u;
        goto label_14d054;
    }
    ctx->pc = 0x14D04Cu;
    SET_GPR_U32(ctx, 31, 0x14D054u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D04Cu, 0x14D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D054u;
label_14d054:
    // 0x14d054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14d058:
    // 0x14d058: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d05c:
    // 0x14d05c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14d060:
    // 0x14d060: 0xc0573d8  jal         func_15CF60
label_14d064:
    if (ctx->pc == 0x14D064u) {
        ctx->pc = 0x14D068u;
        goto label_14d068;
    }
    ctx->pc = 0x14D060u;
    SET_GPR_U32(ctx, 31, 0x14D068u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D060u, 0x14D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D068u;
label_14d068:
    // 0x14d068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d06c:
    // 0x14d06c: 0xc05cf54  jal         func_173D50
label_14d070:
    if (ctx->pc == 0x14D070u) {
        ctx->pc = 0x14D074u;
        goto label_14d074;
    }
    ctx->pc = 0x14D06Cu;
    SET_GPR_U32(ctx, 31, 0x14D074u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x14D06Cu, 0x14D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D074u;
label_14d074:
    // 0x14d074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14d078:
    if (ctx->pc == 0x14D078u) {
        ctx->pc = 0x14D07Cu;
        goto label_14d07c;
    }
    ctx->pc = 0x14D074u;
    {
        const bool branch_taken_0x14d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d074) {
            ctx->pc = 0x14D088u;
            goto label_14d088;
        }
    }
    ctx->pc = 0x14D07Cu;
label_14d07c:
    // 0x14d07c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d080:
    // 0x14d080: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d084:
    // 0x14d084: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14d084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14d088:
    // 0x14d088: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14d08c:
    // 0x14d08c: 0xc097530  jal         func_25D4C0
label_14d090:
    if (ctx->pc == 0x14D090u) {
        ctx->pc = 0x14D094u;
        goto label_14d094;
    }
    ctx->pc = 0x14D08Cu;
    SET_GPR_U32(ctx, 31, 0x14D094u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D08Cu, 0x14D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D094u;
label_14d094:
    // 0x14d094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d098:
    // 0x14d098: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14d09c:
    // 0x14d09c: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_14d0a0:
    if (ctx->pc == 0x14D0A0u) {
        ctx->pc = 0x14D0A4u;
        goto label_14d0a4;
    }
    ctx->pc = 0x14D09Cu;
    {
        const bool branch_taken_0x14d09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d09c) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D0A4u;
label_14d0a4:
    // 0x14d0a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d0a8:
    // 0x14d0a8: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x14d0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d0ac:
    // 0x14d0ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d0b0:
    // 0x14d0b0: 0x0  nop
    ctx->pc = 0x14d0b0u;
    // NOP
label_14d0b4:
    // 0x14d0b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14d0b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14d0b8:
    // 0x14d0b8: 0x0  nop
    ctx->pc = 0x14d0b8u;
    // NOP
label_14d0bc:
    // 0x14d0bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14d0c0:
    if (ctx->pc == 0x14D0C0u) {
        ctx->pc = 0x14D0C4u;
        goto label_14d0c4;
    }
    ctx->pc = 0x14D0BCu;
    {
        const bool branch_taken_0x14d0bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d0bc) {
            ctx->pc = 0x14D0D8u;
            goto label_14d0d8;
        }
    }
    ctx->pc = 0x14D0C4u;
label_14d0c4:
    // 0x14d0c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14d0c8:
    // 0x14d0c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d0cc:
    // 0x14d0cc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14d0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_14d0d0:
    // 0x14d0d0: 0x1000007e  b           . + 4 + (0x7E << 2)
label_14d0d4:
    if (ctx->pc == 0x14D0D4u) {
        ctx->pc = 0x14D0D8u;
        goto label_14d0d8;
    }
    ctx->pc = 0x14D0D0u;
    {
        const bool branch_taken_0x14d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0d0) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D0D8u;
label_14d0d8:
    // 0x14d0d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d0dc:
    // 0x14d0dc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14d0dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14d0e0:
    // 0x14d0e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14d0e4:
    // 0x14d0e4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14d0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_14d0e8:
    // 0x14d0e8: 0x10000078  b           . + 4 + (0x78 << 2)
label_14d0ec:
    if (ctx->pc == 0x14D0ECu) {
        ctx->pc = 0x14D0F0u;
        goto label_14d0f0;
    }
    ctx->pc = 0x14D0E8u;
    {
        const bool branch_taken_0x14d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0e8) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D0F0u;
label_14d0f0:
    // 0x14d0f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d0f4:
    // 0x14d0f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d0f8:
    // 0x14d0f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14d0fc:
    // 0x14d0fc: 0x24060536  addiu       $a2, $zero, 0x536
    ctx->pc = 0x14d0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1334));
label_14d100:
    // 0x14d100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d104:
    // 0x14d104: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14d108:
    // 0x14d108: 0xc0965d0  jal         func_259740
label_14d10c:
    if (ctx->pc == 0x14D10Cu) {
        ctx->pc = 0x14D110u;
        goto label_14d110;
    }
    ctx->pc = 0x14D108u;
    SET_GPR_U32(ctx, 31, 0x14D110u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D108u, 0x14D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D110u;
label_14d110:
    // 0x14d110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d114:
    // 0x14d114: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d118:
    // 0x14d118: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_14d11c:
    // 0x14d11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d120:
    // 0x14d120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d124:
    // 0x14d124: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x14d124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_14d128:
    // 0x14d128: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d12c:
    // 0x14d12c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14d130:
    // 0x14d130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14d134:
    // 0x14d134: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d138:
    // 0x14d138: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d13c:
    // 0x14d13c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_14d140:
    // 0x14d140: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_14d144:
    // 0x14d144: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d148:
    // 0x14d148: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x14d148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_14d14c:
    // 0x14d14c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d150:
    // 0x14d150: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14d154:
    // 0x14d154: 0xc096b40  jal         func_25AD00
label_14d158:
    if (ctx->pc == 0x14D158u) {
        ctx->pc = 0x14D15Cu;
        goto label_14d15c;
    }
    ctx->pc = 0x14D154u;
    SET_GPR_U32(ctx, 31, 0x14D15Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D154u, 0x14D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D15Cu;
label_14d15c:
    // 0x14d15c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d160:
    // 0x14d160: 0xc05cd10  jal         func_173440
label_14d164:
    if (ctx->pc == 0x14D164u) {
        ctx->pc = 0x14D168u;
        goto label_14d168;
    }
    ctx->pc = 0x14D160u;
    SET_GPR_U32(ctx, 31, 0x14D168u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D160u, 0x14D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D168u;
label_14d168:
    // 0x14d168: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14d16c:
    // 0x14d16c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d170:
    // 0x14d170: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14d174:
    // 0x14d174: 0xc0573d8  jal         func_15CF60
label_14d178:
    if (ctx->pc == 0x14D178u) {
        ctx->pc = 0x14D17Cu;
        goto label_14d17c;
    }
    ctx->pc = 0x14D174u;
    SET_GPR_U32(ctx, 31, 0x14D17Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D174u, 0x14D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D17Cu;
label_14d17c:
    // 0x14d17c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d180:
    // 0x14d180: 0xc05cf54  jal         func_173D50
label_14d184:
    if (ctx->pc == 0x14D184u) {
        ctx->pc = 0x14D188u;
        goto label_14d188;
    }
    ctx->pc = 0x14D180u;
    SET_GPR_U32(ctx, 31, 0x14D188u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x14D180u, 0x14D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D188u;
label_14d188:
    // 0x14d188: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14d18c:
    if (ctx->pc == 0x14D18Cu) {
        ctx->pc = 0x14D190u;
        goto label_14d190;
    }
    ctx->pc = 0x14D188u;
    {
        const bool branch_taken_0x14d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d188) {
            ctx->pc = 0x14D1ACu;
            goto label_14d1ac;
        }
    }
    ctx->pc = 0x14D190u;
label_14d190:
    // 0x14d190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d194:
    // 0x14d194: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d198:
    // 0x14d198: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14d198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14d19c:
    // 0x14d19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d1a0:
    // 0x14d1a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14d1a4:
    // 0x14d1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14d1a8:
    // 0x14d1a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d1ac:
    // 0x14d1ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14d1b0:
    // 0x14d1b0: 0xc097530  jal         func_25D4C0
label_14d1b4:
    if (ctx->pc == 0x14D1B4u) {
        ctx->pc = 0x14D1B8u;
        goto label_14d1b8;
    }
    ctx->pc = 0x14D1B0u;
    SET_GPR_U32(ctx, 31, 0x14D1B8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D1B0u, 0x14D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1B8u;
label_14d1b8:
    // 0x14d1b8: 0x10000044  b           . + 4 + (0x44 << 2)
label_14d1bc:
    if (ctx->pc == 0x14D1BCu) {
        ctx->pc = 0x14D1C0u;
        goto label_14d1c0;
    }
    ctx->pc = 0x14D1B8u;
    {
        const bool branch_taken_0x14d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1b8) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D1C0u;
label_14d1c0:
    // 0x14d1c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d1c4:
    // 0x14d1c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d1c8:
    // 0x14d1c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14d1cc:
    // 0x14d1cc: 0x24060535  addiu       $a2, $zero, 0x535
    ctx->pc = 0x14d1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1333));
label_14d1d0:
    // 0x14d1d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d1d4:
    // 0x14d1d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14d1d8:
    // 0x14d1d8: 0xc0965d0  jal         func_259740
label_14d1dc:
    if (ctx->pc == 0x14D1DCu) {
        ctx->pc = 0x14D1E0u;
        goto label_14d1e0;
    }
    ctx->pc = 0x14D1D8u;
    SET_GPR_U32(ctx, 31, 0x14D1E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D1D8u, 0x14D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1E0u;
label_14d1e0:
    // 0x14d1e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d1e4:
    // 0x14d1e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14d1e8:
    // 0x14d1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14d1ec:
    // 0x14d1ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d1f0:
    // 0x14d1f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d1f4:
    // 0x14d1f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d1f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14d1f8:
    // 0x14d1f8: 0xc096b40  jal         func_25AD00
label_14d1fc:
    if (ctx->pc == 0x14D1FCu) {
        ctx->pc = 0x14D200u;
        goto label_14d200;
    }
    ctx->pc = 0x14D1F8u;
    SET_GPR_U32(ctx, 31, 0x14D200u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D1F8u, 0x14D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D200u;
label_14d200:
    // 0x14d200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d204:
    // 0x14d204: 0xc05cd10  jal         func_173440
label_14d208:
    if (ctx->pc == 0x14D208u) {
        ctx->pc = 0x14D20Cu;
        goto label_14d20c;
    }
    ctx->pc = 0x14D204u;
    SET_GPR_U32(ctx, 31, 0x14D20Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D204u, 0x14D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D20Cu;
label_14d20c:
    // 0x14d20c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14d210:
    // 0x14d210: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d214:
    // 0x14d214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14d218:
    // 0x14d218: 0xc0573d8  jal         func_15CF60
label_14d21c:
    if (ctx->pc == 0x14D21Cu) {
        ctx->pc = 0x14D220u;
        goto label_14d220;
    }
    ctx->pc = 0x14D218u;
    SET_GPR_U32(ctx, 31, 0x14D220u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D218u, 0x14D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D220u;
label_14d220:
    // 0x14d220: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d220u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14d224:
    // 0x14d224: 0xc097530  jal         func_25D4C0
label_14d228:
    if (ctx->pc == 0x14D228u) {
        ctx->pc = 0x14D22Cu;
        goto label_14d22c;
    }
    ctx->pc = 0x14D224u;
    SET_GPR_U32(ctx, 31, 0x14D22Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D224u, 0x14D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D22Cu;
label_14d22c:
    // 0x14d22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d230:
    // 0x14d230: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14d234:
    // 0x14d234: 0xc057b54  jal         func_15ED50
label_14d238:
    if (ctx->pc == 0x14D238u) {
        ctx->pc = 0x14D23Cu;
        goto label_14d23c;
    }
    ctx->pc = 0x14D234u;
    SET_GPR_U32(ctx, 31, 0x14D23Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14D234u, 0x14D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D23Cu;
label_14d23c:
    // 0x14d23c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_14d240:
    if (ctx->pc == 0x14D240u) {
        ctx->pc = 0x14D244u;
        goto label_14d244;
    }
    ctx->pc = 0x14D23Cu;
    {
        const bool branch_taken_0x14d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d23c) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D244u;
label_14d244:
    // 0x14d244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d248:
    // 0x14d248: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14d248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_14d24c:
    // 0x14d24c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d250:
    // 0x14d250: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14d250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_14d254:
    // 0x14d254: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_14d258:
    if (ctx->pc == 0x14D258u) {
        ctx->pc = 0x14D25Cu;
        goto label_14d25c;
    }
    ctx->pc = 0x14D254u;
    {
        const bool branch_taken_0x14d254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d254) {
            ctx->pc = 0x14D27Cu;
            goto label_14d27c;
        }
    }
    ctx->pc = 0x14D25Cu;
label_14d25c:
    // 0x14d25c: 0xc0585dc  jal         func_161770
label_14d260:
    if (ctx->pc == 0x14D260u) {
        ctx->pc = 0x14D264u;
        goto label_14d264;
    }
    ctx->pc = 0x14D25Cu;
    SET_GPR_U32(ctx, 31, 0x14D264u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14D25Cu, 0x14D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D264u;
label_14d264:
    // 0x14d264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14d268:
    if (ctx->pc == 0x14D268u) {
        ctx->pc = 0x14D26Cu;
        goto label_14d26c;
    }
    ctx->pc = 0x14D264u;
    {
        const bool branch_taken_0x14d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d264) {
            ctx->pc = 0x14D27Cu;
            goto label_14d27c;
        }
    }
    ctx->pc = 0x14D26Cu;
label_14d26c:
    // 0x14d26c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d270:
    // 0x14d270: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14d270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_14d274:
    // 0x14d274: 0x10000015  b           . + 4 + (0x15 << 2)
label_14d278:
    if (ctx->pc == 0x14D278u) {
        ctx->pc = 0x14D27Cu;
        goto label_14d27c;
    }
    ctx->pc = 0x14D274u;
    {
        const bool branch_taken_0x14d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d274) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D27Cu;
label_14d27c:
    // 0x14d27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d280:
    // 0x14d280: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14d284:
    // 0x14d284: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_14d288:
    if (ctx->pc == 0x14D288u) {
        ctx->pc = 0x14D28Cu;
        goto label_14d28c;
    }
    ctx->pc = 0x14D284u;
    {
        const bool branch_taken_0x14d284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d284) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D28Cu;
label_14d28c:
    // 0x14d28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d290:
    // 0x14d290: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d294:
    // 0x14d294: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14d294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14d298:
    // 0x14d298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d29c:
    // 0x14d29c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14d29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14d2a0:
    // 0x14d2a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d2a4:
    // 0x14d2a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14d2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14d2a8:
    // 0x14d2a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d2ac:
    // 0x14d2ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14d2acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14d2b0:
    // 0x14d2b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14d2b4:
    // 0x14d2b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d2b8:
    // 0x14d2b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14d2bc:
    // 0x14d2bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d2c0:
    // 0x14d2c0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14d2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_14d2c4:
    // 0x14d2c4: 0x10000001  b           . + 4 + (0x1 << 2)
label_14d2c8:
    if (ctx->pc == 0x14D2C8u) {
        ctx->pc = 0x14D2CCu;
        goto label_14d2cc;
    }
    ctx->pc = 0x14D2C4u;
    {
        const bool branch_taken_0x14d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2c4) {
            ctx->pc = 0x14D2CCu;
            goto label_14d2cc;
        }
    }
    ctx->pc = 0x14D2CCu;
label_14d2cc:
    // 0x14d2cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x14d2ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14d2d0:
    // 0x14d2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14d2d4:
    // 0x14d2d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d2d8:
    // 0x14d2d8: 0x3e00008  jr          $ra
label_14d2dc:
    if (ctx->pc == 0x14D2DCu) {
        ctx->pc = 0x14D2E0u;
        goto label_fallthrough_0x14d2d8;
    }
    ctx->pc = 0x14D2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d2d8:
    ctx->pc = 0x14D2E0u;
}
