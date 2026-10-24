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
// Address: 0x1bbc44 - 0x1bbca8
void caseD_0_0x1bbc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1bbc44");
#endif

    switch (ctx->pc) {
        case 0x1bbc78u: goto label_1bbc78;
        default: break;
    }

    ctx->pc = 0x1bbc44u;

    // 0x1bbc44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1bbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bbc48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbc4c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1bbc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bbc50: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bbc50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbc54: 0xace013f0  sw          $zero, 0x13F0($a3)
    ctx->pc = 0x1bbc54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5104), GPR_U32(ctx, 0));
    // 0x1bbc58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbc5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbc60: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bbc64: 0x24060a50  addiu       $a2, $zero, 0xA50
    ctx->pc = 0x1bbc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
    // 0x1bbc68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bbc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bbc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bbc70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BBC70u;
    SET_GPR_U32(ctx, 31, 0x1BBC78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BBC70u, 0x1BBC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC78u;
label_1bbc78:
    // 0x1bbc78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bbc78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bbc7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbc84: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1bbc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1bbc88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbc8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbc90: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bbc94: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x1bbc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bbc98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBC98u;
    {
        const bool branch_taken_0x1bbc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc98) {
            ctx->pc = 0x1BBCA8u;
            return;
        }
    }
    ctx->pc = 0x1BBCA0u;
    // 0x1bbca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbca4: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1bbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    ctx->pc = 0x1bbca8u;
}
