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

// Function: entry_00224340
// Address: 0x224340 - 0x2243c0
void entry_00224340_0x224340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224340_0x224340");
#endif

    ctx->pc = 0x224340u;

    // 0x224340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224344: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224348: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x224348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22434c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x224350: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x224350u;
    {
        const bool branch_taken_0x224350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224350) {
            ctx->pc = 0x224558u;
            return;
        }
    }
    ctx->pc = 0x224358u;
    // 0x224358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22435c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224360: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x224364: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x224368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22436c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x224370: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x224370u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x224374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22437c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224380: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x224380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x224384: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224388: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22438c: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x22438cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x224390: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224394: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x224394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x224398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224398u;
    {
        const bool branch_taken_0x224398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224398) {
            ctx->pc = 0x2243C0u;
            return;
        }
    }
    ctx->pc = 0x2243A0u;
    // 0x2243a0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2243a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2243a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2243a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2243a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2243a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2243ac: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2243acu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2243b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2243b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2243b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2243b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2243bc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2243bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x2243c0u;
}
