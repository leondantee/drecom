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

// Function: Skeleton_pl_R
// Address: 0x261b60 - 0x2625b4
void Skeleton_pl_R_0x261b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Skeleton_pl_R_0x261b60");
#endif

    switch (ctx->pc) {
        case 0x261d4cu: goto label_261d4c;
        case 0x261d60u: goto label_261d60;
        case 0x261d88u: goto label_261d88;
        case 0x261da0u: goto label_261da0;
        case 0x261e28u: goto label_261e28;
        case 0x261eb4u: goto label_261eb4;
        case 0x2620a0u: goto label_2620a0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620f4u: goto label_2620f4;
        case 0x262110u: goto label_262110;
        case 0x262128u: goto label_262128;
        case 0x26214cu: goto label_26214c;
        case 0x262160u: goto label_262160;
        case 0x262174u: goto label_262174;
        case 0x262184u: goto label_262184;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621bcu: goto label_2621bc;
        case 0x2621e0u: goto label_2621e0;
        case 0x2621f4u: goto label_2621f4;
        case 0x262200u: goto label_262200;
        case 0x262284u: goto label_262284;
        case 0x2622ecu: goto label_2622ec;
        case 0x26231cu: goto label_26231c;
        case 0x26233cu: goto label_26233c;
        case 0x262360u: goto label_262360;
        case 0x262390u: goto label_262390;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623f4u: goto label_2623f4;
        case 0x26240cu: goto label_26240c;
        case 0x262418u: goto label_262418;
        case 0x262430u: goto label_262430;
        case 0x26244cu: goto label_26244c;
        case 0x262460u: goto label_262460;
        case 0x262474u: goto label_262474;
        case 0x26249cu: goto label_26249c;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624e8u: goto label_2624e8;
        case 0x262510u: goto label_262510;
        case 0x262528u: goto label_262528;
        case 0x26254cu: goto label_26254c;
        case 0x26255cu: goto label_26255c;
        case 0x262584u: goto label_262584;
        default: break;
    }

    ctx->pc = 0x261b60u;

    // 0x261b60: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x261b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x261b64: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x261b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x261b68: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x261b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x261b6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x261b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x261b70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x261b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x261b74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x261b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x261b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x261b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x261b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x261b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x261b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x261b84: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x261b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x261b88: 0xa3a50258  sb          $a1, 0x258($sp)
    ctx->pc = 0x261b88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 600), (uint8_t)GPR_U32(ctx, 5));
    // 0x261b8c: 0x93a40258  lbu         $a0, 0x258($sp)
    ctx->pc = 0x261b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261b90: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x261b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x261b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x261b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x261b98: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x261b98u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261b9c: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x261b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261ba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261ba4: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x261ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x261ba8: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x261ba8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x261bac: 0x93a50258  lbu         $a1, 0x258($sp)
    ctx->pc = 0x261bacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261bb0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x261bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x261bb4: 0x24550003  addiu       $s5, $v0, 0x3
    ctx->pc = 0x261bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x261bb8: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x261bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261bbc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x261bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x261bc0: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x261bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x261bc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261bc8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x261bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261bcc: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x261bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x261bd0: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261bd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x261bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x261bd8: 0x8c640330  lw          $a0, 0x330($v1)
    ctx->pc = 0x261bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x261bdc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x261bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261be0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x261be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261be4: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x261be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x261be8: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261bec: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x261becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261bf0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x261bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261bf4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x261bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x261bf8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x261bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x261bfc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x261bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261c00: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x261c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261c04: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x261c04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x261c08: 0x8cc602d0  lw          $a2, 0x2D0($a2)
    ctx->pc = 0x261c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x261c0c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x261c10: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x261c10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261c14: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261c18: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x261c18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x261c1c: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x261c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x261c20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x261c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261c24: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x261c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261c28: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x261c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x261c2c: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x261c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x261c30: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261c34: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x261c34u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x261c38: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261c3c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x261c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261c40: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x261c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x261c44: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x261c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x261c4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x261c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261c50: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x261c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x261c54: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x261c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x261c58: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x261c58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261c5c: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261c60: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x261c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x261c64: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x261c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x261c68: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x261c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261c6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x261c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x261c70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261c74: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x261c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x261c78: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x261c78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x261c7c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261c80: 0x93a40258  lbu         $a0, 0x258($sp)
    ctx->pc = 0x261c80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261c84: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x261c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x261c88: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x261c88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x261c8c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x261c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x261c90: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x261c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261c94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x261c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261c98: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x261c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x261c9c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x261c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ca0: 0x93a60258  lbu         $a2, 0x258($sp)
    ctx->pc = 0x261ca0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261ca4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x261ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x261ca8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x261ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261cac: 0x8ca20330  lw          $v0, 0x330($a1)
    ctx->pc = 0x261cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x261cb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261cb4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x261cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cb8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x261cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x261cbc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261cc0: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x261cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261cc4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x261cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261cc8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x261cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x261ccc: 0x8c660330  lw          $a2, 0x330($v1)
    ctx->pc = 0x261cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x261cd0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x261cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x261cd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x261cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cd8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x261cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x261cdc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x261cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x261ce0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x261ce0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261ce4: 0x0  nop
    ctx->pc = 0x261ce4u;
    // NOP
    // 0x261ce8: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x261ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x261cec: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x261cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cf0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x261cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x261cf4: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x261cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cf8: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x261cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x261cfc: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x261cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261d00: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x261d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x261d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261d08: 0x0  nop
    ctx->pc = 0x261d08u;
    // NOP
    // 0x261d0c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x261d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x261d10: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x261d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261d14: 0x93a60258  lbu         $a2, 0x258($sp)
    ctx->pc = 0x261d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261d18: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x261d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x261d1c: 0x8ca40344  lw          $a0, 0x344($a1)
    ctx->pc = 0x261d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x261d20: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261d24: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x261d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261d28: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x261d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261d2c: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x261d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x261d30: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261d34: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x261d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x261d38: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x261d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x261d3c: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x261d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261d40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261d44: 0xc040ca2  jal         func_103288
    ctx->pc = 0x261D44u;
    SET_GPR_U32(ctx, 31, 0x261D4Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x261D4Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261D4Cu) { return; }
    ctx->pc = 0x261D4Cu;
