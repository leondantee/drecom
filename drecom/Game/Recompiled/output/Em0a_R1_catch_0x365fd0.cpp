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

// Function: Em0a_R1_catch
// Address: 0x365fd0 - 0x3661a4
void Em0a_R1_catch_0x365fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_catch_0x365fd0");
#endif

    switch (ctx->pc) {
        case 0x366050u: goto label_366050;
        case 0x366064u: goto label_366064;
        case 0x366070u: goto label_366070;
        case 0x3660a8u: goto label_3660a8;
        case 0x3660ccu: goto label_3660cc;
        case 0x3660ecu: goto label_3660ec;
        case 0x366110u: goto label_366110;
        case 0x366130u: goto label_366130;
        case 0x366140u: goto label_366140;
        case 0x366158u: goto label_366158;
        case 0x36618cu: goto label_36618c;
        default: break;
    }

    ctx->pc = 0x365fd0u;

    // 0x365fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x365fd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x365fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x365fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365fe0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x365fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x365fe4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x365fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x365fe8: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x365fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x365fec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365ff0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x365ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x365ff4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x365ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x365ff8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x365ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x365ffc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x365ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x366000: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x366000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x366004: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x366004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x366008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36600c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36600cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366010: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x366010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366018: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x366018u;
    {
        const bool branch_taken_0x366018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366018) {
            ctx->pc = 0x366098u;
            goto label_366098;
        }
    }
    ctx->pc = 0x366020u;
    // 0x366020: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366020u;
    {
        const bool branch_taken_0x366020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366020) {
            ctx->pc = 0x366030u;
            goto label_366030;
        }
    }
    ctx->pc = 0x366028u;
    // 0x366028: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x366028u;
    {
        const bool branch_taken_0x366028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366028) {
            ctx->pc = 0x36618Cu;
            goto label_36618c;
        }
    }
    ctx->pc = 0x366030u;
label_366030:
    // 0x366030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366038: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36603c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x36603cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x366040: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x366040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x366044: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366048: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366048u;
    SET_GPR_U32(ctx, 31, 0x366050u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366048u, 0x366050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366050u;
label_366050:
    // 0x366050: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366054: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366058: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x366058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x36605c: 0xc096c60  jal         func_25B180
    ctx->pc = 0x36605Cu;
    SET_GPR_U32(ctx, 31, 0x366064u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x36605Cu, 0x366064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366064u;
label_366064:
    // 0x366064: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366068: 0xc05ce54  jal         func_173950
    ctx->pc = 0x366068u;
    SET_GPR_U32(ctx, 31, 0x366070u);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x366068u, 0x366070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366070u;
label_366070:
    // 0x366070: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x366070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366074: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366078: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x36607c: 0xae0013fc  sw          $zero, 0x13FC($s0)
    ctx->pc = 0x36607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5116), GPR_U32(ctx, 0));
    // 0x366080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366084: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x366084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x366088: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36608c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36608cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366094: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366098:
    // 0x366098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36609c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36609cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3660a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3660A0u;
    SET_GPR_U32(ctx, 31, 0x3660A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3660A0u, 0x3660A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660A8u;
label_3660a8:
    // 0x3660a8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3660a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3660ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3660acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3660b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3660b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3660b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3660b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660bc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x3660bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3660c0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x3660c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3660c4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3660C4u;
    SET_GPR_U32(ctx, 31, 0x3660CCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3660C4u, 0x3660CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660CCu;
label_3660cc:
    // 0x3660cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3660d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3660d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3660d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x3660d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3660d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3660dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3660dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3660e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3660e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660e4: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x3660E4u;
    SET_GPR_U32(ctx, 31, 0x3660ECu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x3660E4u, 0x3660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660ECu;
label_3660ec:
    // 0x3660ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660f0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x3660f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x3660f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3660F4u;
    {
        const bool branch_taken_0x3660f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3660f4) {
            ctx->pc = 0x366110u;
            goto label_366110;
        }
    }
    ctx->pc = 0x3660FCu;
    // 0x3660fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366100: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366104: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366108: 0xc05cd58  jal         func_173560
    ctx->pc = 0x366108u;
    SET_GPR_U32(ctx, 31, 0x366110u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x366108u, 0x366110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366110u;
label_366110:
    // 0x366110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366114: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366118: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x366118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x36611c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366120: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366124: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366128: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366128u;
    SET_GPR_U32(ctx, 31, 0x366130u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366130u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366130u) { return; }
    ctx->pc = 0x366130u;
label_366130:
    // 0x366130: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366138: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366138u;
    SET_GPR_U32(ctx, 31, 0x366140u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366138u, 0x366140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366140u;
label_366140:
    // 0x366140: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366144: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366148: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36614c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36614cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366150: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x366150u;
    SET_GPR_U32(ctx, 31, 0x366158u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x366150u, 0x366158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366158u;
label_366158:
    // 0x366158: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36615c: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x36615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366160: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x366160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366168: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x36616c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366170: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x366170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366174: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x366174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36617c: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x36617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x366180: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366184: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366184u;
    SET_GPR_U32(ctx, 31, 0x36618Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366184u, 0x36618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36618Cu;
label_36618c:
    // 0x36618c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36618cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x366190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366198: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x366198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36619c: 0x3e00008  jr          $ra
    ctx->pc = 0x36619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36619Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3661A4u;
}
