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

// Function: Em02_pos_hosei
// Address: 0x29d230 - 0x29d738
void Em02_pos_hosei_0x29d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_pos_hosei_0x29d230");
#endif

    switch (ctx->pc) {
        case 0x29d268u: goto label_29d268;
        case 0x29d280u: goto label_29d280;
        case 0x29d2a4u: goto label_29d2a4;
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d664u: goto label_29d664;
        case 0x29d684u: goto label_29d684;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d718u: goto label_29d718;
        default: break;
    }

    ctx->pc = 0x29d230u;

    // 0x29d230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d234: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29d238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d23c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x29d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x29d240: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x29d240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x29d244: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x29d244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d24c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29d24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29d250: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D250u;
    {
        const bool branch_taken_0x29d250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d250) {
            ctx->pc = 0x29D270u;
            goto label_29d270;
        }
    }
    ctx->pc = 0x29D258u;
    // 0x29d258: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d25c: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x29d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x29d260: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x29D260u;
    SET_GPR_U32(ctx, 31, 0x29D268u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x29D260u, 0x29D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D268u;
label_29d268:
    // 0x29d268: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29D268u;
    {
        const bool branch_taken_0x29d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d268) {
            ctx->pc = 0x29D280u;
            goto label_29d280;
        }
    }
    ctx->pc = 0x29D270u;
label_29d270:
    // 0x29d270: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d274: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x29d278: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x29D278u;
    SET_GPR_U32(ctx, 31, 0x29D280u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x29D278u, 0x29D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D280u;
label_29d280:
    // 0x29d280: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x29d280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d288: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29d28c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D28Cu;
    {
        const bool branch_taken_0x29d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d28c) {
            ctx->pc = 0x29D2B0u;
            goto label_29d2b0;
        }
    }
    ctx->pc = 0x29D294u;
    // 0x29d294: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d298: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x29d298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x29d29c: 0xc05a400  jal         func_169000
    ctx->pc = 0x29D29Cu;
    SET_GPR_U32(ctx, 31, 0x29D2A4u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x29D29Cu, 0x29D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2A4u;
label_29d2a4:
    // 0x29d2a4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d2a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d2ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29d2b0:
    // 0x29d2b0: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x29d2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d2b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d2b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29d2bc: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x29D2BCu;
    {
        const bool branch_taken_0x29d2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d2bc) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D2C4u;
    // 0x29d2c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d2c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d2cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d2d0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x29d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29d2d4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29D2D4u;
    SET_GPR_U32(ctx, 31, 0x29D2DCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29D2DCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D2DCu) { return; }
    ctx->pc = 0x29D2DCu;
label_29d2dc:
    // 0x29d2dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d2e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d2e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d2e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x29d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29d2ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29D2ECu;
    SET_GPR_U32(ctx, 31, 0x29D2F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29D2F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D2F4u) { return; }
    ctx->pc = 0x29D2F4u;
label_29d2f4:
    // 0x29d2f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x29d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d2f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x29d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x29d2fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d300: 0x0  nop
    ctx->pc = 0x29d300u;
    // NOP
    // 0x29d304: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29d304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d308: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d30c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x29d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d310: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x29d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x29d314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d318: 0x0  nop
    ctx->pc = 0x29d318u;
    // NOP
    // 0x29d31c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29d31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29d320: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x29d320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29d324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d328: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29d328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d32c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x29d32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d330: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d330u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d334: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D334u;
    SET_GPR_U32(ctx, 31, 0x29D33Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D334u, 0x29D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D33Cu;
label_29d33c:
    // 0x29d33c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29d33cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29d340: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d344: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d348: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x29d348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x29d34c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x29d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x29d350: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x29d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x29d354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d358: 0x0  nop
    ctx->pc = 0x29d358u;
    // NOP
    // 0x29d35c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x29d360: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D360u;
    {
        const bool branch_taken_0x29d360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d360) {
            ctx->pc = 0x29D388u;
            goto label_29d388;
        }
    }
    ctx->pc = 0x29D368u;
    // 0x29d368: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29d368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d36c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x29d370: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d374: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d378: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d37c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x29d37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x29d380: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29D380u;
    {
        const bool branch_taken_0x29d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d380) {
            ctx->pc = 0x29D39Cu;
            goto label_29d39c;
        }
    }
    ctx->pc = 0x29D388u;
