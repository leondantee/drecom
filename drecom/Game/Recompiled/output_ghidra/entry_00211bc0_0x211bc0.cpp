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

// Function: entry_00211bc0
// Address: 0x211bc0 - 0x211c28
void entry_00211bc0_0x211bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211bc0_0x211bc0");
#endif

    switch (ctx->pc) {
        case 0x211bccu: goto label_211bcc;
        default: break;
    }

    ctx->pc = 0x211bc0u;

    // 0x211bc0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x211bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x211bc4: 0xc084900  jal         func_212400
    ctx->pc = 0x211BC4u;
    SET_GPR_U32(ctx, 31, 0x211BCCu);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x211BC4u, 0x211BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BCCu;
label_211bcc:
    // 0x211bcc: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x211bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x211bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211bd4: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x211bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x211bd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x211bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x211bdc: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x211bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x211be0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x211be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x211be4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211be8: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x211bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211bf0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x211bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x211bf4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x211bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x211bf8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x211bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x211bfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211c00: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x211c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x211c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211c08: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x211c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x211c0c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x211c10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211c14: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x211c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x211c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211c1c: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x211c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x211c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x211c24: 0x0  nop
    ctx->pc = 0x211c24u;
    // NOP
    ctx->pc = 0x211c28u;
}
