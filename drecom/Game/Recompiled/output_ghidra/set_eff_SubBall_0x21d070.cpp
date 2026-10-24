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

// Function: set_eff_SubBall
// Address: 0x21d070 - 0x21d3a0
void set_eff_SubBall_0x21d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_SubBall_0x21d070");
#endif

    switch (ctx->pc) {
        case 0x21d0e0u: goto label_21d0e0;
        case 0x21d178u: goto label_21d178;
        case 0x21d220u: goto label_21d220;
        case 0x21d2b4u: goto label_21d2b4;
        default: break;
    }

    ctx->pc = 0x21d070u;

    // 0x21d070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21d074: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x21d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x21d078: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21d07c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21d080: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21d084: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21d088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21d08c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d094: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21d094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x21d098: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x21d098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x21d09c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x21d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x21d0a0: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x21d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x21d0a4: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x21d0a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21d0a8: 0xe7ad00a8  swc1        $f13, 0xA8($sp)
    ctx->pc = 0x21d0a8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21d0ac: 0xe7ae00b0  swc1        $f14, 0xB0($sp)
    ctx->pc = 0x21d0acu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21d0b0: 0xe7af00b8  swc1        $f15, 0xB8($sp)
    ctx->pc = 0x21d0b0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x21d0b4: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x21d0b4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x21d0b8: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x21d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x21d0bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21d0c0: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x21D0C0u;
    {
        const bool branch_taken_0x21d0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d0c0) {
            ctx->pc = 0x21D1E0u;
            goto label_21d1e0;
        }
    }
    ctx->pc = 0x21D0C8u;
    // 0x21d0c8: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x21d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x21d0cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21d0ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d0d0: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x21d0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21d0d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21d0d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d0d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21D0D8u;
    SET_GPR_U32(ctx, 31, 0x21D0E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21D0D8u, 0x21D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0E0u;
label_21d0e0:
    // 0x21d0e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d0e4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21d0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21d0e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d0ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d0f0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21d0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d0f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d0f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d0fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d100: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21d100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d104: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d108: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d10c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d110: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d114: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d114u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d118: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21d118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d11c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d120: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d124: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21d124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d12c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d130: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d134: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x21d134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d138: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d13c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d140: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21d140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d144: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d148: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d14c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21d14cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d150: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d154: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d158: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21d158u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d15c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d160: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d164: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21d164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d168: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d16c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d170: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21D170u;
    SET_GPR_U32(ctx, 31, 0x21D178u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21D170u, 0x21D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D178u;
label_21d178:
    // 0x21d178: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d17c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21d17cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21d180: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d184: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21d184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d188: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21d188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21d18c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21d190: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D190u;
    {
        const bool branch_taken_0x21d190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d190) {
            ctx->pc = 0x21D1A4u;
            goto label_21d1a4;
        }
    }
    ctx->pc = 0x21D198u;
    // 0x21d198: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21d198u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d19c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21D19Cu;
    {
        const bool branch_taken_0x21d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d19c) {
            ctx->pc = 0x21D1CCu;
            goto label_21d1cc;
        }
    }
    ctx->pc = 0x21D1A4u;
label_21d1a4:
    // 0x21d1a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d1a8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d1ac: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x21d1acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x21d1b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d1b4: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x21d1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21d1b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d1bc: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d1c0: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x21d1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21d1c4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x21d1c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21d1c8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x21d1c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21d1cc:
    // 0x21d1cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21d1d0: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21d1d4: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21d1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d1d8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21D1D8u;
    {
        const bool branch_taken_0x21d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d1d8) {
            ctx->pc = 0x21D30Cu;
            goto label_21d30c;
        }
    }
    ctx->pc = 0x21D1E0u;
label_21d1e0:
    // 0x21d1e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21d1e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21d1e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21d1ec: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21d1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d1f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21d1f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21d1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21d1fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21d200: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21d204: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21d204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21d208: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21d208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21d20c: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x21d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x21d210: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21d210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d214: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x21d214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21d218: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21D218u;
    SET_GPR_U32(ctx, 31, 0x21D220u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21D218u, 0x21D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D220u;
label_21d220:
    // 0x21d220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d224: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21d224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21d228: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d22c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d230: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21d230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d238: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d23c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d240: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21d240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d244: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d248: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d24c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21d24cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d250: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d254: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d258: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21d258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d25c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d260: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d264: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21d264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d268: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d26c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d270: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21d270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d274: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d278: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d27c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21d27cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d280: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d284: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d288: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21d288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d28c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d290: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d294: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21d294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d298: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d29c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d2a0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21d2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d2a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2a8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d2ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21D2ACu;
    SET_GPR_U32(ctx, 31, 0x21D2B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21D2ACu, 0x21D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2B4u;
label_21d2b4:
    // 0x21d2b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2b8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21d2b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21d2bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2c0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d2c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21d2c8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21d2cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D2CCu;
    {
        const bool branch_taken_0x21d2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d2cc) {
            ctx->pc = 0x21D2E0u;
            goto label_21d2e0;
        }
    }
    ctx->pc = 0x21D2D4u;
    // 0x21d2d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21d2d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d2d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D2D8u;
    {
        const bool branch_taken_0x21d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d2d8) {
            ctx->pc = 0x21D2FCu;
            goto label_21d2fc;
        }
    }
    ctx->pc = 0x21D2E0u;
label_21d2e0:
    // 0x21d2e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2e4: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d2e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2ec: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d2f0: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x21d2f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21d2f4: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x21d2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21d2f8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x21d2f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21d2fc:
    // 0x21d2fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21d300: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x21d300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21d304: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x21d304u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d308: 0x0  nop
    ctx->pc = 0x21d308u;
    // NOP
label_21d30c:
    // 0x21d30c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21d310: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21d314: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21D314u;
    {
        const bool branch_taken_0x21d314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21d314) {
            ctx->pc = 0x21D370u;
            goto label_21d370;
        }
    }
    ctx->pc = 0x21D31Cu;
    // 0x21d31c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d320: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21d320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21d324: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x21d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d328: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21d32c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x21d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d330: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21d334: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d338: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21d338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21d33c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d340: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d344: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21d344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21d348: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d34c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d350: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21d350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21d354: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d358: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d35c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21d360: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x21d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d364: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21d368: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21d36c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_21d370:
    // 0x21d370: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x21d370u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21d374: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x21d374u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d378: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21d378u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d37c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21d37cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d380: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21d380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21d384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d38c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d394: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x21d394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21d398: 0x3e00008  jr          $ra
    ctx->pc = 0x21D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D3A0u;
}