label_261d4c:
    // 0x261d4c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x261d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x261d50: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x261d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x261d54: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261d58: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x261D58u;
    SET_GPR_U32(ctx, 31, 0x261D60u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x261D60u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261D60u) { return; }
    ctx->pc = 0x261D60u;
label_261d60:
    // 0x261d60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x261d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x261d64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x261d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261d68: 0x0  nop
    ctx->pc = 0x261d68u;
    // NOP
    // 0x261d6c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x261d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x261d70: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261d74: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x261d74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x261d78: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261d7c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261d80: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x261D80u;
    SET_GPR_U32(ctx, 31, 0x261D88u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x261D88u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261D88u) { return; }
    ctx->pc = 0x261D88u;
label_261d88:
    // 0x261d88: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x261d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x261d8c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x261d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x261d90: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261d94: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x261d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x261d98: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x261D98u;
    SET_GPR_U32(ctx, 31, 0x261DA0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x261DA0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261DA0u) { return; }
    ctx->pc = 0x261DA0u;
label_261da0:
    // 0x261da0: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x261da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261da4: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261da8: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x261da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261dac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x261dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x261db0: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x261db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x261db4: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x261db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261db8: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x261db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x261dbc: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x261dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261dc0: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261dc4: 0xc4c002e8  lwc1        $f0, 0x2E8($a2)
    ctx->pc = 0x261dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261dc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x261dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x261dcc: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x261dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x261dd0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x261dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x261dd4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x261dd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261dd8: 0x0  nop
    ctx->pc = 0x261dd8u;
    // NOP
    // 0x261ddc: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x261ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x261de0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261de4: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x261de4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x261de8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x261de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x261dec: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x261decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x261df0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261DF0u;
    {
        const bool branch_taken_0x261df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261df0) {
            ctx->pc = 0x261E0Cu;
            goto label_261e0c;
        }
    }
    ctx->pc = 0x261DF8u;
    // 0x261df8: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x261df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261dfc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e00: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x261e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x261e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x261e08: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x261e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_261e0c:
    // 0x261e0c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e10: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261e14: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x261e18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261e18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261e1c: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x261e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261e20: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x261E20u;
    SET_GPR_U32(ctx, 31, 0x261E28u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x261E28u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261E28u) { return; }
    ctx->pc = 0x261E28u;
