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

// Function: Em03_R1_reset00
// Address: 0x2cd5d0 - 0x2cd9a0
void Em03_R1_reset00_0x2cd5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_reset00_0x2cd5d0");
#endif

    switch (ctx->pc) {
        case 0x2cd658u: goto label_2cd658;
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd728u: goto label_2cd728;
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd7ccu: goto label_2cd7cc;
        case 0x2cd7d8u: goto label_2cd7d8;
        case 0x2cd834u: goto label_2cd834;
        case 0x2cd840u: goto label_2cd840;
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd89cu: goto label_2cd89c;
        case 0x2cd8b4u: goto label_2cd8b4;
        case 0x2cd8c0u: goto label_2cd8c0;
        case 0x2cd8d0u: goto label_2cd8d0;
        case 0x2cd8dcu: goto label_2cd8dc;
        default: break;
    }

    ctx->pc = 0x2cd5d0u;

    // 0x2cd5d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cd5d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2cd5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2cd5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd5dc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2cd5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2cd5e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd5e4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2cd5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2cd5e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cd5ec: 0x246381c0  addiu       $v1, $v1, -0x7E40
    ctx->pc = 0x2cd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934976));
    // 0x2cd5f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2cd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cd5f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2cd5f4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3981C0u));
    // 0x2cd5f8: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2cd5f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3981D0u));
    // 0x2cd5fc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2cd5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2cd600: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2cd600u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2cd604: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd608: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2cd608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cd60c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cd60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cd610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd614: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2CD614u;
    {
        const bool branch_taken_0x2cd614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd614) {
            ctx->pc = 0x2CD854u;
            goto label_2cd854;
        }
    }
    ctx->pc = 0x2CD61Cu;
    // 0x2cd61c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD61Cu;
    {
        const bool branch_taken_0x2cd61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd61c) {
            ctx->pc = 0x2CD62Cu;
            goto label_2cd62c;
        }
    }
    ctx->pc = 0x2CD624u;
    // 0x2cd624: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2CD624u;
    {
        const bool branch_taken_0x2cd624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd624) {
            ctx->pc = 0x2CD98Cu;
            goto label_2cd98c;
        }
    }
    ctx->pc = 0x2CD62Cu;
label_2cd62c:
    // 0x2cd62c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd630: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd634: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cd634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd63c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd640: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cd640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cd644: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2cd644u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd648: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd64c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cd64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cd650: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CD650u;
    SET_GPR_U32(ctx, 31, 0x2CD658u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CD650u, 0x2CD658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD658u;
label_2cd658:
    // 0x2cd658: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2cd658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cd65c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd660: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2cd660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cd664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd66c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd670: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cd670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cd674: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cd674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cd678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd67c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd680: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd684: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cd684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cd688: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd68c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd690: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2cd690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cd694: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2cd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cd698: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd69c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cd69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cd6a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd6a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd6a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd6ac: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2cd6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2cd6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd6b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd6bc: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2cd6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2cd6c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd6c8: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2cd6c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2cd6cc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2cd6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2cd6d0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2cd6d4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2cd6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cd6d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD6D8u;
    {
        const bool branch_taken_0x2cd6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6d8) {
            ctx->pc = 0x2CD708u;
            goto label_2cd708;
        }
    }
    ctx->pc = 0x2CD6E0u;
    // 0x2cd6e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cd6ec: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2cd6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2cd6f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd6f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cd6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cd6f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CD6F8u;
    SET_GPR_U32(ctx, 31, 0x2CD700u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CD6F8u, 0x2CD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD700u;
label_2cd700:
    // 0x2cd700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD700u;
    {
        const bool branch_taken_0x2cd700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd700) {
            ctx->pc = 0x2CD728u;
            goto label_2cd728;
        }
    }
    ctx->pc = 0x2CD708u;
