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

// Function: Ectrl_04
// Address: 0x24d170 - 0x24d208
void Ectrl_04_0x24d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_04_0x24d170");
#endif

    switch (ctx->pc) {
        case 0x24d170u: goto label_24d170;
        case 0x24d174u: goto label_24d174;
        case 0x24d178u: goto label_24d178;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d180u: goto label_24d180;
        case 0x24d184u: goto label_24d184;
        case 0x24d188u: goto label_24d188;
        case 0x24d18cu: goto label_24d18c;
        case 0x24d190u: goto label_24d190;
        case 0x24d194u: goto label_24d194;
        case 0x24d198u: goto label_24d198;
        case 0x24d19cu: goto label_24d19c;
        case 0x24d1a0u: goto label_24d1a0;
        case 0x24d1a4u: goto label_24d1a4;
        case 0x24d1a8u: goto label_24d1a8;
        case 0x24d1acu: goto label_24d1ac;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1b4u: goto label_24d1b4;
        case 0x24d1b8u: goto label_24d1b8;
        case 0x24d1bcu: goto label_24d1bc;
        case 0x24d1c0u: goto label_24d1c0;
        case 0x24d1c4u: goto label_24d1c4;
        case 0x24d1c8u: goto label_24d1c8;
        case 0x24d1ccu: goto label_24d1cc;
        case 0x24d1d0u: goto label_24d1d0;
        case 0x24d1d4u: goto label_24d1d4;
        case 0x24d1d8u: goto label_24d1d8;
        case 0x24d1dcu: goto label_24d1dc;
        case 0x24d1e0u: goto label_24d1e0;
        case 0x24d1e4u: goto label_24d1e4;
        case 0x24d1e8u: goto label_24d1e8;
        case 0x24d1ecu: goto label_24d1ec;
        case 0x24d1f0u: goto label_24d1f0;
        case 0x24d1f4u: goto label_24d1f4;
        case 0x24d1f8u: goto label_24d1f8;
        case 0x24d1fcu: goto label_24d1fc;
        case 0x24d200u: goto label_24d200;
        case 0x24d204u: goto label_24d204;
        default: break;
    }

    ctx->pc = 0x24d170u;

label_24d170:
    // 0x24d170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24d174:
    // 0x24d174: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_24d178:
    // 0x24d178: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24d178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24d17c:
    // 0x24d17c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d180:
    // 0x24d180: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24d184:
    // 0x24d184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d188:
    // 0x24d188: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_24d18c:
    if (ctx->pc == 0x24D18Cu) {
        ctx->pc = 0x24D190u;
        goto label_24d190;
    }
    ctx->pc = 0x24D188u;
    {
        const bool branch_taken_0x24d188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d188) {
            ctx->pc = 0x24D1D0u;
            goto label_24d1d0;
        }
    }
    ctx->pc = 0x24D190u;
label_24d190:
    // 0x24d190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24d194:
    if (ctx->pc == 0x24D194u) {
        ctx->pc = 0x24D198u;
        goto label_24d198;
    }
    ctx->pc = 0x24D190u;
    {
        const bool branch_taken_0x24d190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d190) {
            ctx->pc = 0x24D1A0u;
            goto label_24d1a0;
        }
    }
    ctx->pc = 0x24D198u;
label_24d198:
    // 0x24d198: 0x1000000d  b           . + 4 + (0xD << 2)
label_24d19c:
    if (ctx->pc == 0x24D19Cu) {
        ctx->pc = 0x24D1A0u;
        goto label_24d1a0;
    }
    ctx->pc = 0x24D198u;
    {
        const bool branch_taken_0x24d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d198) {
            ctx->pc = 0x24D1D0u;
            goto label_24d1d0;
        }
    }
    ctx->pc = 0x24D1A0u;
label_24d1a0:
    // 0x24d1a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1a4:
    // 0x24d1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1a8:
    // 0x24d1a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24d1ac:
    // 0x24d1ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24d1b0:
    // 0x24d1b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24d1b4:
    // 0x24d1b4: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x24d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
label_24d1b8:
    // 0x24d1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24d1bc:
    // 0x24d1bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24d1c0:
    // 0x24d1c0: 0x40f809  jalr        $v0
label_24d1c4:
    if (ctx->pc == 0x24D1C4u) {
        ctx->pc = 0x24D1C8u;
        goto label_24d1c8;
    }
    ctx->pc = 0x24D1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D1C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1C0u, 0x24D1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D1C8u;
label_24d1c8:
    // 0x24d1c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_24d1cc:
    if (ctx->pc == 0x24D1CCu) {
        ctx->pc = 0x24D1D0u;
        goto label_24d1d0;
    }
    ctx->pc = 0x24D1C8u;
    {
        const bool branch_taken_0x24d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d1c8) {
            ctx->pc = 0x24D1F8u;
            goto label_24d1f8;
        }
    }
    ctx->pc = 0x24D1D0u;
label_24d1d0:
    // 0x24d1d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1d4:
    // 0x24d1d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1d8:
    // 0x24d1d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24d1dc:
    // 0x24d1dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24d1e0:
    // 0x24d1e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24d1e4:
    // 0x24d1e4: 0x2442b6a0  addiu       $v0, $v0, -0x4960
    ctx->pc = 0x24d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
label_24d1e8:
    // 0x24d1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24d1ec:
    // 0x24d1ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24d1f0:
    // 0x24d1f0: 0x40f809  jalr        $v0
label_24d1f4:
    if (ctx->pc == 0x24D1F4u) {
        ctx->pc = 0x24D1F8u;
        goto label_24d1f8;
    }
    ctx->pc = 0x24D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D1F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1F0u, 0x24D1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D1F8u;
label_24d1f8:
    // 0x24d1f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24d1f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24d1fc:
    // 0x24d1fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24d1fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24d200:
    // 0x24d200: 0x3e00008  jr          $ra
label_24d204:
    if (ctx->pc == 0x24D204u) {
        ctx->pc = 0x24D208u;
        goto label_fallthrough_0x24d200;
    }
    ctx->pc = 0x24D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24d200:
    ctx->pc = 0x24D208u;
}
