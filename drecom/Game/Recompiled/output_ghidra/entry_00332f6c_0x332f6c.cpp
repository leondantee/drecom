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

// Function: entry_00332f6c
// Address: 0x332f6c - 0x333210
void entry_00332f6c_0x332f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332f6c_0x332f6c");
#endif

    switch (ctx->pc) {
        case 0x332f8cu: goto label_332f8c;
        case 0x33302cu: goto label_33302c;
        case 0x333150u: goto label_333150;
        default: break;
    }

    ctx->pc = 0x332f6cu;

    // 0x332f6c: 0x9223683f  lbu         $v1, 0x683F($s1)
    ctx->pc = 0x332f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x332f70: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x332f70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332f74: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x332f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x332f78: 0x9026c98e  lbu         $a2, -0x3672($at)
    ctx->pc = 0x332f78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x332f7c: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x332f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x332f80: 0xb49823  subu        $s3, $a1, $s4
    ctx->pc = 0x332f80u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x332f84: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x332F84u;
    SET_GPR_U32(ctx, 31, 0x332F8Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x332F84u, 0x332F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F8Cu;
label_332f8c:
    // 0x332f8c: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x332F8Cu;
    {
        const bool branch_taken_0x332f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332f8c) {
            ctx->pc = 0x3332DCu;
            return;
        }
    }
    ctx->pc = 0x332F94u;
    // 0x332f94: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x332f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x332f98: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x332f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x332f9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x332f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x332fa0: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x332fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x332fa4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fa8: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332fac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x332facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332fb0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x332fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x332fb4: 0x24620620  addiu       $v0, $v1, 0x620
    ctx->pc = 0x332fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1568));
    // 0x332fb8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fbc: 0xac222790  sw          $v0, 0x2790($at)
    ctx->pc = 0x332fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x332fc0: 0x8e2565a0  lw          $a1, 0x65A0($s1)
    ctx->pc = 0x332fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x332fc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fc8: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x332fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x332fcc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x332fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x332fd0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fd4: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x332fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x332fd8: 0x94470004  lhu         $a3, 0x4($v0)
    ctx->pc = 0x332fd8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x332fdc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fe0: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332fe4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332fec: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x332fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x332ff0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x332ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x332ff4: 0x24822730  addiu       $v0, $a0, 0x2730
    ctx->pc = 0x332ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x332ff8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x332ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x332ffc: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x332ffcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x333000: 0x30e43fff  andi        $a0, $a3, 0x3FFF
    ctx->pc = 0x333000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x333004: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x333004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x333008: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x333008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33300c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x33300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x333010: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x333010u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x333014: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333018: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x333018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x33301c: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x33301cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x333020: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x333020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x333024: 0xc05e990  jal         func_17A640
    ctx->pc = 0x333024u;
    SET_GPR_U32(ctx, 31, 0x33302Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x333024u, 0x33302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33302Cu;
label_33302c:
    // 0x33302c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x33302cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333030: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x333030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x333034: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333038: 0x8c252780  lw          $a1, 0x2780($at)
    ctx->pc = 0x333038u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892780u));
    // 0x33303c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33303cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x333040: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x333040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x333044: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x333044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x333048: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x333048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33304c: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x33304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x333050: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x333050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333054: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x333054u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x333058: 0x30c23fff  andi        $v0, $a2, 0x3FFF
    ctx->pc = 0x333058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x33305c: 0x2317c  dsll32      $a2, $v0, 5
    ctx->pc = 0x33305cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 5));
    // 0x333060: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x333060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x333064: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x333064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x333068: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x333068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33306c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x33306cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x333070: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x333070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x333074: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x333074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333078: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x333078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33307c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x33307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x333080: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x333080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333084: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x333084u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x333088: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33308c: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x33308cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x333090: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x333090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x333094: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333098: 0xac222790  sw          $v0, 0x2790($at)
    ctx->pc = 0x333098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x33309c: 0x8e2265a0  lw          $v0, 0x65A0($s1)
    ctx->pc = 0x33309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x3330a0: 0x24437fff  addiu       $v1, $v0, 0x7FFF
    ctx->pc = 0x3330a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x3330a4: 0x24622801  addiu       $v0, $v1, 0x2801
    ctx->pc = 0x3330a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10241));
    // 0x3330a8: 0xae2265a0  sw          $v0, 0x65A0($s1)
    ctx->pc = 0x3330a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 2));
    // 0x3330ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3330acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3330b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330b4: 0x8c252790  lw          $a1, 0x2790($at)
    ctx->pc = 0x3330b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892790u));
    // 0x3330b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3330b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3330bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330c0: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3330c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3330c4: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x3330c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3330c8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3330c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3330cc: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x3330ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3330d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3330d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3330d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330d8: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x3330d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x3330dc: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x3330dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3330e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330e4: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3330e8: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x3330e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3330ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3330ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3330f0: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x3330f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3330f4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3330f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3330f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330fc: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x3330fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x333100: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x333100u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x333104: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333108: 0x8c262780  lw          $a2, 0x2780($at)
    ctx->pc = 0x333108u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x892780u));
    // 0x33310c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x33310cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x333110: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333114: 0xac242780  sw          $a0, 0x2780($at)
    ctx->pc = 0x333114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x333118: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33311c: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x33311cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x333120: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x333120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x333124: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x333124u;
    {
        const bool branch_taken_0x333124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333124) {
            ctx->pc = 0x333228u;
            return;
        }
    }
    ctx->pc = 0x33312Cu;
    // 0x33312c: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x33312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x333130: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333134: 0xac222790  sw          $v0, 0x2790($at)
    ctx->pc = 0x333134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x333138: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33313c: 0x8c242790  lw          $a0, 0x2790($at)
    ctx->pc = 0x33313cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892790u));
    // 0x333140: 0x26250720  addiu       $a1, $s1, 0x720
    ctx->pc = 0x333140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x333144: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x333144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x333148: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x333148u;
    SET_GPR_U32(ctx, 31, 0x333150u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x333150u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x333150u) { return; }
    ctx->pc = 0x333150u;
