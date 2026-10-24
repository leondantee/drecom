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

// Function: Em1d_R0_move
// Address: 0x36fbb0 - 0x36fc24
void Em1d_R0_move_0x36fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R0_move_0x36fbb0");
#endif

    switch (ctx->pc) {
        case 0x36fbb0u: goto label_36fbb0;
        case 0x36fbb4u: goto label_36fbb4;
        case 0x36fbb8u: goto label_36fbb8;
        case 0x36fbbcu: goto label_36fbbc;
        case 0x36fbc0u: goto label_36fbc0;
        case 0x36fbc4u: goto label_36fbc4;
        case 0x36fbc8u: goto label_36fbc8;
        case 0x36fbccu: goto label_36fbcc;
        case 0x36fbd0u: goto label_36fbd0;
        case 0x36fbd4u: goto label_36fbd4;
        case 0x36fbd8u: goto label_36fbd8;
        case 0x36fbdcu: goto label_36fbdc;
        case 0x36fbe0u: goto label_36fbe0;
        case 0x36fbe4u: goto label_36fbe4;
        case 0x36fbe8u: goto label_36fbe8;
        case 0x36fbecu: goto label_36fbec;
        case 0x36fbf0u: goto label_36fbf0;
        case 0x36fbf4u: goto label_36fbf4;
        case 0x36fbf8u: goto label_36fbf8;
        case 0x36fbfcu: goto label_36fbfc;
        case 0x36fc00u: goto label_36fc00;
        case 0x36fc04u: goto label_36fc04;
        case 0x36fc08u: goto label_36fc08;
        case 0x36fc0cu: goto label_36fc0c;
        case 0x36fc10u: goto label_36fc10;
        case 0x36fc14u: goto label_36fc14;
        case 0x36fc18u: goto label_36fc18;
        case 0x36fc1cu: goto label_36fc1c;
        case 0x36fc20u: goto label_36fc20;
        default: break;
    }

    ctx->pc = 0x36fbb0u;

label_36fbb0:
    // 0x36fbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36fbb4:
    // 0x36fbb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36fbb8:
    // 0x36fbb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36fbbc:
    // 0x36fbbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36fbc0:
    // 0x36fbc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36fbc4:
    // 0x36fbc4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36fbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36fbc8:
    // 0x36fbc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36fbcc:
    // 0x36fbcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36fbd0:
    // 0x36fbd0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36fbd4:
    // 0x36fbd4: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x36fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
label_36fbd8:
    // 0x36fbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36fbdc:
    // 0x36fbdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36fbe0:
    // 0x36fbe0: 0x40f809  jalr        $v0
label_36fbe4:
    if (ctx->pc == 0x36FBE4u) {
        ctx->pc = 0x36FBE8u;
        goto label_36fbe8;
    }
    ctx->pc = 0x36FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36FBE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FBE0u, 0x36FBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36FBE8u;
label_36fbe8:
    // 0x36fbe8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36fbec:
    // 0x36fbec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36fbf0:
    // 0x36fbf0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36fbf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36fbf4:
    // 0x36fbf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36fbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36fbf8:
    // 0x36fbf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36fbfc:
    // 0x36fbfc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36fc00:
    // 0x36fc00: 0x2442b500  addiu       $v0, $v0, -0x4B00
    ctx->pc = 0x36fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948096));
label_36fc04:
    // 0x36fc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36fc08:
    // 0x36fc08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36fc0c:
    // 0x36fc0c: 0x40f809  jalr        $v0
label_36fc10:
    if (ctx->pc == 0x36FC10u) {
        ctx->pc = 0x36FC14u;
        goto label_36fc14;
    }
    ctx->pc = 0x36FC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36FC14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC0Cu, 0x36FC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36FC14u;
label_36fc14:
    // 0x36fc14: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36fc14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36fc18:
    // 0x36fc18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36fc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36fc1c:
    // 0x36fc1c: 0x3e00008  jr          $ra
label_36fc20:
    if (ctx->pc == 0x36FC20u) {
        ctx->pc = 0x36FC24u;
        goto label_fallthrough_0x36fc1c;
    }
    ctx->pc = 0x36FC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36fc1c:
    ctx->pc = 0x36FC24u;
}
