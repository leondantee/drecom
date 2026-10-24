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

// Function: set_eff_light3
// Address: 0x219ab0 - 0x219f74
void set_eff_light3_0x219ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_light3_0x219ab0");
#endif

    switch (ctx->pc) {
        case 0x219b24u: goto label_219b24;
        case 0x219bb4u: goto label_219bb4;
        case 0x219c54u: goto label_219c54;
        case 0x219ce4u: goto label_219ce4;
        case 0x219d80u: goto label_219d80;
        case 0x219e10u: goto label_219e10;
        default: break;
    }

    ctx->pc = 0x219ab0u;

    // 0x219ab0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x219ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x219ab4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x219ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x219ab8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x219ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x219abc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x219abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x219ac0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x219ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x219ac4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x219ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x219ac8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x219acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x219ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x219ad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219adc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x219adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x219ae0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x219ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x219ae4: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x219ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x219ae8: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x219ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x219aec: 0xe7ac00d8  swc1        $f12, 0xD8($sp)
    ctx->pc = 0x219aecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x219af0: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x219af0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x219af4: 0xe7ae00e8  swc1        $f14, 0xE8($sp)
    ctx->pc = 0x219af4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x219af8: 0xe7af00f0  swc1        $f15, 0xF0($sp)
    ctx->pc = 0x219af8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x219afc: 0xafa800f8  sw          $t0, 0xF8($sp)
    ctx->pc = 0x219afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
    // 0x219b00: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219b04: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x219B04u;
    {
        const bool branch_taken_0x219b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219b04) {
            ctx->pc = 0x219C10u;
            goto label_219c10;
        }
    }
    ctx->pc = 0x219B0Cu;
    // 0x219b0c: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x219b10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219b10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219b14: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219b18: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x219b18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219b1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219B1Cu;
    SET_GPR_U32(ctx, 31, 0x219B24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219B1Cu, 0x219B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B24u;
label_219b24:
    // 0x219b24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b28: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219b2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b34: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219b34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b3c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b40: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x219b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b4c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b58: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219b58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b64: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x219b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b70: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219b70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b7c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b88: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219b88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219b94: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219b94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219b98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219b9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219ba0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219ba4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ba8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219bac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219BACu;
    SET_GPR_U32(ctx, 31, 0x219BB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219BACu, 0x219BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BB4u;
label_219bb4:
    // 0x219bb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219bb8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219bbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219bc0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219bc4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219bc8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219bcc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219BCCu;
    {
        const bool branch_taken_0x219bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219bcc) {
            ctx->pc = 0x219BE0u;
            goto label_219be0;
        }
    }
    ctx->pc = 0x219BD4u;
    // 0x219bd4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x219bd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219BD8u;
    {
        const bool branch_taken_0x219bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219bd8) {
            ctx->pc = 0x219BFCu;
            goto label_219bfc;
        }
    }
    ctx->pc = 0x219BE0u;
label_219be0:
    // 0x219be0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219be4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219be4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219be8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219bec: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219bf0: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219bf4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x219bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x219bf8: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x219bf8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_219bfc:
    // 0x219bfc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x219c00: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x219c00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219c04: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x219c04u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219c08: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x219C08u;
    {
        const bool branch_taken_0x219c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219c08) {
            ctx->pc = 0x219E70u;
            goto label_219e70;
        }
    }
    ctx->pc = 0x219C10u;
label_219c10:
    // 0x219c10: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x219c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219c14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219c18: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x219C18u;
    {
        const bool branch_taken_0x219c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219c18) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C20u;
    // 0x219c20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x219c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219c24: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x219c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x219c28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219c2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219c30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219c34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219c38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219c3c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219c40: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x219c44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219c48: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219c4c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219C4Cu;
    SET_GPR_U32(ctx, 31, 0x219C54u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219C4Cu, 0x219C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C54u;
label_219c54:
    // 0x219c54: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c58: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219c5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c64: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c70: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x219c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c7c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c88: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c94: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x219c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219ca0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219ca4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ca8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cac: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cb8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cc0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cc4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ccc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219cccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cd0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cd8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cdc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219CDCu;
    SET_GPR_U32(ctx, 31, 0x219CE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219CDCu, 0x219CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CE4u;
label_219ce4:
    // 0x219ce4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ce8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219cec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cf0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219cf4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219cf8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219cfc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219CFCu;
    {
        const bool branch_taken_0x219cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219cfc) {
            ctx->pc = 0x219D10u;
            goto label_219d10;
        }
    }
    ctx->pc = 0x219D04u;
    // 0x219d04: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219d04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219d08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219D08u;
    {
        const bool branch_taken_0x219d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d08) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219D10u;
label_219d10:
    // 0x219d10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d14: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219d14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219d18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d1c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219d20: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x219d20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219d24: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x219d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x219d28: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x219d28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_219d2c:
    // 0x219d2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x219d30: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x219d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219d34: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x219d34u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219d38: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x219D38u;
    {
        const bool branch_taken_0x219d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d38) {
            ctx->pc = 0x219E70u;
            goto label_219e70;
        }
    }
    ctx->pc = 0x219D40u;
