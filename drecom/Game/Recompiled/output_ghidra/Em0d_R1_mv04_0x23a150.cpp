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

// Function: Em0d_R1_mv04
// Address: 0x23a150 - 0x23a670
void Em0d_R1_mv04_0x23a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv04_0x23a150");
#endif

    switch (ctx->pc) {
        case 0x23a204u: goto label_23a204;
        case 0x23a264u: goto label_23a264;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a2a0u: goto label_23a2a0;
        case 0x23a2ccu: goto label_23a2cc;
        case 0x23a2f8u: goto label_23a2f8;
        case 0x23a3c8u: goto label_23a3c8;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3ecu: goto label_23a3ec;
        case 0x23a41cu: goto label_23a41c;
        case 0x23a448u: goto label_23a448;
        case 0x23a488u: goto label_23a488;
        case 0x23a4acu: goto label_23a4ac;
        case 0x23a51cu: goto label_23a51c;
        case 0x23a540u: goto label_23a540;
        default: break;
    }

    ctx->pc = 0x23a150u;

    // 0x23a150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a154: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x23a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x23a158: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x23a158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x23a15c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a160: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23a160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23a164: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23a164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23a168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a16c: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x23A16Cu;
    {
        const bool branch_taken_0x23a16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23a16c) {
            ctx->pc = 0x23A2CCu;
            goto label_23a2cc;
        }
    }
    ctx->pc = 0x23A174u;
    // 0x23a174: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A174u;
    {
        const bool branch_taken_0x23a174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a174) {
            ctx->pc = 0x23A184u;
            goto label_23a184;
        }
    }
    ctx->pc = 0x23A17Cu;
    // 0x23a17c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x23A17Cu;
    {
        const bool branch_taken_0x23a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a17c) {
            ctx->pc = 0x23A560u;
            goto label_23a560;
        }
    }
    ctx->pc = 0x23A184u;
label_23a184:
    // 0x23a184: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a188: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x23a188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23a18c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a190: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x23a190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a19c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1a0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23a1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23a1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1b0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a1b4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23a1b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23a1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1c8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23a1cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23a1d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23a1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1e0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23a1e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a1f0: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x23a1f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a1f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a1fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A1FCu;
    SET_GPR_U32(ctx, 31, 0x23A204u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A1FCu, 0x23A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A204u;
label_23a204:
    // 0x23a204: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x23a204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x23a208: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23a20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a210: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a214: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a218: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23a218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23a21c: 0x3c023ae4  lui         $v0, 0x3AE4
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15076 << 16));
    // 0x23a220: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x23a224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a228: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a22c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a230: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23a234: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x23a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x23a238: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a23c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23a23cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a240: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23a244: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23a244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23a248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23a248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a24c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a250: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x23a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x23a254: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23a258: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23a258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23a25c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23A25Cu;
    SET_GPR_U32(ctx, 31, 0x23A264u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23A25Cu, 0x23A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A264u;
label_23a264:
    // 0x23a264: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A264u;
    SET_GPR_U32(ctx, 31, 0x23A26Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A264u, 0x23A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A26Cu;
label_23a26c:
    // 0x23a26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23a274: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23A274u;
    {
        const bool branch_taken_0x23a274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a274) {
            ctx->pc = 0x23A2A8u;
            goto label_23a2a8;
        }
    }
    ctx->pc = 0x23A27Cu;
    // 0x23a27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a280: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23a284: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23a288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23a288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a28c: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x23a290: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a294: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23a294u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23a298: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23A298u;
    SET_GPR_U32(ctx, 31, 0x23A2A0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23A298u, 0x23A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2A0u;
label_23a2a0:
    // 0x23a2a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23A2A0u;
    {
        const bool branch_taken_0x23a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a2a0) {
            ctx->pc = 0x23A2CCu;
            goto label_23a2cc;
        }
    }
    ctx->pc = 0x23A2A8u;
label_23a2a8:
    // 0x23a2a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2ac: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23a2b0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23a2b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23a2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a2b8: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x23a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x23a2bc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a2c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23a2c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23a2c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23A2C4u;
    SET_GPR_U32(ctx, 31, 0x23A2CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23A2C4u, 0x23A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2CCu;
label_23a2cc:
    // 0x23a2cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a2dc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23a2e0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a2e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a2e8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a2ec: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23a2f0: 0xc05c848  jal         func_172120
    ctx->pc = 0x23A2F0u;
    SET_GPR_U32(ctx, 31, 0x23A2F8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23A2F0u, 0x23A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2F8u;
label_23a2f8:
    // 0x23a2f8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23a2fc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x23a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a304: 0x0  nop
    ctx->pc = 0x23a304u;
    // NOP
    // 0x23a308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a30c: 0x0  nop
    ctx->pc = 0x23a30cu;
    // NOP
    // 0x23a310: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x23A310u;
    {
        const bool branch_taken_0x23a310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a310) {
            ctx->pc = 0x23A368u;
            goto label_23a368;
        }
    }
    ctx->pc = 0x23A318u;
    // 0x23a318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a31c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a320: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a324: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a328: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a32c: 0x0  nop
    ctx->pc = 0x23a32cu;
    // NOP
    // 0x23a330: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x23A330u;
    {
        const bool branch_taken_0x23a330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a330) {
            ctx->pc = 0x23A3B0u;
            goto label_23a3b0;
        }
    }
    ctx->pc = 0x23A338u;
    // 0x23a338: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a340: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a344: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a344u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a348: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23a34c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a354: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a358: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a35c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a360: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23A360u;
    {
        const bool branch_taken_0x23a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a360) {
            ctx->pc = 0x23A3B0u;
            goto label_23a3b0;
        }
    }
    ctx->pc = 0x23A368u;
