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

// Function: Em0c_R1_mv11
// Address: 0x22c170 - 0x22c6a4
void Em0c_R1_mv11_0x22c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv11_0x22c170");
#endif

    switch (ctx->pc) {
        case 0x22c288u: goto label_22c288;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c338u: goto label_22c338;
        case 0x22c344u: goto label_22c344;
        case 0x22c440u: goto label_22c440;
        case 0x22c47cu: goto label_22c47c;
        case 0x22c488u: goto label_22c488;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c530u: goto label_22c530;
        case 0x22c554u: goto label_22c554;
        default: break;
    }

    ctx->pc = 0x22c170u;

    // 0x22c170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c174: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x22c174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x22c178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c180: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x22c180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x22c184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c188: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x22c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x22c18c: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x22c18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x22c190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c194: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x22c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22c198: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x22c198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x22c19c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c1a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22c1a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22c1a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22c1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22c1a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c1ac: 0x108300c7  beq         $a0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x22C1ACu;
    {
        const bool branch_taken_0x22c1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c1ac) {
            ctx->pc = 0x22C4CCu;
            goto label_22c4cc;
        }
    }
    ctx->pc = 0x22C1B4u;
    // 0x22c1b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c1b8: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x22C1B8u;
    {
        const bool branch_taken_0x22c1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c1b8) {
            ctx->pc = 0x22C46Cu;
            goto label_22c46c;
        }
    }
    ctx->pc = 0x22C1C0u;
    // 0x22c1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c1c4: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x22C1C4u;
    {
        const bool branch_taken_0x22c1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c1c4) {
            ctx->pc = 0x22C328u;
            goto label_22c328;
        }
    }
    ctx->pc = 0x22C1CCu;
    // 0x22c1cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C1CCu;
    {
        const bool branch_taken_0x22c1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1cc) {
            ctx->pc = 0x22C1DCu;
            goto label_22c1dc;
        }
    }
    ctx->pc = 0x22C1D4u;
    // 0x22c1d4: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x22C1D4u;
    {
        const bool branch_taken_0x22c1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1d4) {
            ctx->pc = 0x22C58Cu;
            goto label_22c58c;
        }
    }
    ctx->pc = 0x22C1DCu;
