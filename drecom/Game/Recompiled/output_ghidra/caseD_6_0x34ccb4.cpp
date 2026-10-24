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

// Function: caseD_6
// Address: 0x34ccb4 - 0x34cd9c
void caseD_6_0x34ccb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x34ccb4");
#endif

    switch (ctx->pc) {
        case 0x34ccc8u: goto label_34ccc8;
        case 0x34cce0u: goto label_34cce0;
        case 0x34ccf4u: goto label_34ccf4;
        default: break;
    }

    ctx->pc = 0x34ccb4u;

    // 0x34ccb4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ccb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ccbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ccbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ccc0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34CCC0u;
    SET_GPR_U32(ctx, 31, 0x34CCC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34CCC0u, 0x34CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCC8u;
label_34ccc8:
    // 0x34ccc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ccc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34cccc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccd0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34ccd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34ccd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ccd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ccd8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34CCD8u;
    SET_GPR_U32(ctx, 31, 0x34CCE0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34CCD8u, 0x34CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCE0u;
label_34cce0:
    // 0x34cce0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34cce0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34cce4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34cce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cce8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x34cce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x34ccec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34CCECu;
    SET_GPR_U32(ctx, 31, 0x34CCF4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34CCECu, 0x34CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCF4u;
label_34ccf4:
    // 0x34ccf4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x34ccf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ccf8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccfc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34cd00: 0x247007d0  addiu       $s0, $v1, 0x7D0
    ctx->pc = 0x34cd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x34cd04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd08: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cd0c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x34cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x34cd10: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x34cd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34cd14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34cd14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34cd18: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x34cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34cd1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34cd20: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34cd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34cd28: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34cd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34cd2c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34cd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cd30: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x34cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x34cd34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34cd34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cd38: 0x0  nop
    ctx->pc = 0x34cd38u;
    // NOP
    // 0x34cd3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34cd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cd40: 0x0  nop
    ctx->pc = 0x34cd40u;
    // NOP
    // 0x34cd44: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x34CD44u;
    {
        const bool branch_taken_0x34cd44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cd44) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34CD4Cu;
    // 0x34cd4c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34cd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cd54: 0x0  nop
    ctx->pc = 0x34cd54u;
    // NOP
    // 0x34cd58: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34cd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34cd5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x34cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34cd60: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34cd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd64: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x34cd64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34cd68: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34cd6c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd70: 0xa466127a  sh          $a2, 0x127A($v1)
    ctx->pc = 0x34cd70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 6));
    // 0x34cd74: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34cd74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd78: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x34cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x34cd7c: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34cd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34cd80: 0x26100150  addiu       $s0, $s0, 0x150
    ctx->pc = 0x34cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34cd84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34cd88: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x34cd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x34cd8c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x34cd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x34cd90: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x34cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x34cd94: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x34CD94u;
    {
        const bool branch_taken_0x34cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd94) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34CD9Cu;
}
