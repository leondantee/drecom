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

// Function: entry_001f93c8
// Address: 0x1f93c8 - 0x1f94f4
void entry_001f93c8_0x1f93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f93c8_0x1f93c8");
#endif

    switch (ctx->pc) {
        case 0x1f9458u: goto label_1f9458;
        case 0x1f94d0u: goto label_1f94d0;
        case 0x1f94d8u: goto label_1f94d8;
        default: break;
    }

    ctx->pc = 0x1f93c8u;

    // 0x1f93c8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f93cc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f93d0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f93d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f93d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f93d8: 0x0  nop
    ctx->pc = 0x1f93d8u;
    // NOP
    // 0x1f93dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f93dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f93e0: 0x0  nop
    ctx->pc = 0x1f93e0u;
    // NOP
    // 0x1f93e4: 0x450000e9  bc1f        . + 4 + (0xE9 << 2)
    ctx->pc = 0x1F93E4u;
    {
        const bool branch_taken_0x1f93e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f93e4) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F93ECu;
    // 0x1f93ec: 0xafb100f0  sw          $s1, 0xF0($sp)
    ctx->pc = 0x1f93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 17));
    // 0x1f93f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f93f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f93f4: 0x0  nop
    ctx->pc = 0x1f93f4u;
    // NOP
    // 0x1f93f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f93f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1f93fc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1f93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1f9400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9404: 0x0  nop
    ctx->pc = 0x1f9404u;
    // NOP
    // 0x1f9408: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f9408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1f940c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f940cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9410: 0x0  nop
    ctx->pc = 0x1f9410u;
    // NOP
    // 0x1f9414: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f9414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1f9418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f941c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9420: 0x0  nop
    ctx->pc = 0x1f9420u;
    // NOP
    // 0x1f9424: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f9424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1f9428: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f9428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f942c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f942cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9430: 0x0  nop
    ctx->pc = 0x1f9430u;
    // NOP
    // 0x1f9434: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f9434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1f9438: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f943c: 0xa7a20114  sh          $v0, 0x114($sp)
    ctx->pc = 0x1f943cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9440: 0xa3a00116  sb          $zero, 0x116($sp)
    ctx->pc = 0x1f9440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 278), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9444: 0xa3a00117  sb          $zero, 0x117($sp)
    ctx->pc = 0x1f9444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9448: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1f9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f944c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f9450: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F9450u;
    SET_GPR_U32(ctx, 31, 0x1F9458u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F9450u, 0x1F9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9458u;
label_1f9458:
    // 0x1f9458: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1F9458u;
    {
        const bool branch_taken_0x1f9458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9458) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F9460u;
    // 0x1f9460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9464: 0x0  nop
    ctx->pc = 0x1f9464u;
    // NOP
    // 0x1f9468: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f9468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1f946c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f946cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9470: 0x0  nop
    ctx->pc = 0x1f9470u;
    // NOP
    // 0x1f9474: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f9474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1f9478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f947c: 0x0  nop
    ctx->pc = 0x1f947cu;
    // NOP
    // 0x1f9480: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f9480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1f9484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f948c: 0x0  nop
    ctx->pc = 0x1f948cu;
    // NOP
    // 0x1f9490: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f9490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1f9494: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f9494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f9498: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f9498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f949c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f949cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f94a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f94a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f94a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f94a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f94a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f94a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f94ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f94b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f94b4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f94b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f94b8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1f94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f94bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f94bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f94c0: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1f94c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f94c4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f94c4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f94c8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F94C8u;
    SET_GPR_U32(ctx, 31, 0x1F94D0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F94C8u, 0x1F94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94D0u;
label_1f94d0:
    // 0x1f94d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F94D0u;
    SET_GPR_U32(ctx, 31, 0x1F94D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F94D0u, 0x1F94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94D8u;
label_1f94d8:
    // 0x1f94d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F94D8u;
    {
        const bool branch_taken_0x1f94d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f94d8) {
            ctx->pc = 0x1F94F4u;
            return;
        }
    }
    ctx->pc = 0x1F94E0u;
    // 0x1f94e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f94e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f94e4: 0x0  nop
    ctx->pc = 0x1f94e4u;
    // NOP
    // 0x1f94e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f94e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f94ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F94ECu;
    {
        const bool branch_taken_0x1f94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f94ec) {
            ctx->pc = 0x1F9510u;
            return;
        }
    }
    ctx->pc = 0x1F94F4u;
}
