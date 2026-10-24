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

// Function: set_eff_light2_blk
// Address: 0x219f80 - 0x21a418
void set_eff_light2_blk_0x219f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_light2_blk_0x219f80");
#endif

    switch (ctx->pc) {
        case 0x219fe8u: goto label_219fe8;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a24cu: goto label_21a24c;
        case 0x21a2e0u: goto label_21a2e0;
        default: break;
    }

    ctx->pc = 0x219f80u;

    // 0x219f80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x219f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x219f84: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x219f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x219f88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x219f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x219f8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x219f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x219f90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x219f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x219f94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x219f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x219f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x219f9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x219fa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x219fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219fac: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x219facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x219fb0: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x219fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x219fb4: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x219fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x219fb8: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x219fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x219fbc: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x219fbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x219fc0: 0xe7ad00d8  swc1        $f13, 0xD8($sp)
    ctx->pc = 0x219fc0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x219fc4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x219fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x219fc8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x219FC8u;
    {
        const bool branch_taken_0x219fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219fc8) {
            ctx->pc = 0x21A0D8u;
            goto label_21a0d8;
        }
    }
    ctx->pc = 0x219FD0u;
    // 0x219fd0: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x219fd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219fd8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219fdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x219fdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219fe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219FE0u;
    SET_GPR_U32(ctx, 31, 0x219FE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219FE0u, 0x219FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FE8u;
label_219fe8:
    // 0x219fe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219fec: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219ff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ff4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219ff8: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219ffc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x219ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a000: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a004: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a008: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a00c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a010: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a014: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a018: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a01c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a020: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21a020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a024: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a028: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a02c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a030: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a034: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a034u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a038: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a038u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a03c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a040: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a044: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a048: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a04c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a050: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a054: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a058: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a05c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a05cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a064: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a068: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a06c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a070: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a070u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a074: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A074u;
    SET_GPR_U32(ctx, 31, 0x21A07Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A074u, 0x21A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A07Cu;
label_21a07c:
    // 0x21a07c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a080: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a084: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a088: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a08c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a090: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a094: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A094u;
    {
        const bool branch_taken_0x21a094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a094) {
            ctx->pc = 0x21A0A8u;
            goto label_21a0a8;
        }
    }
    ctx->pc = 0x21A09Cu;
    // 0x21a09c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21a09cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a0a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A0A0u;
    {
        const bool branch_taken_0x21a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a0a0) {
            ctx->pc = 0x21A0C4u;
            goto label_21a0c4;
        }
    }
    ctx->pc = 0x21A0A8u;
label_21a0a8:
    // 0x21a0a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a0ac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a0b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a0b4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a0b8: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x21a0b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21a0bc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x21a0bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a0c0: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x21a0c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21a0c4:
    // 0x21a0c4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a0c8: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21a0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a0cc: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x21a0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a0d0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x21A0D0u;
    {
        const bool branch_taken_0x21a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a0d0) {
            ctx->pc = 0x21A340u;
            goto label_21a340;
        }
    }
    ctx->pc = 0x21A0D8u;
label_21a0d8:
    // 0x21a0d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21a0dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a0e0: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x21A0E0u;
    {
        const bool branch_taken_0x21a0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a0e0) {
            ctx->pc = 0x21A20Cu;
            goto label_21a20c;
        }
    }
    ctx->pc = 0x21A0E8u;
    // 0x21a0e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a0ec: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x21a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x21a0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a0f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a0fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a104: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21a104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a108: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x21a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x21a10c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a110: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x21a110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21a114: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A114u;
    SET_GPR_U32(ctx, 31, 0x21A11Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A114u, 0x21A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A11Cu;
label_21a11c:
    // 0x21a11c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a120: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a128: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a12c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a12cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a134: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a138: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a13c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a144: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a148: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a14c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a150: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a154: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21a154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a158: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a15c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a160: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a168: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a16c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a16cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a170: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a174: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a178: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a17c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a180: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a184: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a188: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a18c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a190: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a194: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a198: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a19c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a1a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1a4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a1a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A1A8u;
    SET_GPR_U32(ctx, 31, 0x21A1B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A1A8u, 0x21A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1B0u;
label_21a1b0:
    // 0x21a1b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1b4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a1b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1bc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a1c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a1c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a1c8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A1C8u;
    {
        const bool branch_taken_0x21a1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a1c8) {
            ctx->pc = 0x21A1DCu;
            goto label_21a1dc;
        }
    }
    ctx->pc = 0x21A1D0u;
    // 0x21a1d0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21a1d0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A1D4u;
    {
        const bool branch_taken_0x21a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a1d4) {
            ctx->pc = 0x21A1F8u;
            goto label_21a1f8;
        }
    }
    ctx->pc = 0x21A1DCu;
