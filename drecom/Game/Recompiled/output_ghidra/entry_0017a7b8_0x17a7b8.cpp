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

// Function: entry_0017a7b8
// Address: 0x17a7b8 - 0x17a828
void entry_0017a7b8_0x17a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a7b8_0x17a7b8");
#endif

    switch (ctx->pc) {
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a7f4u: goto label_17a7f4;
        case 0x17a804u: goto label_17a804;
        case 0x17a814u: goto label_17a814;
        default: break;
    }

    ctx->pc = 0x17a7b8u;

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
    ctx->pc = 0x17a828u;
}
