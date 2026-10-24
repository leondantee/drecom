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

// Function: entry_0026d29c
// Address: 0x26d29c - 0x26d384
void entry_0026d29c_0x26d29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d29c_0x26d29c");
#endif

    switch (ctx->pc) {
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d338u: goto label_26d338;
        default: break;
    }

    ctx->pc = 0x26d29cu;

    // 0x26d29c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d2a0: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x26d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d2a4: 0xc057324  jal         func_15CC90
    ctx->pc = 0x26D2A4u;
    SET_GPR_U32(ctx, 31, 0x26D2ACu);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x26D2A4u, 0x26D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2ACu;
label_26d2ac:
    // 0x26d2ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26d2acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d2b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26d2b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d2b4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26D2B4u;
    SET_GPR_U32(ctx, 31, 0x26D2BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26D2B4u, 0x26D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2BCu;
label_26d2bc:
    // 0x26d2bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26d2bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d2c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d2c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26D2C4u;
    SET_GPR_U32(ctx, 31, 0x26D2CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D2C4u, 0x26D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2CCu;
label_26d2cc:
    // 0x26d2cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26d2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d2d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d2d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d2d8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x26d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x26d2dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d2e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x26d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x26d2e4: 0x24678b60  addiu       $a3, $v1, -0x74A0
    ctx->pc = 0x26d2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937440));
    // 0x26d2e8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x26D2E8u;
    SET_GPR_U32(ctx, 31, 0x26D2F0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x26D2E8u, 0x26D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2F0u;
label_26d2f0:
    // 0x26d2f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d2f4: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x26d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x26d2f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x26d2f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d2fc: 0x0  nop
    ctx->pc = 0x26d2fcu;
    // NOP
    // 0x26d300: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26d304: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26d308: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d30c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d314: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x26d314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x26d318: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26d318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x26d31c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d320: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x26d320u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x26d324: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x26d324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x26d328: 0x25028b60  addiu       $v0, $t0, -0x74A0
    ctx->pc = 0x26d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937440));
    // 0x26d32c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26d32cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d330: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x26D330u;
    SET_GPR_U32(ctx, 31, 0x26D338u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x26D330u, 0x26D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D338u;
label_26d338:
    // 0x26d338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d33c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x26d33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x26d340: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26D340u;
    {
        const bool branch_taken_0x26d340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d340) {
            ctx->pc = 0x26D39Cu;
            return;
        }
    }
    ctx->pc = 0x26D348u;
    // 0x26d348: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d34c: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
    // 0x26d350: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26D350u;
    {
        const bool branch_taken_0x26d350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d350) {
            ctx->pc = 0x26D384u;
            return;
        }
    }
    ctx->pc = 0x26D358u;
    // 0x26d358: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x26d358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d35c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x26d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26d360: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26d364: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26D364u;
    {
        const bool branch_taken_0x26d364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d364) {
            ctx->pc = 0x26D450u;
            return;
        }
    }
    ctx->pc = 0x26D36Cu;
    // 0x26d36c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d370: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x26d370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x26d374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d378: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x26d378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x26d37c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x26D37Cu;
    {
        const bool branch_taken_0x26d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d37c) {
            ctx->pc = 0x26D450u;
            return;
        }
    }
    ctx->pc = 0x26D384u;
}