label_219d40:
    // 0x219d40: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x219d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219d44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x219d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219d48: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x219d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x219d4c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x219d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x219d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219d54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219d58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219d5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219d60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219d64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219d68: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219d6c: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x219d70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219d70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219d74: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219d78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219D78u;
    SET_GPR_U32(ctx, 31, 0x219D80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219D78u, 0x219D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D80u;
label_219d80:
    // 0x219d80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d84: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219d88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219d90: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219d94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219d9c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x219d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x219da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219da4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219da8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219db4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dc0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x219dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219dc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dcc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219dd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dd8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219ddc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219de0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219de4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219de8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219df0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219df8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dfc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219e00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e04: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219e04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219e08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219E08u;
    SET_GPR_U32(ctx, 31, 0x219E10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219E08u, 0x219E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E10u;
label_219e10:
    // 0x219e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e14: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219e18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e1c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219e20: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219e24: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219e28: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219E28u;
    {
        const bool branch_taken_0x219e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219e28) {
            ctx->pc = 0x219E3Cu;
            goto label_219e3c;
        }
    }
    ctx->pc = 0x219E30u;
    // 0x219e30: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x219e30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219e34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219E34u;
    {
        const bool branch_taken_0x219e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e34) {
            ctx->pc = 0x219E58u;
            goto label_219e58;
        }
    }
    ctx->pc = 0x219E3Cu;
label_219e3c:
    // 0x219e3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e40: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219e44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e48: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219e4c: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x219e4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219e50: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x219e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x219e54: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x219e54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_219e58:
    // 0x219e58: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x219e5c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x219e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219e60: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x219e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x219e64: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x219e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x219e68: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x219e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219e6c: 0x0  nop
    ctx->pc = 0x219e6cu;
    // NOP
label_219e70:
    // 0x219e70: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219e74: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219e78: 0x12030031  beq         $s0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x219E78u;
    {
        const bool branch_taken_0x219e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x219e78) {
            ctx->pc = 0x219F40u;
            goto label_219f40;
        }
    }
    ctx->pc = 0x219E80u;
    // 0x219e80: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x219e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e84: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x219e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x219e88: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x219e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e8c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x219e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x219e90: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x219e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e94: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x219e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x219e98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x219e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219ea0: 0x0  nop
    ctx->pc = 0x219ea0u;
    // NOP
    // 0x219ea4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x219ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x219ea8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x219ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x219eac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x219eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x219eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219eb4: 0x0  nop
    ctx->pc = 0x219eb4u;
    // NOP
    // 0x219eb8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x219eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x219ebc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x219ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x219ec0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x219ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219ec4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x219ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x219ec8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x219ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219ecc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x219eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x219ed0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x219ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x219ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219ed8: 0x0  nop
    ctx->pc = 0x219ed8u;
    // NOP
    // 0x219edc: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x219edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x219ee0: 0x3c03bf73  lui         $v1, 0xBF73
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49011 << 16));
    // 0x219ee4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x219ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x219ee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x219ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219eec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x219ef0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x219EF0u;
    {
        const bool branch_taken_0x219ef0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x219ef0) {
            ctx->pc = 0x219F0Cu;
            goto label_219f0c;
        }
    }
    ctx->pc = 0x219EF8u;
    // 0x219ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219efc: 0x0  nop
    ctx->pc = 0x219efcu;
    // NOP
    // 0x219f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219F04u;
    {
        const bool branch_taken_0x219f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219f04) {
            ctx->pc = 0x219F28u;
            goto label_219f28;
        }
    }
    ctx->pc = 0x219F0Cu;
label_219f0c:
    // 0x219f0c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x219f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x219f10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x219f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x219f14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x219f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x219f18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219f18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219f1c: 0x0  nop
    ctx->pc = 0x219f1cu;
    // NOP
    // 0x219f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219f24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x219f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_219f28:
    // 0x219f28: 0x0  nop
    ctx->pc = 0x219f28u;
    // NOP
    // 0x219f2c: 0x0  nop
    ctx->pc = 0x219f2cu;
    // NOP
    // 0x219f30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x219f30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x219f34: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x219f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x219f38: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x219f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x219f3c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x219f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_219f40:
    // 0x219f40: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x219f40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219f44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x219f44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219f48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x219f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219f4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x219f4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219f50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x219f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219f54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x219f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219f58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x219f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219f5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219f68: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x219f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x219f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x219F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F74u;
}
