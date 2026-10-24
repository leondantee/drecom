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

// Function: Eff_status_vramset
// Address: 0x18ad00 - 0x18ad78
void Eff_status_vramset_0x18ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_status_vramset_0x18ad00");
#endif

    switch (ctx->pc) {
        case 0x18ad5cu: goto label_18ad5c;
        case 0x18ad68u: goto label_18ad68;
        default: break;
    }

    ctx->pc = 0x18ad00u;

    // 0x18ad00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ad04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x18ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x18ad08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x18ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18ad0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ad10: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x18ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ad14: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18ad18: 0x2463a608  addiu       $v1, $v1, -0x59F8
    ctx->pc = 0x18ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944264));
    // 0x18ad1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ad20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ad24: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18AD24u;
    {
        const bool branch_taken_0x18ad24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad24) {
            ctx->pc = 0x18AD68u;
            goto label_18ad68;
        }
    }
    ctx->pc = 0x18AD2Cu;
    // 0x18ad2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ad30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ad34: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18ad38: 0x2442a608  addiu       $v0, $v0, -0x59F8
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944264));
    // 0x18ad3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ad40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ad44: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18ad48: 0x24061b00  addiu       $a2, $zero, 0x1B00
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x18ad4c: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x18ad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18ad50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18ad50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ad54: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AD54u;
    SET_GPR_U32(ctx, 31, 0x18AD5Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AD54u, 0x18AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD5Cu;
label_18ad5c:
    // 0x18ad5c: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18ad60: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AD60u;
    SET_GPR_U32(ctx, 31, 0x18AD68u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AD60u, 0x18AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD68u;
label_18ad68:
    // 0x18ad68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x18ad68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ad6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ad70: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD78u;
}
