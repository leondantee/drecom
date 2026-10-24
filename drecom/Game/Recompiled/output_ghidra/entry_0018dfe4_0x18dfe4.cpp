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

// Function: entry_0018dfe4
// Address: 0x18dfe4 - 0x18e008
void entry_0018dfe4_0x18dfe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dfe4_0x18dfe4");
#endif

    ctx->pc = 0x18dfe4u;

label_18dfe4:
    // 0x18dfe4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x18dfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_18dfe8:
    // 0x18dfe8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18dfec:
    // 0x18dfec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18dff0:
    // 0x18dff0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18dff4:
    // 0x18dff4: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x18dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
label_18dff8:
    // 0x18dff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dffc:
    // 0x18dffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e000:
    // 0x18e000: 0x40f809  jalr        $v0
label_18e004:
    if (ctx->pc == 0x18E004u) {
        ctx->pc = 0x18E008u;
        goto label_fallthrough_0x18e000;
    }
    ctx->pc = 0x18E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E000u, 0x18E008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x18e000:
    ctx->pc = 0x18E008u;
}