label_2cd708:
    // 0x2cd708: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd70c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd710: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cd710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cd714: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2cd718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd71c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cd71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cd720: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CD720u;
    SET_GPR_U32(ctx, 31, 0x2CD728u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CD720u, 0x2CD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD728u;
label_2cd728:
    // 0x2cd728: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cd728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cd72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd730: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd734: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cd734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cd738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd73c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd740: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cd740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cd744: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cd748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd74c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd750: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2cd750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2cd754: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd758: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CD758u;
    SET_GPR_U32(ctx, 31, 0x2CD760u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CD758u, 0x2CD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD760u;
label_2cd760:
    // 0x2cd760: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cd760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cd764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd768: 0x0  nop
    ctx->pc = 0x2cd768u;
    // NOP
    // 0x2cd76c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cd76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cd770: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2cd774: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cd774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cd778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd77c: 0x0  nop
    ctx->pc = 0x2cd77cu;
    // NOP
    // 0x2cd780: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cd780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cd784: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2cd784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2cd788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd78c: 0x0  nop
    ctx->pc = 0x2cd78cu;
    // NOP
    // 0x2cd790: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cd790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd798: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd79c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2cd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2cd7a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd7a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd7a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd7ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd7b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd7b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2cd7b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd7b8: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2cd7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2cd7bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd7bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd7c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cd7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd7c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2CD7C4u;
    SET_GPR_U32(ctx, 31, 0x2CD7CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2CD7C4u, 0x2CD7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7CCu;
label_2cd7cc:
    // 0x2cd7cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cd7ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cd7d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2CD7D0u;
    SET_GPR_U32(ctx, 31, 0x2CD7D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2CD7D0u, 0x2CD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7D8u;
label_2cd7d8:
    // 0x2cd7d8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2cd7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2cd7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd7e0: 0x0  nop
    ctx->pc = 0x2cd7e0u;
    // NOP
    // 0x2cd7e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cd7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd7e8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2cd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2cd7ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cd7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cd7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd7f4: 0x0  nop
    ctx->pc = 0x2cd7f4u;
    // NOP
    // 0x2cd7f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cd7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cd7fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd800: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cd800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd804: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2cd804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2cd808: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd80c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd810: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd814: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd81c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2cd81cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd820: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2cd820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2cd824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd828: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cd828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd82c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2CD82Cu;
    SET_GPR_U32(ctx, 31, 0x2CD834u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2CD82Cu, 0x2CD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD834u;
label_2cd834:
    // 0x2cd834: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cd834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cd838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2CD838u;
    SET_GPR_U32(ctx, 31, 0x2CD840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2CD838u, 0x2CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD840u;
label_2cd840:
    // 0x2cd840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd844: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd848: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2cd848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cd84c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2cd84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2cd850: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cd850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2cd854:
    // 0x2cd854: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd85c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2cd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2cd860: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2cd860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2cd864: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cd864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cd868: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cd868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cd86c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2cd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd870: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2cd870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2cd874: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2cd874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2cd878: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CD878u;
    SET_GPR_U32(ctx, 31, 0x2CD880u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CD878u, 0x2CD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD880u;
label_2cd880:
    // 0x2cd880: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cd880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2cd884: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd888: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cd888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd88c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cd88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd890: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cd890u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd894: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD894u;
    SET_GPR_U32(ctx, 31, 0x2CD89Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD894u, 0x2CD89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD89Cu;
label_2cd89c:
    // 0x2cd89c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cd8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cd8a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd8ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CD8ACu;
    SET_GPR_U32(ctx, 31, 0x2CD8B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CD8ACu, 0x2CD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8B4u;
label_2cd8b4:
    // 0x2cd8b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8b8: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2CD8B8u;
    SET_GPR_U32(ctx, 31, 0x2CD8C0u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2CD8B8u, 0x2CD8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8C0u;
label_2cd8c0:
    // 0x2cd8c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd8c8: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CD8C8u;
    SET_GPR_U32(ctx, 31, 0x2CD8D0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CD8C8u, 0x2CD8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8D0u;
label_2cd8d0:
    // 0x2cd8d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CD8D4u;
    SET_GPR_U32(ctx, 31, 0x2CD8DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CD8D4u, 0x2CD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8DCu;
label_2cd8dc:
    // 0x2cd8dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8e0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cd8e4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cd8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd8e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cd8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd8ec: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd8f4: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cd8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8fc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cd8fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cd900: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD900u;
    {
        const bool branch_taken_0x2cd900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd900) {
            ctx->pc = 0x2CD918u;
            goto label_2cd918;
        }
    }
    ctx->pc = 0x2CD908u;
    // 0x2cd908: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd90c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd90cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2cd910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cd910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cd914: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd914u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2cd918:
    // 0x2cd918: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd91c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cd91cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cd920: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CD920u;
    {
        const bool branch_taken_0x2cd920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd920) {
            ctx->pc = 0x2CD98Cu;
            goto label_2cd98c;
        }
    }
    ctx->pc = 0x2CD928u;
    // 0x2cd928: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cd92c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd930: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd934: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cd934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cd938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd93c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd940: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2cd940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cd944: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd948: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2cd948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd94c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd950: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2cd950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd958: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2cd958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd95c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd960: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2cd960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2cd964: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2cd964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd968: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd96c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd970: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2cd970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cd974: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd978: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2cd978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd97c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2cd97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2cd980: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cd984: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cd984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cd988: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2cd988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_2cd98c:
    // 0x2cd98c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2cd98cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd994: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2cd994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cd998: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD9A0u;
}
