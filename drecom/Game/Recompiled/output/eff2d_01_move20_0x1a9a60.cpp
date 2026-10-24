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

// Function: eff2d_01_move20
// Address: 0x1a9a60 - 0x1a9b1c
void eff2d_01_move20_0x1a9a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_01_move20_0x1a9a60");
#endif

    switch (ctx->pc) {
        case 0x1a9ae4u: goto label_1a9ae4;
        default: break;
    }

    ctx->pc = 0x1a9a60u;

    // 0x1a9a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9a64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a9a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a9a68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a9a6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9a70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9a74: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1a9a74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a9a78: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9A78u;
    {
        const bool branch_taken_0x1a9a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a78) {
            ctx->pc = 0x1A9A90u;
            goto label_1a9a90;
        }
    }
    ctx->pc = 0x1A9A80u;
    // 0x1a9a80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9a84: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x1a9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x1a9a88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a9a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a9a8c: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x1a9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
label_1a9a90:
    // 0x1a9a90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9a94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9a98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9A98u;
    {
        const bool branch_taken_0x1a9a98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a9a98) {
            ctx->pc = 0x1A9AB4u;
            goto label_1a9ab4;
        }
    }
    ctx->pc = 0x1A9AA0u;
    // 0x1a9aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9aa4: 0x0  nop
    ctx->pc = 0x1a9aa4u;
    // NOP
    // 0x1a9aa8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a9aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a9aac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9AACu;
    {
        const bool branch_taken_0x1a9aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9aac) {
            ctx->pc = 0x1A9AD0u;
            goto label_1a9ad0;
        }
    }
    ctx->pc = 0x1A9AB4u;
label_1a9ab4:
    // 0x1a9ab4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a9ab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a9ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a9abc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9ac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a9ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9ac4: 0x0  nop
    ctx->pc = 0x1a9ac4u;
    // NOP
    // 0x1a9ac8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a9ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a9acc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a9accu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a9ad0:
    // 0x1a9ad0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9ad4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1a9ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ad8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a9ad8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9adc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1A9ADCu;
    SET_GPR_U32(ctx, 31, 0x1A9AE4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1A9ADCu, 0x1A9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AE4u;
label_1a9ae4:
    // 0x1a9ae4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9ae8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a9aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9af0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9af4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9af8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9afc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9b00: 0x34640064  ori         $a0, $v1, 0x64
    ctx->pc = 0x1a9b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x1a9b04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9b08: 0xfc6401f0  sd          $a0, 0x1F0($v1)
    ctx->pc = 0x1a9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 496), GPR_U64(ctx, 4));
    // 0x1a9b0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a9b0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B1Cu;
}
