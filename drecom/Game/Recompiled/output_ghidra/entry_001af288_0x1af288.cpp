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

// Function: entry_001af288
// Address: 0x1af288 - 0x1af380
void entry_001af288_0x1af288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af288_0x1af288");
#endif

    switch (ctx->pc) {
        case 0x1af2b8u: goto label_1af2b8;
        case 0x1af2c4u: goto label_1af2c4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af34cu: goto label_1af34c;
        default: break;
    }

    ctx->pc = 0x1af288u;

    // 0x1af288: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1af288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af28c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1af290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af294: 0x0  nop
    ctx->pc = 0x1af294u;
    // NOP
    // 0x1af298: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1af29c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1af29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1af2a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af2a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1af2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1af2a8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1af2ac: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1af2acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1af2b0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AF2B0u;
    SET_GPR_U32(ctx, 31, 0x1AF2B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AF2B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF2B8u) { return; }
    ctx->pc = 0x1AF2B8u;
label_1af2b8:
    // 0x1af2b8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1af2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1af2bc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1AF2BCu;
    SET_GPR_U32(ctx, 31, 0x1AF2C4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1AF2BCu, 0x1AF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2C4u;
label_1af2c4:
    // 0x1af2c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1af2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af2c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1af2c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1af2cc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1af2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1af2d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af2d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af2d8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af2dc: 0xa423a4d0  sh          $v1, -0x5B30($at)
    ctx->pc = 0x1af2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 3));
    // 0x1af2e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1af2e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1af2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1af2e8: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1af2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1af2ec: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1af2ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1af2f0: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1AF2F0u;
    SET_GPR_U32(ctx, 31, 0x1AF2F8u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1AF2F0u, 0x1AF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2F8u;
label_1af2f8:
    // 0x1af2f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1af2f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1af2fc: 0x33c2003f  andi        $v0, $fp, 0x3F
    ctx->pc = 0x1af2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)63);
    // 0x1af300: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1AF300u;
    {
        const bool branch_taken_0x1af300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af300) {
            ctx->pc = 0x1AF500u;
            return;
        }
    }
    ctx->pc = 0x1AF308u;
    // 0x1af308: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1af308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1af30c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af310: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af314: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af314u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af318: 0x8c32b490  lw          $s2, -0x4B70($at)
    ctx->pc = 0x1af318u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
    // 0x1af31c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1af31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1af320: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af324: 0x244234b8  addiu       $v0, $v0, 0x34B8
    ctx->pc = 0x1af324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13496));
    // 0x1af328: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x1af328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
    // 0x1af32c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1af32cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af330: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1af330u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1af334: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1af334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1af338: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1af338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af33c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1af33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af340: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1af340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1af344: 0xc040c60  jal         func_103180
    ctx->pc = 0x1AF344u;
    SET_GPR_U32(ctx, 31, 0x1AF34Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1AF34Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF34Cu) { return; }
    ctx->pc = 0x1AF34Cu;
label_1af34c:
    // 0x1af34c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1af34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af350: 0x12220045  beq         $s1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AF350u;
    {
        const bool branch_taken_0x1af350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af350) {
            ctx->pc = 0x1AF468u;
            return;
        }
    }
    ctx->pc = 0x1AF358u;
    // 0x1af358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af35c: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AF35Cu;
    {
        const bool branch_taken_0x1af35c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af35c) {
            ctx->pc = 0x1AF410u;
            return;
        }
    }
    ctx->pc = 0x1AF364u;
    // 0x1af364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af368: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF368u;
    {
        const bool branch_taken_0x1af368 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af368) {
            ctx->pc = 0x1AF3B8u;
            return;
        }
    }
    ctx->pc = 0x1AF370u;
    // 0x1af370: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF370u;
    {
        const bool branch_taken_0x1af370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af370) {
            ctx->pc = 0x1AF380u;
            return;
        }
    }
    ctx->pc = 0x1AF378u;
    // 0x1af378: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AF378u;
    {
        const bool branch_taken_0x1af378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af378) {
            ctx->pc = 0x1AF4B8u;
            return;
        }
    }
    ctx->pc = 0x1AF380u;
}
