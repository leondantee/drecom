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

// Function: Skeleton_pl_L
// Address: 0x261100 - 0x261b54
void Skeleton_pl_L_0x261100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Skeleton_pl_L_0x261100");
#endif

    switch (ctx->pc) {
        case 0x2612ecu: goto label_2612ec;
        case 0x261300u: goto label_261300;
        case 0x261328u: goto label_261328;
        case 0x261340u: goto label_261340;
        case 0x2613c8u: goto label_2613c8;
        case 0x261454u: goto label_261454;
        case 0x261640u: goto label_261640;
        case 0x261654u: goto label_261654;
        case 0x261668u: goto label_261668;
        case 0x26167cu: goto label_26167c;
        case 0x261694u: goto label_261694;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ecu: goto label_2616ec;
        case 0x261700u: goto label_261700;
        case 0x261714u: goto label_261714;
        case 0x261724u: goto label_261724;
        case 0x261740u: goto label_261740;
        case 0x26175cu: goto label_26175c;
        case 0x261780u: goto label_261780;
        case 0x261794u: goto label_261794;
        case 0x2617a0u: goto label_2617a0;
        case 0x261824u: goto label_261824;
        case 0x26188cu: goto label_26188c;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618dcu: goto label_2618dc;
        case 0x261900u: goto label_261900;
        case 0x261930u: goto label_261930;
        case 0x261944u: goto label_261944;
        case 0x261954u: goto label_261954;
        case 0x261968u: goto label_261968;
        case 0x261978u: goto label_261978;
        case 0x261984u: goto label_261984;
        case 0x261994u: goto label_261994;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619ecu: goto label_2619ec;
        case 0x261a00u: goto label_261a00;
        case 0x261a14u: goto label_261a14;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a50u: goto label_261a50;
        case 0x261a70u: goto label_261a70;
        case 0x261a88u: goto label_261a88;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ac8u: goto label_261ac8;
        case 0x261aecu: goto label_261aec;
        case 0x261afcu: goto label_261afc;
        case 0x261b24u: goto label_261b24;
        default: break;
    }

    ctx->pc = 0x261100u;

    // 0x261100: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x261104: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x261104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x261108: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x261108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26110c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x261110: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x261110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x261114: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x261114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x261118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x261118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26111c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x261120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x261124: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x261124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x261128: 0xa3a50258  sb          $a1, 0x258($sp)
    ctx->pc = 0x261128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 600), (uint8_t)GPR_U32(ctx, 5));
    // 0x26112c: 0x93a40258  lbu         $a0, 0x258($sp)
    ctx->pc = 0x26112cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261130: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x261130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x261134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x261134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x261138: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x261138u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26113c: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x26113cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261144: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x261148: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x261148u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x26114c: 0x93a50258  lbu         $a1, 0x258($sp)
    ctx->pc = 0x26114cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261150: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x261150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x261154: 0x24550003  addiu       $s5, $v0, 0x3
    ctx->pc = 0x261154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x261158: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x261158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26115c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x26115cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x261160: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x261160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x261164: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x261164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261168: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x261168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26116c: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x26116cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x261170: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261174: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x261174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x261178: 0x8c640330  lw          $a0, 0x330($v1)
    ctx->pc = 0x261178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x26117c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x26117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261180: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x261180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261184: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x261184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x261188: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26118c: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x26118cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261190: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x261190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261194: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x261194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x261198: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x261198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26119c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2611a0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2611a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2611a4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2611a8: 0x8cc602d0  lw          $a2, 0x2D0($a2)
    ctx->pc = 0x2611a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x2611ac: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2611acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2611b0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2611b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2611b4: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2611b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2611b8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2611bc: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2611bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2611c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2611c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2611c4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2611c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2611c8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2611c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2611cc: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x2611ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2611d0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2611d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2611d4: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x2611d4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2611d8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2611d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2611dc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2611e0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2611e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2611e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2611e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2611e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2611ec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2611ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2611f0: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x2611f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2611f4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2611f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2611f8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2611f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2611fc: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261200: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x261200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x261204: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x261204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x261208: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x261208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26120c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x261210: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261214: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x261214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x261218: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x261218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26121c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x26121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261220: 0x93a40258  lbu         $a0, 0x258($sp)
    ctx->pc = 0x261220u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261224: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x261224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x261228: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x261228u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x26122c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x26122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x261230: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x261230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261234: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x261234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261238: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x261238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x26123c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x26123cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261240: 0x93a60258  lbu         $a2, 0x258($sp)
    ctx->pc = 0x261240u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261244: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x261244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x261248: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x261248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26124c: 0x8ca20330  lw          $v0, 0x330($a1)
    ctx->pc = 0x26124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x261250: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x261250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261254: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x261254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261258: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x261258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x26125c: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x26125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261260: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x261260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261264: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x261264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261268: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x261268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x26126c: 0x8c660330  lw          $a2, 0x330($v1)
    ctx->pc = 0x26126cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x261270: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x261270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x261274: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x261274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261278: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x261278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x26127c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x26127cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x261280: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x261280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261284: 0x0  nop
    ctx->pc = 0x261284u;
    // NOP
    // 0x261288: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x261288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x26128c: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x26128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261290: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x261290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x261294: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x261294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261298: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x261298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x26129c: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x26129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2612a0: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x2612a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2612a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2612a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2612a8: 0x0  nop
    ctx->pc = 0x2612a8u;
    // NOP
    // 0x2612ac: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2612acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2612b0: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2612b4: 0x93a60258  lbu         $a2, 0x258($sp)
    ctx->pc = 0x2612b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2612b8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2612b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2612bc: 0x8ca40344  lw          $a0, 0x344($a1)
    ctx->pc = 0x2612bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x2612c0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2612c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2612c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2612c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2612c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2612c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2612cc: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x2612ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2612d0: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x2612d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2612d4: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x2612d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x2612d8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2612d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2612dc: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x2612dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2612e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2612e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2612e4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2612E4u;
    SET_GPR_U32(ctx, 31, 0x2612ECu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2612ECu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2612ECu) { return; }
    ctx->pc = 0x2612ECu;
