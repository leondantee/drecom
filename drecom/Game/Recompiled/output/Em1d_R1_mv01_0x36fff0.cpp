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

// Function: Em1d_R1_mv01
// Address: 0x36fff0 - 0x3702d0
void Em1d_R1_mv01_0x36fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_mv01_0x36fff0");
#endif

    switch (ctx->pc) {
        case 0x37007cu: goto label_37007c;
        case 0x37013cu: goto label_37013c;
        case 0x370158u: goto label_370158;
        case 0x370188u: goto label_370188;
        case 0x3701acu: goto label_3701ac;
        case 0x3701b8u: goto label_3701b8;
        case 0x3701c4u: goto label_3701c4;
        case 0x3701d4u: goto label_3701d4;
        case 0x3701e0u: goto label_3701e0;
        case 0x370248u: goto label_370248;
        case 0x370254u: goto label_370254;
        case 0x370260u: goto label_370260;
        case 0x370270u: goto label_370270;
        case 0x37027cu: goto label_37027c;
        default: break;
    }

    ctx->pc = 0x36fff0u;

    // 0x36fff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36fff4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x36fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x36fff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36fffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x370000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370008: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x370008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x37000c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370010: 0x8c7302d0  lw          $s3, 0x2D0($v1)
    ctx->pc = 0x370010u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x370014: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x370014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x370018: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x370018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x37001c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370020: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x370020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x370024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x370024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x370028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x370028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37002c: 0x10830082  beq         $a0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x37002Cu;
    {
        const bool branch_taken_0x37002c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37002c) {
            ctx->pc = 0x370238u;
            goto label_370238;
        }
    }
    ctx->pc = 0x370034u;
    // 0x370034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370038: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x370038u;
    {
        const bool branch_taken_0x370038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370038) {
            ctx->pc = 0x370100u;
            goto label_370100;
        }
    }
    ctx->pc = 0x370040u;
    // 0x370040: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x370040u;
    {
        const bool branch_taken_0x370040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370040) {
            ctx->pc = 0x370050u;
            goto label_370050;
        }
    }
    ctx->pc = 0x370048u;
    // 0x370048: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x370048u;
    {
        const bool branch_taken_0x370048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370048) {
            ctx->pc = 0x37027Cu;
            goto label_37027c;
        }
    }
    ctx->pc = 0x370050u;
