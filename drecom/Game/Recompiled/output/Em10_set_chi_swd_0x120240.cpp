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

// Function: Em10_set_chi_swd
// Address: 0x120240 - 0x120394
void Em10_set_chi_swd_0x120240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_chi_swd_0x120240");
#endif

    switch (ctx->pc) {
        case 0x12026cu: goto label_12026c;
        case 0x120278u: goto label_120278;
        case 0x12029cu: goto label_12029c;
        case 0x1202b0u: goto label_1202b0;
        case 0x1202d4u: goto label_1202d4;
        case 0x120324u: goto label_120324;
        case 0x120334u: goto label_120334;
        case 0x12034cu: goto label_12034c;
        case 0x120370u: goto label_120370;
        case 0x120384u: goto label_120384;
        default: break;
    }

    ctx->pc = 0x120240u;

    // 0x120240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x120240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x120244: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x120244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x120248: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x120248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x12024c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x12024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x120250: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x120250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x120254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120258: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x120258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12025c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x12025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x120260: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x120260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x120264: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x120264u;
    SET_GPR_U32(ctx, 31, 0x12026Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x120264u, 0x12026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12026Cu;
label_12026c:
    // 0x12026c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120270: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x120270u;
    SET_GPR_U32(ctx, 31, 0x120278u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x120270u, 0x120278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120278u;
label_120278:
    // 0x120278: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x120278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12027c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120280: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x120280u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x120284: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x120284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120288: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x120288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12028c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12028cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x120290: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x120290u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x120294: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x120294u;
    SET_GPR_U32(ctx, 31, 0x12029Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x120294u, 0x12029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12029Cu;
label_12029c:
    // 0x12029c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x12029cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1202a0: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1202a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1202a4: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x1202a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1202a8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1202A8u;
    SET_GPR_U32(ctx, 31, 0x1202B0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1202A8u, 0x1202B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202B0u;
label_1202b0:
    // 0x1202b0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1202b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1202b4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1202b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1202b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1202bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1202bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1202c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1202c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1202c4: 0x24651200  addiu       $a1, $v1, 0x1200
    ctx->pc = 0x1202c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x1202c8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1202c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1202cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1202CCu;
    SET_GPR_U32(ctx, 31, 0x1202D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1202CCu, 0x1202D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202D4u;
label_1202d4:
    // 0x1202d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1202d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1202d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1202d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1202dc: 0x0  nop
    ctx->pc = 0x1202dcu;
    // NOP
    // 0x1202e0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1202e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1202e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1202e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1202e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1202e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1202ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1202ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1202f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1202f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1202f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1202f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1202f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1202f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1202fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1202fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x120300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120304: 0x34440306  ori         $a0, $v0, 0x306
    ctx->pc = 0x120304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)774);
    // 0x120308: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x120308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12030c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x120310: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120314: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x120314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x120318: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x120318u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12031c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12031Cu;
    SET_GPR_U32(ctx, 31, 0x120324u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12031Cu, 0x120324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120324u;
label_120324:
    // 0x120324: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x120324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120328: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12032c: 0xc040c24  jal         func_103090
    ctx->pc = 0x12032Cu;
    SET_GPR_U32(ctx, 31, 0x120334u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x120334u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x120334u) { return; }
    ctx->pc = 0x120334u;
label_120334:
    // 0x120334: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x120334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x120338: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12033c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120340: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120344: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x120344u;
    SET_GPR_U32(ctx, 31, 0x12034Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x12034Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12034Cu) { return; }
    ctx->pc = 0x12034Cu;
label_12034c:
    // 0x12034c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x120350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120354: 0x0  nop
    ctx->pc = 0x120354u;
    // NOP
    // 0x120358: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x120358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x12035c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x12035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120360: 0x24441200  addiu       $a0, $v0, 0x1200
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x120364: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120368: 0xc085f58  jal         func_217D60
    ctx->pc = 0x120368u;
    SET_GPR_U32(ctx, 31, 0x120370u);
    ctx->pc = 0x217D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D60u, 0x120368u, 0x120370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120370u;
label_120370:
    // 0x120370: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x120370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120374: 0x24441200  addiu       $a0, $v0, 0x1200
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x120378: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12037c: 0xc085f58  jal         func_217D60
    ctx->pc = 0x12037Cu;
    SET_GPR_U32(ctx, 31, 0x120384u);
    ctx->pc = 0x217D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D60u, 0x12037Cu, 0x120384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120384u;
label_120384:
    // 0x120384: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x120384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120388: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x120388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12038c: 0x3e00008  jr          $ra
    ctx->pc = 0x12038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12038Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120394u;
}