label_29d388:
    // 0x29d388: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29d38c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x29d38cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d390: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d398: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x29d398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_29d39c:
    // 0x29d39c: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x29d39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d3a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d3a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29d3a8: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x29D3A8u;
    {
        const bool branch_taken_0x29d3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3a8) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D3B0u;
    // 0x29d3b0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x29d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x29d3b4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x29d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x29d3b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29d3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d3bc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x29d3c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d3c4: 0x0  nop
    ctx->pc = 0x29d3c4u;
    // NOP
    // 0x29d3c8: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x29D3C8u;
    {
        const bool branch_taken_0x29d3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d3c8) {
            ctx->pc = 0x29D4A8u;
            goto label_29d4a8;
        }
    }
    ctx->pc = 0x29D3D0u;
    // 0x29d3d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d3d8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29d3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d3e0: 0x0  nop
    ctx->pc = 0x29d3e0u;
    // NOP
    // 0x29d3e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29D3E4u;
    {
        const bool branch_taken_0x29d3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d3e4) {
            ctx->pc = 0x29D3F8u;
            goto label_29d3f8;
        }
    }
    ctx->pc = 0x29D3ECu;
    // 0x29d3ec: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_29d3f8:
    // 0x29d3f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3fc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d400: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d408: 0x0  nop
    ctx->pc = 0x29d408u;
    // NOP
    // 0x29d40c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x29D40Cu;
    {
        const bool branch_taken_0x29d40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d40c) {
            ctx->pc = 0x29D490u;
            goto label_29d490;
        }
    }
    ctx->pc = 0x29D414u;
    // 0x29d414: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d41c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x29d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d420: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d424: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d428: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29d428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d42c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d430: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d434: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d438: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x29d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d43c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x29d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x29d440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d444: 0x0  nop
    ctx->pc = 0x29d444u;
    // NOP
    // 0x29d448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29d448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d44c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x29d44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x29d450: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d454: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d458: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d45c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29d45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d460: 0x0  nop
    ctx->pc = 0x29d460u;
    // NOP
    // 0x29d464: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x29D464u;
    {
        const bool branch_taken_0x29d464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d464) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D46Cu;
    // 0x29d46c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d470: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d474: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d47c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d484: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29d488: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29D488u;
    {
        const bool branch_taken_0x29d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d488) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D490u;
label_29d490:
    // 0x29d490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d494: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d498: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d49c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29d4a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x29D4A0u;
    {
        const bool branch_taken_0x29d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d4a0) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D4A8u;
label_29d4a8:
    // 0x29d4a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d4b0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x29d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4b8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d4bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29d4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d4c0: 0x0  nop
    ctx->pc = 0x29d4c0u;
    // NOP
    // 0x29d4c4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x29D4C4u;
    {
        const bool branch_taken_0x29d4c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d4c4) {
            ctx->pc = 0x29D558u;
            goto label_29d558;
        }
    }
    ctx->pc = 0x29D4CCu;
    // 0x29d4cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d4d4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x29d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4dc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d4e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29d4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d4e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d4e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4ec: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d4f0: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x29d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x29d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x29d4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d4fc: 0x0  nop
    ctx->pc = 0x29d4fcu;
    // NOP
    // 0x29d500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29d500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d504: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x29d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x29d508: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d50c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d510: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x29d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d514: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d518: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d51c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d520: 0x0  nop
    ctx->pc = 0x29d520u;
    // NOP
    // 0x29d524: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29D524u;
    {
        const bool branch_taken_0x29d524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d524) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D52Cu;
    // 0x29d52c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d530: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d534: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x29d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d538: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d53c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d544: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d548: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d54c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29d550: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29D550u;
    {
        const bool branch_taken_0x29d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d550) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D558u;