label_370050:
    // 0x370050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370054: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370058: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37005c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370060: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370064: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370068: 0x3406b402  ori         $a2, $zero, 0xB402
    ctx->pc = 0x370068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46082);
    // 0x37006c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37006cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370074: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370074u;
    SET_GPR_U32(ctx, 31, 0x37007Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370074u, 0x37007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37007Cu;
label_37007c:
    // 0x37007c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x37007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x370080: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370084: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x370084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37008c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x37008cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x370090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x370094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x370098: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x370098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x37009c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700a0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3700A0u;
    {
        const bool branch_taken_0x3700a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3700a0) {
            ctx->pc = 0x370100u;
            goto label_370100;
        }
    }
    ctx->pc = 0x3700A8u;
    // 0x3700a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3700a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3700ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700b8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3700b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3700bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3700bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3700c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700c8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700cc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3700ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3700d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700d8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3700dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3700e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700e8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700ec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3700ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3700f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3700fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_370100:
    // 0x370100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370104: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x370104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x370108: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x370108u;
    {
        const bool branch_taken_0x370108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x370108) {
            ctx->pc = 0x370160u;
            goto label_370160;
        }
    }
    ctx->pc = 0x370110u;
    // 0x370110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370114: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370118: 0x3c023c64  lui         $v0, 0x3C64
    ctx->pc = 0x370118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15460 << 16));
    // 0x37011c: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x37011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x370120: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370124: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x370124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x370128: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x370128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37012c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x370130: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x370130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x370134: 0xc05c848  jal         func_172120
    ctx->pc = 0x370134u;
    SET_GPR_U32(ctx, 31, 0x37013Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x370134u, 0x37013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37013Cu;
label_37013c:
    // 0x37013c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x37013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x370140: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370144: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x370144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370148: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x370148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37014c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x37014cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x370150: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x370150u;
    SET_GPR_U32(ctx, 31, 0x370158u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x370150u, 0x370158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370158u;
label_370158:
    // 0x370158: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37015c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x37015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_370160:
    // 0x370160: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x370160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x370164: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x370164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x370168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37016c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370174: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x370174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x370178: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x370178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37017c: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x37017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x370180: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x370180u;
    SET_GPR_U32(ctx, 31, 0x370188u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x370180u, 0x370188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370188u;
label_370188:
    // 0x370188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x370188u;
    {
        const bool branch_taken_0x370188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370188) {
            ctx->pc = 0x37019Cu;
            goto label_37019c;
        }
    }
    ctx->pc = 0x370190u;
    // 0x370190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370194: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370198: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x370198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_37019c:
    // 0x37019c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3701a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3701a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3701A4u;
    SET_GPR_U32(ctx, 31, 0x3701ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3701A4u, 0x3701ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701ACu;
label_3701ac:
    // 0x3701ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701b0: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3701B0u;
    SET_GPR_U32(ctx, 31, 0x3701B8u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3701B0u, 0x3701B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701B8u;
label_3701b8:
    // 0x3701b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701bc: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3701BCu;
    SET_GPR_U32(ctx, 31, 0x3701C4u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3701BCu, 0x3701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701C4u;
label_3701c4:
    // 0x3701c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3701cc: 0xc0dc6bc  jal         func_371AF0
    ctx->pc = 0x3701CCu;
    SET_GPR_U32(ctx, 31, 0x3701D4u);
    ctx->pc = 0x371AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AF0u, 0x3701CCu, 0x3701D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701D4u;
label_3701d4:
    // 0x3701d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701d8: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3701D8u;
    SET_GPR_U32(ctx, 31, 0x3701E0u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3701D8u, 0x3701E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701E0u;
label_3701e0:
    // 0x3701e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3701e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3701e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3701e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3701E8u;
    {
        const bool branch_taken_0x3701e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3701e8) {
            ctx->pc = 0x370200u;
            goto label_370200;
        }
    }
    ctx->pc = 0x3701F0u;
    // 0x3701f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701f4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3701f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3701f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3701fc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3701fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_370200:
    // 0x370200: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370204: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x370204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x370208: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x370208u;
    {
        const bool branch_taken_0x370208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x370208) {
            ctx->pc = 0x37027Cu;
            goto label_37027c;
        }
    }
    ctx->pc = 0x370210u;
    // 0x370210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370214: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x370214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x370218: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x370218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x37021c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370220: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x370220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x370224: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x370224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370228: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37022c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x37022cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x370230: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x370230u;
    {
        const bool branch_taken_0x370230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370230) {
            ctx->pc = 0x37027Cu;
            goto label_37027c;
        }
    }
    ctx->pc = 0x370238u;
label_370238:
    // 0x370238: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37023c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37023cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370240: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370240u;
    SET_GPR_U32(ctx, 31, 0x370248u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370240u, 0x370248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370248u;
label_370248:
    // 0x370248: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37024c: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x37024Cu;
    SET_GPR_U32(ctx, 31, 0x370254u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x37024Cu, 0x370254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370254u;
label_370254:
    // 0x370254: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370258: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370258u;
    SET_GPR_U32(ctx, 31, 0x370260u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370258u, 0x370260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370260u;
label_370260:
    // 0x370260: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370268: 0xc0dc6bc  jal         func_371AF0
    ctx->pc = 0x370268u;
    SET_GPR_U32(ctx, 31, 0x370270u);
    ctx->pc = 0x371AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AF0u, 0x370268u, 0x370270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370270u;
label_370270:
    // 0x370270: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370274: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370274u;
    SET_GPR_U32(ctx, 31, 0x37027Cu);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370274u, 0x37027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37027Cu;
label_37027c:
    // 0x37027c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370280: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x370280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370284: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370288: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x37028c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x37028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x370290: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370294: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x370294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x370298: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370298u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37029c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3702a0: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x3702a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3702a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3702a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3702a8: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x3702a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3702ac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3702acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3702b0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x3702b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3702b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3702b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3702b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3702b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3702bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3702bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3702c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3702c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3702c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3702c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3702c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3702C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3702C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3702D0u;
}
