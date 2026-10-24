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

// Function: Om30_move
// Address: 0x37c0d0 - 0x37c128
void Om30_move_0x37c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om30_move_0x37c0d0");
#endif

    switch (ctx->pc) {
        case 0x37c0d0u: goto label_37c0d0;
        case 0x37c0d4u: goto label_37c0d4;
        case 0x37c0d8u: goto label_37c0d8;
        case 0x37c0dcu: goto label_37c0dc;
        case 0x37c0e0u: goto label_37c0e0;
        case 0x37c0e4u: goto label_37c0e4;
        case 0x37c0e8u: goto label_37c0e8;
        case 0x37c0ecu: goto label_37c0ec;
        case 0x37c0f0u: goto label_37c0f0;
        case 0x37c0f4u: goto label_37c0f4;
        case 0x37c0f8u: goto label_37c0f8;
        case 0x37c0fcu: goto label_37c0fc;
        case 0x37c100u: goto label_37c100;
        case 0x37c104u: goto label_37c104;
        case 0x37c108u: goto label_37c108;
        case 0x37c10cu: goto label_37c10c;
        case 0x37c110u: goto label_37c110;
        case 0x37c114u: goto label_37c114;
        case 0x37c118u: goto label_37c118;
        case 0x37c11cu: goto label_37c11c;
        case 0x37c120u: goto label_37c120;
        case 0x37c124u: goto label_37c124;
        default: break;
    }

    ctx->pc = 0x37c0d0u;

label_37c0d0:
    // 0x37c0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37c0d4:
    // 0x37c0d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x37c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_37c0d8:
    // 0x37c0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c0dc:
    // 0x37c0dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_37c0e0:
    // 0x37c0e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x37c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_37c0e4:
    // 0x37c0e4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x37c0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_37c0e8:
    // 0x37c0e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37c0ec:
    // 0x37c0ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37c0f0:
    // 0x37c0f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x37c0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37c0f4:
    // 0x37c0f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37c0f8:
    // 0x37c0f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37c0fc:
    // 0x37c0fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37c100:
    // 0x37c100: 0x2442ba50  addiu       $v0, $v0, -0x45B0
    ctx->pc = 0x37c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949456));
label_37c104:
    // 0x37c104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c108:
    // 0x37c108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c10c:
    // 0x37c10c: 0x40f809  jalr        $v0
label_37c110:
    if (ctx->pc == 0x37C110u) {
        ctx->pc = 0x37C114u;
        goto label_37c114;
    }
    ctx->pc = 0x37C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C10Cu, 0x37C114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C114u;
label_37c114:
    // 0x37c114: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x37c114u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c118:
    // 0x37c118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c11c:
    // 0x37c11c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37c11cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_37c120:
    // 0x37c120: 0x3e00008  jr          $ra
label_37c124:
    if (ctx->pc == 0x37C124u) {
        ctx->pc = 0x37C128u;
        goto label_fallthrough_0x37c120;
    }
    ctx->pc = 0x37C120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37c120:
    ctx->pc = 0x37C128u;
}