label_2612ec:
    // 0x2612ec: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2612ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2612f0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2612f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2612f4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2612f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2612f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2612F8u;
    SET_GPR_U32(ctx, 31, 0x261300u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x261300u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261300u) { return; }
    ctx->pc = 0x261300u;
label_261300:
    // 0x261300: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x261304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x261304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261308: 0x0  nop
    ctx->pc = 0x261308u;
    // NOP
    // 0x26130c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x26130cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x261310: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261314: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x261314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x261318: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26131c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x26131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261320: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x261320u;
    SET_GPR_U32(ctx, 31, 0x261328u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x261328u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261328u) { return; }
    ctx->pc = 0x261328u;
label_261328:
    // 0x261328: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x261328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x26132c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26132cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x261330: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261334: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x261334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x261338: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x261338u;
    SET_GPR_U32(ctx, 31, 0x261340u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x261340u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261340u) { return; }
    ctx->pc = 0x261340u;
label_261340:
    // 0x261340: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x261340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261344: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261348: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x261348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26134c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26134cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x261350: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x261350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x261354: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x261354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261358: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x261358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x26135c: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x26135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261360: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261364: 0xc4c002e8  lwc1        $f0, 0x2E8($a2)
    ctx->pc = 0x261364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x261368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26136c: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x26136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x261370: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x261370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x261374: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x261374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261378: 0x0  nop
    ctx->pc = 0x261378u;
    // NOP
    // 0x26137c: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x26137cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x261380: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261384: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x261384u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x261388: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x261388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x26138c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x26138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x261390: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261390u;
    {
        const bool branch_taken_0x261390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261390) {
            ctx->pc = 0x2613ACu;
            goto label_2613ac;
        }
    }
    ctx->pc = 0x261398u;
    // 0x261398: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x261398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26139c: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x26139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613a0: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2613a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2613a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2613a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2613a8: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x2613a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_2613ac:
    // 0x2613ac: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613b0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2613b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2613b4: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x2613b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2613b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2613b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2613bc: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2613c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2613C0u;
    SET_GPR_U32(ctx, 31, 0x2613C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2613C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2613C8u) { return; }
    ctx->pc = 0x2613C8u;