label_21a1dc:
    // 0x21a1dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1e0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a1e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1e8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a1ec: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x21a1ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21a1f0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x21a1f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21a1f4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x21a1f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21a1f8:
    // 0x21a1f8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a1fc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x21a1fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a200: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x21a200u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a204: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x21A204u;
    {
        const bool branch_taken_0x21a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a204) {
            ctx->pc = 0x21A340u;
            goto label_21a340;
        }
    }
    ctx->pc = 0x21A20Cu;
label_21a20c:
    // 0x21a20c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x21a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a210: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x21a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21a214: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a218: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a220: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a224: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a228: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a22c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a234: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21a234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a238: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x21a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x21a23c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a23cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a240: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x21a240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21a244: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A244u;
    SET_GPR_U32(ctx, 31, 0x21A24Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A244u, 0x21A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A24Cu;
label_21a24c:
    // 0x21a24c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a250: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a258: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a25c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a260: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a264: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a268: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a26c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a270: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a274: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a278: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a27c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a280: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a284: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21a284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a288: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a28c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a290: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a294: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a298: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a298u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a29c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2a8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2b4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2c0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2cc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2d4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A2D8u;
    SET_GPR_U32(ctx, 31, 0x21A2E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A2D8u, 0x21A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2E0u;
label_21a2e0:
    // 0x21a2e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2e4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a2e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a2e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2ec: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a2f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a2f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a2f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A2F8u;
    {
        const bool branch_taken_0x21a2f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a2f8) {
            ctx->pc = 0x21A30Cu;
            goto label_21a30c;
        }
    }
    ctx->pc = 0x21A300u;
    // 0x21a300: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21a300u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A304u;
    {
        const bool branch_taken_0x21a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a304) {
            ctx->pc = 0x21A328u;
            goto label_21a328;
        }
    }
    ctx->pc = 0x21A30Cu;
label_21a30c:
    // 0x21a30c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a310: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a310u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a314: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a318: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a31c: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x21a31cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21a320: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x21a320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x21a324: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x21a324u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21a328:
    // 0x21a328: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a32c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x21a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a330: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x21a330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x21a334: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x21a334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x21a338: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a33c: 0x0  nop
    ctx->pc = 0x21a33cu;
    // NOP
label_21a340:
    // 0x21a340: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a344: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a348: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x21A348u;
    {
        const bool branch_taken_0x21a348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21a348) {
            ctx->pc = 0x21A3E4u;
            goto label_21a3e4;
        }
    }
    ctx->pc = 0x21A350u;
    // 0x21a350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a354: 0x0  nop
    ctx->pc = 0x21a354u;
    // NOP
    // 0x21a358: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21a358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21a35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a360: 0x0  nop
    ctx->pc = 0x21a360u;
    // NOP
    // 0x21a364: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21a368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a36c: 0x0  nop
    ctx->pc = 0x21a36cu;
    // NOP
    // 0x21a370: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21a374: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x21a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a378: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21a37c: 0x3c033f8b  lui         $v1, 0x3F8B
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16267 << 16));
    // 0x21a380: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x21a380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x21a384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a388: 0x0  nop
    ctx->pc = 0x21a388u;
    // NOP
    // 0x21a38c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21a38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21a390: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21a394: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x21a394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a398: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x21a398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x21a39c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x21a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a3a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21a3a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21a3a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a3ac: 0x0  nop
    ctx->pc = 0x21a3acu;
    // NOP
    // 0x21a3b0: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x21a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x21a3b4: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x21a3b8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x21a3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x21a3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a3c0: 0x0  nop
    ctx->pc = 0x21a3c0u;
    // NOP
    // 0x21a3c4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21a3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21a3c8: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x21a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x21a3cc: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x21a3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x21a3d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a3d4: 0x0  nop
    ctx->pc = 0x21a3d4u;
    // NOP
    // 0x21a3d8: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21a3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21a3dc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x21a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21a3e0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_21a3e4:
    // 0x21a3e4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x21a3e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21a3e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21a3e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21a3ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21a3ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a3f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21a3f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a3f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21a3f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a3f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21a3f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a3fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21a3fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a40c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x21a40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21a410: 0x3e00008  jr          $ra
    ctx->pc = 0x21A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A418u;
}
