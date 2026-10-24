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

// Function: entry_002f3050
// Address: 0x2f3050 - 0x2f3290
void entry_002f3050_0x2f3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3050_0x2f3050");
#endif

    switch (ctx->pc) {
        case 0x2f3158u: goto label_2f3158;
        case 0x2f327cu: goto label_2f327c;
        default: break;
    }

    ctx->pc = 0x2f3050u;

label_2f3050:
    // 0x2f3050: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f3050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f3054:
    // 0x2f3054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3058:
    // 0x2f3058: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f305c:
    // 0x2f305c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2f305cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2f3060:
    // 0x2f3060: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f3060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f3064:
    // 0x2f3064: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3068:
    // 0x2f3068: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3068u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f306c:
    // 0x2f306c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2f3070:
    // 0x2f3070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3074:
    // 0x2f3074: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2f3074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2f3078:
    // 0x2f3078: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f307c:
    // 0x2f307c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2f307cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2f3080:
    // 0x2f3080: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2f3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2f3084:
    // 0x2f3084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f3088:
    // 0x2f3088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f308c:
    // 0x2f308c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f3090:
    // 0x2f3090: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3094:
    // 0x2f3094: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f3094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3098:
    // 0x2f3098: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f309c:
    // 0x2f309c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f30a0:
    // 0x2f30a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f30a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f30a4:
    // 0x2f30a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f30a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f30a8:
    // 0x2f30a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f30a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f30ac:
    // 0x2f30ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f30acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f30b0:
    // 0x2f30b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f30b4:
    // 0x2f30b4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f30b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2f30b8:
    // 0x2f30b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f30bc:
    // 0x2f30bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f30bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f30c0:
    // 0x2f30c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f30c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f30c4:
    // 0x2f30c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f30c8:
    // 0x2f30c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f30c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f30cc:
    // 0x2f30cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f30ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f30d0:
    // 0x2f30d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f30d4:
    // 0x2f30d4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f30d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2f30d8:
    // 0x2f30d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f30dc:
    // 0x2f30dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f30dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f30e0:
    // 0x2f30e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f30e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f30e4:
    // 0x2f30e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f30e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f30e8:
    // 0x2f30e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f30ec:
    // 0x2f30ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f30f0:
    // 0x2f30f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f30f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f30f4:
    // 0x2f30f4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f30f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2f30f8:
    // 0x2f30f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f30fc:
    // 0x2f30fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f30fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f3100:
    // 0x2f3100: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f3100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f3104:
    // 0x2f3104: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f3104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f3108:
    // 0x2f3108: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f3108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f310c:
    // 0x2f310c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f3110:
    // 0x2f3110: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f3110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f3114:
    // 0x2f3114: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f3114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2f3118:
    // 0x2f3118: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2f311c:
    // 0x2f311c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f3120:
    // 0x2f3120: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3124:
    // 0x2f3124: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f3128:
    // 0x2f3128: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2f3128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2f312c:
    // 0x2f312c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2f312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2f3130:
    // 0x2f3130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3134:
    // 0x2f3134: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f3138:
    // 0x2f3138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f313c:
    // 0x2f313c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3140:
    // 0x2f3140: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f3144:
    // 0x2f3144: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f3144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3148:
    // 0x2f3148: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f3148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2f314c:
    // 0x2f314c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f314cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2f3150:
    // 0x2f3150: 0xc0634c8  jal         func_18D320
label_2f3154:
    if (ctx->pc == 0x2F3154u) {
        ctx->pc = 0x2F3158u;
        goto label_2f3158;
    }
    ctx->pc = 0x2F3150u;
    SET_GPR_U32(ctx, 31, 0x2F3158u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F3150u, 0x2F3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3158u;
label_2f3158:
    // 0x2f3158: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f3158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f315c:
    // 0x2f315c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f3160:
    // 0x2f3160: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f3160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2f3164:
    // 0x2f3164: 0x1203004a  beq         $s0, $v1, . + 4 + (0x4A << 2)
label_2f3168:
    if (ctx->pc == 0x2F3168u) {
        ctx->pc = 0x2F316Cu;
        goto label_2f316c;
    }
    ctx->pc = 0x2F3164u;
    {
        const bool branch_taken_0x2f3164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3164) {
            ctx->pc = 0x2F3290u;
            return;
        }
    }
    ctx->pc = 0x2F316Cu;
label_2f316c:
    // 0x2f316c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2f3170:
    // 0x2f3170: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f3170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
