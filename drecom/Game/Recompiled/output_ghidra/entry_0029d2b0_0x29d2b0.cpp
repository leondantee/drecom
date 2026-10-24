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

// Function: entry_0029d2b0
// Address: 0x29d2b0 - 0x29d388
void entry_0029d2b0_0x29d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d2b0_0x29d2b0");
#endif

    switch (ctx->pc) {
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d33cu: goto label_29d33c;
        default: break;
    }

    ctx->pc = 0x29d2b0u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x29D388u;
}
