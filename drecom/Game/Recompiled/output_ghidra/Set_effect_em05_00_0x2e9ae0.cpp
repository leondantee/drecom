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

// Function: Set_effect_em05_00
// Address: 0x2e9ae0 - 0x2eabc8
void Set_effect_em05_00_0x2e9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_00_0x2e9ae0");
#endif

    switch (ctx->pc) {
        case 0x2e9b64u: goto label_2e9b64;
        case 0x2e9ba4u: goto label_2e9ba4;
        case 0x2e9c40u: goto label_2e9c40;
        case 0x2e9cf8u: goto label_2e9cf8;
        case 0x2e9d1cu: goto label_2e9d1c;
        case 0x2e9d40u: goto label_2e9d40;
        case 0x2e9d64u: goto label_2e9d64;
        case 0x2e9da0u: goto label_2e9da0;
        case 0x2e9dd0u: goto label_2e9dd0;
        case 0x2e9eccu: goto label_2e9ecc;
        case 0x2e9eecu: goto label_2e9eec;
        case 0x2e9f54u: goto label_2e9f54;
        case 0x2e9f94u: goto label_2e9f94;
        case 0x2ea034u: goto label_2ea034;
        case 0x2ea0fcu: goto label_2ea0fc;
        case 0x2ea120u: goto label_2ea120;
        case 0x2ea144u: goto label_2ea144;
        case 0x2ea168u: goto label_2ea168;
        case 0x2ea1a4u: goto label_2ea1a4;
        case 0x2ea1d4u: goto label_2ea1d4;
        case 0x2ea280u: goto label_2ea280;
        case 0x2ea2a0u: goto label_2ea2a0;
        case 0x2ea304u: goto label_2ea304;
        case 0x2ea344u: goto label_2ea344;
        case 0x2ea3e0u: goto label_2ea3e0;
        case 0x2ea4a0u: goto label_2ea4a0;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea4e8u: goto label_2ea4e8;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea548u: goto label_2ea548;
        case 0x2ea578u: goto label_2ea578;
        case 0x2ea5ecu: goto label_2ea5ec;
        case 0x2ea5f8u: goto label_2ea5f8;
        case 0x2ea640u: goto label_2ea640;
        case 0x2ea660u: goto label_2ea660;
        case 0x2ea6c4u: goto label_2ea6c4;
        case 0x2ea770u: goto label_2ea770;
        case 0x2ea7a8u: goto label_2ea7a8;
        case 0x2ea834u: goto label_2ea834;
        case 0x2ea8ccu: goto label_2ea8cc;
        case 0x2ea9f0u: goto label_2ea9f0;
        case 0x2eaa14u: goto label_2eaa14;
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaa90u: goto label_2eaa90;
        case 0x2eab24u: goto label_2eab24;
        case 0x2eab44u: goto label_2eab44;
        default: break;
    }

    ctx->pc = 0x2e9ae0u;

    // 0x2e9ae0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e9ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2e9ae4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2e9ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2e9ae8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e9ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e9aec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e9aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e9af0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e9af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e9af4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e9af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e9af8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e9afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e9b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e9b04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9b0c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2e9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2e9b10: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x2e9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x2e9b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b18: 0x0  nop
    ctx->pc = 0x2e9b18u;
    // NOP
    // 0x2e9b1c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e9b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e9b20: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x2e9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x2e9b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b28: 0x0  nop
    ctx->pc = 0x2e9b28u;
    // NOP
    // 0x2e9b2c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e9b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e9b30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b34: 0x0  nop
    ctx->pc = 0x2e9b34u;
    // NOP
    // 0x2e9b38: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e9b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e9b3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b44: 0x0  nop
    ctx->pc = 0x2e9b44u;
    // NOP
    // 0x2e9b48: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e9b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e9b4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b50: 0x0  nop
    ctx->pc = 0x2e9b50u;
    // NOP
    // 0x2e9b54: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e9b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e9b58: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e9b58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9b5c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x2E9B5Cu;
    {
        const bool branch_taken_0x2e9b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b5c) {
            ctx->pc = 0x2E9F30u;
            goto label_2e9f30;
        }
    }
    ctx->pc = 0x2E9B64u;
label_2e9b64:
    // 0x2e9b64: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2e9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e9b68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2e9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2e9b6c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e9b70: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e9b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9b78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e9b7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e9b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e9b80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9b84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9b88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9b8c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e9b8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9b90: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e9b94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e9b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9b98: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e9b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e9b9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E9B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E9BA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E9B9Cu, 0x2E9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BA4u;
label_2e9ba4:
    // 0x2e9ba4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9ba8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e9bac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9bb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bb8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e9bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9bbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9bc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bc4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bc8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2e9bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e9bcc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bd0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bd4: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2e9bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9bdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9be0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9be4: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2e9be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e9be8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bec: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bf0: 0xa060011c  sb          $zero, 0x11C($v1)
    ctx->pc = 0x2e9bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9bf4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bf8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bfc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e9bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c04: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c08: 0xa060013c  sb          $zero, 0x13C($v1)
    ctx->pc = 0x2e9c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c10: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c14: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c1c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c20: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e9c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c28: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c2c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c30: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c34: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E9C38u;
    SET_GPR_U32(ctx, 31, 0x2E9C40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E9C38u, 0x2E9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C40u;
label_2e9c40:
    // 0x2e9c40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c44: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e9c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e9c48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c4c: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x2e9c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9c50: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9c54: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9c58: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9C58u;
    {
        const bool branch_taken_0x2e9c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9c58) {
            ctx->pc = 0x2E9C6Cu;
            goto label_2e9c6c;
        }
    }
    ctx->pc = 0x2E9C60u;
    // 0x2e9c60: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2e9c60u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9c64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9C64u;
    {
        const bool branch_taken_0x2e9c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c64) {
            ctx->pc = 0x2E9C88u;
            goto label_2e9c88;
        }
    }
    ctx->pc = 0x2E9C6Cu;
