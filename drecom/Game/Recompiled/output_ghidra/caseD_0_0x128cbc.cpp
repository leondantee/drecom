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

// Function: caseD_0
// Address: 0x128cbc - 0x128d0c
void caseD_0_0x128cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x128cbc");
#endif

    switch (ctx->pc) {
        case 0x128cd0u: goto label_128cd0;
        default: break;
    }

    ctx->pc = 0x128cbcu;

    // 0x128cbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128cc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128cc4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x128cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x128cc8: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128CC8u;
    SET_GPR_U32(ctx, 31, 0x128CD0u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128CC8u, 0x128CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CD0u;
label_128cd0:
    // 0x128cd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x128cd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x128cd4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x128CD4u;
    {
        const bool branch_taken_0x128cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x128cd4) {
            ctx->pc = 0x128D0Cu;
            return;
        }
    }
    ctx->pc = 0x128CDCu;
    // 0x128cdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x128cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ce0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ce4: 0xa0910000  sb          $s1, 0x0($a0)
    ctx->pc = 0x128ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x128ce8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x128ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x128cec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128cf0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x128cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x128cf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128cf8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128cfc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x128cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d00: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x128d00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128d04: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x128d04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128d08: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x128d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x128d0cu;
}
