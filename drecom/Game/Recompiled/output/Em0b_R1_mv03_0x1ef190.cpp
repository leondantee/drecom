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

// Function: Em0b_R1_mv03
// Address: 0x1ef190 - 0x1ef6c0
void Em0b_R1_mv03_0x1ef190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv03_0x1ef190");
#endif

    switch (ctx->pc) {
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef280u: goto label_1ef280;
        case 0x1ef320u: goto label_1ef320;
        case 0x1ef36cu: goto label_1ef36c;
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef3a0u: goto label_1ef3a0;
        case 0x1ef3acu: goto label_1ef3ac;
        case 0x1ef3dcu: goto label_1ef3dc;
        case 0x1ef434u: goto label_1ef434;
        case 0x1ef480u: goto label_1ef480;
        case 0x1ef49cu: goto label_1ef49c;
        case 0x1ef4b4u: goto label_1ef4b4;
        case 0x1ef4c0u: goto label_1ef4c0;
        case 0x1ef658u: goto label_1ef658;
        case 0x1ef67cu: goto label_1ef67c;
        case 0x1ef6b0u: goto label_1ef6b0;
        default: break;
    }

    ctx->pc = 0x1ef190u;

    // 0x1ef190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef194: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ef194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ef198: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1ef198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1ef19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1ef1a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ef1a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ef1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef1a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ef1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef1ac: 0x10830090  beq         $a0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x1EF1ACu;
    {
        const bool branch_taken_0x1ef1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef1ac) {
            ctx->pc = 0x1EF3F0u;
            goto label_1ef3f0;
        }
    }
    ctx->pc = 0x1EF1B4u;
    // 0x1ef1b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef1b8: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EF1B8u;
    {
        const bool branch_taken_0x1ef1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef1b8) {
            ctx->pc = 0x1EF29Cu;
            goto label_1ef29c;
        }
    }
    ctx->pc = 0x1EF1C0u;
    // 0x1ef1c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF1C0u;
    {
        const bool branch_taken_0x1ef1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1c0) {
            ctx->pc = 0x1EF1D0u;
            goto label_1ef1d0;
        }
    }
    ctx->pc = 0x1EF1C8u;
    // 0x1ef1c8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1EF1C8u;
    {
        const bool branch_taken_0x1ef1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1c8) {
            ctx->pc = 0x1EF4C0u;
            goto label_1ef4c0;
        }
    }
    ctx->pc = 0x1EF1D0u;
label_1ef1d0:
    // 0x1ef1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef1d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1d8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ef1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef1dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef1e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ef1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ef1e8: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1ef1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1ef1ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef1f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ef1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ef1f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EF1F4u;
    SET_GPR_U32(ctx, 31, 0x1EF1FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EF1F4u, 0x1EF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1FCu;
label_1ef1fc:
    // 0x1ef1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef200: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef204: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef208: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ef208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ef20c: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1ef20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1ef210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef21c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef220: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ef224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef228: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef22c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef230: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ef230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ef234: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ef234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ef238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef23c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef240: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef244: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ef248: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ef248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef24c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef254: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef258: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef25c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ef25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ef260: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ef264: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef26c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef270: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef274: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ef274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ef278: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF278u;
    SET_GPR_U32(ctx, 31, 0x1EF280u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF278u, 0x1EF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF280u;
label_1ef280:
    // 0x1ef280: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef284: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1ef284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1ef288: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ef288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ef28c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ef28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ef290: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef294: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef298: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ef298u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1ef29c:
    // 0x1ef29c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef2a0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef2a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ef2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef2a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ef2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ef2ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF2ACu;
    {
        const bool branch_taken_0x1ef2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2ac) {
            ctx->pc = 0x1EF2DCu;
            goto label_1ef2dc;
        }
    }
    ctx->pc = 0x1EF2B4u;
    // 0x1ef2b4: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1ef2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1ef2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef2bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef2c4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef2c8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ef2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ef2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef2d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef2d8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1ef2dc:
    // 0x1ef2dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef2e4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ef2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ef2e8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ef2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ef2ec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF2ECu;
    {
        const bool branch_taken_0x1ef2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2ec) {
            ctx->pc = 0x1EF32Cu;
            goto label_1ef32c;
        }
    }
    ctx->pc = 0x1EF2F4u;
    // 0x1ef2f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ef2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef300: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef304: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef308: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ef308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef30c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef310: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef314: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef318: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF318u;
    SET_GPR_U32(ctx, 31, 0x1EF320u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF318u, 0x1EF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF320u;
label_1ef320:
    // 0x1ef320: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ef324: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF324u;
    {
        const bool branch_taken_0x1ef324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef324) {
            ctx->pc = 0x1EF370u;
            goto label_1ef370;
        }
    }
    ctx->pc = 0x1EF32Cu;