label_22c1dc:
    // 0x22c1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c1e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c1e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c1e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c1ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c1f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c1f4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22c1f8: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x22c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x22c1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c200: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c204: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c208: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c20c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c21c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22c220: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x22c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x22c224: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22c228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c234: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22c238: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22c238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22c23c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c244: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c248: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c24c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22c250: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x22c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x22c254: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c25c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c260: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c264: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22c264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22c268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c26c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c270: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c274: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x22c274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x22c278: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c27c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c280: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C280u;
    SET_GPR_U32(ctx, 31, 0x22C288u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C280u, 0x22C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C288u;
label_22c288:
    // 0x22c288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c28c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c290: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c294: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c298: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22c29c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x22c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x22c2a0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22c2a4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x22c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x22c2a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2ac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22c2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c2b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c2b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c2bc: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22c2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22c2c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C2C0u;
    SET_GPR_U32(ctx, 31, 0x22C2C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C2C0u, 0x22C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2C8u;
label_22c2c8:
    // 0x22c2c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c2cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x22c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22c2d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x22c2d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c2d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22c2d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22c2dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c2e4: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x22c2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c2e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22c2ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22c2f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c2f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2f8: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22c2fc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22c300: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22c300u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22c304: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22C304u;
    SET_GPR_U32(ctx, 31, 0x22C30Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22C304u, 0x22C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C30Cu;
label_22c30c:
    // 0x22c30c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c310: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c314: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x22c314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x22c318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c31c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c320: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c324: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x22c324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_22c328:
    // 0x22c328: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c32c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c330: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C330u;
    SET_GPR_U32(ctx, 31, 0x22C338u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C330u, 0x22C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C338u;
label_22c338:
    // 0x22c338: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c33c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C33Cu;
    SET_GPR_U32(ctx, 31, 0x22C344u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C33Cu, 0x22C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C344u;
label_22c344:
    // 0x22c344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c348: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c34c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c350: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c354: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22c35c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22c35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x22c360: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c364: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c368: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c36c: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x22c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x22c370: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x22c370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22c374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c378: 0x0  nop
    ctx->pc = 0x22c378u;
    // NOP
    // 0x22c37c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c380: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22c384: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c388: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c38c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c390: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22c394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c398: 0x0  nop
    ctx->pc = 0x22c398u;
    // NOP
    // 0x22c39c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c39cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3a0: 0x0  nop
    ctx->pc = 0x22c3a0u;
    // NOP
    // 0x22c3a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22C3A4u;
    {
        const bool branch_taken_0x22c3a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c3a4) {
            ctx->pc = 0x22C3C0u;
            goto label_22c3c0;
        }
    }
    ctx->pc = 0x22C3ACu;
    // 0x22c3ac: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22c3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c3b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c3bc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22c3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22c3c0:
    // 0x22c3c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x22c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3c4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x22c3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x22c3c8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x22c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22c3cc: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x22c3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c3d0: 0x1480006e  bnez        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x22C3D0u;
    {
        const bool branch_taken_0x22c3d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c3d0) {
            ctx->pc = 0x22C58Cu;
            goto label_22c58c;
        }
    }
    ctx->pc = 0x22C3D8u;
    // 0x22c3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c3dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c3e4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22c3e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c3e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c3f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c3f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c400: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c408: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22c408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22c40c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c41c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22c420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c424: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c428: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c42c: 0x24063c24  addiu       $a2, $zero, 0x3C24
    ctx->pc = 0x22c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15396));
    // 0x22c430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c434: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c438: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C438u;
    SET_GPR_U32(ctx, 31, 0x22C440u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C438u, 0x22C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C440u;
label_22c440:
    // 0x22c440: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22c440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c448: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22c448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22c44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c450: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c454: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22c458: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x22c458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x22c45c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22c460: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22c460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x22c464: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x22C464u;
    {
        const bool branch_taken_0x22c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c464) {
            ctx->pc = 0x22C58Cu;
            goto label_22c58c;
        }
    }
    ctx->pc = 0x22C46Cu;
label_22c46c:
    // 0x22c46c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c470: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c474: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C474u;
    SET_GPR_U32(ctx, 31, 0x22C47Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C474u, 0x22C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C47Cu;
label_22c47c:
    // 0x22c47c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c480: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C480u;
    SET_GPR_U32(ctx, 31, 0x22C488u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C480u, 0x22C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C488u;
label_22c488:
    // 0x22c488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c48c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22c48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22c490: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x22C490u;
    {
        const bool branch_taken_0x22c490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c490) {
            ctx->pc = 0x22C58Cu;
            goto label_22c58c;
        }
    }
    ctx->pc = 0x22C498u;
    // 0x22c498: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c49c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c4a4: 0x24060a24  addiu       $a2, $zero, 0xA24
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2596));
    // 0x22c4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c4ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c4b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C4B0u;
    SET_GPR_U32(ctx, 31, 0x22C4B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C4B0u, 0x22C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4B8u;
label_22c4b8:
    // 0x22c4b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c4bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4c0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22c4c4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22C4C4u;
    {
        const bool branch_taken_0x22c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c4c4) {
            ctx->pc = 0x22C58Cu;
            goto label_22c58c;
        }
    }
    ctx->pc = 0x22C4CCu;