label_261e28:
    // 0x261e28: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e2c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x261e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261e30: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x261e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x261e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x261e38: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x261e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x261e3c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e40: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x261e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x261e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261e48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x261e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x261e4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x261E4Cu;
    {
        const bool branch_taken_0x261e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261e4c) {
            ctx->pc = 0x261E6Cu;
            goto label_261e6c;
        }
    }
    ctx->pc = 0x261E54u;
    // 0x261e54: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e58: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x261e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x261e5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261e60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261e64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261E64u;
    {
        const bool branch_taken_0x261e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261e64) {
            ctx->pc = 0x261E80u;
            goto label_261e80;
        }
    }
    ctx->pc = 0x261E6Cu;
label_261e6c:
    // 0x261e6c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e70: 0xc44002d8  lwc1        $f0, 0x2D8($v0)
    ctx->pc = 0x261e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e74: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261e78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x261E78u;
    {
        const bool branch_taken_0x261e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261e78) {
            ctx->pc = 0x261EE4u;
            goto label_261ee4;
        }
    }
    ctx->pc = 0x261E80u;
label_261e80:
    // 0x261e80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x261e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x261e84: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x261e88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261E88u;
    {
        const bool branch_taken_0x261e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261e88) {
            ctx->pc = 0x261EA4u;
            goto label_261ea4;
        }
    }
    ctx->pc = 0x261E90u;
    // 0x261e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261e94: 0x0  nop
    ctx->pc = 0x261e94u;
    // NOP
    // 0x261e98: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261e9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x261E9Cu;
    {
        const bool branch_taken_0x261e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261e9c) {
            ctx->pc = 0x261EE4u;
            goto label_261ee4;
        }
    }
    ctx->pc = 0x261EA4u;