label_1ef32c:
    // 0x1ef32c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef334: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef338: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ef338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ef33c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef344: 0x0  nop
    ctx->pc = 0x1ef344u;
    // NOP
    // 0x1ef348: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ef348u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef34c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef350: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef354: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef358: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef35c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef360: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef364: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF364u;
    SET_GPR_U32(ctx, 31, 0x1EF36Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF364u, 0x1EF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF36Cu;
label_1ef36c:
    // 0x1ef36c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ef370:
    // 0x1ef370: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef374: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef378: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef37c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ef37cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef380: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EF380u;
    SET_GPR_U32(ctx, 31, 0x1EF388u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EF380u, 0x1EF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF388u;
label_1ef388:
    // 0x1ef388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef38c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ef38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ef390: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef394: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ef394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef398: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EF398u;
    SET_GPR_U32(ctx, 31, 0x1EF3A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EF398u, 0x1EF3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3A0u;
label_1ef3a0:
    // 0x1ef3a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3a4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EF3A4u;
    SET_GPR_U32(ctx, 31, 0x1EF3ACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EF3A4u, 0x1EF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3ACu;
label_1ef3ac:
    // 0x1ef3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ef3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ef3b4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1EF3B4u;
    {
        const bool branch_taken_0x1ef3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3b4) {
            ctx->pc = 0x1EF4C0u;
            goto label_1ef4c0;
        }
    }
    ctx->pc = 0x1EF3BCu;
    // 0x1ef3bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ef3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ef3c8: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1ef3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1ef3cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef3d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ef3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ef3d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EF3D4u;
    SET_GPR_U32(ctx, 31, 0x1EF3DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EF3D4u, 0x1EF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3DCu;
label_1ef3dc:
    // 0x1ef3dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3e4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ef3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef3e8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EF3E8u;
    {
        const bool branch_taken_0x1ef3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3e8) {
            ctx->pc = 0x1EF4C0u;
            goto label_1ef4c0;
        }
    }
    ctx->pc = 0x1EF3F0u;
label_1ef3f0:
    // 0x1ef3f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef3f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ef3fc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ef3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ef400: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF400u;
    {
        const bool branch_taken_0x1ef400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef400) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF408u;
    // 0x1ef408: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef40c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ef40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef414: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef418: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef41c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ef41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef420: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef424: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef428: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef42c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF42Cu;
    SET_GPR_U32(ctx, 31, 0x1EF434u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF42Cu, 0x1EF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF434u;
label_1ef434:
    // 0x1ef434: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ef438: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF438u;
    {
        const bool branch_taken_0x1ef438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef438) {
            ctx->pc = 0x1EF484u;
            goto label_1ef484;
        }
    }
    ctx->pc = 0x1EF440u;
label_1ef440:
    // 0x1ef440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef448: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef44c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ef44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ef450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef458: 0x0  nop
    ctx->pc = 0x1ef458u;
    // NOP
    // 0x1ef45c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ef45cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef464: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef468: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef46c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef470: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef474: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef478: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF478u;
    SET_GPR_U32(ctx, 31, 0x1EF480u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF478u, 0x1EF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF480u;
label_1ef480:
    // 0x1ef480: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ef484:
    // 0x1ef484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef488: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef48c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef490: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ef490u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef494: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EF494u;
    SET_GPR_U32(ctx, 31, 0x1EF49Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EF494u, 0x1EF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF49Cu;
label_1ef49c:
    // 0x1ef49c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ef4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ef4a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ef4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef4ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EF4ACu;
    SET_GPR_U32(ctx, 31, 0x1EF4B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EF4ACu, 0x1EF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4B4u;
label_1ef4b4:
    // 0x1ef4b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EF4B8u;
    SET_GPR_U32(ctx, 31, 0x1EF4C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EF4B8u, 0x1EF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4C0u;
label_1ef4c0:
    // 0x1ef4c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ef4c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef4c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef4d0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ef4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4d8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1ef4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef4dc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1ef4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1ef4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef4e4: 0x0  nop
    ctx->pc = 0x1ef4e4u;
    // NOP
    // 0x1ef4e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef4ec: 0x0  nop
    ctx->pc = 0x1ef4ecu;
    // NOP
    // 0x1ef4f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF4F0u;
    {
        const bool branch_taken_0x1ef4f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef4f0) {
            ctx->pc = 0x1EF50Cu;
            goto label_1ef50c;
        }
    }
    ctx->pc = 0x1EF4F8u;
    // 0x1ef4f8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1ef4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1ef4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef500: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef504: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef508: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1ef50c:
    // 0x1ef50c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef510: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef514: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef518: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ef518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ef51c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF51Cu;
    {
        const bool branch_taken_0x1ef51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef51c) {
            ctx->pc = 0x1EF538u;
            goto label_1ef538;
        }
    }
    ctx->pc = 0x1EF524u;
    // 0x1ef524: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1ef524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1ef528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef52c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef530: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef534: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1ef538:
    // 0x1ef538: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef53c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef540: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef548: 0x0  nop
    ctx->pc = 0x1ef548u;
    // NOP
    // 0x1ef54c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ef54cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef550: 0x0  nop
    ctx->pc = 0x1ef550u;
    // NOP
    // 0x1ef554: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1EF554u;
    {
        const bool branch_taken_0x1ef554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef554) {
            ctx->pc = 0x1EF638u;
            goto label_1ef638;
        }
    }
    ctx->pc = 0x1EF55Cu;
    // 0x1ef55c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef560: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef564: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef56c: 0x0  nop
    ctx->pc = 0x1ef56cu;
    // NOP
    // 0x1ef570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef574: 0x0  nop
    ctx->pc = 0x1ef574u;
    // NOP
    // 0x1ef578: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF578u;
    {
        const bool branch_taken_0x1ef578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef578) {
            ctx->pc = 0x1EF5E0u;
            goto label_1ef5e0;
        }
    }
    ctx->pc = 0x1EF580u;
    // 0x1ef580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef584: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ef584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef588: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ef588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef58c: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1ef58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef590: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ef590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ef594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef598: 0x0  nop
    ctx->pc = 0x1ef598u;
    // NOP
    // 0x1ef59c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ef59cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ef5a0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ef5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ef5a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef5a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef5ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef5b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef5b4: 0x0  nop
    ctx->pc = 0x1ef5b4u;
    // NOP
    // 0x1ef5b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef5bc: 0x0  nop
    ctx->pc = 0x1ef5bcu;
    // NOP
    // 0x1ef5c0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1EF5C0u;
    {
        const bool branch_taken_0x1ef5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef5c0) {
            ctx->pc = 0x1EF638u;
            goto label_1ef638;
        }
    }
    ctx->pc = 0x1EF5C8u;
    // 0x1ef5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef5cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef5d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef5d4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ef5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ef5d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF5D8u;
    {
        const bool branch_taken_0x1ef5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5d8) {
            ctx->pc = 0x1EF638u;
            goto label_1ef638;
        }
    }
    ctx->pc = 0x1EF5E0u;
label_1ef5e0:
    // 0x1ef5e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef5e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ef5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef5e8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ef5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef5ec: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1ef5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef5f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ef5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ef5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef5f8: 0x0  nop
    ctx->pc = 0x1ef5f8u;
    // NOP
    // 0x1ef5fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ef5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef600: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ef600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ef604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef608: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef60c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef614: 0x0  nop
    ctx->pc = 0x1ef614u;
    // NOP
    // 0x1ef618: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef61c: 0x0  nop
    ctx->pc = 0x1ef61cu;
    // NOP
    // 0x1ef620: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF620u;
    {
        const bool branch_taken_0x1ef620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef620) {
            ctx->pc = 0x1EF638u;
            goto label_1ef638;
        }
    }
    ctx->pc = 0x1EF628u;
    // 0x1ef628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef62c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef630: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef634: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ef634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1ef638:
    // 0x1ef638: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ef638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef63c: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x1ef63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1ef640: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ef644: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1ef644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef648: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF648u;
    {
        const bool branch_taken_0x1ef648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef648) {
            ctx->pc = 0x1EF6B0u;
            goto label_1ef6b0;
        }
    }
    ctx->pc = 0x1EF650u;
    // 0x1ef650: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF650u;
    SET_GPR_U32(ctx, 31, 0x1EF658u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF650u, 0x1EF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF658u;
label_1ef658:
    // 0x1ef658: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef65c: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1ef65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1ef660: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ef660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ef664: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ef664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ef668: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef66c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef670: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ef670u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef674: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF674u;
    SET_GPR_U32(ctx, 31, 0x1EF67Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF674u, 0x1EF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF67Cu;
label_1ef67c:
    // 0x1ef67c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ef67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef680: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1ef680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1ef684: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF684u;
    {
        const bool branch_taken_0x1ef684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef684) {
            ctx->pc = 0x1EF6B0u;
            goto label_1ef6b0;
        }
    }
    ctx->pc = 0x1EF68Cu;
    // 0x1ef68c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1ef690: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef694: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef69c: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1ef69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1ef6a0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1ef6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ef6a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef6a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef6a8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF6A8u;
    SET_GPR_U32(ctx, 31, 0x1EF6B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF6A8u, 0x1EF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6B0u;
label_1ef6b0:
    // 0x1ef6b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ef6b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef6b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6C0u;
}
