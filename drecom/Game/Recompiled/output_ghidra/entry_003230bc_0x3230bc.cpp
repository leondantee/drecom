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

// Function: entry_003230bc
// Address: 0x3230bc - 0x3232bc
void entry_003230bc_0x3230bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003230bc_0x3230bc");
#endif

    switch (ctx->pc) {
        case 0x3231b4u: goto label_3231b4;
        case 0x3231fcu: goto label_3231fc;
        default: break;
    }

    ctx->pc = 0x3230bcu;

    // 0x3230bc: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x3230bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3230c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3230c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3230c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3230c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3230c8: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x3230c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x3230cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3230ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3230d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3230d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3230d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3230d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3230d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3230d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3230dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3230dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3230e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3230e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3230e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3230e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3230e8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3230e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3230ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3230ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3230f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3230f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3230f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3230f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3230f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3230f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3230fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3230fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323108: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x323108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x32310c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x32310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323110: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323114: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x323118: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x323118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32311c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323120: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323128: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x323128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32312c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x323130: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323134: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x323138: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x323138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32313c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323140: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323144: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323148: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x323148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32314c: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x32314cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323150: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x323150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x323154: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x323158: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x323158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x32315c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323160: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323164: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x323168: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x323168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32316c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323170: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323174: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323178: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x323178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32317c: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x32317cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x323180: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x323180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x323184: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x323188: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x323188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x32318c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323194: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x323198: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x323198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32319c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3231a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3231a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3231a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3231a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3231a8: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x3231a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3231ac: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x3231ACu;
    SET_GPR_U32(ctx, 31, 0x3231B4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3231ACu, 0x3231B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231B4u;
label_3231b4:
    // 0x3231b4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3231b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3231b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3231b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3231bc: 0xa2220347  sb          $v0, 0x347($s1)
    ctx->pc = 0x3231bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x3231c0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x3231c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x3231c4: 0xa222036b  sb          $v0, 0x36B($s1)
    ctx->pc = 0x3231c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 875), (uint8_t)GPR_U32(ctx, 2));
    // 0x3231c8: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x3231c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x3231cc: 0xa222036c  sb          $v0, 0x36C($s1)
    ctx->pc = 0x3231ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 876), (uint8_t)GPR_U32(ctx, 2));
    // 0x3231d0: 0x96220340  lhu         $v0, 0x340($s1)
    ctx->pc = 0x3231d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x3231d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3231d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3231d8: 0xa6220340  sh          $v0, 0x340($s1)
    ctx->pc = 0x3231d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x3231dc: 0x96220340  lhu         $v0, 0x340($s1)
    ctx->pc = 0x3231dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x3231e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3231e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3231e4: 0xa6220340  sh          $v0, 0x340($s1)
    ctx->pc = 0x3231e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x3231e8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3231e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3231ec: 0xa2220344  sb          $v0, 0x344($s1)
    ctx->pc = 0x3231ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x3231f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3231f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3231f4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x3231F4u;
    SET_GPR_U32(ctx, 31, 0x3231FCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3231F4u, 0x3231FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231FCu;
label_3231fc:
    // 0x3231fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3231fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x323200: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x323200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x323204: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x323204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x323208: 0x1203002c  beq         $s0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x323208u;
    {
        const bool branch_taken_0x323208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x323208) {
            ctx->pc = 0x3232BCu;
            return;
        }
    }
    ctx->pc = 0x323210u;
    // 0x323210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323214: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x323214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x323218: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x323218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x32321c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32321cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323220: 0x0  nop
    ctx->pc = 0x323220u;
    // NOP
    // 0x323224: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x323224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x323228: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x323228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x32322c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32322cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323230: 0x0  nop
    ctx->pc = 0x323230u;
    // NOP
    // 0x323234: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x323234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x323238: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x323238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x32323c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32323cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323240: 0x0  nop
    ctx->pc = 0x323240u;
    // NOP
    // 0x323244: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x323244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x323248: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x323248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x32324c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32324cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323250: 0x0  nop
    ctx->pc = 0x323250u;
    // NOP
    // 0x323254: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x323254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x323258: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x323258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32325c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x32325cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x323260: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x323260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323264: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x323264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x323268: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x323268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32326c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x32326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x323270: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x323270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323274: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x323274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x323278: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32327c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323280: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x323280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x323284: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x323288: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x323288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32328c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x32328cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x323290: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x323294: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x323294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323298: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x323298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x32329c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3232a0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x3232a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x3232a4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3232a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3232a8: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x3232a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x3232ac: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x3232acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3232b0: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x3232b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x3232b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3232B4u;
    {
        const bool branch_taken_0x3232b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3232b4) {
            ctx->pc = 0x3232C4u;
            return;
        }
    }
    ctx->pc = 0x3232BCu;
}