label_261ea4:
    // 0x261ea4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x261ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261ea8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x261ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x261eac: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x261EACu;
    SET_GPR_U32(ctx, 31, 0x261EB4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x261EACu, 0x261EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EB4u;
label_261eb4:
    // 0x261eb4: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261eb8: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x261eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x261ebc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x261ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x261ec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261ec4: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261ec8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x261ec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261ecc: 0x0  nop
    ctx->pc = 0x261eccu;
    // NOP
    // 0x261ed0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x261ED0u;
    {
        const bool branch_taken_0x261ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261ed0) {
            ctx->pc = 0x261EE4u;
            goto label_261ee4;
        }
    }
    ctx->pc = 0x261ED8u;
    // 0x261ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261edc: 0x0  nop
    ctx->pc = 0x261edcu;
    // NOP
    // 0x261ee0: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_261ee4:
    // 0x261ee4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ee8: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x261ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261eec: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261ef0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x261ef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x261ef4: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261ef8: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x261ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261efc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x261f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f04: 0x0  nop
    ctx->pc = 0x261f04u;
    // NOP
    // 0x261f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x261f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f0c: 0x0  nop
    ctx->pc = 0x261f0cu;
    // NOP
    // 0x261f10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x261F10u;
    {
        const bool branch_taken_0x261f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f10) {
            ctx->pc = 0x261F30u;
            goto label_261f30;
        }
    }
    ctx->pc = 0x261F18u;
    // 0x261f18: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f20: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f2c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_261f30:
    // 0x261f30: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x261f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261f34: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x261f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x261f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f3c: 0x0  nop
    ctx->pc = 0x261f3cu;
    // NOP
    // 0x261f40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f44: 0x0  nop
    ctx->pc = 0x261f44u;
    // NOP
    // 0x261f48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x261F48u;
    {
        const bool branch_taken_0x261f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f48) {
            ctx->pc = 0x261F68u;
            goto label_261f68;
        }
    }
    ctx->pc = 0x261F50u;
    // 0x261f50: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f58: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f64: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_261f68:
    // 0x261f68: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f70: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261f7c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f84: 0x0  nop
    ctx->pc = 0x261f84u;
    // NOP
    // 0x261f88: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x261F88u;
    {
        const bool branch_taken_0x261f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f88) {
            ctx->pc = 0x261FF8u;
            goto label_261ff8;
        }
    }
    ctx->pc = 0x261F90u;
    // 0x261f90: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f98: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261fa0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261fa4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x261fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261fac: 0x0  nop
    ctx->pc = 0x261facu;
    // NOP
    // 0x261fb0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x261fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261fb4: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261fbc: 0x0  nop
    ctx->pc = 0x261fbcu;
    // NOP
    // 0x261fc0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x261FC0u;
    {
        const bool branch_taken_0x261fc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261fc0) {
            ctx->pc = 0x262058u;
            goto label_262058;
        }
    }
    ctx->pc = 0x261FC8u;
    // 0x261fc8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261fcc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261fd0: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261fd8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261fdc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x261fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261fe4: 0x0  nop
    ctx->pc = 0x261fe4u;
    // NOP
    // 0x261fe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x261fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261fec: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261ff0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x261FF0u;
    {
        const bool branch_taken_0x261ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ff0) {
            ctx->pc = 0x262058u;
            goto label_262058;
        }
    }
    ctx->pc = 0x261FF8u;
label_261ff8:
    // 0x261ff8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ffc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262000: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x262000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x262004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262008: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x262008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26200c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x26200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x262010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262014: 0x0  nop
    ctx->pc = 0x262014u;
    // NOP
    // 0x262018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26201c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262020: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x262020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262024: 0x0  nop
    ctx->pc = 0x262024u;
    // NOP
    // 0x262028: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x262028u;
    {
        const bool branch_taken_0x262028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262028) {
            ctx->pc = 0x262058u;
            goto label_262058;
        }
    }
    ctx->pc = 0x262030u;
    // 0x262030: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262034: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262038: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x262038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26203c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262040: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x262040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262044: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x262048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26204c: 0x0  nop
    ctx->pc = 0x26204cu;
    // NOP
    // 0x262050: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x262050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262054: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x262054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_262058:
    // 0x262058: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26205c: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x26205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262060: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x262060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262064: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x262068: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x262068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x26206c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262070: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262074: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x262074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262078: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x262078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26207c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262080: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x262080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x262084: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x262084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262088: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x262088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26208c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26208cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262090: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x262090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x262094: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262098: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x262098u;
    SET_GPR_U32(ctx, 31, 0x2620A0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2620A0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620A0u) { return; }
    ctx->pc = 0x2620A0u;
label_2620a0:
    // 0x2620a0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620a4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2620a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620a8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x2620a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2620ac: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2620ACu;
    SET_GPR_U32(ctx, 31, 0x2620B4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2620B4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620B4u) { return; }
    ctx->pc = 0x2620B4u;
label_2620b4:
    // 0x2620b4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620b8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2620b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620bc: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x2620bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2620c0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2620C0u;
    SET_GPR_U32(ctx, 31, 0x2620C8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2620C8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620C8u) { return; }
    ctx->pc = 0x2620C8u;
