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

// Function: Pl_damage_em02_00
// Address: 0x2a9120 - 0x2a9478
void Pl_damage_em02_00_0x2a9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_damage_em02_00_0x2a9120");
#endif

    switch (ctx->pc) {
        case 0x2a91b4u: goto label_2a91b4;
        case 0x2a9270u: goto label_2a9270;
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a92b8u: goto label_2a92b8;
        case 0x2a92e0u: goto label_2a92e0;
        case 0x2a92f4u: goto label_2a92f4;
        case 0x2a9300u: goto label_2a9300;
        case 0x2a9324u: goto label_2a9324;
        case 0x2a9384u: goto label_2a9384;
        case 0x2a93d8u: goto label_2a93d8;
        case 0x2a93ecu: goto label_2a93ec;
        case 0x2a9400u: goto label_2a9400;
        case 0x2a940cu: goto label_2a940c;
        default: break;
    }

    ctx->pc = 0x2a9120u;

    // 0x2a9120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a9124: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2a9124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2a9128: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a912c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a9130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a913c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2a913cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2a9140: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2a9140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2a9144: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x2a9144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2a9148: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a914c: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x2a914cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x2a9150: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x2a9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2a9154: 0x24740fa0  addiu       $s4, $v1, 0xFA0
    ctx->pc = 0x2a9154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2a9158: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a915c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2a915cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a9160: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a9160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a9164: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9168: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2A9168u;
    {
        const bool branch_taken_0x2a9168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9168) {
            ctx->pc = 0x2A939Cu;
            goto label_2a939c;
        }
    }
    ctx->pc = 0x2A9170u;
    // 0x2a9170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9174: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2A9174u;
    {
        const bool branch_taken_0x2a9174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9174) {
            ctx->pc = 0x2A9368u;
            goto label_2a9368;
        }
    }
    ctx->pc = 0x2A917Cu;
    // 0x2a917c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9180: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A9180u;
    {
        const bool branch_taken_0x2a9180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9180) {
            ctx->pc = 0x2A9270u;
            goto label_2a9270;
        }
    }
    ctx->pc = 0x2A9188u;
    // 0x2a9188: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9188u;
    {
        const bool branch_taken_0x2a9188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9188) {
            ctx->pc = 0x2A9198u;
            goto label_2a9198;
        }
    }
    ctx->pc = 0x2A9190u;
    // 0x2a9190: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2A9190u;
    {
        const bool branch_taken_0x2a9190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9190) {
            ctx->pc = 0x2A9454u;
            goto label_2a9454;
        }
    }
    ctx->pc = 0x2A9198u;