label_29d558:
    // 0x29d558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d55c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d560: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d564: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_29d568:
    // 0x29d568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d56c: 0x0  nop
    ctx->pc = 0x29d56cu;
    // NOP
    // 0x29d570: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29d570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d574: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x29d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x29d578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d57c: 0x0  nop
    ctx->pc = 0x29d57cu;
    // NOP
    // 0x29d580: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d584: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x29d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x29d588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d58c: 0x0  nop
    ctx->pc = 0x29d58cu;
    // NOP
    // 0x29d590: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d594: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29d598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d59c: 0x0  nop
    ctx->pc = 0x29d59cu;
    // NOP
    // 0x29d5a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29d5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29d5a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d5a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d5ac: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x29d5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d5b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d5b4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29D5B4u;
    SET_GPR_U32(ctx, 31, 0x29D5BCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29D5BCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D5BCu) { return; }
    ctx->pc = 0x29D5BCu;
label_29d5bc:
    // 0x29d5bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d5c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d5c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d5c8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x29d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29d5cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d5d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d5d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d5d4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D5D4u;
    SET_GPR_U32(ctx, 31, 0x29D5DCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D5D4u, 0x29D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5DCu;
label_29d5dc:
    // 0x29d5dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d5e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d5e4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x29d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x29d5e8: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x29d5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d5ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29d5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29d5f0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x29d5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x29d5f4: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x29D5F4u;
    {
        const bool branch_taken_0x29d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5f4) {
            ctx->pc = 0x29D724u;
            goto label_29d724;
        }
    }
    ctx->pc = 0x29D5FCu;
    // 0x29d5fc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d600: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d604: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29d608: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x29D608u;
    {
        const bool branch_taken_0x29d608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d608) {
            ctx->pc = 0x29D690u;
            goto label_29d690;
        }
    }
    ctx->pc = 0x29D610u;
    // 0x29d610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d614: 0x0  nop
    ctx->pc = 0x29d614u;
    // NOP
    // 0x29d618: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d61c: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x29d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x29d620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d624: 0x0  nop
    ctx->pc = 0x29d624u;
    // NOP
    // 0x29d628: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d62c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d630: 0x0  nop
    ctx->pc = 0x29d630u;
    // NOP
    // 0x29d634: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29d63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d640: 0x0  nop
    ctx->pc = 0x29d640u;
    // NOP
    // 0x29d644: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29d644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29d648: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d64c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d650: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d654: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x29d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29d658: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d65c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29D65Cu;
    SET_GPR_U32(ctx, 31, 0x29D664u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29D664u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D664u) { return; }
    ctx->pc = 0x29D664u;
label_29d664:
    // 0x29d664: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d668: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d66c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d670: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x29d674: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d678: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d678u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d67c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D67Cu;
    SET_GPR_U32(ctx, 31, 0x29D684u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D67Cu, 0x29D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D684u;
label_29d684:
    // 0x29d684: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d688: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d68c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x29d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_29d690:
    // 0x29d690: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d694: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d698: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29d69c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x29D69Cu;
    {
        const bool branch_taken_0x29d69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d69c) {
            ctx->pc = 0x29D724u;
            goto label_29d724;
        }
    }
    ctx->pc = 0x29D6A4u;
    // 0x29d6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6a8: 0x0  nop
    ctx->pc = 0x29d6a8u;
    // NOP
    // 0x29d6ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29d6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d6b0: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x29d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x29d6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6b8: 0x0  nop
    ctx->pc = 0x29d6b8u;
    // NOP
    // 0x29d6bc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6c4: 0x0  nop
    ctx->pc = 0x29d6c4u;
    // NOP
    // 0x29d6c8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d6cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29d6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6d4: 0x0  nop
    ctx->pc = 0x29d6d4u;
    // NOP
    // 0x29d6d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29d6dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d6e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d6e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d6e8: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x29d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29d6ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d6f0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29D6F0u;
    SET_GPR_U32(ctx, 31, 0x29D6F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29D6F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D6F8u) { return; }
    ctx->pc = 0x29D6F8u;
label_29d6f8:
    // 0x29d6f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d6fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d700: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d704: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d708: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x29d708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29d70c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d70cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d710: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D710u;
    SET_GPR_U32(ctx, 31, 0x29D718u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D710u, 0x29D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D718u;
label_29d718:
    // 0x29d718: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d71c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d720: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x29d720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_29d724:
    // 0x29d724: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29d724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d72c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29d72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29d730: 0x3e00008  jr          $ra
    ctx->pc = 0x29D730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D738u;
}
