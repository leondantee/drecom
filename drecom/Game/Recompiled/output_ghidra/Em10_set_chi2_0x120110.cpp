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

// Function: Em10_set_chi2
// Address: 0x120110 - 0x12023c
void Em10_set_chi2_0x120110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_chi2_0x120110");
#endif

    switch (ctx->pc) {
        case 0x12013cu: goto label_12013c;
        case 0x120148u: goto label_120148;
        case 0x120158u: goto label_120158;
        case 0x12017cu: goto label_12017c;
        case 0x1201ccu: goto label_1201cc;
        case 0x1201dcu: goto label_1201dc;
        case 0x1201f4u: goto label_1201f4;
        case 0x120218u: goto label_120218;
        case 0x12022cu: goto label_12022c;
        default: break;
    }

    ctx->pc = 0x120110u;

    // 0x120110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120114: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x120114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x120118: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x120118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x12011c: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x12011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x120120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120124: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120128: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x120128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12012c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x12012cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x120130: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x120130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x120134: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x120134u;
    SET_GPR_U32(ctx, 31, 0x12013Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x120134u, 0x12013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12013Cu;
label_12013c:
    // 0x12013c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12013cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120140: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x120140u;
    SET_GPR_U32(ctx, 31, 0x120148u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x120140u, 0x120148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120148u;
label_120148:
    // 0x120148: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x120148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12014c: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x12014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x120150: 0xc0455e6  jal         func_115798
    ctx->pc = 0x120150u;
    SET_GPR_U32(ctx, 31, 0x120158u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x120150u, 0x120158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120158u;
label_120158:
    // 0x120158: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x120158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12015c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x12015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120160: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x120160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120164: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x120164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x120168: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12016c: 0x24651200  addiu       $a1, $v1, 0x1200
    ctx->pc = 0x12016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x120170: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x120170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x120174: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x120174u;
    SET_GPR_U32(ctx, 31, 0x12017Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x120174u, 0x12017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12017Cu;
label_12017c:
    // 0x12017c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x120180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120184: 0x0  nop
    ctx->pc = 0x120184u;
    // NOP
    // 0x120188: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x120188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x12018c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x120190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120194: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x120194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x120198: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x120198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12019c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1201a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1201a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1201a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1201a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1201a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1201a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1201ac: 0x34440606  ori         $a0, $v0, 0x606
    ctx->pc = 0x1201acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1542);
    // 0x1201b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1201b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1201b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1201b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1201b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1201b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1201bc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x1201bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1201c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1201c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1201c4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1201C4u;
    SET_GPR_U32(ctx, 31, 0x1201CCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1201C4u, 0x1201CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1201CCu;
label_1201cc:
    // 0x1201cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1201ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1201d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1201d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1201d4: 0xc040c24  jal         func_103090
    ctx->pc = 0x1201D4u;
    SET_GPR_U32(ctx, 31, 0x1201DCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1201DCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1201DCu) { return; }
    ctx->pc = 0x1201DCu;
label_1201dc:
    // 0x1201dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1201dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1201e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1201e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1201e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1201e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1201e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1201e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1201ec: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1201ECu;
    SET_GPR_U32(ctx, 31, 0x1201F4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1201F4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1201F4u) { return; }
    ctx->pc = 0x1201F4u;
label_1201f4:
    // 0x1201f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1201f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1201f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1201f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1201fc: 0x0  nop
    ctx->pc = 0x1201fcu;
    // NOP
    // 0x120200: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x120200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x120204: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x120204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120208: 0x24441200  addiu       $a0, $v0, 0x1200
    ctx->pc = 0x120208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x12020c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120210: 0xc085f58  jal         func_217D60
    ctx->pc = 0x120210u;
    SET_GPR_U32(ctx, 31, 0x120218u);
    ctx->pc = 0x217D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D60u, 0x120210u, 0x120218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120218u;
label_120218:
    // 0x120218: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x120218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12021c: 0x24441200  addiu       $a0, $v0, 0x1200
    ctx->pc = 0x12021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x120220: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120224: 0xc085f58  jal         func_217D60
    ctx->pc = 0x120224u;
    SET_GPR_U32(ctx, 31, 0x12022Cu);
    ctx->pc = 0x217D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D60u, 0x120224u, 0x12022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12022Cu;
label_12022c:
    // 0x12022c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x12022cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120230: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x120230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x120234: 0x3e00008  jr          $ra
    ctx->pc = 0x120234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12023Cu;
}