label_2f3174:
    // 0x2f3174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3178:
    // 0x2f3178: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f3178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2f317c:
    // 0x2f317c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f3180:
    // 0x2f3180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3184:
    // 0x2f3184: 0x0  nop
    ctx->pc = 0x2f3184u;
    // NOP
label_2f3188:
    // 0x2f3188: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f3188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2f318c:
    // 0x2f318c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f3190:
    // 0x2f3190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3194:
    // 0x2f3194: 0x0  nop
    ctx->pc = 0x2f3194u;
    // NOP
label_2f3198:
    // 0x2f3198: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f3198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2f319c:
    // 0x2f319c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f31a0:
    // 0x2f31a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31a4:
    // 0x2f31a4: 0x0  nop
    ctx->pc = 0x2f31a4u;
    // NOP
label_2f31a8:
    // 0x2f31a8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f31a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f31ac:
    // 0x2f31ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f31acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f31b0:
    // 0x2f31b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31b4:
    // 0x2f31b4: 0x0  nop
    ctx->pc = 0x2f31b4u;
    // NOP
label_2f31b8:
    // 0x2f31b8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f31b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2f31bc:
    // 0x2f31bc: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2f31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_2f31c0:
    // 0x2f31c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f31c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f31c4:
    // 0x2f31c4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f31c8:
    // 0x2f31c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f31c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f31cc:
    // 0x2f31cc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f31ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2f31d0:
    // 0x2f31d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f31d4:
    // 0x2f31d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31d8:
    // 0x2f31d8: 0x0  nop
    ctx->pc = 0x2f31d8u;
    // NOP
label_2f31dc:
    // 0x2f31dc: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2f31dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2f31e0:
    // 0x2f31e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f31e4:
    // 0x2f31e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31e8:
    // 0x2f31e8: 0x0  nop
    ctx->pc = 0x2f31e8u;
    // NOP
label_2f31ec:
    // 0x2f31ec: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2f31ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2f31f0:
    // 0x2f31f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f31f4:
    // 0x2f31f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31f8:
    // 0x2f31f8: 0x0  nop
    ctx->pc = 0x2f31f8u;
    // NOP
label_2f31fc:
    // 0x2f31fc: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2f31fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2f3200:
    // 0x2f3200: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f3204:
    // 0x2f3204: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f3204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3208:
    // 0x2f3208: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2f3208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2f320c:
    // 0x2f320c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f3210:
    // 0x2f3210: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f3210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3214:
    // 0x2f3214: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2f3214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2f3218:
    // 0x2f3218: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f3218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f321c:
    // 0x2f321c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3220:
    // 0x2f3220: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2f3220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2f3224:
    // 0x2f3224: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2f3224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_2f3228:
    // 0x2f3228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f322c:
    // 0x2f322c: 0x0  nop
    ctx->pc = 0x2f322cu;
    // NOP
label_2f3230:
    // 0x2f3230: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f3230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2f3234:
    // 0x2f3234: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f3238:
    // 0x2f3238: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f3238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2f323c:
    // 0x2f323c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f3240:
    // 0x2f3240: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2f3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2f3244:
    // 0x2f3244: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f3244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2f3248:
    // 0x2f3248: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f324c:
    // 0x2f324c: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x2f324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_2f3250:
    // 0x2f3250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f3254:
    // 0x2f3254: 0xa20202ab  sb          $v0, 0x2AB($s0)
    ctx->pc = 0x2f3254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 683), (uint8_t)GPR_U32(ctx, 2));
label_2f3258:
    // 0x2f3258: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f3258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f325c:
    // 0x2f325c: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f3260:
    // 0x2f3260: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f3264:
    // 0x2f3264: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f3264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f3268:
    // 0x2f3268: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f326c:
    // 0x2f326c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f3270:
    // 0x2f3270: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3274:
    // 0x2f3274: 0x40f809  jalr        $v0
label_2f3278:
    if (ctx->pc == 0x2F3278u) {
        ctx->pc = 0x2F327Cu;
        goto label_2f327c;
    }
    ctx->pc = 0x2F3274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F327Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3274u, 0x2F327Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F327Cu;
label_2f327c:
    // 0x2f327c: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f3280:
    // 0x2f3280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f3284:
    // 0x2f3284: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f3284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2f3288:
    // 0x2f3288: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f328c:
    if (ctx->pc == 0x2F328Cu) {
        ctx->pc = 0x2F3290u;
        goto label_fallthrough_0x2f3288;
    }
    ctx->pc = 0x2F3288u;
    {
        const bool branch_taken_0x2f3288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3288) {
            ctx->pc = 0x2F3298u;
            return;
        }
    }
label_fallthrough_0x2f3288:
    ctx->pc = 0x2F3290u;
}
