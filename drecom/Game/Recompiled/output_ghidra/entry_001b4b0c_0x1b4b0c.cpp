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

// Function: entry_001b4b0c
// Address: 0x1b4b0c - 0x1b4b60
void entry_001b4b0c_0x1b4b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4b0c_0x1b4b0c");
#endif

    switch (ctx->pc) {
        case 0x1b4b4cu: goto label_1b4b4c;
        default: break;
    }

    ctx->pc = 0x1b4b0cu;

label_1b4b0c:
    // 0x1b4b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b10:
    // 0x1b4b10: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x1b4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4b14:
    // 0x1b4b14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b18:
    // 0x1b4b18: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x1b4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
label_1b4b1c:
    // 0x1b4b1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b20:
    // 0x1b4b20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b24:
    // 0x1b4b24: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b4b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
label_1b4b28:
    // 0x1b4b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b4b2c:
    // 0x1b4b2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b4b30:
    // 0x1b4b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b4b34:
    // 0x1b4b34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b4b38:
    // 0x1b4b38: 0x244291c0  addiu       $v0, $v0, -0x6E40
    ctx->pc = 0x1b4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
label_1b4b3c:
    // 0x1b4b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4b40:
    // 0x1b4b40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b4b44:
    // 0x1b4b44: 0x40f809  jalr        $v0
label_1b4b48:
    if (ctx->pc == 0x1B4B48u) {
        ctx->pc = 0x1B4B4Cu;
        goto label_1b4b4c;
    }
    ctx->pc = 0x1B4B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4B4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B44u, 0x1B4B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4B4Cu;
label_1b4b4c:
    // 0x1b4b4c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b4b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4b50:
    // 0x1b4b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4b54:
    // 0x1b4b54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b4b58:
    // 0x1b4b58: 0x3e00008  jr          $ra
label_1b4b5c:
    if (ctx->pc == 0x1B4B5Cu) {
        ctx->pc = 0x1B4B60u;
        goto label_fallthrough_0x1b4b58;
    }
    ctx->pc = 0x1B4B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b4b58:
    ctx->pc = 0x1B4B60u;
}
