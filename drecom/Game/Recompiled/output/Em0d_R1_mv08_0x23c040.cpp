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

// Function: Em0d_R1_mv08
// Address: 0x23c040 - 0x23c858
void Em0d_R1_mv08_0x23c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv08_0x23c040");
#endif

    switch (ctx->pc) {
        case 0x23c15cu: goto label_23c15c;
        case 0x23c194u: goto label_23c194;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c304u: goto label_23c304;
        case 0x23c310u: goto label_23c310;
        case 0x23c340u: goto label_23c340;
        case 0x23c368u: goto label_23c368;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c468u: goto label_23c468;
        case 0x23c480u: goto label_23c480;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c604u: goto label_23c604;
        case 0x23c658u: goto label_23c658;
        case 0x23c690u: goto label_23c690;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c700u: goto label_23c700;
        default: break;
    }

    ctx->pc = 0x23c040u;

    // 0x23c040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c044: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x23c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x23c048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c04c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x23c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x23c050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c054: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x23c054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x23c058: 0x24633b60  addiu       $v1, $v1, 0x3B60
    ctx->pc = 0x23c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x23c05c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x23c05cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23c060: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c064: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x23c064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23c068: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x23c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c06c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x23c06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23c070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c074: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c078: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x23c078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c07c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x23c07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23c080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c084: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c088: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x23c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c08c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23c08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23c090: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23c090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23c094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c098: 0x0  nop
    ctx->pc = 0x23c098u;
    // NOP
    // 0x23c09c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23c09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23c0a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c0a4: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x23c0a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23c0a8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x23c0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23c0ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c0b0: 0x1083016b  beq         $a0, $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x23C0B0u;
    {
        const bool branch_taken_0x23c0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c0b0) {
            ctx->pc = 0x23C660u;
            goto label_23c660;
        }
    }
    ctx->pc = 0x23C0B8u;
    // 0x23c0b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c0bc: 0x108300d9  beq         $a0, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x23C0BCu;
    {
        const bool branch_taken_0x23c0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c0bc) {
            ctx->pc = 0x23C424u;
            goto label_23c424;
        }
    }
    ctx->pc = 0x23C0C4u;
    // 0x23c0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c0c8: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x23C0C8u;
    {
        const bool branch_taken_0x23c0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c0c8) {
            ctx->pc = 0x23C1F4u;
            goto label_23c1f4;
        }
    }
    ctx->pc = 0x23C0D0u;
    // 0x23c0d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C0D0u;
    {
        const bool branch_taken_0x23c0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0d0) {
            ctx->pc = 0x23C0E0u;
            goto label_23c0e0;
        }
    }
    ctx->pc = 0x23C0D8u;
    // 0x23c0d8: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x23C0D8u;
    {
        const bool branch_taken_0x23c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0d8) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C0E0u;
label_23c0e0:
    // 0x23c0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c0e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c0e8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23c0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23c0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c0f4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c0f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x23c0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x23c0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c104: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c108: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23c108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23c10c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x23c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x23c110: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x23c110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23c114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c118: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c11c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c120: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23c120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x23c124: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23c128: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23c12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c130: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c138: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c13c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c140: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c144: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c148: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x23c14c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c150: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c154: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C154u;
    SET_GPR_U32(ctx, 31, 0x23C15Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C154u, 0x23C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C15Cu;
label_23c15c:
    // 0x23c15c: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x23c160: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23c160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23c164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c168: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c16c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c170: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c174: 0x3c023ae4  lui         $v0, 0x3AE4
    ctx->pc = 0x23c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15076 << 16));
    // 0x23c178: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x23c178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x23c17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c188: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c18c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23C18Cu;
    SET_GPR_U32(ctx, 31, 0x23C194u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23C18Cu, 0x23C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C194u;
label_23c194:
    // 0x23c194: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23c194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23c198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c19c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23C19Cu;
    {
        const bool branch_taken_0x23c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c19c) {
            ctx->pc = 0x23C1D0u;
            goto label_23c1d0;
        }
    }
    ctx->pc = 0x23C1A4u;
    // 0x23c1a4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23c1a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23c1ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23c1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c1b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1b4: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x23c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x23c1b8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23c1bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23c1bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23c1c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23C1C0u;
    SET_GPR_U32(ctx, 31, 0x23C1C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23C1C0u, 0x23C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1C8u;
label_23c1c8:
    // 0x23c1c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23C1C8u;
    {
        const bool branch_taken_0x23c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1c8) {
            ctx->pc = 0x23C1F4u;
            goto label_23c1f4;
        }
    }
    ctx->pc = 0x23C1D0u;
