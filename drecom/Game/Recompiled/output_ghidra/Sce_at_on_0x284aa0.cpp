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

// Function: Sce_at_on
// Address: 0x284aa0 - 0x284b40
void Sce_at_on_0x284aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_at_on_0x284aa0");
#endif

    switch (ctx->pc) {
        case 0x284aa0u: goto label_284aa0;
        case 0x284aa4u: goto label_284aa4;
        case 0x284aa8u: goto label_284aa8;
        case 0x284aacu: goto label_284aac;
        case 0x284ab0u: goto label_284ab0;
        case 0x284ab4u: goto label_284ab4;
        case 0x284ab8u: goto label_284ab8;
        case 0x284abcu: goto label_284abc;
        case 0x284ac0u: goto label_284ac0;
        case 0x284ac4u: goto label_284ac4;
        case 0x284ac8u: goto label_284ac8;
        case 0x284accu: goto label_284acc;
        case 0x284ad0u: goto label_284ad0;
        case 0x284ad4u: goto label_284ad4;
        case 0x284ad8u: goto label_284ad8;
        case 0x284adcu: goto label_284adc;
        case 0x284ae0u: goto label_284ae0;
        case 0x284ae4u: goto label_284ae4;
        case 0x284ae8u: goto label_284ae8;
        case 0x284aecu: goto label_284aec;
        case 0x284af0u: goto label_284af0;
        case 0x284af4u: goto label_284af4;
        case 0x284af8u: goto label_284af8;
        case 0x284afcu: goto label_284afc;
        case 0x284b00u: goto label_284b00;
        case 0x284b04u: goto label_284b04;
        case 0x284b08u: goto label_284b08;
        case 0x284b0cu: goto label_284b0c;
        case 0x284b10u: goto label_284b10;
        case 0x284b14u: goto label_284b14;
        case 0x284b18u: goto label_284b18;
        case 0x284b1cu: goto label_284b1c;
        case 0x284b20u: goto label_284b20;
        case 0x284b24u: goto label_284b24;
        case 0x284b28u: goto label_284b28;
        case 0x284b2cu: goto label_284b2c;
        case 0x284b30u: goto label_284b30;
        case 0x284b34u: goto label_284b34;
        case 0x284b38u: goto label_284b38;
        case 0x284b3cu: goto label_284b3c;
        default: break;
    }

    ctx->pc = 0x284aa0u;

label_284aa0:
    // 0x284aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_284aa4:
    // 0x284aa4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x284aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_284aa8:
    // 0x284aa8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x284aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_284aac:
    // 0x284aac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x284aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_284ab0:
    // 0x284ab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x284ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_284ab4:
    // 0x284ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284ab8:
    // 0x284ab8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x284ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_284abc:
    // 0x284abc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x284abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_284ac0:
    // 0x284ac0: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x284ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
label_284ac4:
    // 0x284ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284ac8:
    // 0x284ac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_284acc:
    // 0x284acc: 0xac22d388  sw          $v0, -0x2C78($at)
    ctx->pc = 0x284accu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955912), GPR_U32(ctx, 2));
label_284ad0:
    // 0x284ad0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x284ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_284ad4:
    // 0x284ad4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x284ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_284ad8:
    // 0x284ad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284adc:
    // 0x284adc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x284adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_284ae0:
    // 0x284ae0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x284ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_284ae4:
    // 0x284ae4: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x284ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
label_284ae8:
    // 0x284ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284aec:
    // 0x284aec: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x284aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_284af0:
    // 0x284af0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x284af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_284af4:
    // 0x284af4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x284af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_284af8:
    // 0x284af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284afc:
    // 0x284afc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x284afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_284b00:
    // 0x284b00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x284b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_284b04:
    // 0x284b04: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x284b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
label_284b08:
    // 0x284b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284b0c:
    // 0x284b0c: 0x90420081  lbu         $v0, 0x81($v0)
    ctx->pc = 0x284b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 129)));
label_284b10:
    // 0x284b10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x284b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_284b14:
    // 0x284b14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x284b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284b18:
    // 0x284b18: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x284b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_284b1c:
    // 0x284b1c: 0x24427470  addiu       $v0, $v0, 0x7470
    ctx->pc = 0x284b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
label_284b20:
    // 0x284b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284b24:
    // 0x284b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284b28:
    // 0x284b28: 0x40f809  jalr        $v0
label_284b2c:
    if (ctx->pc == 0x284B2Cu) {
        ctx->pc = 0x284B30u;
        goto label_284b30;
    }
    ctx->pc = 0x284B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284B30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284B28u, 0x284B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284B30u;
label_284b30:
    // 0x284b30: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x284b30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_284b34:
    // 0x284b34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x284b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_284b38:
    // 0x284b38: 0x3e00008  jr          $ra
label_284b3c:
    if (ctx->pc == 0x284B3Cu) {
        ctx->pc = 0x284B40u;
        goto label_fallthrough_0x284b38;
    }
    ctx->pc = 0x284B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x284b38:
    ctx->pc = 0x284B40u;
}