label_333150:
    // 0x333150: 0x8e2465a0  lw          $a0, 0x65A0($s1)
    ctx->pc = 0x333150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x333154: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333158: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x333158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x33315c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x333160: 0x8e2465a0  lw          $a0, 0x65A0($s1)
    ctx->pc = 0x333160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x333164: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x333164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x333168: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x333168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x33316c: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x33316cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333170: 0xae2765a0  sw          $a3, 0x65A0($s1)
    ctx->pc = 0x333170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 7));
    // 0x333174: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333178: 0x8c252790  lw          $a1, 0x2790($at)
    ctx->pc = 0x333178u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892790u));
    // 0x33317c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x33317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x333180: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333184: 0xac232790  sw          $v1, 0x2790($at)
    ctx->pc = 0x333184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x333188: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x333188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x33318c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33318cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333190: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x333190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x333194: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x333194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x333198: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33319c: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x33319cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331a0: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x3331a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3331a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3331a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331a8: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x3331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x3331ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3331acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3331b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3331b4: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3331b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331b8: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x3331b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3331bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3331bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3331c0: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3331c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331c4: 0x9463fffe  lhu         $v1, -0x2($v1)
    ctx->pc = 0x3331c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3331c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3331c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3331ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3331d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3331d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3331d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3331d8: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331dc: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x3331dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3331e0: 0x8e236870  lw          $v1, 0x6870($s1)
    ctx->pc = 0x3331e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x3331e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3331e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3331e8: 0xae236870  sw          $v1, 0x6870($s1)
    ctx->pc = 0x3331e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 3));
    // 0x3331ec: 0x8e245dc4  lw          $a0, 0x5DC4($s1)
    ctx->pc = 0x3331ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24004)));
    // 0x3331f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3331f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3331f4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3331F4u;
    {
        const bool branch_taken_0x3331f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3331f4) {
            ctx->pc = 0x333210u;
            return;
        }
    }
    ctx->pc = 0x3331FCu;
    // 0x3331fc: 0x8e235dc8  lw          $v1, 0x5DC8($s1)
    ctx->pc = 0x3331fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24008)));
    // 0x333200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x333204: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x333204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x333208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x333208u;
    {
        const bool branch_taken_0x333208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333208) {
            ctx->pc = 0x333218u;
            return;
        }
    }
    ctx->pc = 0x333210u;
}
