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

// Function: Pl_r0_move
// Address: 0x1451e0 - 0x145228
void Pl_r0_move_0x1451e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_move_0x1451e0");
#endif

    switch (ctx->pc) {
        case 0x1451e0u: goto label_1451e0;
        case 0x1451e4u: goto label_1451e4;
        case 0x1451e8u: goto label_1451e8;
        case 0x1451ecu: goto label_1451ec;
        case 0x1451f0u: goto label_1451f0;
        case 0x1451f4u: goto label_1451f4;
        case 0x1451f8u: goto label_1451f8;
        case 0x1451fcu: goto label_1451fc;
        case 0x145200u: goto label_145200;
        case 0x145204u: goto label_145204;
        case 0x145208u: goto label_145208;
        case 0x14520cu: goto label_14520c;
        case 0x145210u: goto label_145210;
        case 0x145214u: goto label_145214;
        case 0x145218u: goto label_145218;
        case 0x14521cu: goto label_14521c;
        case 0x145220u: goto label_145220;
        case 0x145224u: goto label_145224;
        default: break;
    }

    ctx->pc = 0x1451e0u;

label_1451e0:
    // 0x1451e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1451e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1451e4:
    // 0x1451e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1451e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1451e8:
    // 0x1451e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1451e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1451ec:
    // 0x1451ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1451ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1451f0:
    // 0x1451f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1451f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1451f4:
    // 0x1451f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1451f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1451f8:
    // 0x1451f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1451f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1451fc:
    // 0x1451fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1451fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_145200:
    // 0x145200: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x145200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_145204:
    // 0x145204: 0x24425360  addiu       $v0, $v0, 0x5360
    ctx->pc = 0x145204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21344));
label_145208:
    // 0x145208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14520c:
    // 0x14520c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_145210:
    // 0x145210: 0x40f809  jalr        $v0
label_145214:
    if (ctx->pc == 0x145214u) {
        ctx->pc = 0x145218u;
        goto label_145218;
    }
    ctx->pc = 0x145210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145210u, 0x145218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145218u;
label_145218:
    // 0x145218: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x145218u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14521c:
    // 0x14521c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14521cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_145220:
    // 0x145220: 0x3e00008  jr          $ra
label_145224:
    if (ctx->pc == 0x145224u) {
        ctx->pc = 0x145228u;
        goto label_fallthrough_0x145220;
    }
    ctx->pc = 0x145220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x145220:
    ctx->pc = 0x145228u;
}