label_2e9c6c:
    // 0x2e9c6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c70: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9c74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c78: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9c7c: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x2e9c7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e9c80: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x2e9c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2e9c84: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2e9c84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e9c88:
    // 0x2e9c88: 0x3c130054  lui         $s3, 0x54
    ctx->pc = 0x2e9c88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c8c: 0x2663a610  addiu       $v1, $s3, -0x59F0
    ctx->pc = 0x2e9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944272));
    // 0x2e9c90: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2e9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2e9c94: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2e9c98: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e9c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9c9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9ca0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9ca4: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2E9CA4u;
    {
        const bool branch_taken_0x2e9ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9ca4) {
            ctx->pc = 0x2E9F08u;
            goto label_2e9f08;
        }
    }
    ctx->pc = 0x2E9CACu;
    // 0x2e9cac: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x2e9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9cb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e9cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cb4: 0x0  nop
    ctx->pc = 0x2e9cb4u;
    // NOP
    // 0x2e9cb8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e9cbc: 0x3c034133  lui         $v1, 0x4133
    ctx->pc = 0x2e9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16691 << 16));
    // 0x2e9cc0: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x2e9cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e9cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cc8: 0x0  nop
    ctx->pc = 0x2e9cc8u;
    // NOP
    // 0x2e9ccc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9cd0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e9cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cd8: 0x0  nop
    ctx->pc = 0x2e9cd8u;
    // NOP
    // 0x2e9cdc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9ce0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e9ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9ce8: 0x0  nop
    ctx->pc = 0x2e9ce8u;
    // NOP
    // 0x2e9cec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9cf0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9CF0u;
    SET_GPR_U32(ctx, 31, 0x2E9CF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9CF0u, 0x2E9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CF8u;
label_2e9cf8:
    // 0x2e9cf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d00: 0x0  nop
    ctx->pc = 0x2e9d00u;
    // NOP
    // 0x2e9d04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d08: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d10: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e9d14: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9D14u;
    SET_GPR_U32(ctx, 31, 0x2E9D1Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9D14u, 0x2E9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D1Cu;
label_2e9d1c:
    // 0x2e9d1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d24: 0x0  nop
    ctx->pc = 0x2e9d24u;
    // NOP
    // 0x2e9d28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d2c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d34: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9d38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9D38u;
    SET_GPR_U32(ctx, 31, 0x2E9D40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9D38u, 0x2E9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D40u;
label_2e9d40:
    // 0x2e9d40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9d44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d48: 0x0  nop
    ctx->pc = 0x2e9d48u;
    // NOP
    // 0x2e9d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d50: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d58: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9d5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9D5Cu, 0x2E9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D64u;
label_2e9d64:
    // 0x2e9d64: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9d68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d6c: 0x0  nop
    ctx->pc = 0x2e9d6cu;
    // NOP
    // 0x2e9d70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d74: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d7c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9d80: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x2e9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x2e9d84: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2e9d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2e9d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9d8c: 0x0  nop
    ctx->pc = 0x2e9d8cu;
    // NOP
    // 0x2e9d90: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e9d94: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2e9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9d98: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E9D98u;
    SET_GPR_U32(ctx, 31, 0x2E9DA0u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E9D98u, 0x2E9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DA0u;
label_2e9da0:
    // 0x2e9da0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e9da4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9da8: 0x0  nop
    ctx->pc = 0x2e9da8u;
    // NOP
    // 0x2e9dac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9db0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e9db4: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x2e9db4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9db8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2e9db8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dbc: 0x0  nop
    ctx->pc = 0x2e9dbcu;
    // NOP
    // 0x2e9dc0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e9dc4: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2e9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9dc8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E9DC8u;
    SET_GPR_U32(ctx, 31, 0x2E9DD0u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E9DC8u, 0x2E9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DD0u;
label_2e9dd0:
    // 0x2e9dd0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e9dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9dd8: 0x0  nop
    ctx->pc = 0x2e9dd8u;
    // NOP
    // 0x2e9ddc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9de0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e9de4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e9de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dec: 0x0  nop
    ctx->pc = 0x2e9decu;
    // NOP
    // 0x2e9df0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e9df4: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x2e9df4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9df8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2e9df8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dfc: 0x0  nop
    ctx->pc = 0x2e9dfcu;
    // NOP
    // 0x2e9e00: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e9e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e9e04: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e9e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e0c: 0x0  nop
    ctx->pc = 0x2e9e0cu;
    // NOP
    // 0x2e9e10: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e9e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e9e14: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e9e18: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e9e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e9e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e20: 0x0  nop
    ctx->pc = 0x2e9e20u;
    // NOP
    // 0x2e9e24: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e9e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e9e28: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e9e2c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e9e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e9e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e34: 0x0  nop
    ctx->pc = 0x2e9e34u;
    // NOP
    // 0x2e9e38: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e9e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e9e3c: 0x3c04425c  lui         $a0, 0x425C
    ctx->pc = 0x2e9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16988 << 16));
    // 0x2e9e40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e9e40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e44: 0x0  nop
    ctx->pc = 0x2e9e44u;
    // NOP
    // 0x2e9e48: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e9e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e9e4c: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x2e9e50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e9e50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e54: 0x0  nop
    ctx->pc = 0x2e9e54u;
    // NOP
    // 0x2e9e58: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e9e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e9e5c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2e9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2e9e60: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x2e9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2e9e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e68: 0x0  nop
    ctx->pc = 0x2e9e68u;
    // NOP
    // 0x2e9e6c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e9e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e9e70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9e74: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e9e78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9e7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e9e80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9e88: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2e9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e9e8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9e90: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x2e9e90u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x2e9e94: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x2e9e94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2e9e98: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e9e9c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2e9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e9ea0: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x2e9ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2e9ea4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2e9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e9ea8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2e9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9eac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9eb0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2e9eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2e9eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9eb8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2e9eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2e9ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9ec0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e9ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9ec4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9EC4u;
    SET_GPR_U32(ctx, 31, 0x2E9ECCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9EC4u, 0x2E9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9ECCu;
label_2e9ecc:
    // 0x2e9ecc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9ed0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e9ed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9ed8: 0x0  nop
    ctx->pc = 0x2e9ed8u;
    // NOP
    // 0x2e9edc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9ee0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e9ee4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9EE4u;
    SET_GPR_U32(ctx, 31, 0x2E9EECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9EE4u, 0x2E9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9EECu;
label_2e9eec:
    // 0x2e9eec: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9ef0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e9ef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9ef8: 0x0  nop
    ctx->pc = 0x2e9ef8u;
    // NOP
    // 0x2e9efc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9f00: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e9f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e9f04: 0x0  nop
    ctx->pc = 0x2e9f04u;
    // NOP
label_2e9f08:
    // 0x2e9f08: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9f0c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2e9f0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2e9f10: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2e9f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9f14: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2e9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2e9f18: 0x3464098f  ori         $a0, $v1, 0x98F
    ctx->pc = 0x2e9f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2e9f1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e9f1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f20: 0x0  nop
    ctx->pc = 0x2e9f20u;
    // NOP
    // 0x2e9f24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e9f28: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e9f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e9f2c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e9f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2e9f30:
    // 0x2e9f30: 0x2a24000c  slti        $a0, $s1, 0xC
    ctx->pc = 0x2e9f30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e9f34: 0x1480ff0b  bnez        $a0, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x2E9F34u;
    {
        const bool branch_taken_0x2e9f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f34) {
            ctx->pc = 0x2E9B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9b64;
        }
    }
    ctx->pc = 0x2E9F3Cu;
    // 0x2e9f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f40: 0x0  nop
    ctx->pc = 0x2e9f40u;
    // NOP
    // 0x2e9f44: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e9f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e9f48: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e9f48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9f4c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2E9F4Cu;
    {
        const bool branch_taken_0x2e9f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f4c) {
            ctx->pc = 0x2EA2E0u;
            goto label_2ea2e0;
        }
    }
    ctx->pc = 0x2E9F54u;
label_2e9f54:
    // 0x2e9f54: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2e9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e9f58: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2e9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2e9f5c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2e9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e9f60: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2e9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2e9f64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e9f68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2e9f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e9f6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e9f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e9f70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e9f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9f74: 0x3bc38  dsll        $s7, $v1, 16
    ctx->pc = 0x2e9f74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << 16);
    // 0x2e9f78: 0x36e3ffff  ori         $v1, $s7, 0xFFFF
    ctx->pc = 0x2e9f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2e9f7c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2e9f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e9f80: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e9f84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e9f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9f88: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e9f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e9f8c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F94u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E9F8Cu, 0x2E9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F94u;
label_2e9f94:
    // 0x2e9f94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e9f94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e9f98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9f9c: 0xac23a618  sw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e9fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fa8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fac: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e9facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9fb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9fb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fbc: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e9fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9fc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fc8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e9fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9fd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fd8: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e9fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9fdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fe0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fe4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9fe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9ff0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e9ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9ff4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9ff8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9ffc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea000: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea004: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea008: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ea008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea00c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea010: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea014: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ea014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea018: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea01c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea01cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea020: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ea020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea024: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea028: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea02c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EA02Cu;
    SET_GPR_U32(ctx, 31, 0x2EA034u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EA02Cu, 0x2EA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA034u;
label_2ea034:
    // 0x2ea034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea038: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ea038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ea03c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea040: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea044: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea048: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea04c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA04Cu;
    {
        const bool branch_taken_0x2ea04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ea04c) {
            ctx->pc = 0x2EA060u;
            goto label_2ea060;
        }
    }
    ctx->pc = 0x2EA054u;
    // 0x2ea054: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2ea054u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea058: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EA058u;
    {
        const bool branch_taken_0x2ea058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea058) {
            ctx->pc = 0x2EA088u;
            goto label_2ea088;
        }
    }
    ctx->pc = 0x2EA060u;
label_2ea060:
    // 0x2ea060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea064: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea06c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea06cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea070: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ea070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ea074: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2ea074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x2ea078: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2ea078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2ea07c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ea07cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea080: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x2ea080u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ea084: 0x0  nop
    ctx->pc = 0x2ea084u;
    // NOP
label_2ea088:
    // 0x2ea088: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ea088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ea08c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ea08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ea090: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2ea090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2ea094: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2ea094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ea098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ea098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea09c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2ea09cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ea0a0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea0a4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea0a8: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2EA0A8u;
    {
        const bool branch_taken_0x2ea0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea0a8) {
            ctx->pc = 0x2EA2B8u;
            goto label_2ea2b8;
        }
    }
    ctx->pc = 0x2EA0B0u;
    // 0x2ea0b0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2ea0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0b8: 0x0  nop
    ctx->pc = 0x2ea0b8u;
    // NOP
    // 0x2ea0bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea0c0: 0x3c034133  lui         $v1, 0x4133
    ctx->pc = 0x2ea0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16691 << 16));
    // 0x2ea0c4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ea0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ea0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0cc: 0x0  nop
    ctx->pc = 0x2ea0ccu;
    // NOP
    // 0x2ea0d0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea0d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ea0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0dc: 0x0  nop
    ctx->pc = 0x2ea0dcu;
    // NOP
    // 0x2ea0e0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea0e4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ea0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea0e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0ec: 0x0  nop
    ctx->pc = 0x2ea0ecu;
    // NOP
    // 0x2ea0f0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea0f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA0F4u;
    SET_GPR_U32(ctx, 31, 0x2EA0FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA0F4u, 0x2EA0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0FCu;
label_2ea0fc:
    // 0x2ea0fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea104: 0x0  nop
    ctx->pc = 0x2ea104u;
    // NOP
    // 0x2ea108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea10c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea110: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea114: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea118: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA118u;
    SET_GPR_U32(ctx, 31, 0x2EA120u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA118u, 0x2EA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA120u;
label_2ea120:
    // 0x2ea120: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea128: 0x0  nop
    ctx->pc = 0x2ea128u;
    // NOP
    // 0x2ea12c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea130: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea138: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea13c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA13Cu;
    SET_GPR_U32(ctx, 31, 0x2EA144u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA13Cu, 0x2EA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA144u;
label_2ea144:
    // 0x2ea144: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea14c: 0x0  nop
    ctx->pc = 0x2ea14cu;
    // NOP
    // 0x2ea150: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea154: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea15c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea160: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA160u;
    SET_GPR_U32(ctx, 31, 0x2EA168u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA160u, 0x2EA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA168u;
label_2ea168:
    // 0x2ea168: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea170: 0x0  nop
    ctx->pc = 0x2ea170u;
    // NOP
    // 0x2ea174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea178: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea17c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea180: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea184: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ea184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ea188: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ea188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ea18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea190: 0x0  nop
    ctx->pc = 0x2ea190u;
    // NOP
    // 0x2ea194: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ea194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ea198: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea19c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EA19Cu;
    SET_GPR_U32(ctx, 31, 0x2EA1A4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EA19Cu, 0x2EA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1A4u;
label_2ea1a4:
    // 0x2ea1a4: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ea1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ea1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea1ac: 0x0  nop
    ctx->pc = 0x2ea1acu;
    // NOP
    // 0x2ea1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea1b4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ea1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ea1b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea1c0: 0x0  nop
    ctx->pc = 0x2ea1c0u;
    // NOP
    // 0x2ea1c4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ea1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ea1c8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea1cc: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EA1CCu;
    SET_GPR_U32(ctx, 31, 0x2EA1D4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EA1CCu, 0x2EA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1D4u;
label_2ea1d4:
    // 0x2ea1d4: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ea1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ea1d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea1dc: 0x0  nop
    ctx->pc = 0x2ea1dcu;
    // NOP
    // 0x2ea1e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea1e4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ea1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ea1e8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea1f0: 0x0  nop
    ctx->pc = 0x2ea1f0u;
    // NOP
    // 0x2ea1f4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ea1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ea1f8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ea1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea200: 0x0  nop
    ctx->pc = 0x2ea200u;
    // NOP
    // 0x2ea204: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ea204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ea208: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea210: 0x0  nop
    ctx->pc = 0x2ea210u;
    // NOP
    // 0x2ea214: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ea214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ea218: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea21c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ea21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ea220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea224: 0x0  nop
    ctx->pc = 0x2ea224u;
    // NOP
    // 0x2ea228: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ea228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ea22c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ea22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea230: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ea230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ea234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea238: 0x0  nop
    ctx->pc = 0x2ea238u;
    // NOP
    // 0x2ea23c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ea23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ea240: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2ea240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea244: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ea244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ea248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea24c: 0x0  nop
    ctx->pc = 0x2ea24cu;
    // NOP
    // 0x2ea250: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ea250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ea254: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x2ea258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea25c: 0x0  nop
    ctx->pc = 0x2ea25cu;
    // NOP
    // 0x2ea260: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ea260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ea264: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ea264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ea268: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ea268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ea26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea270: 0x0  nop
    ctx->pc = 0x2ea270u;
    // NOP
    // 0x2ea274: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ea274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ea278: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA278u;
    SET_GPR_U32(ctx, 31, 0x2EA280u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA278u, 0x2EA280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA280u;
label_2ea280:
    // 0x2ea280: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ea280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ea284: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ea284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ea288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea28c: 0x0  nop
    ctx->pc = 0x2ea28cu;
    // NOP
    // 0x2ea290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea294: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ea294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ea298: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA298u;
    SET_GPR_U32(ctx, 31, 0x2EA2A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA298u, 0x2EA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2A0u;
label_2ea2a0:
    // 0x2ea2a0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ea2a4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ea2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ea2a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea2ac: 0x0  nop
    ctx->pc = 0x2ea2acu;
    // NOP
    // 0x2ea2b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea2b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ea2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2ea2b8:
    // 0x2ea2b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ea2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ea2bc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ea2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea2c0: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x2ea2c4: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2ea2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2ea2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea2cc: 0x0  nop
    ctx->pc = 0x2ea2ccu;
    // NOP
    // 0x2ea2d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ea2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ea2d4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea2d8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ea2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2ea2dc: 0x0  nop
    ctx->pc = 0x2ea2dcu;
    // NOP
label_2ea2e0:
    // 0x2ea2e0: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x2ea2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ea2e4: 0x1460ff1b  bnez        $v1, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x2EA2E4u;
    {
        const bool branch_taken_0x2ea2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2e4) {
            ctx->pc = 0x2E9F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9f54;
        }
    }
    ctx->pc = 0x2EA2ECu;
    // 0x2ea2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ea2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea2f0: 0x0  nop
    ctx->pc = 0x2ea2f0u;
    // NOP
    // 0x2ea2f4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea2f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ea2f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea2fc: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x2EA2FCu;
    {
        const bool branch_taken_0x2ea2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2fc) {
            ctx->pc = 0x2EA6A0u;
            goto label_2ea6a0;
        }
    }
    ctx->pc = 0x2EA304u;
label_2ea304:
    // 0x2ea304: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2ea304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ea308: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ea308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ea30c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ea30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ea310: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ea314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea318: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ea318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea31c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ea31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ea320: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ea320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ea324: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ea324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ea328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea32c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ea32cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ea330: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ea330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ea334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ea334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea338: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ea338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ea33c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EA33Cu;
    SET_GPR_U32(ctx, 31, 0x2EA344u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EA33Cu, 0x2EA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA344u;
label_2ea344:
    // 0x2ea344: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea348: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ea34c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ea34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea350: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea354: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea358: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ea358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea35c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ea35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea360: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea364: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea368: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ea368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea36c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea370: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea374: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ea374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea37c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea380: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea384: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ea384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea388: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea38c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea38cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea390: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ea390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea394: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea398: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea39c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ea39cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3a8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ea3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3b4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ea3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3c0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ea3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3cc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ea3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3d4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ea3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EA3D8u;
    SET_GPR_U32(ctx, 31, 0x2EA3E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EA3D8u, 0x2EA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3E0u;
label_2ea3e0:
    // 0x2ea3e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3e4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ea3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ea3e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3ec: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea3f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea3f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea3f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA3F8u;
    {
        const bool branch_taken_0x2ea3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ea3f8) {
            ctx->pc = 0x2EA40Cu;
            goto label_2ea40c;
        }
    }
    ctx->pc = 0x2EA400u;
    // 0x2ea400: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x2ea400u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea404: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA404u;
    {
        const bool branch_taken_0x2ea404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea404) {
            ctx->pc = 0x2EA430u;
            goto label_2ea430;
        }
    }
    ctx->pc = 0x2EA40Cu;
label_2ea40c:
    // 0x2ea40c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea410: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea414: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea418: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea41c: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ea420: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2ea420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2ea424: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2ea424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2ea428: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ea428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea42c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x2ea42cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ea430:
    // 0x2ea430: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ea430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ea434: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ea434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ea438: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2ea438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2ea43c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2ea43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2ea440: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ea440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea444: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea448: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea44c: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2EA44Cu;
    {
        const bool branch_taken_0x2ea44c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea44c) {
            ctx->pc = 0x2EA678u;
            goto label_2ea678;
        }
    }
    ctx->pc = 0x2EA454u;
    // 0x2ea454: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea45c: 0x0  nop
    ctx->pc = 0x2ea45cu;
    // NOP
    // 0x2ea460: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea464: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ea464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ea468: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ea468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ea46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea470: 0x0  nop
    ctx->pc = 0x2ea470u;
    // NOP
    // 0x2ea474: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea478: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ea478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea480: 0x0  nop
    ctx->pc = 0x2ea480u;
    // NOP
    // 0x2ea484: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea488: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ea488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea490: 0x0  nop
    ctx->pc = 0x2ea490u;
    // NOP
    // 0x2ea494: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea498: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA498u;
    SET_GPR_U32(ctx, 31, 0x2EA4A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA498u, 0x2EA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4A0u;
label_2ea4a0:
    // 0x2ea4a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea4a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea4a8: 0x0  nop
    ctx->pc = 0x2ea4a8u;
    // NOP
    // 0x2ea4ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea4b0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea4b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea4bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA4BCu;
    SET_GPR_U32(ctx, 31, 0x2EA4C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA4BCu, 0x2EA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4C4u;
label_2ea4c4:
    // 0x2ea4c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea4cc: 0x0  nop
    ctx->pc = 0x2ea4ccu;
    // NOP
    // 0x2ea4d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea4d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea4d4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea4d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea4dc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea4e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA4E0u;
    SET_GPR_U32(ctx, 31, 0x2EA4E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA4E0u, 0x2EA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4E8u;
label_2ea4e8:
    // 0x2ea4e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea4f0: 0x0  nop
    ctx->pc = 0x2ea4f0u;
    // NOP
    // 0x2ea4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea4f8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea4fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea500: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea504: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA504u;
    SET_GPR_U32(ctx, 31, 0x2EA50Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA504u, 0x2EA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA50Cu;
label_2ea50c:
    // 0x2ea50c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea514: 0x0  nop
    ctx->pc = 0x2ea514u;
    // NOP
    // 0x2ea518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea51c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea524: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea528: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ea528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ea52c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ea52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ea530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea534: 0x0  nop
    ctx->pc = 0x2ea534u;
    // NOP
    // 0x2ea538: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ea538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ea53c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea540: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EA540u;
    SET_GPR_U32(ctx, 31, 0x2EA548u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EA540u, 0x2EA548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA548u;
label_2ea548:
    // 0x2ea548: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea54c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea550: 0x0  nop
    ctx->pc = 0x2ea550u;
    // NOP
    // 0x2ea554: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea558: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ea558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ea55c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2ea55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2ea560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea564: 0x0  nop
    ctx->pc = 0x2ea564u;
    // NOP
    // 0x2ea568: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ea568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ea56c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea570: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EA570u;
    SET_GPR_U32(ctx, 31, 0x2EA578u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EA570u, 0x2EA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA578u;
label_2ea578:
    // 0x2ea578: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ea578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea57c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea57cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea580: 0x0  nop
    ctx->pc = 0x2ea580u;
    // NOP
    // 0x2ea584: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea588: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ea588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ea58c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2ea58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea594: 0x0  nop
    ctx->pc = 0x2ea594u;
    // NOP
    // 0x2ea598: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ea598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ea59c: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x2ea59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x2ea5a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea5a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5a4: 0x0  nop
    ctx->pc = 0x2ea5a4u;
    // NOP
    // 0x2ea5a8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ea5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ea5ac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5b4: 0x0  nop
    ctx->pc = 0x2ea5b4u;
    // NOP
    // 0x2ea5b8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ea5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ea5bc: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea5c0: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x2ea5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ea5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5c8: 0x0  nop
    ctx->pc = 0x2ea5c8u;
    // NOP
    // 0x2ea5cc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ea5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ea5d0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ea5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea5d4: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x2ea5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ea5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5dc: 0x0  nop
    ctx->pc = 0x2ea5dcu;
    // NOP
    // 0x2ea5e0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ea5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ea5e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA5E4u;
    SET_GPR_U32(ctx, 31, 0x2EA5ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA5E4u, 0x2EA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5ECu;
label_2ea5ec:
    // 0x2ea5ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ea5ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ea5f0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2EA5F0u;
    SET_GPR_U32(ctx, 31, 0x2EA5F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2EA5F0u, 0x2EA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5F8u;
label_2ea5f8:
    // 0x2ea5f8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2ea5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea600: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ea600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea604: 0x3c07425c  lui         $a3, 0x425C
    ctx->pc = 0x2ea604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16988 << 16));
    // 0x2ea608: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ea608u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea60c: 0x0  nop
    ctx->pc = 0x2ea60cu;
    // NOP
    // 0x2ea610: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ea610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ea614: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x2ea614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x2ea618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea61c: 0x0  nop
    ctx->pc = 0x2ea61cu;
    // NOP
    // 0x2ea620: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ea620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ea624: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ea624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ea628: 0x34466666  ori         $a2, $v0, 0x6666
    ctx->pc = 0x2ea628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ea62c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ea62cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea630: 0x0  nop
    ctx->pc = 0x2ea630u;
    // NOP
    // 0x2ea634: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ea634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ea638: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA638u;
    SET_GPR_U32(ctx, 31, 0x2EA640u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA638u, 0x2EA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA640u;
label_2ea640:
    // 0x2ea640: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ea644: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2ea644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ea648: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea64c: 0x0  nop
    ctx->pc = 0x2ea64cu;
    // NOP
    // 0x2ea650: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea654: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ea654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ea658: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA658u;
    SET_GPR_U32(ctx, 31, 0x2EA660u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA658u, 0x2EA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA660u;
label_2ea660:
    // 0x2ea660: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ea660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ea664: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x2ea664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ea668: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ea668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea66c: 0x0  nop
    ctx->pc = 0x2ea66cu;
    // NOP
    // 0x2ea670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea674: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ea674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2ea678:
    // 0x2ea678: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ea678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ea67c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2ea67cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ea680: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ea680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea684: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x2ea684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x2ea688: 0x3464d845  ori         $a0, $v1, 0xD845
    ctx->pc = 0x2ea688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ea68c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea68cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea690: 0x0  nop
    ctx->pc = 0x2ea690u;
    // NOP
    // 0x2ea694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ea694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ea698: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea69c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2ea69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2ea6a0:
    // 0x2ea6a0: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x2ea6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ea6a4: 0x1460ff17  bnez        $v1, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x2EA6A4u;
    {
        const bool branch_taken_0x2ea6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6a4) {
            ctx->pc = 0x2EA304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea304;
        }
    }
    ctx->pc = 0x2EA6ACu;
    // 0x2ea6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ea6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea6b0: 0x0  nop
    ctx->pc = 0x2ea6b0u;
    // NOP
    // 0x2ea6b4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea6b8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ea6b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea6bc: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2EA6BCu;
    {
        const bool branch_taken_0x2ea6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6bc) {
            ctx->pc = 0x2EAB88u;
            goto label_2eab88;
        }
    }
    ctx->pc = 0x2EA6C4u;
label_2ea6c4:
    // 0x2ea6c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea6c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ea6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea6cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ea6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea6d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea6dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ea6e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea6e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ea6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea6e8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea6ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ea6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ea6f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ea6f4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ea6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ea6f8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ea6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ea6fc: 0x83f021  addu        $fp, $a0, $v1
    ctx->pc = 0x2ea6fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ea700: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea704: 0xac3e7508  sw          $fp, 0x7508($at)
    ctx->pc = 0x2ea704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ea708: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x2ea708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2ea70c: 0x30740003  andi        $s4, $v1, 0x3
    ctx->pc = 0x2ea70cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ea710: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ea714: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea718: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea71c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ea71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ea720: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x2ea720u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea724: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ea724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ea728: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ea728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ea72c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2ea72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ea730: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea734: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea738: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ea738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea73c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea744: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ea744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ea748: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ea748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ea74c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ea74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ea750: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea754: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ea754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ea758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea75c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ea760: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EA760u;
    {
        const bool branch_taken_0x2ea760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea760) {
            ctx->pc = 0x2EA7A0u;
            goto label_2ea7a0;
        }
    }
    ctx->pc = 0x2EA768u;
    // 0x2ea768: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA768u;
    SET_GPR_U32(ctx, 31, 0x2EA770u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA768u, 0x2EA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA770u;
label_2ea770:
    // 0x2ea770: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ea770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ea774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea778: 0x0  nop
    ctx->pc = 0x2ea778u;
    // NOP
    // 0x2ea77c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea780: 0x3c024282  lui         $v0, 0x4282
    ctx->pc = 0x2ea780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17026 << 16));
    // 0x2ea784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea788: 0x0  nop
    ctx->pc = 0x2ea788u;
    // NOP
    // 0x2ea78c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea790: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ea790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ea794: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2ea794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea798: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EA798u;
    {
        const bool branch_taken_0x2ea798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea798) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA7A0u;
label_2ea7a0:
    // 0x2ea7a0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA7A0u;
    SET_GPR_U32(ctx, 31, 0x2EA7A8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA7A0u, 0x2EA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7A8u;
label_2ea7a8:
    // 0x2ea7a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea7b0: 0x0  nop
    ctx->pc = 0x2ea7b0u;
    // NOP
    // 0x2ea7b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea7b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea7b8: 0x3c02434d  lui         $v0, 0x434D
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17229 << 16));
    // 0x2ea7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea7c0: 0x0  nop
    ctx->pc = 0x2ea7c0u;
    // NOP
    // 0x2ea7c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea7c8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ea7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ea7cc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ea7ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea7d0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2ea7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea7d4: 0x0  nop
    ctx->pc = 0x2ea7d4u;
    // NOP
label_2ea7d8:
    // 0x2ea7d8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2ea7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2ea7dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea7e4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ea7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2ea7e8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2ea7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2ea7ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea7f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea7f4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2ea7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea7f8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2ea7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ea7fc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ea7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ea800: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ea804: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2ea804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2ea808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ea80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ea810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ea814: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ea814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ea818: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ea818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ea81c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea820: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x2ea820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ea824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ea824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea828: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ea828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ea82c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EA82Cu;
    SET_GPR_U32(ctx, 31, 0x2EA834u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EA82Cu, 0x2EA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA834u;
label_2ea834:
    // 0x2ea834: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea838: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ea83c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2ea83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ea840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea844: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea848: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ea848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea84c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ea84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea850: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea854: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea858: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ea858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea85c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea860: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea864: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ea864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea868: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea86c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea86cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea870: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ea870u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea878: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea87c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ea87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea880: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea884: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea888: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ea888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea88c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea890: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea894: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ea894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea89c: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ea89cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8a0: 0xa060013d  sb          $zero, 0x13D($v1)
    ctx->pc = 0x2ea8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea8a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8a8: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ea8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8ac: 0xa060013e  sb          $zero, 0x13E($v1)
    ctx->pc = 0x2ea8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea8b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8b4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ea8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8b8: 0xa060013f  sb          $zero, 0x13F($v1)
    ctx->pc = 0x2ea8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea8bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8c0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ea8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EA8C4u;
    SET_GPR_U32(ctx, 31, 0x2EA8CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EA8C4u, 0x2EA8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8CCu;
label_2ea8cc:
    // 0x2ea8cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ea8ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ea8d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8d4: 0xac23a610  sw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea8d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ea8d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8dc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea8e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea8e4: 0x34650011  ori         $a1, $v1, 0x11
    ctx->pc = 0x2ea8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea8e8: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA8E8u;
    {
        const bool branch_taken_0x2ea8e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ea8e8) {
            ctx->pc = 0x2EA8FCu;
            goto label_2ea8fc;
        }
    }
    ctx->pc = 0x2EA8F0u;
    // 0x2ea8f0: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2ea8f0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea8f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA8F4u;
    {
        const bool branch_taken_0x2ea8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8f4) {
            ctx->pc = 0x2EA920u;
            goto label_2ea920;
        }
    }
    ctx->pc = 0x2EA8FCu;
label_2ea8fc:
    // 0x2ea8fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea900: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea908: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea90c: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ea90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ea910: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2ea910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2ea914: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2ea914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2ea918: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2ea918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ea91c: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x2ea91cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ea920:
    // 0x2ea920: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ea920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ea924: 0x2467a610  addiu       $a3, $v1, -0x59F0
    ctx->pc = 0x2ea924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ea928: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x2ea928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x2ea92c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ea930: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ea934: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2ea934u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ea938: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea93c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea940: 0x12030087  beq         $s0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2EA940u;
    {
        const bool branch_taken_0x2ea940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea940) {
            ctx->pc = 0x2EAB60u;
            goto label_2eab60;
        }
    }
    ctx->pc = 0x2EA948u;
    // 0x2ea948: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea94c: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EA94Cu;
    {
        const bool branch_taken_0x2ea94c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea94c) {
            ctx->pc = 0x2EA9A0u;
            goto label_2ea9a0;
        }
    }
    ctx->pc = 0x2EA954u;
    // 0x2ea954: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2ea954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2ea958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea95c: 0x0  nop
    ctx->pc = 0x2ea95cu;
    // NOP
    // 0x2ea960: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea964: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ea964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ea968: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ea968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ea96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea970: 0x0  nop
    ctx->pc = 0x2ea970u;
    // NOP
    // 0x2ea974: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea978: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2ea978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2ea97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea980: 0x0  nop
    ctx->pc = 0x2ea980u;
    // NOP
    // 0x2ea984: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea988: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ea988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea990: 0x0  nop
    ctx->pc = 0x2ea990u;
    // NOP
    // 0x2ea994: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea998: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EA998u;
    {
        const bool branch_taken_0x2ea998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea998) {
            ctx->pc = 0x2EA9E8u;
            goto label_2ea9e8;
        }
    }
    ctx->pc = 0x2EA9A0u;
label_2ea9a0:
    // 0x2ea9a0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9a8: 0x0  nop
    ctx->pc = 0x2ea9a8u;
    // NOP
    // 0x2ea9ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea9b0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea9b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ea9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ea9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9bc: 0x0  nop
    ctx->pc = 0x2ea9bcu;
    // NOP
    // 0x2ea9c0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea9c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9cc: 0x0  nop
    ctx->pc = 0x2ea9ccu;
    // NOP
    // 0x2ea9d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea9d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ea9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9dc: 0x0  nop
    ctx->pc = 0x2ea9dcu;
    // NOP
    // 0x2ea9e0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea9e4: 0x0  nop
    ctx->pc = 0x2ea9e4u;
    // NOP
label_2ea9e8:
    // 0x2ea9e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA9E8u;
    SET_GPR_U32(ctx, 31, 0x2EA9F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA9E8u, 0x2EA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9F0u;
label_2ea9f0:
    // 0x2ea9f0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea9f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea9f8: 0x0  nop
    ctx->pc = 0x2ea9f8u;
    // NOP
    // 0x2ea9fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa00: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eaa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaa04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa08: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eaa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eaa0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAA0Cu, 0x2EAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA14u;
label_2eaa14:
    // 0x2eaa14: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x2eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
    // 0x2eaa18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2eaa18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa1c: 0x0  nop
    ctx->pc = 0x2eaa1cu;
    // NOP
    // 0x2eaa20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eaa20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa24: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eaa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaa28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa2c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eaa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eaa30: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAA30u;
    SET_GPR_U32(ctx, 31, 0x2EAA38u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAA30u, 0x2EAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA38u;
label_2eaa38:
    // 0x2eaa38: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eaa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eaa3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaa3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa40: 0x0  nop
    ctx->pc = 0x2eaa40u;
    // NOP
    // 0x2eaa44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eaa44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa48: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eaa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaa4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa50: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eaa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eaa54: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2eaa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaa58: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EAA58u;
    SET_GPR_U32(ctx, 31, 0x2EAA60u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EAA58u, 0x2EAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA60u;
label_2eaa60:
    // 0x2eaa60: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x2eaa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x2eaa64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2eaa64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa68: 0x0  nop
    ctx->pc = 0x2eaa68u;
    // NOP
    // 0x2eaa6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaa6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa70: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eaa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eaa74: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2eaa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2eaa78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaa78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaa7c: 0x0  nop
    ctx->pc = 0x2eaa7cu;
    // NOP
    // 0x2eaa80: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eaa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eaa84: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2eaa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaa88: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EAA88u;
    SET_GPR_U32(ctx, 31, 0x2EAA90u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EAA88u, 0x2EAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA90u;
label_2eaa90:
    // 0x2eaa90: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2eaa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2eaa94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eaa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa98: 0x0  nop
    ctx->pc = 0x2eaa98u;
    // NOP
    // 0x2eaa9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaa9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaaa0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eaaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eaaa4: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2eaaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2eaaa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaaa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaaac: 0x0  nop
    ctx->pc = 0x2eaaacu;
    // NOP
    // 0x2eaab0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eaab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eaab4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2eaab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2eaab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaabc: 0x0  nop
    ctx->pc = 0x2eaabcu;
    // NOP
    // 0x2eaac0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eaac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eaac4: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2eaac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2eaac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaacc: 0x0  nop
    ctx->pc = 0x2eaaccu;
    // NOP
    // 0x2eaad0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eaad4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eaad8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eaad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eaadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaae0: 0x0  nop
    ctx->pc = 0x2eaae0u;
    // NOP
    // 0x2eaae4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eaae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eaae8: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eaae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eaaec: 0x347551ec  ori         $s5, $v1, 0x51EC
    ctx->pc = 0x2eaaecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eaaf0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2eaaf0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaaf4: 0x0  nop
    ctx->pc = 0x2eaaf4u;
    // NOP
    // 0x2eaaf8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eaaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eaafc: 0x3c03c060  lui         $v1, 0xC060
    ctx->pc = 0x2eaafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49248 << 16));
    // 0x2eab00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eab00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eab04: 0x0  nop
    ctx->pc = 0x2eab04u;
    // NOP
    // 0x2eab08: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eab0c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2eab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eab10: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eab14: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2eab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2eab18: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2eab18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2eab1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAB1Cu, 0x2EAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB24u;
label_2eab24:
    // 0x2eab24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2eab24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2eab28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eab2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eab2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eab30: 0x0  nop
    ctx->pc = 0x2eab30u;
    // NOP
    // 0x2eab34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eab34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eab38: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eab3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAB3Cu, 0x2EAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB44u;
label_2eab44:
    // 0x2eab44: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2eab48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eab48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eab4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eab4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eab50: 0x0  nop
    ctx->pc = 0x2eab50u;
    // NOP
    // 0x2eab54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eab54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eab58: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2eab5c: 0x0  nop
    ctx->pc = 0x2eab5cu;
    // NOP
label_2eab60:
    // 0x2eab60: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2eab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eab64: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2eab64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2eab68: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2eab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eab6c: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x2eab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
    // 0x2eab70: 0x346375b1  ori         $v1, $v1, 0x75B1
    ctx->pc = 0x2eab70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30129);
    // 0x2eab74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eab74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eab78: 0x0  nop
    ctx->pc = 0x2eab78u;
    // NOP
    // 0x2eab7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eab7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eab80: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eab80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2eab84: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2eab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2eab88:
    // 0x2eab88: 0x2a23001e  slti        $v1, $s1, 0x1E
    ctx->pc = 0x2eab88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2eab8c: 0x1460fecd  bnez        $v1, . + 4 + (-0x133 << 2)
    ctx->pc = 0x2EAB8Cu;
    {
        const bool branch_taken_0x2eab8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eab8c) {
            ctx->pc = 0x2EA6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea6c4;
        }
    }
    ctx->pc = 0x2EAB94u;
    // 0x2eab94: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2eab94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eab98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2eab98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eab9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2eab9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eaba0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2eaba0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eaba4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2eaba4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eaba8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eaba8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eabac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eabacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eabb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eabb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eabb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eabb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eabb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eabb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eabbc: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2eabbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2eabc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EABC8u;
}
