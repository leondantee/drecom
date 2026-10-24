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

// Function: Mk_index_set_flg
// Address: 0x1dffd0 - 0x1e0064
void Mk_index_set_flg_0x1dffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_set_flg_0x1dffd0");
#endif

    ctx->pc = 0x1dffd0u;

    // 0x1dffd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dffd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dffd8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1dffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1dffdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffe0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dffe4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dffe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfff0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dfff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dfff4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfff8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfffc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dfffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0000: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0004: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0008: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e000c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0010: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0014: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0018: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e001c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0020: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0024: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0028: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e002c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e002cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0030: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0034: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0038: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e003c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1e003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0040: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0044: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0048: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e004c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0050: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0054: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0058: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e005c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0064u;
}