label_2a9198:
    // 0x2a9198: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a9198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a919c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2a919cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2a91a0: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2a91a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2a91a4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a91a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a91a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a91a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a91ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A91ACu;
    SET_GPR_U32(ctx, 31, 0x2A91B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A91ACu, 0x2A91B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91B4u;
label_2a91b4:
    // 0x2a91b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a91b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91bc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a91bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a91c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91c4: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x2a91c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2a91c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2a91c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2a91cc: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2a91ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a91d0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x2a91d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2a91d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91d8: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a91d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a91dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2a91dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a91e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a91e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a91e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91e8: 0x8442138c  lh          $v0, 0x138C($v0)
    ctx->pc = 0x2a91e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
    // 0x2a91ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a91f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a91f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a91f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a91f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a91f8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2a91f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a91fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A91FCu;
    {
        const bool branch_taken_0x2a91fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a91fc) {
            ctx->pc = 0x2A9208u;
            goto label_2a9208;
        }
    }
    ctx->pc = 0x2A9204u;
    // 0x2a9204: 0x2411015e  addiu       $s1, $zero, 0x15E
    ctx->pc = 0x2a9204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_2a9208:
    // 0x2a9208: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a920c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a920cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a9210: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2a9210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9214: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a9214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a9218: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a921c: 0x8442138c  lh          $v0, 0x138C($v0)
    ctx->pc = 0x2a921cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
    // 0x2a9220: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a9220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9224: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a9224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a9228: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a9228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a922c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2a922cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a9230: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9230u;
    {
        const bool branch_taken_0x2a9230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9230) {
            ctx->pc = 0x2A923Cu;
            goto label_2a923c;
        }
    }
    ctx->pc = 0x2A9238u;
    // 0x2a9238: 0x24110258  addiu       $s1, $zero, 0x258
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2a923c:
    // 0x2a923c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9240: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a9240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a9244: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a9244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a9248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a924c: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x2a924cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2a9250: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9250u;
    {
        const bool branch_taken_0x2a9250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9250) {
            ctx->pc = 0x2A925Cu;
            goto label_2a925c;
        }
    }
    ctx->pc = 0x2A9258u;
    // 0x2a9258: 0x24112710  addiu       $s1, $zero, 0x2710
    ctx->pc = 0x2a9258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2a925c:
    // 0x2a925c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2a925cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2a9260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a9260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9264: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a9264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9268: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x2A9268u;
    SET_GPR_U32(ctx, 31, 0x2A9270u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x2A9268u, 0x2A9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9270u;
label_2a9270:
    // 0x2a9270: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x2a9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9274: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9278: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2a9278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2a927c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2a9280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a9280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a9284: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a9284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a9288: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a928c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9290: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2a9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9294: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2a9294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9298: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2A9298u;
    SET_GPR_U32(ctx, 31, 0x2A92A0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2A9298u, 0x2A92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92A0u;
label_2a92a0:
    // 0x2a92a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a92a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a92acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a92b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A92B0u;
    SET_GPR_U32(ctx, 31, 0x2A92B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A92B0u, 0x2A92B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92B8u;
label_2a92b8:
    // 0x2a92b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92bc: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x2a92bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x2a92c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a92c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a92c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A92C4u;
    {
        const bool branch_taken_0x2a92c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a92c4) {
            ctx->pc = 0x2A92E0u;
            goto label_2a92e0;
        }
    }
    ctx->pc = 0x2A92CCu;
    // 0x2a92cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92d4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2a92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a92d8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2A92D8u;
    SET_GPR_U32(ctx, 31, 0x2A92E0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2A92D8u, 0x2A92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92E0u;
label_2a92e0:
    // 0x2a92e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a92e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a92e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a92ec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x2A92ECu;
    SET_GPR_U32(ctx, 31, 0x2A92F4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x2A92ECu, 0x2A92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92F4u;
label_2a92f4:
    // 0x2a92f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2A92F8u;
    SET_GPR_U32(ctx, 31, 0x2A9300u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2A92F8u, 0x2A9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9300u;
label_2a9300:
    // 0x2a9300: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9304: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2a9304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2a9308: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9308u;
    {
        const bool branch_taken_0x2a9308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9308) {
            ctx->pc = 0x2A931Cu;
            goto label_2a931c;
        }
    }
    ctx->pc = 0x2A9310u;
    // 0x2a9310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9314: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9318: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a9318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2a931c:
    // 0x2a931c: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x2A931Cu;
    SET_GPR_U32(ctx, 31, 0x2A9324u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x2A931Cu, 0x2A9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9324u;
label_2a9324:
    // 0x2a9324: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2a9324u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a9328: 0x3a430001  xori        $v1, $s2, 0x1
    ctx->pc = 0x2a9328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x2a932c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a932cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a9330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9334: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9334u;
    {
        const bool branch_taken_0x2a9334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9334) {
            ctx->pc = 0x2A9348u;
            goto label_2a9348;
        }
    }
    ctx->pc = 0x2A933Cu;
    // 0x2a933c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9340: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9344: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a9344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a9348:
    // 0x2a9348: 0x920310a8  lbu         $v1, 0x10A8($s0)
    ctx->pc = 0x2a9348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x2a934c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2A934Cu;
    {
        const bool branch_taken_0x2a934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a934c) {
            ctx->pc = 0x2A9454u;
            goto label_2a9454;
        }
    }
    ctx->pc = 0x2A9354u;
    // 0x2a9354: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9358: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a935c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a935cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9360: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A9360u;
    {
        const bool branch_taken_0x2a9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9360) {
            ctx->pc = 0x2A9454u;
            goto label_2a9454;
        }
    }
    ctx->pc = 0x2A9368u;
label_2a9368:
    // 0x2a9368: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a936c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2a936cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2a9370: 0x24060f01  addiu       $a2, $zero, 0xF01
    ctx->pc = 0x2a9370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
    // 0x2a9374: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a9374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a9378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a9378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a937c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A937Cu;
    SET_GPR_U32(ctx, 31, 0x2A9384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A937Cu, 0x2A9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9384u;
label_2a9384:
    // 0x2a9384: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a9384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9388: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a938c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a938cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9394: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9398: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x2a9398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
label_2a939c:
    // 0x2a939c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a93a4: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x2a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x2a93a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a93a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a93ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a93acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a93b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2a93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2a93b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2a93b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a93bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a93bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a93c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2a93c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2a93c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2a93c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2a93c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a93ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a93d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A93D0u;
    SET_GPR_U32(ctx, 31, 0x2A93D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A93D0u, 0x2A93D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93D8u;
label_2a93d8:
    // 0x2a93d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93e0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2a93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a93e4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2A93E4u;
    SET_GPR_U32(ctx, 31, 0x2A93ECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2A93E4u, 0x2A93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93ECu;
label_2a93ec:
    // 0x2a93ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a93ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a93f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a93f8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x2A93F8u;
    SET_GPR_U32(ctx, 31, 0x2A9400u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x2A93F8u, 0x2A9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9400u;
label_2a9400:
    // 0x2a9400: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a9400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9404: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2A9404u;
    SET_GPR_U32(ctx, 31, 0x2A940Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2A9404u, 0x2A940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A940Cu;
label_2a940c:
    // 0x2a940c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9410: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a9410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a9414: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A9414u;
    {
        const bool branch_taken_0x2a9414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9414) {
            ctx->pc = 0x2A9454u;
            goto label_2a9454;
        }
    }
    ctx->pc = 0x2A941Cu;
    // 0x2a941c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9420: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9424: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a9424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9428: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a942c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2a942cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9434: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a9434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9438: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a943c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a943cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9440: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a9444: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9448: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2a9448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2a944c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9450: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2a9450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2a9454:
    // 0x2a9454: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2a9454u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9458: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a945c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a945cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9460: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a946c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a946cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a9470: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9478u;
}
