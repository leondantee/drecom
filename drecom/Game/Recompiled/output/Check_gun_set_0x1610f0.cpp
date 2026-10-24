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

// Function: Check_gun_set
// Address: 0x1610f0 - 0x1611d4
void Check_gun_set_0x1610f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_gun_set_0x1610f0");
#endif

    switch (ctx->pc) {
        case 0x161184u: goto label_161184;
        default: break;
    }

    ctx->pc = 0x1610f0u;

    // 0x1610f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1610f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1610f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1610f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1610f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1610fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1610fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161104: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161108: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x161108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x16110c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x161110: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x161114: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x161118: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x16111c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161120: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161120u;
    {
        const bool branch_taken_0x161120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161120) {
            ctx->pc = 0x161134u;
            goto label_161134;
        }
    }
    ctx->pc = 0x161128u;
    // 0x161128: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x161128u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16112c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16112Cu;
    {
        const bool branch_taken_0x16112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16112c) {
            ctx->pc = 0x1611B8u;
            goto label_1611b8;
        }
    }
    ctx->pc = 0x161134u;
label_161134:
    // 0x161134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161138: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16113c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161140: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161144: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161148: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16114c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161150: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161154: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x161154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x161158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16115c: 0x0  nop
    ctx->pc = 0x16115cu;
    // NOP
    // 0x161160: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161164: 0x0  nop
    ctx->pc = 0x161164u;
    // NOP
    // 0x161168: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x161168u;
    {
        const bool branch_taken_0x161168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161168) {
            ctx->pc = 0x161198u;
            goto label_161198;
        }
    }
    ctx->pc = 0x161170u;
    // 0x161170: 0xc60c1380  lwc1        $f12, 0x1380($s0)
    ctx->pc = 0x161170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161174: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x161174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x161178: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x161178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16117c: 0xc058978  jal         func_1625E0
    ctx->pc = 0x16117Cu;
    SET_GPR_U32(ctx, 31, 0x161184u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x16117Cu, 0x161184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161184u;
label_161184:
    // 0x161184: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x161184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161188: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16118c: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x16118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x161190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161190u;
    {
        const bool branch_taken_0x161190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161190) {
            ctx->pc = 0x1611A4u;
            goto label_1611a4;
        }
    }
    ctx->pc = 0x161198u;
label_161198:
    // 0x161198: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x161198u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16119c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x16119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1611a0: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x1611a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
label_1611a4:
    // 0x1611a4: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1611a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1611ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1611acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1611b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1611b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1611b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1611b8:
    // 0x1611b8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1611b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1611bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1611bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1611c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1611c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1611c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1611c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1611c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1611c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1611cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1611CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1611CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1611D4u;
}