label_2613c8:
    // 0x2613c8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613cc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2613ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2613d0: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x2613d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2613d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2613d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2613d8: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x2613d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x2613dc: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613e0: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x2613e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x2613e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2613e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2613e8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2613e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2613ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2613ECu;
    {
        const bool branch_taken_0x2613ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2613ec) {
            ctx->pc = 0x26140Cu;
            goto label_26140c;
        }
    }
    ctx->pc = 0x2613F4u;
    // 0x2613f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613f8: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x2613f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x2613fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2613fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261400: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261404u;
    {
        const bool branch_taken_0x261404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261404) {
            ctx->pc = 0x261420u;
            goto label_261420;
        }
    }
    ctx->pc = 0x26140Cu;
label_26140c:
    // 0x26140c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x26140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261410: 0xc44002d8  lwc1        $f0, 0x2D8($v0)
    ctx->pc = 0x261410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261414: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261418: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x261418u;
    {
        const bool branch_taken_0x261418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261418) {
            ctx->pc = 0x261484u;
            goto label_261484;
        }
    }
    ctx->pc = 0x261420u;
label_261420:
    // 0x261420: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x261420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x261424: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x261424u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x261428: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261428u;
    {
        const bool branch_taken_0x261428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261428) {
            ctx->pc = 0x261444u;
            goto label_261444;
        }
    }
    ctx->pc = 0x261430u;
    // 0x261430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261434: 0x0  nop
    ctx->pc = 0x261434u;
    // NOP
    // 0x261438: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x26143c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26143Cu;
    {
        const bool branch_taken_0x26143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26143c) {
            ctx->pc = 0x261484u;
            goto label_261484;
        }
    }
    ctx->pc = 0x261444u;