label_22c4cc:
    // 0x22c4cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c4d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C4D4u;
    SET_GPR_U32(ctx, 31, 0x22C4DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C4D4u, 0x22C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4DCu;
label_22c4dc:
    // 0x22c4dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C4E0u;
    SET_GPR_U32(ctx, 31, 0x22C4E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C4E0u, 0x22C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4E8u;
label_22c4e8:
    // 0x22c4e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22c4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22c4f0: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x22C4F0u;
    {
        const bool branch_taken_0x22c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c4f0) {
            ctx->pc = 0x22C58Cu;
            goto label_22c58c;
        }
    }
    ctx->pc = 0x22C4F8u;
    // 0x22c4f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c500: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22c500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c50c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22c50cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c514: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22c514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c51c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22c51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c520: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c524: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22c524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22c528: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C528u;
    SET_GPR_U32(ctx, 31, 0x22C530u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C528u, 0x22C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C530u;
label_22c530:
    // 0x22c530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c534: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22c538: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x22c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x22c53c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c540: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22c540u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22c544: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c548: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22c548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c54c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C54Cu;
    SET_GPR_U32(ctx, 31, 0x22C554u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C54Cu, 0x22C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C554u;
label_22c554:
    // 0x22c554: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c558: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22c55c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x22c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x22c560: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22c560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22c564: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22c564u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22c568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c56c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c570: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22c570u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22c574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c578: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c57c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22c580: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x22c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x22c584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22c588: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22c588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_22c58c:
    // 0x22c58c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c590: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c594: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c59c: 0x0  nop
    ctx->pc = 0x22c59cu;
    // NOP
    // 0x22c5a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22c5a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5a4: 0x0  nop
    ctx->pc = 0x22c5a4u;
    // NOP
    // 0x22c5a8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22C5A8u;
    {
        const bool branch_taken_0x22c5a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c5a8) {
            ctx->pc = 0x22C68Cu;
            goto label_22c68c;
        }
    }
    ctx->pc = 0x22C5B0u;
    // 0x22c5b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c5b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c5b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c5bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c5c0: 0x0  nop
    ctx->pc = 0x22c5c0u;
    // NOP
    // 0x22c5c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c5c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5c8: 0x0  nop
    ctx->pc = 0x22c5c8u;
    // NOP
    // 0x22c5cc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22C5CCu;
    {
        const bool branch_taken_0x22c5cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c5cc) {
            ctx->pc = 0x22C634u;
            goto label_22c634;
        }
    }
    ctx->pc = 0x22C5D4u;
    // 0x22c5d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c5d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c5dc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c5e0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c5e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22c5e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c5ec: 0x0  nop
    ctx->pc = 0x22c5ecu;
    // NOP
    // 0x22c5f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22c5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c5f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22c5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c5fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c600: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c608: 0x0  nop
    ctx->pc = 0x22c608u;
    // NOP
    // 0x22c60c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c610: 0x0  nop
    ctx->pc = 0x22c610u;
    // NOP
    // 0x22c614: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22C614u;
    {
        const bool branch_taken_0x22c614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c614) {
            ctx->pc = 0x22C68Cu;
            goto label_22c68c;
        }
    }
    ctx->pc = 0x22C61Cu;
    // 0x22c61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c624: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c628: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22c628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22c62c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22C62Cu;
    {
        const bool branch_taken_0x22c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c62c) {
            ctx->pc = 0x22C68Cu;
            goto label_22c68c;
        }
    }
    ctx->pc = 0x22C634u;
label_22c634:
    // 0x22c634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c638: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c63c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c640: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c644: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22c648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c64c: 0x0  nop
    ctx->pc = 0x22c64cu;
    // NOP
    // 0x22c650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c654: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22c658: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c65c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c660: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c668: 0x0  nop
    ctx->pc = 0x22c668u;
    // NOP
    // 0x22c66c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c66cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c670: 0x0  nop
    ctx->pc = 0x22c670u;
    // NOP
    // 0x22c674: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22C674u;
    {
        const bool branch_taken_0x22c674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c674) {
            ctx->pc = 0x22C68Cu;
            goto label_22c68c;
        }
    }
    ctx->pc = 0x22C67Cu;
    // 0x22c67c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c680: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c684: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c688: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22c688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_22c68c:
    // 0x22c68c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x22c68cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c698: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c69c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C6A4u;
}
