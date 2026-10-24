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

// Function: Fade_status
// Address: 0x164bb0 - 0x164bf0
void Fade_status_0x164bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fade_status_0x164bb0");
#endif

    ctx->pc = 0x164bb0u;

    // 0x164bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164bb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x164bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x164bb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x164bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164bbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164bc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x164bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164bcc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x164bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x164bd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164bd4: 0x244258a0  addiu       $v0, $v0, 0x58A0
    ctx->pc = 0x164bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22688));
    // 0x164bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164bdc: 0x90420054  lbu         $v0, 0x54($v0)
    ctx->pc = 0x164bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x164be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164be4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x164be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x164be8: 0x3e00008  jr          $ra
    ctx->pc = 0x164BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164BF0u;
}
