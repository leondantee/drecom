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

// Function: entry_0035dd20
// Address: 0x35dd20 - 0x35dd80
void entry_0035dd20_0x35dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035dd20_0x35dd20");
#endif

    switch (ctx->pc) {
        case 0x35dd4cu: goto label_35dd4c;
        case 0x35dd74u: goto label_35dd74;
        default: break;
    }

    ctx->pc = 0x35dd20u;

label_35dd20:
    // 0x35dd20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd24: 0x3443d000  ori         $v1, $v0, 0xD000
    ctx->pc = 0x35dd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dd28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u));
    // 0x35dd2c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x35dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35dd30: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x35dd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35dd34: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DD34u;
    {
        const bool branch_taken_0x35dd34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dd34) {
            ctx->pc = 0x35DD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dd20;
        }
    }
    ctx->pc = 0x35DD3Cu;
    // 0x35dd3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35dd3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35dd40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd44: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x35DD44u;
    SET_GPR_U32(ctx, 31, 0x35DD4Cu);
    ctx->pc = 0x10BA28u;
    {
        ctx->pc = 0x35DD4Cu;
        ps2_stubs::sceIpuSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DD4Cu) { return; }
    ctx->pc = 0x35DD4Cu;
label_35dd4c:
    // 0x35dd4c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35dd50: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x35dd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35dd54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x35DD54u;
    {
        const bool branch_taken_0x35dd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dd54) {
            ctx->pc = 0x35DD80u;
            return;
        }
    }
    ctx->pc = 0x35DD5Cu;
    // 0x35dd5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd60: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x35dd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x35dd64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35dd64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35dd68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd6c: 0xc0409c6  jal         func_102718
    ctx->pc = 0x35DD6Cu;
    SET_GPR_U32(ctx, 31, 0x35DD74u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x35DD74u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DD74u) { return; }
    ctx->pc = 0x35DD74u;
label_35dd74:
    // 0x35dd74: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35dd78: 0xc0d72ec  jal         func_35CBB0
    ctx->pc = 0x35DD78u;
    SET_GPR_U32(ctx, 31, 0x35DD80u);
    ctx->pc = 0x35CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CBB0u, 0x35DD78u, 0x35DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD80u;
}
