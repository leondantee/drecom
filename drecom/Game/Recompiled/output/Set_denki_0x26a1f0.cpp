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

// Function: Set_denki
// Address: 0x26a1f0 - 0x26a404
void Set_denki_0x26a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_denki_0x26a1f0");
#endif

    switch (ctx->pc) {
        case 0x26a230u: goto label_26a230;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a3acu: goto label_26a3ac;
        default: break;
    }

    ctx->pc = 0x26a1f0u;

    // 0x26a1f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26a1f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x26a1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x26a1f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26a1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a208: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x26a208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26a20c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x26a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x26a210: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x26a210u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26a214: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x26a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x26a218: 0x24041500  addiu       $a0, $zero, 0x1500
    ctx->pc = 0x26a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    // 0x26a21c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26a21cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a220: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x26a220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a224: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26a224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a228: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x26A228u;
    SET_GPR_U32(ctx, 31, 0x26A230u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x26A228u, 0x26A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A230u;
label_26a230:
    // 0x26a230: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a234: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x26a234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x26a238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a23c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a240: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a244: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x26a244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x26a248: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a24c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a250: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x26a250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a258: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a25c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x26a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a260: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a264: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a264u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a268: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x26a268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a26c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a270: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a274: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x26a274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a278: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a27c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a280: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x26a280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a284: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a288: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a28c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x26a28cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a290: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a294: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a298: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x26a298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a29c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a2a4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x26a2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a2a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a2b0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x26a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a2b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2b8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x26a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x26a2bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x26A2BCu;
    SET_GPR_U32(ctx, 31, 0x26A2C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x26A2BCu, 0x26A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2C4u;
label_26a2c4:
    // 0x26a2c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2c8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x26a2c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x26a2cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2d0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x26a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a2d4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x26a2d8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x26a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x26a2dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A2DCu;
    {
        const bool branch_taken_0x26a2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a2dc) {
            ctx->pc = 0x26A2F0u;
            goto label_26a2f0;
        }
    }
    ctx->pc = 0x26A2E4u;
    // 0x26a2e4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x26a2e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a2e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26A2E8u;
    {
        const bool branch_taken_0x26a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2e8) {
            ctx->pc = 0x26A30Cu;
            goto label_26a30c;
        }
    }
    ctx->pc = 0x26A2F0u;
label_26a2f0:
    // 0x26a2f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2f4: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a2f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26a2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26a2fc: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x26a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a300: 0x24520118  addiu       $s2, $v0, 0x118
    ctx->pc = 0x26a300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x26a304: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x26a304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26a308: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x26a308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26a30c:
    // 0x26a30c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x26a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x26a310: 0x2453a610  addiu       $s3, $v0, -0x59F0
    ctx->pc = 0x26a310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x26a314: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x26a314u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a318: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x26a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x26a31c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x26a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x26a320: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26A320u;
    {
        const bool branch_taken_0x26a320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a320) {
            ctx->pc = 0x26A3D4u;
            goto label_26a3d4;
        }
    }
    ctx->pc = 0x26A328u;
    // 0x26a328: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x26a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x26a32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a330: 0x0  nop
    ctx->pc = 0x26a330u;
    // NOP
    // 0x26a334: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x26a334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x26a338: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x26a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x26a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a340: 0x0  nop
    ctx->pc = 0x26a340u;
    // NOP
    // 0x26a344: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x26a344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x26a348: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x26a348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
    // 0x26a34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a350: 0x0  nop
    ctx->pc = 0x26a350u;
    // NOP
    // 0x26a354: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x26a354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x26a358: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26a358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26a35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a360: 0x0  nop
    ctx->pc = 0x26a360u;
    // NOP
    // 0x26a364: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x26a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x26a368: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a36c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a370: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x26a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x26a374: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a378: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a37c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x26a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x26a380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a384: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a388: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x26a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x26a38c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26a390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a394: 0x0  nop
    ctx->pc = 0x26a394u;
    // NOP
    // 0x26a398: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x26a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x26a39c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x26a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a3a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x26a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x26a3a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x26A3A4u;
    SET_GPR_U32(ctx, 31, 0x26A3ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26A3A4u, 0x26A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3ACu;
label_26a3ac:
    // 0x26a3ac: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x26a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x26a3b0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x26a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26a3b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a3b8: 0x0  nop
    ctx->pc = 0x26a3b8u;
    // NOP
    // 0x26a3bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26a3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26a3c0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x26a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x26a3c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x26a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26a3c8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x26a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x26a3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26A3CCu;
    {
        const bool branch_taken_0x26a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3cc) {
            ctx->pc = 0x26A3E0u;
            goto label_26a3e0;
        }
    }
    ctx->pc = 0x26A3D4u;
label_26a3d4:
    // 0x26a3d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x26a3d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A3D8u;
    {
        const bool branch_taken_0x26a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3d8) {
            ctx->pc = 0x26A3E4u;
            goto label_26a3e4;
        }
    }
    ctx->pc = 0x26A3E0u;
label_26a3e0:
    // 0x26a3e0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x26a3e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_26a3e4:
    // 0x26a3e4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x26a3e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a3e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a3ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a3ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a3f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a3f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a3f8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26a3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x26A3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A404u;
}
