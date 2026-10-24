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

// Function: ectrl05_init00_t02
// Address: 0x24e4f0 - 0x24f0bc
void ectrl05_init00_t02_0x24e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl05_init00_t02_0x24e4f0");
#endif

    switch (ctx->pc) {
        case 0x24e580u: goto label_24e580;
        case 0x24e58cu: goto label_24e58c;
        case 0x24e5ecu: goto label_24e5ec;
        case 0x24e5f8u: goto label_24e5f8;
        case 0x24e658u: goto label_24e658;
        case 0x24e664u: goto label_24e664;
        case 0x24e6d4u: goto label_24e6d4;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e740u: goto label_24e740;
        case 0x24e74cu: goto label_24e74c;
        case 0x24e7bcu: goto label_24e7bc;
        case 0x24e7c8u: goto label_24e7c8;
        case 0x24e7d0u: goto label_24e7d0;
        case 0x24e834u: goto label_24e834;
        case 0x24e914u: goto label_24e914;
        case 0x24e920u: goto label_24e920;
        case 0x24e998u: goto label_24e998;
        case 0x24eab4u: goto label_24eab4;
        case 0x24eac0u: goto label_24eac0;
        case 0x24eb20u: goto label_24eb20;
        case 0x24eb2cu: goto label_24eb2c;
        case 0x24eb8cu: goto label_24eb8c;
        case 0x24eb98u: goto label_24eb98;
        case 0x24ebfcu: goto label_24ebfc;
        case 0x24ec08u: goto label_24ec08;
        case 0x24ec20u: goto label_24ec20;
        case 0x24ec28u: goto label_24ec28;
        case 0x24ec44u: goto label_24ec44;
        case 0x24edc0u: goto label_24edc0;
        case 0x24edccu: goto label_24edcc;
        case 0x24ef00u: goto label_24ef00;
        case 0x24ef0cu: goto label_24ef0c;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef80u: goto label_24ef80;
        case 0x24efd4u: goto label_24efd4;
        case 0x24efe0u: goto label_24efe0;
        case 0x24f02cu: goto label_24f02c;
        case 0x24f038u: goto label_24f038;
        case 0x24f088u: goto label_24f088;
        case 0x24f094u: goto label_24f094;
        default: break;
    }

    ctx->pc = 0x24e4f0u;

    // 0x24e4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24e4f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24e4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24e4fc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x24e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x24e500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e504: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e508: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24e508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e50c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e510: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24e510u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24e514: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24e518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e51c: 0x0  nop
    ctx->pc = 0x24e51cu;
    // NOP
    // 0x24e520: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x24e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24e524: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e528: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24e52c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e530: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e534: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e538: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e53c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e540: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24e540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e544: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x24e544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24e548: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24e548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e54c: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x24e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x24e550: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e554: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24e558: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e55c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e560: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e568: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24e568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e56c: 0x24046701  addiu       $a0, $zero, 0x6701
    ctx->pc = 0x24e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    // 0x24e570: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e570u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e574: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e578: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E578u;
    SET_GPR_U32(ctx, 31, 0x24E580u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E578u, 0x24E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E580u;
label_24e580:
    // 0x24e580: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e580u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e584: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E584u;
    SET_GPR_U32(ctx, 31, 0x24E58Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E584u, 0x24E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E58Cu;
label_24e58c:
    // 0x24e58c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24e58cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e594: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x24e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24e598: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x24e598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e59c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24e59cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24e5a0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24e5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e5a4: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x24e5a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x24e5a8: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x24e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x24e5ac: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24e5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24e5b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e5b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e5b8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e5bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e5c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e5c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e5c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e5cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e5d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e5d4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24e5d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e5d8: 0x24046104  addiu       $a0, $zero, 0x6104
    ctx->pc = 0x24e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24836));
    // 0x24e5dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e5dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e5e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e5e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E5E4u;
    SET_GPR_U32(ctx, 31, 0x24E5ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E5E4u, 0x24E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5ECu;
label_24e5ec:
    // 0x24e5ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e5ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e5f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E5F0u;
    SET_GPR_U32(ctx, 31, 0x24E5F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E5F0u, 0x24E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5F8u;
label_24e5f8:
    // 0x24e5f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e5f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e5fc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e600: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x24e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x24e604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e608: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24e60c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e610: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e61c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e624: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e628: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e62c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e630: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e634: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e63c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e640: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24e640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e644: 0x24046204  addiu       $a0, $zero, 0x6204
    ctx->pc = 0x24e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25092));
    // 0x24e648: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e64c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e650: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E650u;
    SET_GPR_U32(ctx, 31, 0x24E658u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E650u, 0x24E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E658u;
label_24e658:
    // 0x24e658: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e65c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E65Cu;
    SET_GPR_U32(ctx, 31, 0x24E664u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E65Cu, 0x24E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E664u;
label_24e664:
    // 0x24e664: 0x3c053fa6  lui         $a1, 0x3FA6
    ctx->pc = 0x24e664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16294 << 16));
    // 0x24e668: 0x34a36666  ori         $v1, $a1, 0x6666
    ctx->pc = 0x24e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x24e66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e670: 0x0  nop
    ctx->pc = 0x24e670u;
    // NOP
    // 0x24e674: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x24e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24e678: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e67c: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x24e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24e680: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24e680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e684: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e688: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e68c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x24e68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x24e690: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x24e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x24e694: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e698: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x24e698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e69c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e6a0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e6a4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e6a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e6ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e6b0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24e6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24e6b4: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e6b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e6bc: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x24e6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x24e6c0: 0x24047801  addiu       $a0, $zero, 0x7801
    ctx->pc = 0x24e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x24e6c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e6c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e6cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E6CCu;
    SET_GPR_U32(ctx, 31, 0x24E6D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E6CCu, 0x24E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6D4u;
label_24e6d4:
    // 0x24e6d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e6d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e6d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E6D8u;
    SET_GPR_U32(ctx, 31, 0x24E6E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E6D8u, 0x24E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6E0u;
label_24e6e0:
    // 0x24e6e0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x24e6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e6e4: 0x8d0200c4  lw          $v0, 0xC4($t0)
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x24e6e8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e6ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e6f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e6f4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e6f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e6fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e700: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24e700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e704: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24e704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e708: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x24e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x24e70c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e710: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e714: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e718: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e71c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e720: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e724: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24e724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24e728: 0x24027801  addiu       $v0, $zero, 0x7801
    ctx->pc = 0x24e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x24e72c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e72cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e730: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e730u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e734: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e738: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E738u;
    SET_GPR_U32(ctx, 31, 0x24E740u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E738u, 0x24E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E740u;
label_24e740:
    // 0x24e740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e744: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E744u;
    SET_GPR_U32(ctx, 31, 0x24E74Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E744u, 0x24E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E74Cu;
label_24e74c:
    // 0x24e74c: 0x3c103fd9  lui         $s0, 0x3FD9
    ctx->pc = 0x24e74cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16345 << 16));
    // 0x24e750: 0x3602999a  ori         $v0, $s0, 0x999A
    ctx->pc = 0x24e750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)39322);
    // 0x24e754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e758: 0x0  nop
    ctx->pc = 0x24e758u;
    // NOP
    // 0x24e75c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x24e75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24e760: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e764: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24e768: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e76c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e770: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e774: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e778: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x24e778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e77c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x24e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e780: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e784: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e788: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e78c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x24e78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e790: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24e790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24e794: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e798: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24e798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24e79c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24e79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e7a0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x24e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24e7a4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24e7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e7a8: 0x24041e03  addiu       $a0, $zero, 0x1E03
    ctx->pc = 0x24e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x24e7ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e7acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e7b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e7b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E7B4u;
    SET_GPR_U32(ctx, 31, 0x24E7BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E7B4u, 0x24E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7BCu;
label_24e7bc:
    // 0x24e7bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e7c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E7C0u;
    SET_GPR_U32(ctx, 31, 0x24E7C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E7C0u, 0x24E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7C8u;
label_24e7c8:
    // 0x24e7c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24E7C8u;
    SET_GPR_U32(ctx, 31, 0x24E7D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24E7C8u, 0x24E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7D0u;
label_24e7d0:
    // 0x24e7d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24e7d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24e7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e7d8: 0x0  nop
    ctx->pc = 0x24e7d8u;
    // NOP
    // 0x24e7dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e7dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e7e0: 0x3c0244a2  lui         $v0, 0x44A2
    ctx->pc = 0x24e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17570 << 16));
    // 0x24e7e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x24e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x24e7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e7ec: 0x0  nop
    ctx->pc = 0x24e7ecu;
    // NOP
    // 0x24e7f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24e7f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e7f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e7f8: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x24e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x24e7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e800: 0x0  nop
    ctx->pc = 0x24e800u;
    // NOP
    // 0x24e804: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e808: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24e80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e810: 0x0  nop
    ctx->pc = 0x24e810u;
    // NOP
    // 0x24e814: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e818: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x24e818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x24e81c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24e81cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e820: 0x0  nop
    ctx->pc = 0x24e820u;
    // NOP
    // 0x24e824: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x24e824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24e828: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24e828u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e82c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x24E82Cu;
    {
        const bool branch_taken_0x24e82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e82c) {
            ctx->pc = 0x24E958u;
            goto label_24e958;
        }
    }
    ctx->pc = 0x24E834u;
