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

// Function: entry_0016efc8
// Address: 0x16efc8 - 0x16f018
void entry_0016efc8_0x16efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efc8_0x16efc8");
#endif

    switch (ctx->pc) {
        case 0x16f010u: goto label_16f010;
        default: break;
    }

    ctx->pc = 0x16efc8u;

    // 0x16efc8: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x16efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x16efcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16efd0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16efd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16efd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16efdc: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16efe0: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x16efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16efe4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16efe8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16efec: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16efecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16eff0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x16eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16eff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EFF4u;
    {
        const bool branch_taken_0x16eff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eff4) {
            ctx->pc = 0x16F018u;
            return;
        }
    }
    ctx->pc = 0x16EFFCu;
    // 0x16effc: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16f000: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16f004: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f008: 0xc099274  jal         func_2649D0
    ctx->pc = 0x16F008u;
    SET_GPR_U32(ctx, 31, 0x16F010u);
    ctx->pc = 0x2649D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2649D0u, 0x16F008u, 0x16F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F010u;
label_16f010:
    // 0x16f010: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16F010u;
    {
        const bool branch_taken_0x16f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f010) {
            ctx->pc = 0x16F050u;
            return;
        }
    }
    ctx->pc = 0x16F018u;
}
