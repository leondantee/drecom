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

// Function: entry_0028c62c
// Address: 0x28c62c - 0x28c688
void entry_0028c62c_0x28c62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c62c_0x28c62c");
#endif

    switch (ctx->pc) {
        case 0x28c658u: goto label_28c658;
        case 0x28c680u: goto label_28c680;
        default: break;
    }

    ctx->pc = 0x28c62cu;

    // 0x28c62c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x28c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c630: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x28c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x28c634: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x28c634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c638: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x28c63c: 0x24c262a0  addiu       $v0, $a2, 0x62A0
    ctx->pc = 0x28c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    // 0x28c640: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c644: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c648: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28c64c: 0x24656110  addiu       $a1, $v1, 0x6110
    ctx->pc = 0x28c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24848));
    // 0x28c650: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x28C650u;
    SET_GPR_U32(ctx, 31, 0x28C658u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x28C658u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28C658u) { return; }
    ctx->pc = 0x28C658u;
label_28c658:
    // 0x28c658: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c658u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c65c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x28c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c660: 0x243a821  addu        $s5, $s2, $v1
    ctx->pc = 0x28c660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28c664: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x28c664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c668: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x28c668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28c66c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x28c66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28c670: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28c670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c674: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28c678: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x28C678u;
    SET_GPR_U32(ctx, 31, 0x28C680u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x28C680u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28C680u) { return; }
    ctx->pc = 0x28C680u;
label_28c680:
    // 0x28c680: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c680u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c684: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28c684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x28c688u;
}