label_23c1d0:
    // 0x23c1d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1d4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23c1d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23c1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23c1dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23c1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c1e0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x23c1e4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23c1e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23c1e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23c1ec: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23C1ECu;
    SET_GPR_U32(ctx, 31, 0x23C1F4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23C1ECu, 0x23C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1F4u;
label_23c1f4:
    // 0x23c1f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c200: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c204: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c208: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c20c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c210: 0xc44d0038  lwc1        $f13, 0x38($v0)
    ctx->pc = 0x23c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c214: 0xc05c848  jal         func_172120
    ctx->pc = 0x23C214u;
    SET_GPR_U32(ctx, 31, 0x23C21Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23C214u, 0x23C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C21Cu;
label_23c21c:
    // 0x23c21c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c220: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x23c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c228: 0x0  nop
    ctx->pc = 0x23c228u;
    // NOP
    // 0x23c22c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c230: 0x0  nop
    ctx->pc = 0x23c230u;
    // NOP
    // 0x23c234: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x23C234u;
    {
        const bool branch_taken_0x23c234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c234) {
            ctx->pc = 0x23C28Cu;
            goto label_23c28c;
        }
    }
    ctx->pc = 0x23C23Cu;
    // 0x23c23c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c240: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c244: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c248: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c24c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23c24cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c250: 0x0  nop
    ctx->pc = 0x23c250u;
    // NOP
    // 0x23c254: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x23C254u;
    {
        const bool branch_taken_0x23c254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c254) {
            ctx->pc = 0x23C2D4u;
            goto label_23c2d4;
        }
    }
    ctx->pc = 0x23C25Cu;
    // 0x23c25c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23c260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c264: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c268: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23c268u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23c26c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c270: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c27c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c280: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c284: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23C284u;
    {
        const bool branch_taken_0x23c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c284) {
            ctx->pc = 0x23C2D4u;
            goto label_23c2d4;
        }
    }
    ctx->pc = 0x23C28Cu;
