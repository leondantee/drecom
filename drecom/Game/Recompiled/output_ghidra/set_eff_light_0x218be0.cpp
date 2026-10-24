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

// Function: set_eff_light
// Address: 0x218be0 - 0x218ef8
void set_eff_light_0x218be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_light_0x218be0");
#endif

    switch (ctx->pc) {
        case 0x218c50u: goto label_218c50;
        case 0x218ce8u: goto label_218ce8;
        case 0x218d84u: goto label_218d84;
        case 0x218e1cu: goto label_218e1c;
        default: break;
    }

    ctx->pc = 0x218be0u;

    // 0x218be0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x218be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x218be4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x218be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x218be8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x218be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x218bec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x218becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x218bf0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x218bf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x218bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x218bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218c04: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x218c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x218c08: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x218c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x218c0c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x218c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x218c10: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x218c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x218c14: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x218c14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x218c18: 0xe7ad00a8  swc1        $f13, 0xA8($sp)
    ctx->pc = 0x218c18u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218c1c: 0xe7ae00b0  swc1        $f14, 0xB0($sp)
    ctx->pc = 0x218c1cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x218c20: 0xe7af00b8  swc1        $f15, 0xB8($sp)
    ctx->pc = 0x218c20u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x218c24: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x218c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x218c28: 0xafa900c8  sw          $t1, 0xC8($sp)
    ctx->pc = 0x218c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 9));
    // 0x218c2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x218c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218c30: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x218C30u;
    {
        const bool branch_taken_0x218c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218c30) {
            ctx->pc = 0x218D44u;
            goto label_218d44;
        }
    }
    ctx->pc = 0x218C38u;
    // 0x218c38: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x218c3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x218c3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218c40: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x218c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218c44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x218c44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218c48: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x218C48u;
    SET_GPR_U32(ctx, 31, 0x218C50u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x218C48u, 0x218C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C50u;
label_218c50:
    // 0x218c50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218c54: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x218c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x218c58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x218c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x218c5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x218c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218c60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218c64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218c68: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x218c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x218c6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218c70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218c70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218c74: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x218c74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x218c78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218c7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218c80: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x218c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x218c84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218c88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218c88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218c8c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218c90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218c94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218c94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218c98: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x218c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218c9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ca0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ca4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x218ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ca8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218cacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218cb0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218cb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218cbc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218cc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218cc8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x218cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ccc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cd0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218cd4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x218cd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cdc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ce0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218CE0u;
    SET_GPR_U32(ctx, 31, 0x218CE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218CE0u, 0x218CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CE8u;
label_218ce8:
    // 0x218ce8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218cf0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218cf4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218cf8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218cfc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218d00: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218D00u;
    {
        const bool branch_taken_0x218d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218d00) {
            ctx->pc = 0x218D14u;
            goto label_218d14;
        }
    }
    ctx->pc = 0x218D08u;
    // 0x218d08: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x218d08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218D0Cu;
    {
        const bool branch_taken_0x218d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218d0c) {
            ctx->pc = 0x218D30u;
            goto label_218d30;
        }
    }
    ctx->pc = 0x218D14u;
label_218d14:
    // 0x218d14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d18: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218d1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d20: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218d24: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x218d24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218d28: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x218d28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218d2c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x218d2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_218d30:
    // 0x218d30: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218d34: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x218d34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218d38: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x218d38u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x218d3c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x218D3Cu;
    {
        const bool branch_taken_0x218d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218d3c) {
            ctx->pc = 0x218E74u;
            goto label_218e74;
        }
    }
    ctx->pc = 0x218D44u;
label_218d44:
    // 0x218d44: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218d48: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x218d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x218d4c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x218d50: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x218d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218d58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x218d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x218d5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x218d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x218d60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x218d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x218d64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x218d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x218d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x218d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x218d6c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x218d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218d70: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x218d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x218d74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x218d74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218d78: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218d7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x218D7Cu;
    SET_GPR_U32(ctx, 31, 0x218D84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x218D7Cu, 0x218D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D84u;
label_218d84:
    // 0x218d84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d88: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x218d88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x218d8c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x218d90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x218d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218d94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218d9c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x218d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x218da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218da4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218da8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x218da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x218dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218db4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x218db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x218db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dc0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218dc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dcc: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x218dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218dd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dd8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x218dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ddc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218de0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218de4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218de8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218decu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218df0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218df8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dfc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x218dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218e00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218e08: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x218e0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e10: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218e14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218E14u;
    SET_GPR_U32(ctx, 31, 0x218E1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218E14u, 0x218E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E1Cu;
label_218e1c:
    // 0x218e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e20: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218e24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e28: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e2c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218e30: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218e34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218E34u;
    {
        const bool branch_taken_0x218e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218e34) {
            ctx->pc = 0x218E48u;
            goto label_218e48;
        }
    }
    ctx->pc = 0x218E3Cu;
    // 0x218e3c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x218e3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218e40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218E40u;
    {
        const bool branch_taken_0x218e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e40) {
            ctx->pc = 0x218E64u;
            goto label_218e64;
        }
    }
    ctx->pc = 0x218E48u;
label_218e48:
    // 0x218e48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e4c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e54: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e58: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x218e58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218e5c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x218e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x218e60: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x218e60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_218e64:
    // 0x218e64: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218e68: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218e6c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e70: 0x0  nop
    ctx->pc = 0x218e70u;
    // NOP
label_218e74:
    // 0x218e74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218e78: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218e7c: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x218E7Cu;
    {
        const bool branch_taken_0x218e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x218e7c) {
            ctx->pc = 0x218ECCu;
            goto label_218ecc;
        }
    }
    ctx->pc = 0x218E84u;
    // 0x218e84: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x218e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e88: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218e8c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x218e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x218e94: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x218e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e98: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218e9c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x218ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218ea4: 0x0  nop
    ctx->pc = 0x218ea4u;
    // NOP
    // 0x218ea8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x218eac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x218eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x218eb0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x218eb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218eb4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x218eb8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x218eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x218ebc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x218ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218ec0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218ec4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x218ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x218ec8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x218ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_218ecc:
    // 0x218ecc: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x218eccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218ed0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218ed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218ed4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218ed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x218ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218edc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x218edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218eec: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x218ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x218EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218EF8u;
}
