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

// Function: Em1d_pos_hosei
// Address: 0x36ee40 - 0x36ef68
void Em1d_pos_hosei_0x36ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_pos_hosei_0x36ee40");
#endif

    switch (ctx->pc) {
        case 0x36ee94u: goto label_36ee94;
        case 0x36eea8u: goto label_36eea8;
        case 0x36eef0u: goto label_36eef0;
        default: break;
    }

    ctx->pc = 0x36ee40u;

    // 0x36ee40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36ee44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x36ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x36ee48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36ee4c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x36ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x36ee50: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x36ee50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x36ee54: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x36ee54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36ee58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36ee58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36ee5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x36ee5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x36ee60: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x36ee60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36ee64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36ee64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36ee68: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x36ee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x36ee6c: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x36ee6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36ee70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36ee70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36ee74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x36ee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x36ee78: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x36EE78u;
    {
        const bool branch_taken_0x36ee78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ee78) {
            ctx->pc = 0x36EF54u;
            goto label_36ef54;
        }
    }
    ctx->pc = 0x36EE80u;
    // 0x36ee80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x36ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ee84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36ee88: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36ee8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36EE8Cu;
    SET_GPR_U32(ctx, 31, 0x36EE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36EE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36EE94u) { return; }
    ctx->pc = 0x36EE94u;
label_36ee94:
    // 0x36ee94: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x36ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ee98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36ee9c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36eea0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36EEA0u;
    SET_GPR_U32(ctx, 31, 0x36EEA8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36EEA8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36EEA8u) { return; }
    ctx->pc = 0x36EEA8u;
label_36eea8:
    // 0x36eea8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eeac: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36eeb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36eeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eeb4: 0x0  nop
    ctx->pc = 0x36eeb4u;
    // NOP
    // 0x36eeb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36eeb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36eebc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36eebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36eec0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x36eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eec4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x36eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x36eec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36eec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eecc: 0x0  nop
    ctx->pc = 0x36eeccu;
    // NOP
    // 0x36eed0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36eed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36eed4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36eed8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36eedc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x36eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36eee0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36eee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36eee4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36eee4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36eee8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x36EEE8u;
    SET_GPR_U32(ctx, 31, 0x36EEF0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x36EEE8u, 0x36EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEF0u;
label_36eef0:
    // 0x36eef0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x36eef0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36eef4: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x36eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x36eef8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x36eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x36eefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36eefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ef00: 0x0  nop
    ctx->pc = 0x36ef00u;
    // NOP
    // 0x36ef04: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x36ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x36ef08: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x36EF08u;
    {
        const bool branch_taken_0x36ef08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef08) {
            ctx->pc = 0x36EF3Cu;
            goto label_36ef3c;
        }
    }
    ctx->pc = 0x36EF10u;
    // 0x36ef10: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x36ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ef14: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x36ef14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x36ef18: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x36ef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ef1c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x36ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ef20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x36ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36ef24: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x36ef24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x36ef28: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x36ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ef2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x36ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ef30: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x36ef30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x36ef34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36EF34u;
    {
        const bool branch_taken_0x36ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef34) {
            ctx->pc = 0x36EF54u;
            goto label_36ef54;
        }
    }
    ctx->pc = 0x36EF3Cu;
label_36ef3c:
    // 0x36ef3c: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x36ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x36ef40: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x36ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x36ef44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ef44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ef48: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x36ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ef4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x36ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36ef50: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x36ef50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_36ef54:
    // 0x36ef54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36ef54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ef58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ef58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ef5c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x36ef5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36ef60: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EF68u;
}