label_24e834:
    // 0x24e834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e838: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e83c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e840: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e844: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e848: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e84c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e850: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e854: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x24e854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e858: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e85c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e860: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e864: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e868: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e870: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e874: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x24e874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x24e878: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24e878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e87c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x24e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24e880: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e884: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e888: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e88c: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e894: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e898: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x24e898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e89c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24e89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e8a0: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x24e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24e8a4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24e8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24e8a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24e8ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e8b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e8b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e8b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e8bc: 0x1023025  or          $a2, $t0, $v0
    ctx->pc = 0x24e8bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x24e8c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e8c4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e8c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e8cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e8d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e8d4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e8d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e8dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e8e0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24e8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e8e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e8e8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x24e8ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24e8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e8f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24e8f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e8f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e8fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e900: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e904: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24e904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24e908: 0x2404080b  addiu       $a0, $zero, 0x80B
    ctx->pc = 0x24e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x24e90c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24E90Cu;
    SET_GPR_U32(ctx, 31, 0x24E914u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24E90Cu, 0x24E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E914u;
label_24e914:
    // 0x24e914: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e918: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24E918u;
    SET_GPR_U32(ctx, 31, 0x24E920u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24E918u, 0x24E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E920u;
label_24e920:
    // 0x24e920: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24e920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e924: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x24e924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
    // 0x24e928: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24e928u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e92c: 0x0  nop
    ctx->pc = 0x24e92cu;
    // NOP
    // 0x24e930: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e934: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e938: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e93c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x24e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x24e940: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24e940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e944: 0x0  nop
    ctx->pc = 0x24e944u;
    // NOP
    // 0x24e948: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e94c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e950: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24e954: 0x0  nop
    ctx->pc = 0x24e954u;
    // NOP
label_24e958:
    // 0x24e958: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24e958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24e95c: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x24E95Cu;
    {
        const bool branch_taken_0x24e95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e95c) {
            ctx->pc = 0x24E834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e834;
        }
    }
    ctx->pc = 0x24E964u;
    // 0x24e964: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e968: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e96c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24e96cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e970: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e974: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24e974u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24e978: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e97c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x24e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x24e980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e984: 0x0  nop
    ctx->pc = 0x24e984u;
    // NOP
    // 0x24e988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e98c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24e98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e990: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24E990u;
    SET_GPR_U32(ctx, 31, 0x24E998u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24E990u, 0x24E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E998u;
label_24e998:
    // 0x24e998: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24e99c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e9a0: 0x0  nop
    ctx->pc = 0x24e9a0u;
    // NOP
    // 0x24e9a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e9a8: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x24e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x24e9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9b0: 0x0  nop
    ctx->pc = 0x24e9b0u;
    // NOP
    // 0x24e9b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24e9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e9b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9c0: 0x0  nop
    ctx->pc = 0x24e9c0u;
    // NOP
    // 0x24e9c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e9c8: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x24e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x24e9cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9d0: 0x0  nop
    ctx->pc = 0x24e9d0u;
    // NOP
    // 0x24e9d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e9d8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24e9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e9dc: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x24e9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24e9e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e9e4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x24e9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e9e8: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x24e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x24e9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e9f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e9f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e9f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e9fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ea10: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ea10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ea14: 0x872825  or          $a1, $a0, $a3
    ctx->pc = 0x24ea14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x24ea18: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24ea18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea1c: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x24ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x24ea20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24ea28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24ea30: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x24ea30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24ea34: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x24ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24ea38: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24ea38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24ea3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea40: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ea44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ea58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ea58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ea5c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24ea5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24ea60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea64: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ea68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ea7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ea80: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24ea80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea88: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ea8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eaa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24eaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eaa4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24eaa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24eaa8: 0x2404080c  addiu       $a0, $zero, 0x80C
    ctx->pc = 0x24eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x24eaac: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24EAACu;
    SET_GPR_U32(ctx, 31, 0x24EAB4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24EAACu, 0x24EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAB4u;
label_24eab4:
    // 0x24eab4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24eab4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24eab8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24EAB8u;
    SET_GPR_U32(ctx, 31, 0x24EAC0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24EAB8u, 0x24EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAC0u;
label_24eac0:
    // 0x24eac0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eac4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24eac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24eac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24eacc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ead0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ead4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ead8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24eadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24eadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eae0: 0x0  nop
    ctx->pc = 0x24eae0u;
    // NOP
    // 0x24eae4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24eae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24eae8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eaec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eaf0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24eaf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24eaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24eaf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24eaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24eafc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eb00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24eb04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24eb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eb08: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24eb08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eb0c: 0x24040510  addiu       $a0, $zero, 0x510
    ctx->pc = 0x24eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x24eb10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24eb10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24eb14: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eb18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EB18u;
    SET_GPR_U32(ctx, 31, 0x24EB20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EB18u, 0x24EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB20u;
label_24eb20:
    // 0x24eb20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24eb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24eb24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EB24u;
    SET_GPR_U32(ctx, 31, 0x24EB2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EB24u, 0x24EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB2Cu;
label_24eb2c:
    // 0x24eb2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eb30: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24eb34: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x24eb34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24eb38: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eb3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24eb40: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb44: 0x3c0742a0  lui         $a3, 0x42A0
    ctx->pc = 0x24eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17056 << 16));
    // 0x24eb48: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24eb48u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb4c: 0x0  nop
    ctx->pc = 0x24eb4cu;
    // NOP
    // 0x24eb50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24eb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24eb54: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eb58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eb5c: 0x8c8600c0  lw          $a2, 0xC0($a0)
    ctx->pc = 0x24eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x24eb60: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x24eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24eb64: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24eb68: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24eb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eb6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24eb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24eb70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24eb74: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x24eb74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24eb78: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x24eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x24eb7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24eb7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24eb80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eb84: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EB84u;
    SET_GPR_U32(ctx, 31, 0x24EB8Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EB84u, 0x24EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB8Cu;
label_24eb8c:
    // 0x24eb8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24eb8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24eb90: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EB90u;
    SET_GPR_U32(ctx, 31, 0x24EB98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EB90u, 0x24EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB98u;
label_24eb98:
    // 0x24eb98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eb9c: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24eba0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24eba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24eba4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eba8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24ebac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ebb0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x24ebb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ebb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ebb8: 0x0  nop
    ctx->pc = 0x24ebb8u;
    // NOP
    // 0x24ebbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ebbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ebc0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24ebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24ebc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ebc8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ebcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ebccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ebd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24ebd4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x24ebd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ebd8: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x24ebd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x24ebdc: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x24ebdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ebe0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24ebe4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x24ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x24ebe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24ebe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ebec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ebf0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x24ebf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ebf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EBF4u;
    SET_GPR_U32(ctx, 31, 0x24EBFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EBF4u, 0x24EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBFCu;
label_24ebfc:
    // 0x24ebfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ebfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ec00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EC00u;
    SET_GPR_U32(ctx, 31, 0x24EC08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EC00u, 0x24EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC08u;
label_24ec08:
    // 0x24ec08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ec08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ec0c: 0x0  nop
    ctx->pc = 0x24ec0cu;
    // NOP
    // 0x24ec10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24ec10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24ec14: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24ec14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ec18: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x24EC18u;
    {
        const bool branch_taken_0x24ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ec18) {
            ctx->pc = 0x24EDE0u;
            goto label_24ede0;
        }
    }
    ctx->pc = 0x24EC20u;
label_24ec20:
    // 0x24ec20: 0xc067654  jal         func_19D950
    ctx->pc = 0x24EC20u;
    SET_GPR_U32(ctx, 31, 0x24EC28u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24EC20u, 0x24EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC28u;
label_24ec28:
    // 0x24ec28: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x24ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x24ec2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ec2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ec30: 0x0  nop
    ctx->pc = 0x24ec30u;
    // NOP
    // 0x24ec34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ec34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ec38: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24ec38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24ec3c: 0xc067654  jal         func_19D950
    ctx->pc = 0x24EC3Cu;
    SET_GPR_U32(ctx, 31, 0x24EC44u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24EC3Cu, 0x24EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC44u;
label_24ec44:
    // 0x24ec44: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x24ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x24ec48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ec48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ec4c: 0x0  nop
    ctx->pc = 0x24ec4cu;
    // NOP
    // 0x24ec50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ec50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ec54: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24ec54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24ec58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ec5c: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x24ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24ec60: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x24ec60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ec64: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ec68: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x24ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x24ec6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec70: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ec74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ec78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24ec7c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec80: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ec84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ec84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ec88: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24ec8c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24ec90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ec90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ec94: 0x0  nop
    ctx->pc = 0x24ec94u;
    // NOP
    // 0x24ec98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24ec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24ec9c: 0x3c03c316  lui         $v1, 0xC316
    ctx->pc = 0x24ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49942 << 16));
    // 0x24eca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24eca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eca4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24eca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eca8: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x24eca8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ecac: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24ecb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ecb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ecb4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ecb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ecb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ecbc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24ecbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24ecc0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24ecc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ecc4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24ecc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ecc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eccc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ecd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ecd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ecd4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ecd8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ecdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ece0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24ece4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x24ece4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ece8: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x24ece8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x24ecec: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x24ececu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ecf0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24ecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24ecf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ecf8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ecfc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24ecfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24ed00: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24ed00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24ed04: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24ed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24ed0c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x24ed0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24ed10: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x24ed10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x24ed14: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x24ed14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ed18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed1c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ed20: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x24ed20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ed24: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24ed24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24ed28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ed30: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x24ed30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ed34: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x24ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x24ed38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ed3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed40: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ed44: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24ed44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ed48: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24ed48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24ed4c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24ed4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed50: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x24ed50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x24ed54: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x24ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x24ed58: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24ed5c: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x24ed5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24ed60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed64: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ed68: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24ed68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ed6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ed70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ed78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ed7c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ed7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ed80: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x24ed80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24ed84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed88: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ed8c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24ed8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ed90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ed94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ed9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ed9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eda0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24eda0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eda4: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x24eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x24eda8: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x24eda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x24edac: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24edacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24edb0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x24edb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x24edb4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x24edb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24edb8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24EDB8u;
    SET_GPR_U32(ctx, 31, 0x24EDC0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24EDB8u, 0x24EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDC0u;
label_24edc0:
    // 0x24edc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24edc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24edc4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24EDC4u;
    SET_GPR_U32(ctx, 31, 0x24EDCCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24EDC4u, 0x24EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDCCu;
label_24edcc:
    // 0x24edcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24edd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24edd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24edd4: 0x0  nop
    ctx->pc = 0x24edd4u;
    // NOP
    // 0x24edd8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24edd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24eddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24eddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24ede0:
    // 0x24ede0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24ede0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24ede4: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x24EDE4u;
    {
        const bool branch_taken_0x24ede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ede4) {
            ctx->pc = 0x24EC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ec20;
        }
    }
    ctx->pc = 0x24EDECu;
    // 0x24edec: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24edf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24edf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24edf4: 0x0  nop
    ctx->pc = 0x24edf4u;
    // NOP
    // 0x24edf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24edf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24edfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24edfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee00: 0x0  nop
    ctx->pc = 0x24ee00u;
    // NOP
    // 0x24ee04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ee08: 0x3c04430c  lui         $a0, 0x430C
    ctx->pc = 0x24ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17164 << 16));
    // 0x24ee0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24ee0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee10: 0x0  nop
    ctx->pc = 0x24ee10u;
    // NOP
    // 0x24ee14: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ee18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ee1c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ee20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee2c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x24ee2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x24ee30: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x24ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ee34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ee38: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x24ee38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee3c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ee40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ee50: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x24ee50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ee54: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x24ee54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x24ee58: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x24ee58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x24ee5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ee60: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ee64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ee74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ee78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ee7c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24ee7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ee84: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ee88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ee98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ee9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eea0: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x24eea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24eea4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eea8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24eeac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24eeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24eeb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24eeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24eeb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24eeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eeb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24eebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eec0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x24eec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eec4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x24eec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24eec8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eecc: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24eed0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24eed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24eed4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24eed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24eed8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24eed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eedc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24eee0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eee4: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x24eee4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eee8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x24eee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x24eeec: 0x24040601  addiu       $a0, $zero, 0x601
    ctx->pc = 0x24eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
    // 0x24eef0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24eef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24eef4: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24eef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24eef8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24EEF8u;
    SET_GPR_U32(ctx, 31, 0x24EF00u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24EEF8u, 0x24EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF00u;
label_24ef00:
    // 0x24ef00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ef00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef04: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24EF04u;
    SET_GPR_U32(ctx, 31, 0x24EF0Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24EF04u, 0x24EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF0Cu;
label_24ef0c:
    // 0x24ef0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24ef0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ef14: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24ef18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24ef18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ef1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24ef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ef20: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24ef24: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef28: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24ef2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef30: 0x0  nop
    ctx->pc = 0x24ef30u;
    // NOP
    // 0x24ef34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ef34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ef38: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24ef38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24ef3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ef40: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ef44: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24ef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ef48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ef4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ef50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ef54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ef58: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ef58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ef5c: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x24ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x24ef60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24ef60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ef64: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ef68: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24ef68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef6c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EF6Cu;
    SET_GPR_U32(ctx, 31, 0x24EF74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EF6Cu, 0x24EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF74u;
label_24ef74:
    // 0x24ef74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ef74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EF78u;
    SET_GPR_U32(ctx, 31, 0x24EF80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EF78u, 0x24EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF80u;
label_24ef80:
    // 0x24ef80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24ef80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef84: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef88: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24ef8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24ef8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef90: 0x0  nop
    ctx->pc = 0x24ef90u;
    // NOP
    // 0x24ef94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ef94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ef98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24ef98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24ef9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24efa0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x24efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24efa4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24efa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24efa8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24efa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24efac: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24efacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24efb0: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x24efb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24efb8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24efbc: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24efc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24efc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24efc4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x24efc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24efc8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24efc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24efcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EFCCu;
    SET_GPR_U32(ctx, 31, 0x24EFD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EFCCu, 0x24EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFD4u;
label_24efd4:
    // 0x24efd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24efd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24efd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EFD8u;
    SET_GPR_U32(ctx, 31, 0x24EFE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EFD8u, 0x24EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFE0u;
label_24efe0:
    // 0x24efe0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24efe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24efe4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24efe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24efe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24efec: 0x0  nop
    ctx->pc = 0x24efecu;
    // NOP
    // 0x24eff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24eff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24eff4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24eff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eff8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24effc: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x24effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24f000: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f004: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f008: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f00c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f014: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f018: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24f01c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24f01cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24f020: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f024: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F024u;
    SET_GPR_U32(ctx, 31, 0x24F02Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F024u, 0x24F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F02Cu;
label_24f02c:
    // 0x24f02c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f02cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f030: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F030u;
    SET_GPR_U32(ctx, 31, 0x24F038u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F030u, 0x24F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F038u;
label_24f038:
    // 0x24f038: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f03c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x24f040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f044: 0x0  nop
    ctx->pc = 0x24f044u;
    // NOP
    // 0x24f048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24f048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24f04c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24f050: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24f054: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x24f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x24f058: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f05c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f060: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f064: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f068: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f06c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f070: 0x24050411  addiu       $a1, $zero, 0x411
    ctx->pc = 0x24f070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x24f074: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24f074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24f078: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24f078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24f07c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f080: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F080u;
    SET_GPR_U32(ctx, 31, 0x24F088u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F080u, 0x24F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F088u;
label_24f088:
    // 0x24f088: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f08c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F08Cu;
    SET_GPR_U32(ctx, 31, 0x24F094u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F08Cu, 0x24F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F094u;
label_24f094:
    // 0x24f094: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24f098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f09c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x24f09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24f0a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24f0a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24f0a8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24f0a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f0b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F0BCu;
}
