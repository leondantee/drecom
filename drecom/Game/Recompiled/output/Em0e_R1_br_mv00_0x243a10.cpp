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

// Function: Em0e_R1_br_mv00
// Address: 0x243a10 - 0x243aa8
void Em0e_R1_br_mv00_0x243a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_br_mv00_0x243a10");
#endif

    switch (ctx->pc) {
        case 0x243a7cu: goto label_243a7c;
        default: break;
    }

    ctx->pc = 0x243a10u;

    // 0x243a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243a14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x243a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x243a18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x243a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x243a1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a20: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243a24: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x243a28: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x243a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x243a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243a30: 0x0  nop
    ctx->pc = 0x243a30u;
    // NOP
    // 0x243a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243a38: 0x0  nop
    ctx->pc = 0x243a38u;
    // NOP
    // 0x243a3c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x243A3Cu;
    {
        const bool branch_taken_0x243a3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243a3c) {
            ctx->pc = 0x243A98u;
            goto label_243a98;
        }
    }
    ctx->pc = 0x243A44u;
    // 0x243a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243a54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243a5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243a60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243a64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a68: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243a6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243a74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243A74u;
    SET_GPR_U32(ctx, 31, 0x243A7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243A74u, 0x243A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A7Cu;
label_243a7c:
    // 0x243a7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243a80: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x243a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x243a84: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x243a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x243a88: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243a8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243a8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243a90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243a94: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243a94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_243a98:
    // 0x243a98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x243a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x243AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243AA8u;
}