label_2620c8:
    // 0x2620c8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620cc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2620ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620d0: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x2620d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2620d4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2620D4u;
    SET_GPR_U32(ctx, 31, 0x2620DCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2620DCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620DCu) { return; }
    ctx->pc = 0x2620DCu;
label_2620dc:
    // 0x2620dc: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2620e0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620e4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2620e8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2620e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620ec: 0xc040c00  jal         func_103000
    ctx->pc = 0x2620ECu;
    SET_GPR_U32(ctx, 31, 0x2620F4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2620F4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620F4u) { return; }
    ctx->pc = 0x2620F4u;
label_2620f4:
    // 0x2620f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2620f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2620f8: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x2620f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2620fc: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2620fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x262100: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x262100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262104: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x262104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x262108: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x262108u;
    SET_GPR_U32(ctx, 31, 0x262110u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x262110u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262110u) { return; }
    ctx->pc = 0x262110u;
label_262110:
    // 0x262110: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x262110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x262114: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262118: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26211c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x26211cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x262120: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x262120u;
    SET_GPR_U32(ctx, 31, 0x262128u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x262128u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262128u) { return; }
    ctx->pc = 0x262128u;
label_262128:
    // 0x262128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26212c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262130: 0x0  nop
    ctx->pc = 0x262130u;
    // NOP
    // 0x262134: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x262134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x262138: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x262138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26213c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x26213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262140: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262144: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x262144u;
    SET_GPR_U32(ctx, 31, 0x26214Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26214Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26214Cu) { return; }
    ctx->pc = 0x26214Cu;
