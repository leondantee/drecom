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

// Function: Vram_clr
// Address: 0x17a780 - 0x17a848
void Vram_clr_0x17a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vram_clr_0x17a780");
#endif

    switch (ctx->pc) {
        case 0x17a79cu: goto label_17a79c;
        case 0x17a7b8u: goto label_17a7b8;
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a7f4u: goto label_17a7f4;
        case 0x17a804u: goto label_17a804;
        case 0x17a814u: goto label_17a814;
        case 0x17a830u: goto label_17a830;
        default: break;
    }

    ctx->pc = 0x17a780u;

    // 0x17a780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17a784: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x17a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x17a788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a790: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17a794: 0x8c31fdf0  lw          $s1, -0x210($at)
    ctx->pc = 0x17a794u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5CFDF0u));
    // 0x17a798: 0x24104000  addiu       $s0, $zero, 0x4000
    ctx->pc = 0x17a798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_17a79c:
    // 0x17a79c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x17a79cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x17a7a0: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a7a4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x17a7a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17a7ac: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a79c;
        }
    }
    ctx->pc = 0x17A7B4u;
    // 0x17a7b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17a7b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_17a7b8:
    // 0x17a7b8: 0x101280  sll         $v0, $s0, 10
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x17a7bc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x17a7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17a7c0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x17a7c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x17a7c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a7c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17a7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a7cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x17a7ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a7d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x17a7d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a7d4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x17a7d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a7d8: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17a7dc: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17a7e0: 0xc040330  jal         func_100CC0
    ctx->pc = 0x17A7E0u;
    SET_GPR_U32(ctx, 31, 0x17A7E8u);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x17A7E8u;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A7E8u) { return; }
    ctx->pc = 0x17A7E8u;
label_17a7e8:
    // 0x17a7e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17a7e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a7ec: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17A7ECu;
    SET_GPR_U32(ctx, 31, 0x17A7F4u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17A7F4u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A7F4u) { return; }
    ctx->pc = 0x17A7F4u;
label_17a7f4:
    // 0x17a7f4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x17a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x17a7f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a7fc: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x17A7FCu;
    SET_GPR_U32(ctx, 31, 0x17A804u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x17A804u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A804u) { return; }
    ctx->pc = 0x17A804u;
label_17a804:
    // 0x17a804: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17a804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17a808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a80c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x17A80Cu;
    SET_GPR_U32(ctx, 31, 0x17A814u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x17A814u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A814u) { return; }
    ctx->pc = 0x17A814u;
label_17a814:
    // 0x17a814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a818: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x17a818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17a81c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17A81Cu;
    {
        const bool branch_taken_0x17a81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a81c) {
            ctx->pc = 0x17A7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a7b8;
        }
    }
    ctx->pc = 0x17A824u;
    // 0x17a824: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17a824u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a828: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17A828u;
    SET_GPR_U32(ctx, 31, 0x17A830u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17A830u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A830u) { return; }
    ctx->pc = 0x17A830u;
label_17a830:
    // 0x17a830: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17a830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a83c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17a83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a840: 0x3e00008  jr          $ra
    ctx->pc = 0x17A840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A848u;
}
