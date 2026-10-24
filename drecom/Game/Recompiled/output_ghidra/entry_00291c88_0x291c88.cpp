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

// Function: entry_00291c88
// Address: 0x291c88 - 0x291d28
void entry_00291c88_0x291c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291c88_0x291c88");
#endif

    switch (ctx->pc) {
        case 0x291ce4u: goto label_291ce4;
        case 0x291d18u: goto label_291d18;
        default: break;
    }

    ctx->pc = 0x291c88u;

    // 0x291c88: 0x8fa901f8  lw          $t1, 0x1F8($sp)
    ctx->pc = 0x291c88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291c8c: 0x912a0014  lbu         $t2, 0x14($t1)
    ctx->pc = 0x291c8cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x291c90: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x291c94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x291c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291c98: 0x14640054  bne         $v1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x291C98u;
    {
        const bool branch_taken_0x291c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x291c98) {
            ctx->pc = 0x291DECu;
            return;
        }
    }
    ctx->pc = 0x291CA0u;
    // 0x291ca0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291ca4: 0x8c252a68  lw          $a1, 0x2A68($at)
    ctx->pc = 0x291ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x622A68u));
    // 0x291ca8: 0x1605001f  bne         $s0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x291CA8u;
    {
        const bool branch_taken_0x291ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x291ca8) {
            ctx->pc = 0x291D28u;
            return;
        }
    }
    ctx->pc = 0x291CB0u;
    // 0x291cb0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x291cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x291cb4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x291cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x291cb8: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x291cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x291cbc: 0x35071043  ori         $a3, $t0, 0x1043
    ctx->pc = 0x291cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4163);
    // 0x291cc0: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x291cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x291cc4: 0x24090044  addiu       $t1, $zero, 0x44
    ctx->pc = 0x291cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x291cc8: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x291cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x291ccc: 0x8faa0208  lw          $t2, 0x208($sp)
    ctx->pc = 0x291cccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291cd0: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x291cd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x291cd4: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x291cd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x291cd8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291cd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291cdc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291CDCu;
    SET_GPR_U32(ctx, 31, 0x291CE4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291CDCu, 0x291CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CE4u;
label_291ce4:
    // 0x291ce4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291ce8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291ce8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291cec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291cf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291cf4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x291cf8: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x291cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x291cfc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291d00: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x291d00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x291d04: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291d08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291d0c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291d0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291d10: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291D10u;
    SET_GPR_U32(ctx, 31, 0x291D18u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291D10u, 0x291D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D18u;
label_291d18:
    // 0x291d18: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291d1c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291d1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291d20: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x291D20u;
    {
        const bool branch_taken_0x291d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d20) {
            ctx->pc = 0x291EA8u;
            return;
        }
    }
    ctx->pc = 0x291D28u;
}