label_261444:
    // 0x261444: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x261444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261448: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x261448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26144c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26144Cu;
    SET_GPR_U32(ctx, 31, 0x261454u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26144Cu, 0x261454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261454u;
label_261454:
    // 0x261454: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261458: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x261458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x26145c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x26145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x261460: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261464: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261468: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x261468u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26146c: 0x0  nop
    ctx->pc = 0x26146cu;
    // NOP
    // 0x261470: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x261470u;
    {
        const bool branch_taken_0x261470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261470) {
            ctx->pc = 0x261484u;
            goto label_261484;
        }
    }
    ctx->pc = 0x261478u;
    // 0x261478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26147c: 0x0  nop
    ctx->pc = 0x26147cu;
    // NOP
    // 0x261480: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_261484:
    // 0x261484: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261488: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x261488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26148c: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x26148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261490: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x261490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x261494: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261498: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x261498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26149c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26149cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2614a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2614a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2614a4: 0x0  nop
    ctx->pc = 0x2614a4u;
    // NOP
    // 0x2614a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2614a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2614ac: 0x0  nop
    ctx->pc = 0x2614acu;
    // NOP
    // 0x2614b0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2614B0u;
    {
        const bool branch_taken_0x2614b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2614b0) {
            ctx->pc = 0x2614D0u;
            goto label_2614d0;
        }
    }
    ctx->pc = 0x2614B8u;
    // 0x2614b8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2614bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2614bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2614c0: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2614c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2614c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2614c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2614c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2614cc: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2614ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2614d0:
    // 0x2614d0: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x2614d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2614d4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2614d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2614d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2614dc: 0x0  nop
    ctx->pc = 0x2614dcu;
    // NOP
    // 0x2614e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2614e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2614e4: 0x0  nop
    ctx->pc = 0x2614e4u;
    // NOP
    // 0x2614e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2614E8u;
    {
        const bool branch_taken_0x2614e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2614e8) {
            ctx->pc = 0x261508u;
            goto label_261508;
        }
    }
    ctx->pc = 0x2614F0u;
    // 0x2614f0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2614f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2614f8: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2614fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2614fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261500: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261504: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_261508:
    // 0x261508: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26150c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261510: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261518: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26151c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261524: 0x0  nop
    ctx->pc = 0x261524u;
    // NOP
    // 0x261528: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x261528u;
    {
        const bool branch_taken_0x261528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261528) {
            ctx->pc = 0x261598u;
            goto label_261598;
        }
    }
    ctx->pc = 0x261530u;
    // 0x261530: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261534: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261538: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26153c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261540: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261544: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26154c: 0x0  nop
    ctx->pc = 0x26154cu;
    // NOP
    // 0x261550: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x261550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261554: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261558: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26155c: 0x0  nop
    ctx->pc = 0x26155cu;
    // NOP
    // 0x261560: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x261560u;
    {
        const bool branch_taken_0x261560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261560) {
            ctx->pc = 0x2615F8u;
            goto label_2615f8;
        }
    }
    ctx->pc = 0x261568u;
    // 0x261568: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26156c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26156cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261570: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261578: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26157c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x26157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261584: 0x0  nop
    ctx->pc = 0x261584u;
    // NOP
    // 0x261588: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x261588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26158c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x26158cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261590: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x261590u;
    {
        const bool branch_taken_0x261590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261590) {
            ctx->pc = 0x2615F8u;
            goto label_2615f8;
        }
    }
    ctx->pc = 0x261598u;
label_261598:
    // 0x261598: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26159c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26159cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2615a0: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2615a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2615a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2615a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2615a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2615ac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2615acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2615b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2615b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615b4: 0x0  nop
    ctx->pc = 0x2615b4u;
    // NOP
    // 0x2615b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2615b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2615bc: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2615bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2615c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2615c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2615c4: 0x0  nop
    ctx->pc = 0x2615c4u;
    // NOP
    // 0x2615c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2615C8u;
    {
        const bool branch_taken_0x2615c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2615c8) {
            ctx->pc = 0x2615F8u;
            goto label_2615f8;
        }
    }
    ctx->pc = 0x2615D0u;
    // 0x2615d0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2615d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2615d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2615d8: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2615dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2615dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2615e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2615e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2615e4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2615e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2615e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2615e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615ec: 0x0  nop
    ctx->pc = 0x2615ecu;
    // NOP
    // 0x2615f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2615f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2615f4: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2615f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2615f8:
    // 0x2615f8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2615fc: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x2615fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261600: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261604: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x261604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261608: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x26160c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261610: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261614: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261618: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26161c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261620: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x261620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x261624: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x261624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261628: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26162c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26162cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x261630: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x261630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x261634: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261638: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x261638u;
    SET_GPR_U32(ctx, 31, 0x261640u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x261640u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261640u) { return; }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261644: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261648: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x261648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26164c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x26164Cu;
    SET_GPR_U32(ctx, 31, 0x261654u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x261654u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261654u) { return; }
    ctx->pc = 0x261654u;
label_261654:
    // 0x261654: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261658: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26165c: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x26165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261660: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x261660u;
    SET_GPR_U32(ctx, 31, 0x261668u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x261668u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261668u) { return; }
    ctx->pc = 0x261668u;
label_261668:
    // 0x261668: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26166c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x26166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261670: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x261670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261674: 0xc040ce4  jal         func_103390
    ctx->pc = 0x261674u;
    SET_GPR_U32(ctx, 31, 0x26167Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x26167Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26167Cu) { return; }
    ctx->pc = 0x26167Cu;
