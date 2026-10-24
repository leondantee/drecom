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

// Function: entry_001933e8
// Address: 0x1933e8 - 0x193480
void entry_001933e8_0x1933e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001933e8_0x1933e8");
#endif

    switch (ctx->pc) {
        case 0x193408u: goto label_193408;
        case 0x193444u: goto label_193444;
        default: break;
    }

    ctx->pc = 0x1933e8u;

    // 0x1933e8: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x1933e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x1933ec: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1933ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1933f0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1933f4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1933f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1933f8: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x1933f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1933fc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1933fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x193400: 0xc0d889c  jal         func_362270
    ctx->pc = 0x193400u;
    SET_GPR_U32(ctx, 31, 0x193408u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x193400u, 0x193408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193408u;
label_193408:
    // 0x193408: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x193408u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19340c: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x19340cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x193414: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x193414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x193418: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x193418u;
    {
        const bool branch_taken_0x193418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193418) {
            ctx->pc = 0x193D8Cu;
            return;
        }
    }
    ctx->pc = 0x193420u;
    // 0x193420: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19342c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193430: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193434: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x193434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x193438: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x193438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x19343c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19343Cu;
    SET_GPR_U32(ctx, 31, 0x193444u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x193444u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193444u) { return; }
    ctx->pc = 0x193444u;
label_193444:
    // 0x193444: 0xc7b600ec  lwc1        $f22, 0xEC($sp)
    ctx->pc = 0x193444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x193448: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x193448u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19344c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x193450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193454: 0x0  nop
    ctx->pc = 0x193454u;
    // NOP
    // 0x193458: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x193458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19345c: 0x0  nop
    ctx->pc = 0x19345cu;
    // NOP
    // 0x193460: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x193460u;
    {
        const bool branch_taken_0x193460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193460) {
            ctx->pc = 0x193480u;
            return;
        }
    }
    ctx->pc = 0x193468u;
    // 0x193468: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19346c: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x19346cu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193470: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x193470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193474: 0x0  nop
    ctx->pc = 0x193474u;
    // NOP
    // 0x193478: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x193478u;
    {
        const bool branch_taken_0x193478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193478) {
            ctx->pc = 0x193488u;
            return;
        }
    }
    ctx->pc = 0x193480u;
}
