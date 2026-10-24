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

// Function: entry_00293cc8
// Address: 0x293cc8 - 0x293d3c
void entry_00293cc8_0x293cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293cc8_0x293cc8");
#endif

    switch (ctx->pc) {
        case 0x293d10u: goto label_293d10;
        default: break;
    }

    ctx->pc = 0x293cc8u;

    // 0x293cc8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x293cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x293ccc: 0x1440fec2  bnez        $v0, . + 4 + (-0x13E << 2)
    ctx->pc = 0x293CCCu;
    {
        const bool branch_taken_0x293ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293ccc) {
            ctx->pc = 0x2937D8u;
            return;
        }
    }
    ctx->pc = 0x293CD4u;
    // 0x293cd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x293cd8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x293cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x293cdc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x293ce0: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x293ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x293ce4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x293ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x293ce8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x293ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293cec: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x293cecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293cf0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x293cf4: 0x51b825  or          $s7, $v0, $s1
    ctx->pc = 0x293cf4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x293cf8: 0xfe970008  sd          $s7, 0x8($s4)
    ctx->pc = 0x293cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 23));
    // 0x293cfc: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x293cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x293d00: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x293d00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x293d04: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x293d04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x293d08: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x293D08u;
    SET_GPR_U32(ctx, 31, 0x293D10u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293D08u, 0x293D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D10u;
label_293d10:
    // 0x293d10: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x293d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x293d14: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x293d14u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293d18: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x293d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x293d1c: 0x24626760  addiu       $v0, $v1, 0x6760
    ctx->pc = 0x293d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26464));
    // 0x293d20: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x293d20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293d24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x293d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x293d28: 0x24426838  addiu       $v0, $v0, 0x6838
    ctx->pc = 0x293d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26680));
    // 0x293d2c: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x293d2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293d30: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x293d30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293d34: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x293D34u;
    {
        const bool branch_taken_0x293d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293d34) {
            ctx->pc = 0x294030u;
            return;
        }
    }
    ctx->pc = 0x293D3Cu;
}