label_26167c:
    // 0x26167c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261680: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261684: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x261684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x261688: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26168c: 0xc040c00  jal         func_103000
    ctx->pc = 0x26168Cu;
    SET_GPR_U32(ctx, 31, 0x261694u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261694u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261694u) { return; }
    ctx->pc = 0x261694u;
label_261694:
    // 0x261694: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261698: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x261698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x26169c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x26169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2616a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2616a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2616a4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2616a8: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x2616A8u;
    SET_GPR_U32(ctx, 31, 0x2616B0u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x2616B0u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2616B0u) { return; }
    ctx->pc = 0x2616B0u;
label_2616b0:
    // 0x2616b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2616b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2616b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2616b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2616b8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2616b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616bc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2616bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2616c0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2616C0u;
    SET_GPR_U32(ctx, 31, 0x2616C8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2616C8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2616C8u) { return; }
    ctx->pc = 0x2616C8u;
label_2616c8:
    // 0x2616c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2616cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2616ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2616d0: 0x0  nop
    ctx->pc = 0x2616d0u;
    // NOP
    // 0x2616d4: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x2616d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2616d8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2616d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616dc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2616dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2616e0: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2616e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2616E4u;
    SET_GPR_U32(ctx, 31, 0x2616ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2616ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2616ECu) { return; }
    ctx->pc = 0x2616ECu;