label_23c28c:
    // 0x23c28c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c290: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c294: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c298: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c29c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c2a0: 0x0  nop
    ctx->pc = 0x23c2a0u;
    // NOP
    // 0x23c2a4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23C2A4u;
    {
        const bool branch_taken_0x23c2a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c2a4) {
            ctx->pc = 0x23C2D4u;
            goto label_23c2d4;
        }
    }
    ctx->pc = 0x23C2ACu;
    // 0x23c2ac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23c2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c2b4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c2b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23c2b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23c2bc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c2c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c2c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c2d0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23c2d4:
    // 0x23c2d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c2dc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c2e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23c2e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c2e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23C2E4u;
    SET_GPR_U32(ctx, 31, 0x23C2ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23C2E4u, 0x23C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2ECu;
label_23c2ec:
    // 0x23c2ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23c2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23c2f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c2fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23C2FCu;
    SET_GPR_U32(ctx, 31, 0x23C304u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23C2FCu, 0x23C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C304u;
label_23c304:
    // 0x23c304: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c308: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23C308u;
    SET_GPR_U32(ctx, 31, 0x23C310u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23C308u, 0x23C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C310u;
label_23c310:
    // 0x23c310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c314: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x23c314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x23c318: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C318u;
    {
        const bool branch_taken_0x23c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c318) {
            ctx->pc = 0x23C340u;
            goto label_23c340;
        }
    }
    ctx->pc = 0x23C320u;
    // 0x23c320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c324: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c32c: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x23c330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c338: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C338u;
    SET_GPR_U32(ctx, 31, 0x23C340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C338u, 0x23C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C340u;
label_23c340:
    // 0x23c340: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23c344: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23c344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23c348: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23c348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23c34c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c354: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23c358: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c35c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c360: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23C360u;
    SET_GPR_U32(ctx, 31, 0x23C368u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23C360u, 0x23C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C368u;
label_23c368:
    // 0x23c368: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x23C368u;
    {
        const bool branch_taken_0x23c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c368) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C370u;
    // 0x23c370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c374: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c378: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23c378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c37c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c380: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c384: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c388: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23c38c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23c390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c394: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c398: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c39c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c3a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23c3b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x23c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x23c3b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23c3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3c8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c3cc: 0x3c023b0e  lui         $v0, 0x3B0E
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15118 << 16));
    // 0x23c3d0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3e0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c3e4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x23c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x23c3e8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3f8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c3fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c400: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c404: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c408: 0x3406b405  ori         $a2, $zero, 0xB405
    ctx->pc = 0x23c408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46085);
    // 0x23c40c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c410: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c414: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C414u;
    SET_GPR_U32(ctx, 31, 0x23C41Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C414u, 0x23C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C41Cu;
label_23c41c:
    // 0x23c41c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x23C41Cu;
    {
        const bool branch_taken_0x23c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c41c) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C424u;
label_23c424:
    // 0x23c424: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c42c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c430: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c434: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c438: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c43c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c440: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x23c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c444: 0xc05c848  jal         func_172120
    ctx->pc = 0x23C444u;
    SET_GPR_U32(ctx, 31, 0x23C44Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23C444u, 0x23C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C44Cu;
label_23c44c:
    // 0x23c44c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c450: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c454: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c458: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c45c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23c45cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c460: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23C460u;
    SET_GPR_U32(ctx, 31, 0x23C468u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23C460u, 0x23C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C468u;
label_23c468:
    // 0x23c468: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c46c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23c46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23c470: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c474: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c478: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23C478u;
    SET_GPR_U32(ctx, 31, 0x23C480u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23C478u, 0x23C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c484: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23C484u;
    SET_GPR_U32(ctx, 31, 0x23C48Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23C484u, 0x23C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C48Cu;
label_23c48c:
    // 0x23c48c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c490: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23c490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23c494: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C494u;
    {
        const bool branch_taken_0x23c494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c494) {
            ctx->pc = 0x23C4BCu;
            goto label_23c4bc;
        }
    }
    ctx->pc = 0x23C49Cu;
    // 0x23c49c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c4a8: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x23c4ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c4b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c4b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C4B4u;
    SET_GPR_U32(ctx, 31, 0x23C4BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C4B4u, 0x23C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4BCu;
label_23c4bc:
    // 0x23c4bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c4c4: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x23c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c4c8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x23c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x23c4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c4d0: 0x0  nop
    ctx->pc = 0x23c4d0u;
    // NOP
    // 0x23c4d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c4d8: 0x0  nop
    ctx->pc = 0x23c4d8u;
    // NOP
    // 0x23c4dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23C4DCu;
    {
        const bool branch_taken_0x23c4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c4dc) {
            ctx->pc = 0x23C4F8u;
            goto label_23c4f8;
        }
    }
    ctx->pc = 0x23C4E4u;
    // 0x23c4e4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x23c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x23c4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c4ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c4f4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23c4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_23c4f8:
    // 0x23c4f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4fc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c500: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c504: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23c504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c508: 0x0  nop
    ctx->pc = 0x23c508u;
    // NOP
    // 0x23c50c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23C50Cu;
    {
        const bool branch_taken_0x23c50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c50c) {
            ctx->pc = 0x23C530u;
            goto label_23c530;
        }
    }
    ctx->pc = 0x23C514u;
    // 0x23c514: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c518: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23c518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c51c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23c520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c524: 0x0  nop
    ctx->pc = 0x23c524u;
    // NOP
    // 0x23c528: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23c528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23c52c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23c52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_23c530:
    // 0x23c530: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c534: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c538: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c53c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23c53cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c540: 0x0  nop
    ctx->pc = 0x23c540u;
    // NOP
    // 0x23c544: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23C544u;
    {
        const bool branch_taken_0x23c544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c544) {
            ctx->pc = 0x23C568u;
            goto label_23c568;
        }
    }
    ctx->pc = 0x23C54Cu;
    // 0x23c54c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c550: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c554: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23c554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23c558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c55c: 0x0  nop
    ctx->pc = 0x23c55cu;
    // NOP
    // 0x23c560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23c560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c564: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23c564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_23c568:
    // 0x23c568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c56c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c570: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x23c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c574: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23c574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23c578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c57c: 0x0  nop
    ctx->pc = 0x23c57cu;
    // NOP
    // 0x23c580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c584: 0x0  nop
    ctx->pc = 0x23c584u;
    // NOP
    // 0x23c588: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x23C588u;
    {
        const bool branch_taken_0x23c588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c588) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C590u;
    // 0x23c590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c594: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c598: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23c598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c59c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5a8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23c5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23c5ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5b8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c5bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5cc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23c5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23c5d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5e0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c5e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c5f0: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x23c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x23c5f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c5f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c5fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C5FCu;
    SET_GPR_U32(ctx, 31, 0x23C604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C5FCu, 0x23C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C604u;
label_23c604:
    // 0x23c604: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x23c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x23c608: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c610: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c614: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c618: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c61c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x23c620: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c628: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c62c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c630: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c634: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23c638: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23c63c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23c63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c644: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x23c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x23c648: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23c648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23c64c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23c64cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23c650: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23C650u;
    SET_GPR_U32(ctx, 31, 0x23C658u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23C650u, 0x23C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C658u;
label_23c658:
    // 0x23c658: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23C658u;
    {
        const bool branch_taken_0x23c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c658) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C660u;
label_23c660:
    // 0x23c660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c664: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c668: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c66c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c674: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c678: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c67c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c680: 0xc46d0050  lwc1        $f13, 0x50($v1)
    ctx->pc = 0x23c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c684: 0xc44e003c  lwc1        $f14, 0x3C($v0)
    ctx->pc = 0x23c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x23c688: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x23C688u;
    SET_GPR_U32(ctx, 31, 0x23C690u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x23C688u, 0x23C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C690u;
label_23c690:
    // 0x23c690: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c694: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c698: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c69c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c6a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23c6a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c6a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23C6A4u;
    SET_GPR_U32(ctx, 31, 0x23C6ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23C6A4u, 0x23C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6ACu;
label_23c6ac:
    // 0x23c6ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6b0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23c6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23c6b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c6bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23C6BCu;
    SET_GPR_U32(ctx, 31, 0x23C6C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23C6BCu, 0x23C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6C4u;
label_23c6c4:
    // 0x23c6c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23C6C8u;
    SET_GPR_U32(ctx, 31, 0x23C6D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23C6C8u, 0x23C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6D0u;
label_23c6d0:
    // 0x23c6d0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23c6d4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23c6d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23c6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23c6dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c6ec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c6f0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c6f4: 0xc44d0050  lwc1        $f13, 0x50($v0)
    ctx->pc = 0x23c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c6f8: 0xc05cbac  jal         func_172EB0
    ctx->pc = 0x23C6F8u;
    SET_GPR_U32(ctx, 31, 0x23C700u);
    ctx->pc = 0x172EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172EB0u, 0x23C6F8u, 0x23C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C700u;
label_23c700:
    // 0x23c700: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23C700u;
    {
        const bool branch_taken_0x23c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c700) {
            ctx->pc = 0x23C744u;
            goto label_23c744;
        }
    }
    ctx->pc = 0x23C708u;
    // 0x23c708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c70c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23c710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23c714: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c718: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x23c718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c71c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c720: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c728: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23c728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c72c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23c730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23c734: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23c738: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x23c738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23c73c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x23c73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x23c740: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23c740u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23c744:
    // 0x23c744: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c748: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c74c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c754: 0x0  nop
    ctx->pc = 0x23c754u;
    // NOP
    // 0x23c758: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23c758u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c75c: 0x0  nop
    ctx->pc = 0x23c75cu;
    // NOP
    // 0x23c760: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23C760u;
    {
        const bool branch_taken_0x23c760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c760) {
            ctx->pc = 0x23C844u;
            goto label_23c844;
        }
    }
    ctx->pc = 0x23C768u;
    // 0x23c768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c76c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c770: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c778: 0x0  nop
    ctx->pc = 0x23c778u;
    // NOP
    // 0x23c77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23c77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c780: 0x0  nop
    ctx->pc = 0x23c780u;
    // NOP
    // 0x23c784: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23C784u;
    {
        const bool branch_taken_0x23c784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c784) {
            ctx->pc = 0x23C7ECu;
            goto label_23c7ec;
        }
    }
    ctx->pc = 0x23C78Cu;
    // 0x23c78c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c790: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c794: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c798: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23c79c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x23c79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23c7a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23c7a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c7a4: 0x0  nop
    ctx->pc = 0x23c7a4u;
    // NOP
    // 0x23c7a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23c7a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23c7ac: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23c7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23c7b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c7b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c7b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c7c0: 0x0  nop
    ctx->pc = 0x23c7c0u;
    // NOP
    // 0x23c7c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c7c8: 0x0  nop
    ctx->pc = 0x23c7c8u;
    // NOP
    // 0x23c7cc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23C7CCu;
    {
        const bool branch_taken_0x23c7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c7cc) {
            ctx->pc = 0x23C844u;
            goto label_23c844;
        }
    }
    ctx->pc = 0x23C7D4u;
    // 0x23c7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c7d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c7dc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x23c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23c7e0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23c7e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23C7E4u;
    {
        const bool branch_taken_0x23c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7e4) {
            ctx->pc = 0x23C844u;
            goto label_23c844;
        }
    }
    ctx->pc = 0x23C7ECu;
label_23c7ec:
    // 0x23c7ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c7f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c7f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c7f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23c7fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23c7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23c800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c804: 0x0  nop
    ctx->pc = 0x23c804u;
    // NOP
    // 0x23c808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23c808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c80c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23c80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23c810: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c814: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c818: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c820: 0x0  nop
    ctx->pc = 0x23c820u;
    // NOP
    // 0x23c824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23c824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c828: 0x0  nop
    ctx->pc = 0x23c828u;
    // NOP
    // 0x23c82c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23C82Cu;
    {
        const bool branch_taken_0x23c82c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c82c) {
            ctx->pc = 0x23C844u;
            goto label_23c844;
        }
    }
    ctx->pc = 0x23C834u;
    // 0x23c834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c83c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c840: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23c844:
    // 0x23c844: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x23c844u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c84c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23c84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23c850: 0x3e00008  jr          $ra
    ctx->pc = 0x23C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C858u;
}
