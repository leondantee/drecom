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

// Function: Em09_R1_mv04
// Address: 0x345900 - 0x3460f0
void Em09_R1_mv04_0x345900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv04_0x345900");
#endif

    switch (ctx->pc) {
        case 0x3459b4u: goto label_3459b4;
        case 0x3459d4u: goto label_3459d4;
        case 0x345a08u: goto label_345a08;
        case 0x345a34u: goto label_345a34;
        case 0x345b08u: goto label_345b08;
        case 0x345b24u: goto label_345b24;
        case 0x345b3cu: goto label_345b3c;
        case 0x345b48u: goto label_345b48;
        case 0x345b58u: goto label_345b58;
        case 0x345b64u: goto label_345b64;
        case 0x345becu: goto label_345bec;
        case 0x345c70u: goto label_345c70;
        case 0x345c78u: goto label_345c78;
        case 0x345d00u: goto label_345d00;
        case 0x345d10u: goto label_345d10;
        case 0x345d24u: goto label_345d24;
        case 0x345d34u: goto label_345d34;
        case 0x345dbcu: goto label_345dbc;
        case 0x345e3cu: goto label_345e3c;
        case 0x345e44u: goto label_345e44;
        case 0x345eccu: goto label_345ecc;
        case 0x345edcu: goto label_345edc;
        case 0x345ef0u: goto label_345ef0;
        case 0x345f00u: goto label_345f00;
        case 0x345f8cu: goto label_345f8c;
        default: break;
    }

    ctx->pc = 0x345900u;

    // 0x345900: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x345900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x345904: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x345904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x345908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34590c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x34590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x345910: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345914: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x345914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x345918: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34591c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345920: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x345920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x345924: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x345924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x345928: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x345928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34592c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x34592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345930: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x345930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x345934: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x345934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x345938: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x345938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x34593c: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x34593cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x345940: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345944: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x345944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x345948: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x345948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34594c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345950: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x345950u;
    {
        const bool branch_taken_0x345950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x345950) {
            ctx->pc = 0x345AC4u;
            goto label_345ac4;
        }
    }
    ctx->pc = 0x345958u;
    // 0x345958: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345958u;
    {
        const bool branch_taken_0x345958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345958) {
            ctx->pc = 0x345968u;
            goto label_345968;
        }
    }
    ctx->pc = 0x345960u;
    // 0x345960: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x345960u;
    {
        const bool branch_taken_0x345960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345960) {
            ctx->pc = 0x346020u;
            goto label_346020;
        }
    }
    ctx->pc = 0x345968u;
label_345968:
    // 0x345968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34596c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x34596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345970: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x345970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x345974: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345978: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x345978u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34597c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x34597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345980: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345984: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x345984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345988: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x345988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34598c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34598Cu;
    {
        const bool branch_taken_0x34598c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34598c) {
            ctx->pc = 0x3459CCu;
            goto label_3459cc;
        }
    }
    ctx->pc = 0x345994u;
    // 0x345994: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345998: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34599c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34599cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3459a0: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x3459a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x3459a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3459a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3459a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3459a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3459ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3459ACu;
    SET_GPR_U32(ctx, 31, 0x3459B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3459ACu, 0x3459B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459B4u;
label_3459b4:
    // 0x3459b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3459b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3459b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3459b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3459bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3459bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3459c0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x3459c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x3459c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3459C4u;
    {
        const bool branch_taken_0x3459c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3459c4) {
            ctx->pc = 0x345A44u;
            goto label_345a44;
        }
    }
    ctx->pc = 0x3459CCu;
label_3459cc:
    // 0x3459cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3459CCu;
    SET_GPR_U32(ctx, 31, 0x3459D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3459CCu, 0x3459D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459D4u;
label_3459d4:
    // 0x3459d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3459d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3459d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3459d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3459dc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3459dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3459e0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3459E0u;
    {
        const bool branch_taken_0x3459e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3459e0) {
            ctx->pc = 0x345A14u;
            goto label_345a14;
        }
    }
    ctx->pc = 0x3459E8u;
    // 0x3459e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3459e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3459ec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3459ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3459f0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3459f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3459f4: 0x24061e07  addiu       $a2, $zero, 0x1E07
    ctx->pc = 0x3459f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7687));
    // 0x3459f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3459f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3459fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3459fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345a00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345A00u;
    SET_GPR_U32(ctx, 31, 0x345A08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345A00u, 0x345A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A08u;
label_345a08:
    // 0x345a08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x345a08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x345a0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x345A0Cu;
    {
        const bool branch_taken_0x345a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345a0c) {
            ctx->pc = 0x345A44u;
            goto label_345a44;
        }
    }
    ctx->pc = 0x345A14u;