label_2616ec:
    // 0x2616ec: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2616ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616f0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2616f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616f4: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2616f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2616f8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2616F8u;
    SET_GPR_U32(ctx, 31, 0x261700u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2616F8u, 0x261700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261700u;
label_261700:
    // 0x261700: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x261700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x261704: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261708: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x261708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26170c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x26170Cu;
    SET_GPR_U32(ctx, 31, 0x261714u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x26170Cu, 0x261714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261714u;
label_261714:
    // 0x261714: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x261714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x261718: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x261718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26171c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26171Cu;
    SET_GPR_U32(ctx, 31, 0x261724u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x261724u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261724u) { return; }
    ctx->pc = 0x261724u;
label_261724:
    // 0x261724: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261728: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x261728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26172c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x261730: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x261730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261734: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261738: 0xc040ca2  jal         func_103288
    ctx->pc = 0x261738u;
    SET_GPR_U32(ctx, 31, 0x261740u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x261740u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261740u) { return; }
    ctx->pc = 0x261740u;
label_261740:
    // 0x261740: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261744: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x261744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x261748: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x261748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x26174c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x26174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261750: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x261750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x261754: 0xc040c9e  jal         func_103278
    ctx->pc = 0x261754u;
    SET_GPR_U32(ctx, 31, 0x26175Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26175Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26175Cu) { return; }
    ctx->pc = 0x26175Cu;
label_26175c:
    // 0x26175c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x261760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261764: 0x0  nop
    ctx->pc = 0x261764u;
    // NOP
    // 0x261768: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x261768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x26176c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x26176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261770: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x261770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261774: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x261774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x261778: 0xc040c80  jal         func_103200
    ctx->pc = 0x261778u;
    SET_GPR_U32(ctx, 31, 0x261780u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x261780u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261780u) { return; }
    ctx->pc = 0x261780u;
label_261780:
    // 0x261780: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x261780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261784: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x261784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261788: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x261788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x26178c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26178Cu;
    SET_GPR_U32(ctx, 31, 0x261794u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x261794u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261794u) { return; }
    ctx->pc = 0x261794u;
label_261794:
    // 0x261794: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x261794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261798: 0xc067588  jal         func_19D620
    ctx->pc = 0x261798u;
    SET_GPR_U32(ctx, 31, 0x2617A0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x261798u, 0x2617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617A0u;
label_2617a0:
    // 0x2617a0: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2617a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2617a4: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x2617a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2617a8: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2617a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617ac: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2617acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2617b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2617b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2617b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2617b8: 0x0  nop
    ctx->pc = 0x2617b8u;
    // NOP
    // 0x2617bc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2617BCu;
    {
        const bool branch_taken_0x2617bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2617bc) {
            ctx->pc = 0x2618ACu;
            goto label_2618ac;
        }
    }
    ctx->pc = 0x2617C4u;
    // 0x2617c4: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x2617c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617c8: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2617c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2617ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2617d0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2617d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2617d4: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2617d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617d8: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2617d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2617dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2617e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2617e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2617e4: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2617e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617e8: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x2617e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2617ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2617f0: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2617f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2617f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2617f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2617f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2617f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2617fc: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2617fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261800: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x261800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261804: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x261804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26180c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x26180cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x261810: 0x0  nop
    ctx->pc = 0x261810u;
    // NOP
    // 0x261814: 0x0  nop
    ctx->pc = 0x261814u;
    // NOP
    // 0x261818: 0x0  nop
    ctx->pc = 0x261818u;
    // NOP
    // 0x26181c: 0xc045566  jal         func_115598
    ctx->pc = 0x26181Cu;
    SET_GPR_U32(ctx, 31, 0x261824u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x26181Cu, 0x261824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261824u;
label_261824:
    // 0x261824: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x261824u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x261828: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x261828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26182c: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x26182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261830: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x261830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261834: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261838: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x261838u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x26183c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x26183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261840: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x261840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261844: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261848: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x261848u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26184c: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x26184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261850: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x261850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261854: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261858: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x261858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26185c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x261860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261864: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x261864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261868: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x261868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26186c: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x26186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261870: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261874: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x261874u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x261878: 0x0  nop
    ctx->pc = 0x261878u;
    // NOP
    // 0x26187c: 0x0  nop
    ctx->pc = 0x26187cu;
    // NOP
    // 0x261880: 0x0  nop
    ctx->pc = 0x261880u;
    // NOP
    // 0x261884: 0xc045566  jal         func_115598
    ctx->pc = 0x261884u;
    SET_GPR_U32(ctx, 31, 0x26188Cu);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x261884u, 0x26188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26188Cu;
label_26188c:
    // 0x26188c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x261890: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x261890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x261894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261898: 0x0  nop
    ctx->pc = 0x261898u;
    // NOP
    // 0x26189c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26189cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2618a0: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2618a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2618a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2618A4u;
    {
        const bool branch_taken_0x2618a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618a4) {
            ctx->pc = 0x261918u;
            goto label_261918;
        }
    }
    ctx->pc = 0x2618ACu;
label_2618ac:
    // 0x2618ac: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2618acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618b0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2618b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618b4: 0xc040c24  jal         func_103090
    ctx->pc = 0x2618B4u;
    SET_GPR_U32(ctx, 31, 0x2618BCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2618BCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2618BCu) { return; }
    ctx->pc = 0x2618BCu;
label_2618bc:
    // 0x2618bc: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2618bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2618c0: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2618c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2618c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2618c8: 0x27b50190  addiu       $s5, $sp, 0x190
    ctx->pc = 0x2618c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618cc: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2618ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2618d0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2618d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618d4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2618D4u;
    SET_GPR_U32(ctx, 31, 0x2618DCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2618DCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2618DCu) { return; }
    ctx->pc = 0x2618DCu;
label_2618dc:
    // 0x2618dc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x2618dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2618e0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2618e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2618e4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2618e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2618e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2618ec: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2618f0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2618f4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618f8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2618F8u;
    SET_GPR_U32(ctx, 31, 0x261900u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2618F8u, 0x261900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261900u;
label_261900:
    // 0x261900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261904: 0x0  nop
    ctx->pc = 0x261904u;
    // NOP
    // 0x261908: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x261908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26190c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26190cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261910: 0x0  nop
    ctx->pc = 0x261910u;
    // NOP
    // 0x261914: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x261914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_261918:
    // 0x261918: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x261918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26191c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261920: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x261920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261924: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x261924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x261928: 0xc040c12  jal         func_103048
    ctx->pc = 0x261928u;
    SET_GPR_U32(ctx, 31, 0x261930u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x261930u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261930u) { return; }
    ctx->pc = 0x261930u;
label_261930:
    // 0x261930: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x261930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261934: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x261934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261938: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x261938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26193c: 0xc040c12  jal         func_103048
    ctx->pc = 0x26193Cu;
    SET_GPR_U32(ctx, 31, 0x261944u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x261944u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261944u) { return; }
    ctx->pc = 0x261944u;
label_261944:
    // 0x261944: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x261944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261948: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x261948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x26194c: 0xc040c24  jal         func_103090
    ctx->pc = 0x26194Cu;
    SET_GPR_U32(ctx, 31, 0x261954u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x261954u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261954u) { return; }
    ctx->pc = 0x261954u;
label_261954:
    // 0x261954: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x261958: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x261958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x26195c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261960: 0xc040c24  jal         func_103090
    ctx->pc = 0x261960u;
    SET_GPR_U32(ctx, 31, 0x261968u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x261968u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261968u) { return; }
    ctx->pc = 0x261968u;
label_261968:
    // 0x261968: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26196c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x261970: 0xc040c24  jal         func_103090
    ctx->pc = 0x261970u;
    SET_GPR_U32(ctx, 31, 0x261978u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x261978u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261978u) { return; }
    ctx->pc = 0x261978u;
label_261978:
    // 0x261978: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x261978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26197c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26197Cu;
    SET_GPR_U32(ctx, 31, 0x261984u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26197Cu, 0x261984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261984u;
label_261984:
    // 0x261984: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x261984u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261988: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x261988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26198c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x26198Cu;
    SET_GPR_U32(ctx, 31, 0x261994u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x261994u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261994u) { return; }
    ctx->pc = 0x261994u;
label_261994:
    // 0x261994: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x261994u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261998: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x261998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26199c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2619a0: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x2619a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2619a4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2619A4u;
    SET_GPR_U32(ctx, 31, 0x2619ACu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2619ACu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619ACu) { return; }
    ctx->pc = 0x2619ACu;
label_2619ac:
    // 0x2619ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2619acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619b0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2619B0u;
    SET_GPR_U32(ctx, 31, 0x2619B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2619B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619B8u) { return; }
    ctx->pc = 0x2619B8u;
label_2619b8:
    // 0x2619b8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2619bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2619c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2619c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619c4: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x2619c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2619c8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2619C8u;
    SET_GPR_U32(ctx, 31, 0x2619D0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2619D0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619D0u) { return; }
    ctx->pc = 0x2619D0u;
label_2619d0:
    // 0x2619d0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2619d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2619d8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619dc: 0x27b601c0  addiu       $s6, $sp, 0x1C0
    ctx->pc = 0x2619dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2619e0: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x2619e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2619e4: 0xc040c92  jal         func_103248
    ctx->pc = 0x2619E4u;
    SET_GPR_U32(ctx, 31, 0x2619ECu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x2619ECu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619ECu) { return; }
    ctx->pc = 0x2619ECu;
label_2619ec:
    // 0x2619ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2619ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2619f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2619f4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619f8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2619F8u;
    SET_GPR_U32(ctx, 31, 0x261A00u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261A00u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A00u) { return; }
    ctx->pc = 0x261A00u;
label_261a00:
    // 0x261a00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x261a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261a04: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x261a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261a08: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x261a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261a0c: 0xc040c00  jal         func_103000
    ctx->pc = 0x261A0Cu;
    SET_GPR_U32(ctx, 31, 0x261A14u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261A14u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A14u) { return; }
    ctx->pc = 0x261A14u;
label_261a14:
    // 0x261a14: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261a18: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x261a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261a1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261a20: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x261a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x261a24: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x261a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x261a28: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261a2c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261a30: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261a34: 0xc040c92  jal         func_103248
    ctx->pc = 0x261A34u;
    SET_GPR_U32(ctx, 31, 0x261A3Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x261A3Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A3Cu) { return; }
    ctx->pc = 0x261A3Cu;
label_261a3c:
    // 0x261a3c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x261a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a40: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x261a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261a44: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x261a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a48: 0xc040c00  jal         func_103000
    ctx->pc = 0x261A48u;
    SET_GPR_U32(ctx, 31, 0x261A50u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261A50u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A50u) { return; }
    ctx->pc = 0x261A50u;
label_261a50:
    // 0x261a50: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261a54: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x261a58: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x261a5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261a60: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a64: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261a68: 0xc040c92  jal         func_103248
    ctx->pc = 0x261A68u;
    SET_GPR_U32(ctx, 31, 0x261A70u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x261A70u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A70u) { return; }
    ctx->pc = 0x261A70u;
label_261a70:
    // 0x261a70: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261a74: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x261a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x261a78: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x261a7c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261a7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261a80: 0xc040c44  jal         func_103110
    ctx->pc = 0x261A80u;
    SET_GPR_U32(ctx, 31, 0x261A88u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261A88u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A88u) { return; }
    ctx->pc = 0x261A88u;
label_261a88:
    // 0x261a88: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261a8c: 0x93a50258  lbu         $a1, 0x258($sp)
    ctx->pc = 0x261a8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261a90: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x261a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x261a94: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x261a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x261a98: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x261a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x261a9c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x261a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261aa0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x261aa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x261aa4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261aa8: 0xc040c00  jal         func_103000
    ctx->pc = 0x261AA8u;
    SET_GPR_U32(ctx, 31, 0x261AB0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261AB0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AB0u) { return; }
    ctx->pc = 0x261AB0u;
label_261ab0:
    // 0x261ab0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261ab0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261ab4: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x261ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261ab8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261ab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261abc: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x261abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x261ac0: 0xc040c44  jal         func_103110
    ctx->pc = 0x261AC0u;
    SET_GPR_U32(ctx, 31, 0x261AC8u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261AC8u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AC8u) { return; }
    ctx->pc = 0x261AC8u;
label_261ac8:
    // 0x261ac8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261acc: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ad0: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x261ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x261ad4: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x261ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x261ad8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x261ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261adc: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x261adcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x261ae0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261ae4: 0xc040c00  jal         func_103000
    ctx->pc = 0x261AE4u;
    SET_GPR_U32(ctx, 31, 0x261AECu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261AECu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AECu) { return; }
    ctx->pc = 0x261AECu;
label_261aec:
    // 0x261aec: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261af0: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x261af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x261af4: 0xc040c44  jal         func_103110
    ctx->pc = 0x261AF4u;
    SET_GPR_U32(ctx, 31, 0x261AFCu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261AFCu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AFCu) { return; }
    ctx->pc = 0x261AFCu;
label_261afc:
    // 0x261afc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261b00: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x261b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x261b04: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x261b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x261b08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x261b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261b0c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x261b0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x261b10: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261b14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x261b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x261b18: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261b18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261b1c: 0xc040c00  jal         func_103000
    ctx->pc = 0x261B1Cu;
    SET_GPR_U32(ctx, 31, 0x261B24u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261B24u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261B24u) { return; }
    ctx->pc = 0x261B24u;
label_261b24:
    // 0x261b24: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261b28: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x261b28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x261b2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x261b2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261b30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x261b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261b34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x261b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261b38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261b3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x261b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261b48: 0x27bd0260  addiu       $sp, $sp, 0x260
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x261b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x261B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261B54u;
}
