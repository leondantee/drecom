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

// Function: entry_00287dd8
// Address: 0x287dd8 - 0x287e7c
void entry_00287dd8_0x287dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287dd8_0x287dd8");
#endif

    switch (ctx->pc) {
        case 0x287e38u: goto label_287e38;
        default: break;
    }

    ctx->pc = 0x287dd8u;

    // 0x287dd8: 0x9248683f  lbu         $t0, 0x683F($s2)
    ctx->pc = 0x287dd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x287ddc: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x287ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x287de0: 0x2e6182a  slt         $v1, $s7, $a2
    ctx->pc = 0x287de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287de4: 0x1460fee3  bnez        $v1, . + 4 + (-0x11D << 2)
    ctx->pc = 0x287DE4u;
    {
        const bool branch_taken_0x287de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287de4) {
            ctx->pc = 0x287974u;
            return;
        }
    }
    ctx->pc = 0x287DECu;
    // 0x287dec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x287df0: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x287df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287df4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x287df4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x287df8: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x287df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x287dfc: 0x34c71043  ori         $a3, $a2, 0x1043
    ctx->pc = 0x287dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x287e00: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x287e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e04: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x287e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x287e08: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x287e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x287e0c: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x287e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x287e10: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x287e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x287e14: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x287e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x287e18: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x287e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e1c: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x287e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x287e20: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x287e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287e24: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x287e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287e28: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x287e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e2c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x287e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287e30: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287E30u;
    SET_GPR_U32(ctx, 31, 0x287E38u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287E30u, 0x287E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E38u;
label_287e38:
    // 0x287e38: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x287e38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287e3c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x287e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e40: 0x24d30010  addiu       $s3, $a2, 0x10
    ctx->pc = 0x287e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x287e44: 0xafb30128  sw          $s3, 0x128($sp)
    ctx->pc = 0x287e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 19));
    // 0x287e48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x287e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x287e4c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x287e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x287e50: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x287e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287e54: 0x245e5f30  addiu       $fp, $v0, 0x5F30
    ctx->pc = 0x287e54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
    // 0x287e58: 0x73c08e28  paddub      $s1, $fp, $zero
    ctx->pc = 0x287e58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x287e5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x287e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x287e60: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x287e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x287e64: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x287e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x287e68: 0x245561e0  addiu       $s5, $v0, 0x61E0
    ctx->pc = 0x287e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25056));
    // 0x287e6c: 0xafb50138  sw          $s5, 0x138($sp)
    ctx->pc = 0x287e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 21));
    // 0x287e70: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x287e70u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x287e74: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x287E74u;
    {
        const bool branch_taken_0x287e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287e74) {
            ctx->pc = 0x288380u;
            return;
        }
    }
    ctx->pc = 0x287E7Cu;
}