label_345a14:
    // 0x345a14: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a1c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x345a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x345a20: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x345a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x345a24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345a28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345a2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345A2Cu;
    SET_GPR_U32(ctx, 31, 0x345A34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345A2Cu, 0x345A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A34u;
label_345a34:
    // 0x345a34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x345a34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x345a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345a3c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a40: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x345a40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_345a44:
    // 0x345a44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a48: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x345a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345a4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x345a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x345a50: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x345a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x345a54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345a58: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x345a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x345a5c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x345a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x345a64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a68: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345a6c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x345a70: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x345a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x345a74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x345a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x345a78: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x345a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x345a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345a80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x345a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x345a84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x345a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345a8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x345a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345a90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345a94: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x345a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x345a98: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345aa0: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x345aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x345aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x345aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345aa8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345aac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345ab0: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x345ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x345ab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x345ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x345ab8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345abc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345ac0: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x345ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_345ac4:
    // 0x345ac4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345ac8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x345ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x345acc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x345accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x345ad0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x345ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x345ad4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x345AD4u;
    {
        const bool branch_taken_0x345ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ad4) {
            ctx->pc = 0x345B2Cu;
            goto label_345b2c;
        }
    }
    ctx->pc = 0x345ADCu;
    // 0x345adc: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x345adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x345ae0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x345ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x345ae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x345ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345ae8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345aec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345af0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x345af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x345af4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x345af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345af8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345afc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x345afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x345b00: 0xc05c848  jal         func_172120
    ctx->pc = 0x345B00u;
    SET_GPR_U32(ctx, 31, 0x345B08u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x345B00u, 0x345B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B08u;
label_345b08:
    // 0x345b08: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x345b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x345b0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b10: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x345b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345b14: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x345b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b18: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x345b18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345b1c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x345B1Cu;
    SET_GPR_U32(ctx, 31, 0x345B24u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x345B1Cu, 0x345B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B24u;
label_345b24:
    // 0x345b24: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x345b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_345b2c:
    // 0x345b2c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345b34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x345B34u;
    SET_GPR_U32(ctx, 31, 0x345B3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x345B34u, 0x345B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B3Cu;
label_345b3c:
    // 0x345b3c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b40: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345B40u;
    SET_GPR_U32(ctx, 31, 0x345B48u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345B40u, 0x345B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B48u;
label_345b48:
    // 0x345b48: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345b4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345b50: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x345B50u;
    SET_GPR_U32(ctx, 31, 0x345B58u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x345B50u, 0x345B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B58u;
label_345b58:
    // 0x345b58: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x345B5Cu;
    SET_GPR_U32(ctx, 31, 0x345B64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x345B5Cu, 0x345B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B64u;
label_345b64:
    // 0x345b64: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b68: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x345b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x345b6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x345b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345b70: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x345b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x345b74: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x345B74u;
    {
        const bool branch_taken_0x345b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345b74) {
            ctx->pc = 0x345D34u;
            goto label_345d34;
        }
    }
    ctx->pc = 0x345B7Cu;
    // 0x345b7c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345b84: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x345b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x345b88: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x345b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x345b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b90: 0x0  nop
    ctx->pc = 0x345b90u;
    // NOP
    // 0x345b94: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x345b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x345b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b9c: 0x0  nop
    ctx->pc = 0x345b9cu;
    // NOP
    // 0x345ba0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x345ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x345ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345ba8: 0x0  nop
    ctx->pc = 0x345ba8u;
    // NOP
    // 0x345bac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x345bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x345bb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bb8: 0x0  nop
    ctx->pc = 0x345bb8u;
    // NOP
    // 0x345bbc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x345bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x345bc0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x345bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x345bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bc8: 0x0  nop
    ctx->pc = 0x345bc8u;
    // NOP
    // 0x345bcc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x345bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x345bd0: 0xa7a00044  sh          $zero, 0x44($sp)
    ctx->pc = 0x345bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x345bd4: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x345bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x345bd8: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x345bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x345bdc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345be0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x345be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345be4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x345BE4u;
    SET_GPR_U32(ctx, 31, 0x345BECu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x345BE4u, 0x345BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345BECu;
label_345bec:
    // 0x345bec: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x345BECu;
    {
        const bool branch_taken_0x345bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345bec) {
            ctx->pc = 0x345D34u;
            goto label_345d34;
        }
    }
    ctx->pc = 0x345BF4u;
    // 0x345bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bf8: 0x0  nop
    ctx->pc = 0x345bf8u;
    // NOP
    // 0x345bfc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x345bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x345c00: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x345c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x345c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c08: 0x0  nop
    ctx->pc = 0x345c08u;
    // NOP
    // 0x345c0c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x345c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x345c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c14: 0x0  nop
    ctx->pc = 0x345c14u;
    // NOP
    // 0x345c18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x345c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x345c1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c24: 0x0  nop
    ctx->pc = 0x345c24u;
    // NOP
    // 0x345c28: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x345c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x345c2c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345c30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345c34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345c38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345c3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345c40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345c44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345c48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345c4c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345c50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345c54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345c58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x345c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345c5c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345c5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345c60: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x345c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x345c64: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345c64u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345c68: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345C68u;
    SET_GPR_U32(ctx, 31, 0x345C70u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345C68u, 0x345C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C70u;
label_345c70:
    // 0x345c70: 0xc067694  jal         func_19DA50
    ctx->pc = 0x345C70u;
    SET_GPR_U32(ctx, 31, 0x345C78u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x345C70u, 0x345C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C78u;
label_345c78:
    // 0x345c78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345C78u;
    {
        const bool branch_taken_0x345c78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345c78) {
            ctx->pc = 0x345C94u;
            goto label_345c94;
        }
    }
    ctx->pc = 0x345C80u;
    // 0x345c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c84: 0x0  nop
    ctx->pc = 0x345c84u;
    // NOP
    // 0x345c88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x345c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345c8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345C8Cu;
    {
        const bool branch_taken_0x345c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c8c) {
            ctx->pc = 0x345CB0u;
            goto label_345cb0;
        }
    }
    ctx->pc = 0x345C94u;
label_345c94:
    // 0x345c94: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x345c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x345c98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345c9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345ca4: 0x0  nop
    ctx->pc = 0x345ca4u;
    // NOP
    // 0x345ca8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x345ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345cac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x345cacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_345cb0:
    // 0x345cb0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x345cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345cb8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x345cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x345cbc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345cc0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345cc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345cc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345ccc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345cd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345cd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345cdc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345ce0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345ce4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345ce8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x345ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345cec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345cf0: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x345cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x345cf4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345cf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345cf8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345CF8u;
    SET_GPR_U32(ctx, 31, 0x345D00u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345CF8u, 0x345D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D00u;
label_345d00:
    // 0x345d00: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345d04: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x345d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x345d08: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345D08u;
    SET_GPR_U32(ctx, 31, 0x345D10u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345D08u, 0x345D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D10u;
label_345d10:
    // 0x345d10: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345d14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x345d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x345d18: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x345d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x345d1c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345D1Cu;
    SET_GPR_U32(ctx, 31, 0x345D24u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345D1Cu, 0x345D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D24u;
label_345d24:
    // 0x345d24: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x345d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x345d28: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x345d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x345d2c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345D2Cu;
    SET_GPR_U32(ctx, 31, 0x345D34u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345D2Cu, 0x345D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D34u;
label_345d34:
    // 0x345d34: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345d38: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x345d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x345d3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x345d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345d40: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x345d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x345d44: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x345D44u;
    {
        const bool branch_taken_0x345d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345d44) {
            ctx->pc = 0x345F00u;
            goto label_345f00;
        }
    }
    ctx->pc = 0x345D4Cu;
    // 0x345d4c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345d50: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345d54: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x345d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x345d58: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x345d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x345d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d60: 0x0  nop
    ctx->pc = 0x345d60u;
    // NOP
    // 0x345d64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x345d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x345d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d6c: 0x0  nop
    ctx->pc = 0x345d6cu;
    // NOP
    // 0x345d70: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x345d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x345d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d78: 0x0  nop
    ctx->pc = 0x345d78u;
    // NOP
    // 0x345d7c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x345d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x345d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d88: 0x0  nop
    ctx->pc = 0x345d88u;
    // NOP
    // 0x345d8c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x345d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x345d90: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x345d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x345d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d98: 0x0  nop
    ctx->pc = 0x345d98u;
    // NOP
    // 0x345d9c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x345d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x345da0: 0xa7a00084  sh          $zero, 0x84($sp)
    ctx->pc = 0x345da0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x345da4: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x345da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x345da8: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x345da8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x345dac: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345db0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x345db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345db4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x345DB4u;
    SET_GPR_U32(ctx, 31, 0x345DBCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x345DB4u, 0x345DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DBCu;
label_345dbc:
    // 0x345dbc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x345DBCu;
    {
        const bool branch_taken_0x345dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345dbc) {
            ctx->pc = 0x345F00u;
            goto label_345f00;
        }
    }
    ctx->pc = 0x345DC4u;
    // 0x345dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345dc8: 0x0  nop
    ctx->pc = 0x345dc8u;
    // NOP
    // 0x345dcc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x345dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x345dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345dd4: 0x0  nop
    ctx->pc = 0x345dd4u;
    // NOP
    // 0x345dd8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x345dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x345ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345de0: 0x0  nop
    ctx->pc = 0x345de0u;
    // NOP
    // 0x345de4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x345de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x345de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345df0: 0x0  nop
    ctx->pc = 0x345df0u;
    // NOP
    // 0x345df4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x345df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x345df8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345dfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345e00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345e04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345e08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345e10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345e14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345e18: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345e1c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345e20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345e24: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345e28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345e28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345e2c: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x345e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x345e30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345e30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345e34: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345E34u;
    SET_GPR_U32(ctx, 31, 0x345E3Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345E34u, 0x345E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E3Cu;
label_345e3c:
    // 0x345e3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x345E3Cu;
    SET_GPR_U32(ctx, 31, 0x345E44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x345E3Cu, 0x345E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E44u;
label_345e44:
    // 0x345e44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345E44u;
    {
        const bool branch_taken_0x345e44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345e44) {
            ctx->pc = 0x345E60u;
            goto label_345e60;
        }
    }
    ctx->pc = 0x345E4Cu;
    // 0x345e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e50: 0x0  nop
    ctx->pc = 0x345e50u;
    // NOP
    // 0x345e54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x345e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345E58u;
    {
        const bool branch_taken_0x345e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e58) {
            ctx->pc = 0x345E7Cu;
            goto label_345e7c;
        }
    }
    ctx->pc = 0x345E60u;
label_345e60:
    // 0x345e60: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x345e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x345e64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345e68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x345e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e70: 0x0  nop
    ctx->pc = 0x345e70u;
    // NOP
    // 0x345e74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x345e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345e78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x345e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_345e7c:
    // 0x345e7c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x345e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345e84: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x345e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x345e88: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345e8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345e90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345e94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345e98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345e9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345ea0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345ea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345ea8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345eac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345eb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345eb4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345eb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345ebc: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x345ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x345ec0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345ec0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345ec4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345EC4u;
    SET_GPR_U32(ctx, 31, 0x345ECCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345EC4u, 0x345ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ECCu;
label_345ecc:
    // 0x345ecc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345ed0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x345ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x345ed4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345ED4u;
    SET_GPR_U32(ctx, 31, 0x345EDCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345ED4u, 0x345EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EDCu;
label_345edc:
    // 0x345edc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345ee0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x345ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x345ee4: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x345ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x345ee8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345EE8u;
    SET_GPR_U32(ctx, 31, 0x345EF0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345EE8u, 0x345EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EF0u;
label_345ef0:
    // 0x345ef0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x345ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x345ef4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x345ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x345ef8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345EF8u;
    SET_GPR_U32(ctx, 31, 0x345F00u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345EF8u, 0x345F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F00u;
label_345f00:
    // 0x345f00: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x345f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x345f08: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x345F08u;
    {
        const bool branch_taken_0x345f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345f08) {
            ctx->pc = 0x346020u;
            goto label_346020;
        }
    }
    ctx->pc = 0x345F10u;
    // 0x345f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345f14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f18: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x345f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x345f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345f20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f24: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x345f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x345f28: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f2c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x345f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x345f30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f34: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x345f34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x345f38: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x345f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x345f40: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x345f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x345f44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345f4c: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x345f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x345f50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f54: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345f58: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x345f5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x345f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x345f60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345f64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345f68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x345f6c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x345f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345f74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x345f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x345f78: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x345f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x345f7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345f80: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x345f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x345f84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x345F84u;
    SET_GPR_U32(ctx, 31, 0x345F8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x345F84u, 0x345F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F8Cu;
label_345f8c:
    // 0x345f8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x345f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x345f90: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x345f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x345f94: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x345f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x345f98: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x345f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x345f9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x345f9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x345fa0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fa8: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x345fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x345fac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fb0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x345fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fb4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x345fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x345fb8: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x345fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x345fbc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x345FBCu;
    {
        const bool branch_taken_0x345fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345fbc) {
            ctx->pc = 0x345FF8u;
            goto label_345ff8;
        }
    }
    ctx->pc = 0x345FC4u;
    // 0x345fc4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fcc: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x345fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x345fd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345fd4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x345fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fd8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x345fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x345fdc: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x345fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x345fe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x345fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345fe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fec: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x345fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x345ff0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x345FF0u;
    {
        const bool branch_taken_0x345ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ff0) {
            ctx->pc = 0x346020u;
            goto label_346020;
        }
    }
    ctx->pc = 0x345FF8u;
label_345ff8:
    // 0x345ff8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345ffc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x345ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346000: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x346000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x346004: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x346004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346008: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34600c: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34600cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x346010: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x346010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346014: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x346014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346018: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34601c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34601cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
label_346020:
    // 0x346020: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x346020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346024: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x346024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x346028: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x346028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34602c: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x34602cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x346030: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x346030u;
    {
        const bool branch_taken_0x346030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346030) {
            ctx->pc = 0x346094u;
            goto label_346094;
        }
    }
    ctx->pc = 0x346038u;
    // 0x346038: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x346038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34603c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34603cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x346040: 0xa0c00028  sb          $zero, 0x28($a2)
    ctx->pc = 0x346040u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x346044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x346044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346048: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x346048u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34604c: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x34604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x346050: 0xa0670029  sb          $a3, 0x29($v1)
    ctx->pc = 0x346050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x346054: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x346054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x346058: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x346058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34605c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34605cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346060: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x346060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346068: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x346068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34606c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x34606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346070: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x346070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x346074: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x346074u;
    {
        const bool branch_taken_0x346074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346074) {
            ctx->pc = 0x346094u;
            goto label_346094;
        }
    }
    ctx->pc = 0x34607Cu;
    // 0x34607c: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x34607cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x346080: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x346080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x346084: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x346084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346088: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x346088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34608c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34608cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x346090: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x346090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
label_346094:
    // 0x346094: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x346094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346098: 0x910309db  lbu         $v1, 0x9DB($t0)
    ctx->pc = 0x346098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2523)));
    // 0x34609c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34609cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3460a0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x3460a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3460a4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3460A4u;
    {
        const bool branch_taken_0x3460a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460a4) {
            ctx->pc = 0x3460DCu;
            goto label_3460dc;
        }
    }
    ctx->pc = 0x3460ACu;
    // 0x3460ac: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3460acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3460b0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x3460b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3460b4: 0xa0c00028  sb          $zero, 0x28($a2)
    ctx->pc = 0x3460b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3460b8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x3460b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3460bc: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x3460bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x3460c0: 0xa1000029  sb          $zero, 0x29($t0)
    ctx->pc = 0x3460c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x3460c4: 0x3c043ccc  lui         $a0, 0x3CCC
    ctx->pc = 0x3460c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15564 << 16));
    // 0x3460c8: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x3460c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3460cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3460ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3460d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3460d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3460d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3460d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3460d8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3460d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_3460dc:
    // 0x3460dc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3460dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3460e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3460e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3460e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x3460e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3460e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3460E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3460E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3460F0u;
}