label_26214c:
    // 0x26214c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x26214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262150: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262154: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x262158: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x262158u;
    SET_GPR_U32(ctx, 31, 0x262160u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x262158u, 0x262160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262160u;
label_262160:
    // 0x262160: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262164: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x262164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x262168: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x262168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26216c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x26216Cu;
    SET_GPR_U32(ctx, 31, 0x262174u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x26216Cu, 0x262174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262174u;
label_262174:
    // 0x262174: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x262174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x262178: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x262178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26217c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26217Cu;
    SET_GPR_U32(ctx, 31, 0x262184u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262184u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262184u) { return; }
    ctx->pc = 0x262184u;
label_262184:
    // 0x262184: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262188: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26218c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x262190: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262194: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x262194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262198: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262198u;
    SET_GPR_U32(ctx, 31, 0x2621A0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2621A0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621A0u) { return; }
    ctx->pc = 0x2621A0u;
label_2621a0:
    // 0x2621a0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2621a4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2621a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2621a8: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2621ac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2621acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2621b0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2621b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2621B4u;
    SET_GPR_U32(ctx, 31, 0x2621BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2621BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621BCu) { return; }
    ctx->pc = 0x2621BCu;
label_2621bc:
    // 0x2621bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2621c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2621c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2621c4: 0x0  nop
    ctx->pc = 0x2621c4u;
    // NOP
    // 0x2621c8: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2621c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2621cc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2621ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2621d0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2621d4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2621d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2621d8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2621D8u;
    SET_GPR_U32(ctx, 31, 0x2621E0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2621E0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621E0u) { return; }
    ctx->pc = 0x2621E0u;
label_2621e0:
    // 0x2621e0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2621e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2621e4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2621e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2621e8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2621e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2621ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x2621ECu;
    SET_GPR_U32(ctx, 31, 0x2621F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2621F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621F4u) { return; }
    ctx->pc = 0x2621F4u;
label_2621f4:
    // 0x2621f4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2621f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2621f8: 0xc067588  jal         func_19D620
    ctx->pc = 0x2621F8u;
    SET_GPR_U32(ctx, 31, 0x262200u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2621F8u, 0x262200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262200u;
label_262200:
    // 0x262200: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x262200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x262204: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x262204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262208: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x262208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26220c: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x26220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262210: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x262210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262214: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x262214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262218: 0x0  nop
    ctx->pc = 0x262218u;
    // NOP
    // 0x26221c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x26221Cu;
    {
        const bool branch_taken_0x26221c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26221c) {
            ctx->pc = 0x26230Cu;
            goto label_26230c;
        }
    }
    ctx->pc = 0x262224u;
    // 0x262224: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x262224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262228: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x262228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26222c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26222cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262230: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x262230u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x262234: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x262234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262238: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x262238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26223c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26223cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262240: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x262240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x262244: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x262244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262248: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26224c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26224cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262250: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x262250u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x262254: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x262254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x262258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26225c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x26225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x262260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262264: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x262268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26226c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x26226cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x262270: 0x0  nop
    ctx->pc = 0x262270u;
    // NOP
    // 0x262274: 0x0  nop
    ctx->pc = 0x262274u;
    // NOP
    // 0x262278: 0x0  nop
    ctx->pc = 0x262278u;
    // NOP
    // 0x26227c: 0xc045566  jal         func_115598
    ctx->pc = 0x26227Cu;
    SET_GPR_U32(ctx, 31, 0x262284u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x26227Cu, 0x262284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262284u;
label_262284:
    // 0x262284: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x262284u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x262288: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x262288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26228c: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x26228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262290: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262294: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x262294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262298: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x262298u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x26229c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x26229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622a0: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2622a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2622a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2622a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2622ac: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x2622acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622b0: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2622b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2622b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622b8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2622b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2622bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2622bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2622c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2622c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2622c4: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2622c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2622c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622cc: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2622ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2622d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622d4: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x2622d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2622d8: 0x0  nop
    ctx->pc = 0x2622d8u;
    // NOP
    // 0x2622dc: 0x0  nop
    ctx->pc = 0x2622dcu;
    // NOP
    // 0x2622e0: 0x0  nop
    ctx->pc = 0x2622e0u;
    // NOP
    // 0x2622e4: 0xc045566  jal         func_115598
    ctx->pc = 0x2622E4u;
    SET_GPR_U32(ctx, 31, 0x2622ECu);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x2622E4u, 0x2622ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622ECu;
label_2622ec:
    // 0x2622ec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2622ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2622f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2622f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2622f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2622f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2622f8: 0x0  nop
    ctx->pc = 0x2622f8u;
    // NOP
    // 0x2622fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2622fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262300: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x262300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x262304: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x262304u;
    {
        const bool branch_taken_0x262304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262304) {
            ctx->pc = 0x262378u;
            goto label_262378;
        }
    }
    ctx->pc = 0x26230Cu;
label_26230c:
    // 0x26230c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262310: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x262310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262314: 0xc040c24  jal         func_103090
    ctx->pc = 0x262314u;
    SET_GPR_U32(ctx, 31, 0x26231Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x26231Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26231Cu) { return; }
    ctx->pc = 0x26231Cu;
label_26231c:
    // 0x26231c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x26231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262320: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x262320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262324: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x262324u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262328: 0x27b50190  addiu       $s5, $sp, 0x190
    ctx->pc = 0x262328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x26232c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x26232cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x262330: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262334: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x262334u;
    SET_GPR_U32(ctx, 31, 0x26233Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x26233Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26233Cu) { return; }
    ctx->pc = 0x26233Cu;
label_26233c:
    // 0x26233c: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x26233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262340: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x262340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x262344: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x262344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x262348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x262348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26234c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x26234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x262350: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x262350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x262354: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x262354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262358: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x262358u;
    SET_GPR_U32(ctx, 31, 0x262360u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x262358u, 0x262360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262360u;
label_262360:
    // 0x262360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x262360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262364: 0x0  nop
    ctx->pc = 0x262364u;
    // NOP
    // 0x262368: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x262368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26236c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26236cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262370: 0x0  nop
    ctx->pc = 0x262370u;
    // NOP
    // 0x262374: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x262374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_262378:
    // 0x262378: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x262378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26237c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x26237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x262380: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x262380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262384: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x262384u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x262388: 0xc040c12  jal         func_103048
    ctx->pc = 0x262388u;
    SET_GPR_U32(ctx, 31, 0x262390u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262390u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262390u) { return; }
    ctx->pc = 0x262390u;
label_262390:
    // 0x262390: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x262390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x262394: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262398: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x262398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26239c: 0xc040c12  jal         func_103048
    ctx->pc = 0x26239Cu;
    SET_GPR_U32(ctx, 31, 0x2623A4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2623A4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623A4u) { return; }
    ctx->pc = 0x2623A4u;
label_2623a4:
    // 0x2623a4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2623a8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2623ac: 0xc040c24  jal         func_103090
    ctx->pc = 0x2623ACu;
    SET_GPR_U32(ctx, 31, 0x2623B4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2623B4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623B4u) { return; }
    ctx->pc = 0x2623B4u;
label_2623b4:
    // 0x2623b4: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2623b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2623b8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2623b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2623bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2623bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2623c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2623C0u;
    SET_GPR_U32(ctx, 31, 0x2623C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2623C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623C8u) { return; }
    ctx->pc = 0x2623C8u;
label_2623c8:
    // 0x2623c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2623c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2623cc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2623d0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2623D0u;
    SET_GPR_U32(ctx, 31, 0x2623D8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2623D8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623D8u) { return; }
    ctx->pc = 0x2623D8u;
label_2623d8:
    // 0x2623d8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2623d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2623dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2623DCu;
    SET_GPR_U32(ctx, 31, 0x2623E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2623DCu, 0x2623E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623E4u;
label_2623e4:
    // 0x2623e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2623e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2623e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2623e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2623ec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2623ECu;
    SET_GPR_U32(ctx, 31, 0x2623F4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2623F4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623F4u) { return; }
    ctx->pc = 0x2623F4u;
label_2623f4:
    // 0x2623f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2623f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2623f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2623f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2623fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2623fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262400: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x262400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262404: 0xc040d0e  jal         func_103438
    ctx->pc = 0x262404u;
    SET_GPR_U32(ctx, 31, 0x26240Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x26240Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26240Cu) { return; }
    ctx->pc = 0x26240Cu;
label_26240c:
    // 0x26240c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262410: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x262410u;
    SET_GPR_U32(ctx, 31, 0x262418u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x262418u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262418u) { return; }
    ctx->pc = 0x262418u;
label_262418:
    // 0x262418: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x262418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26241c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26241cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x262420: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x262420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262424: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x262424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262428: 0xc040d0e  jal         func_103438
    ctx->pc = 0x262428u;
    SET_GPR_U32(ctx, 31, 0x262430u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x262430u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262430u) { return; }
    ctx->pc = 0x262430u;
label_262430:
    // 0x262430: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x262430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262434: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x262434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x262438: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x262438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26243c: 0x27b601c0  addiu       $s6, $sp, 0x1C0
    ctx->pc = 0x26243cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x262440: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x262440u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x262444: 0xc040c92  jal         func_103248
    ctx->pc = 0x262444u;
    SET_GPR_U32(ctx, 31, 0x26244Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x26244Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26244Cu) { return; }
    ctx->pc = 0x26244Cu;
label_26244c:
    // 0x26244c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262450: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262454: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262458: 0xc040c00  jal         func_103000
    ctx->pc = 0x262458u;
    SET_GPR_U32(ctx, 31, 0x262460u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262460u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262460u) { return; }
    ctx->pc = 0x262460u;
label_262460:
    // 0x262460: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x262460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262464: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x262468: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x262468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26246c: 0xc040c00  jal         func_103000
    ctx->pc = 0x26246Cu;
    SET_GPR_U32(ctx, 31, 0x262474u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262474u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262474u) { return; }
    ctx->pc = 0x262474u;
label_262474:
    // 0x262474: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x262474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262478: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x262478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x26247c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262480: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x262484: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x262484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x262488: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x262488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26248c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262490: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x262490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x262494: 0xc040c92  jal         func_103248
    ctx->pc = 0x262494u;
    SET_GPR_U32(ctx, 31, 0x26249Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x26249Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26249Cu) { return; }
    ctx->pc = 0x26249Cu;
label_26249c:
    // 0x26249c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2624a0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2624a4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2624a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2624a8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2624A8u;
    SET_GPR_U32(ctx, 31, 0x2624B0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2624B0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2624B0u) { return; }
    ctx->pc = 0x2624B0u;
label_2624b0:
    // 0x2624b0: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2624b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2624b4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x2624b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2624b8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2624bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2624bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2624c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2624c4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2624c8: 0xc040c92  jal         func_103248
    ctx->pc = 0x2624C8u;
    SET_GPR_U32(ctx, 31, 0x2624D0u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x2624D0u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2624D0u) { return; }
    ctx->pc = 0x2624D0u;
label_2624d0:
    // 0x2624d0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2624d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2624d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2624d8: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x2624d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2624dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2624dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2624e0: 0xc040c44  jal         func_103110
    ctx->pc = 0x2624E0u;
    SET_GPR_U32(ctx, 31, 0x2624E8u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2624E8u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2624E8u) { return; }
    ctx->pc = 0x2624E8u;
label_2624e8:
    // 0x2624e8: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2624e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2624ec: 0x93a50258  lbu         $a1, 0x258($sp)
    ctx->pc = 0x2624ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2624f0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2624f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2624f4: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x2624f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2624f8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2624f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2624fc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2624fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262500: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x262500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x262504: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x262504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262508: 0xc040c00  jal         func_103000
    ctx->pc = 0x262508u;
    SET_GPR_U32(ctx, 31, 0x262510u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262510u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262510u) { return; }
    ctx->pc = 0x262510u;
label_262510:
    // 0x262510: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x262510u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x262514: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x262514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262518: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x262518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26251c: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x26251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x262520: 0xc040c44  jal         func_103110
    ctx->pc = 0x262520u;
    SET_GPR_U32(ctx, 31, 0x262528u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x262528u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262528u) { return; }
    ctx->pc = 0x262528u;
label_262528:
    // 0x262528: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x262528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26252c: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x26252cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262530: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x262530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x262534: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x262534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x262538: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x262538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26253c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x26253cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x262540: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262544: 0xc040c00  jal         func_103000
    ctx->pc = 0x262544u;
    SET_GPR_U32(ctx, 31, 0x26254Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x26254Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26254Cu) { return; }
    ctx->pc = 0x26254Cu;
label_26254c:
    // 0x26254c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x26254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262550: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x262550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x262554: 0xc040c44  jal         func_103110
    ctx->pc = 0x262554u;
    SET_GPR_U32(ctx, 31, 0x26255Cu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x26255Cu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26255Cu) { return; }
    ctx->pc = 0x26255Cu;
label_26255c:
    // 0x26255c: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x26255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262560: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x262564: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x262564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x262568: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x262568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26256c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x26256cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x262570: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x262570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262574: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x262574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x262578: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x262578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26257c: 0xc040c00  jal         func_103000
    ctx->pc = 0x26257Cu;
    SET_GPR_U32(ctx, 31, 0x262584u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262584u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262584u) { return; }
    ctx->pc = 0x262584u;
label_262584:
    // 0x262584: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x262584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262588: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x262588u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26258c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26258cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262590: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x262590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262594: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x262594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x262598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26259c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26259cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2625a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2625a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2625a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2625a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2625a8: 0x27bd0260  addiu       $sp, $sp, 0x260
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2625ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2625ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625B4u;
}