label_23a368:
    // 0x23a368: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a36c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a370: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a374: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a37c: 0x0  nop
    ctx->pc = 0x23a37cu;
    // NOP
    // 0x23a380: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23A380u;
    {
        const bool branch_taken_0x23a380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a380) {
            ctx->pc = 0x23A3B0u;
            goto label_23a3b0;
        }
    }
    ctx->pc = 0x23A388u;
    // 0x23a388: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a38c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a390: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a394: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a394u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a398: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23a39c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a3a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a3ac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23a3b0:
    // 0x23a3b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a3b8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a3bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23a3bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a3c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23A3C0u;
    SET_GPR_U32(ctx, 31, 0x23A3C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23A3C0u, 0x23A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3C8u;
label_23a3c8:
    // 0x23a3c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23a3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23a3d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23a3d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23A3D8u;
    SET_GPR_U32(ctx, 31, 0x23A3E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23A3D8u, 0x23A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3E0u;
label_23a3e0:
    // 0x23a3e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3e4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23A3E4u;
    SET_GPR_U32(ctx, 31, 0x23A3ECu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23A3E4u, 0x23A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3ECu;
label_23a3ec:
    // 0x23a3ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3f0: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x23a3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x23a3f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A3F4u;
    {
        const bool branch_taken_0x23a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a3f4) {
            ctx->pc = 0x23A41Cu;
            goto label_23a41c;
        }
    }
    ctx->pc = 0x23A3FCu;
    // 0x23a3fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a400: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a404: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a408: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x23a408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x23a40c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a410: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a414: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A414u;
    SET_GPR_U32(ctx, 31, 0x23A41Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A414u, 0x23A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A41Cu;
label_23a41c:
    // 0x23a41c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23a420: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23a424: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23a424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23a428: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a42c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a430: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a434: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a438: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a43c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a440: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23A440u;
    SET_GPR_U32(ctx, 31, 0x23A448u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23A440u, 0x23A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A448u;
label_23a448:
    // 0x23a448: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23A448u;
    {
        const bool branch_taken_0x23a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a448) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A450u;
    // 0x23a450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a454: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a458: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23a458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a45c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a464: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23a464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a46c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23a46cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a474: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23a474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a478: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a47c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23a480: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A480u;
    SET_GPR_U32(ctx, 31, 0x23A488u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A480u, 0x23A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A488u;
label_23a488:
    // 0x23a488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a48c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23a490: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x23a494: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23a494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23a498: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23a498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23a49c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a4a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A4A4u;
    SET_GPR_U32(ctx, 31, 0x23A4ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A4A4u, 0x23A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23a4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a4b0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23a4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23a4b4: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x23a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x23a4b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23a4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23a4bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23a4bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23a4c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a4c8: 0xa4640074  sh          $a0, 0x74($v1)
    ctx->pc = 0x23a4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 4));
label_23a4cc:
    // 0x23a4cc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4d0: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x23a4d4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23a4d8: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x23a4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a4dc: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23A4DCu;
    {
        const bool branch_taken_0x23a4dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a4dc) {
            ctx->pc = 0x23A560u;
            goto label_23a560;
        }
    }
    ctx->pc = 0x23A4E4u;
    // 0x23a4e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a4e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a4f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a4f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23a4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a4fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a500: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23a500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a508: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23a508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a510: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23a510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23a514: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A514u;
    SET_GPR_U32(ctx, 31, 0x23A51Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A514u, 0x23A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A51Cu;
label_23a51c:
    // 0x23a51c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a520: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23a524: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x23a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x23a528: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23a52c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23a52cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23a530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a534: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23a534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a538: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A538u;
    SET_GPR_U32(ctx, 31, 0x23A540u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A538u, 0x23A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A540u;
label_23a540:
    // 0x23a540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a544: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23a548: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x23a548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x23a54c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23a54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23a550: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23a550u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23a554: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a55c: 0xa4640074  sh          $a0, 0x74($v1)
    ctx->pc = 0x23a55cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 4));
label_23a560:
    // 0x23a560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a564: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a568: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a56c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a570: 0x0  nop
    ctx->pc = 0x23a570u;
    // NOP
    // 0x23a574: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23a574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a578: 0x0  nop
    ctx->pc = 0x23a578u;
    // NOP
    // 0x23a57c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23A57Cu;
    {
        const bool branch_taken_0x23a57c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a57c) {
            ctx->pc = 0x23A660u;
            goto label_23a660;
        }
    }
    ctx->pc = 0x23A584u;
    // 0x23a584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a588: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a58c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a594: 0x0  nop
    ctx->pc = 0x23a594u;
    // NOP
    // 0x23a598: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a59c: 0x0  nop
    ctx->pc = 0x23a59cu;
    // NOP
    // 0x23a5a0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23A5A0u;
    {
        const bool branch_taken_0x23a5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a5a0) {
            ctx->pc = 0x23A608u;
            goto label_23a608;
        }
    }
    ctx->pc = 0x23A5A8u;
    // 0x23a5a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a5ac: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a5b0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a5b4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23a5b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a5c0: 0x0  nop
    ctx->pc = 0x23a5c0u;
    // NOP
    // 0x23a5c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23a5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a5c8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a5cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a5d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a5d4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a5dc: 0x0  nop
    ctx->pc = 0x23a5dcu;
    // NOP
    // 0x23a5e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a5e4: 0x0  nop
    ctx->pc = 0x23a5e4u;
    // NOP
    // 0x23a5e8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23A5E8u;
    {
        const bool branch_taken_0x23a5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a5e8) {
            ctx->pc = 0x23A660u;
            goto label_23a660;
        }
    }
    ctx->pc = 0x23A5F0u;
    // 0x23a5f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a5f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a5f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a5fc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23a600: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A600u;
    {
        const bool branch_taken_0x23a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a600) {
            ctx->pc = 0x23A660u;
            goto label_23a660;
        }
    }
    ctx->pc = 0x23A608u;
label_23a608:
    // 0x23a608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a60c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a610: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a614: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23a618: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a620: 0x0  nop
    ctx->pc = 0x23a620u;
    // NOP
    // 0x23a624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23a624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a628: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a62c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a630: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a634: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a63c: 0x0  nop
    ctx->pc = 0x23a63cu;
    // NOP
    // 0x23a640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a644: 0x0  nop
    ctx->pc = 0x23a644u;
    // NOP
    // 0x23a648: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23A648u;
    {
        const bool branch_taken_0x23a648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a648) {
            ctx->pc = 0x23A660u;
            goto label_23a660;
        }
    }
    ctx->pc = 0x23A650u;
    // 0x23a650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a654: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a658: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a65c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23a660:
    // 0x23a660: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23a660u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a664: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23a664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23a668: 0x3e00008  jr          $ra
    ctx->pc = 0x23A668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A670u;
}
