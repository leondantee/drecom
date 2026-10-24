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

// Function: Ectrl_03
// Address: 0x24c8f0 - 0x24ca00
void Ectrl_03_0x24c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_03_0x24c8f0");
#endif

    switch (ctx->pc) {
        case 0x24c8f0u: goto label_24c8f0;
        case 0x24c8f4u: goto label_24c8f4;
        case 0x24c8f8u: goto label_24c8f8;
        case 0x24c8fcu: goto label_24c8fc;
        case 0x24c900u: goto label_24c900;
        case 0x24c904u: goto label_24c904;
        case 0x24c908u: goto label_24c908;
        case 0x24c90cu: goto label_24c90c;
        case 0x24c910u: goto label_24c910;
        case 0x24c914u: goto label_24c914;
        case 0x24c918u: goto label_24c918;
        case 0x24c91cu: goto label_24c91c;
        case 0x24c920u: goto label_24c920;
        case 0x24c924u: goto label_24c924;
        case 0x24c928u: goto label_24c928;
        case 0x24c92cu: goto label_24c92c;
        case 0x24c930u: goto label_24c930;
        case 0x24c934u: goto label_24c934;
        case 0x24c938u: goto label_24c938;
        case 0x24c93cu: goto label_24c93c;
        case 0x24c940u: goto label_24c940;
        case 0x24c944u: goto label_24c944;
        case 0x24c948u: goto label_24c948;
        case 0x24c94cu: goto label_24c94c;
        case 0x24c950u: goto label_24c950;
        case 0x24c954u: goto label_24c954;
        case 0x24c958u: goto label_24c958;
        case 0x24c95cu: goto label_24c95c;
        case 0x24c960u: goto label_24c960;
        case 0x24c964u: goto label_24c964;
        case 0x24c968u: goto label_24c968;
        case 0x24c96cu: goto label_24c96c;
        case 0x24c970u: goto label_24c970;
        case 0x24c974u: goto label_24c974;
        case 0x24c978u: goto label_24c978;
        case 0x24c97cu: goto label_24c97c;
        case 0x24c980u: goto label_24c980;
        case 0x24c984u: goto label_24c984;
        case 0x24c988u: goto label_24c988;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c990u: goto label_24c990;
        case 0x24c994u: goto label_24c994;
        case 0x24c998u: goto label_24c998;
        case 0x24c99cu: goto label_24c99c;
        case 0x24c9a0u: goto label_24c9a0;
        case 0x24c9a4u: goto label_24c9a4;
        case 0x24c9a8u: goto label_24c9a8;
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9b0u: goto label_24c9b0;
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9bcu: goto label_24c9bc;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c4u: goto label_24c9c4;
        case 0x24c9c8u: goto label_24c9c8;
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24c9d0u: goto label_24c9d0;
        case 0x24c9d4u: goto label_24c9d4;
        case 0x24c9d8u: goto label_24c9d8;
        case 0x24c9dcu: goto label_24c9dc;
        case 0x24c9e0u: goto label_24c9e0;
        case 0x24c9e4u: goto label_24c9e4;
        case 0x24c9e8u: goto label_24c9e8;
        case 0x24c9ecu: goto label_24c9ec;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24c9f4u: goto label_24c9f4;
        case 0x24c9f8u: goto label_24c9f8;
        case 0x24c9fcu: goto label_24c9fc;
        default: break;
    }

    ctx->pc = 0x24c8f0u;

label_24c8f0:
    // 0x24c8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24c8f4:
    // 0x24c8f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24c8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_24c8f8:
    // 0x24c8f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24c8fc:
    // 0x24c8fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c900:
    // 0x24c900: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24c904:
    // 0x24c904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24c908:
    // 0x24c908: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_24c90c:
    if (ctx->pc == 0x24C90Cu) {
        ctx->pc = 0x24C910u;
        goto label_24c910;
    }
    ctx->pc = 0x24C908u;
    {
        const bool branch_taken_0x24c908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c908) {
            ctx->pc = 0x24C9C8u;
            goto label_24c9c8;
        }
    }
    ctx->pc = 0x24C910u;
label_24c910:
    // 0x24c910: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c914:
    // 0x24c914: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_24c918:
    if (ctx->pc == 0x24C918u) {
        ctx->pc = 0x24C91Cu;
        goto label_24c91c;
    }
    ctx->pc = 0x24C914u;
    {
        const bool branch_taken_0x24c914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c914) {
            ctx->pc = 0x24C998u;
            goto label_24c998;
        }
    }
    ctx->pc = 0x24C91Cu;
label_24c91c:
    // 0x24c91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c920:
    // 0x24c920: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_24c924:
    if (ctx->pc == 0x24C924u) {
        ctx->pc = 0x24C928u;
        goto label_24c928;
    }
    ctx->pc = 0x24C920u;
    {
        const bool branch_taken_0x24c920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c920) {
            ctx->pc = 0x24C968u;
            goto label_24c968;
        }
    }
    ctx->pc = 0x24C928u;
label_24c928:
    // 0x24c928: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24c92c:
    if (ctx->pc == 0x24C92Cu) {
        ctx->pc = 0x24C930u;
        goto label_24c930;
    }
    ctx->pc = 0x24C928u;
    {
        const bool branch_taken_0x24c928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c928) {
            ctx->pc = 0x24C938u;
            goto label_24c938;
        }
    }
    ctx->pc = 0x24C930u;
label_24c930:
    // 0x24c930: 0x10000025  b           . + 4 + (0x25 << 2)
label_24c934:
    if (ctx->pc == 0x24C934u) {
        ctx->pc = 0x24C938u;
        goto label_24c938;
    }
    ctx->pc = 0x24C930u;
    {
        const bool branch_taken_0x24c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c930) {
            ctx->pc = 0x24C9C8u;
            goto label_24c9c8;
        }
    }
    ctx->pc = 0x24C938u;
label_24c938:
    // 0x24c938: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c93c:
    // 0x24c93c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c940:
    // 0x24c940: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c944:
    // 0x24c944: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c948:
    // 0x24c948: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c94c:
    // 0x24c94c: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x24c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_24c950:
    // 0x24c950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c954:
    // 0x24c954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c958:
    // 0x24c958: 0x40f809  jalr        $v0
label_24c95c:
    if (ctx->pc == 0x24C95Cu) {
        ctx->pc = 0x24C960u;
        goto label_24c960;
    }
    ctx->pc = 0x24C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C960u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C958u, 0x24C960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C960u;
label_24c960:
    // 0x24c960: 0x10000023  b           . + 4 + (0x23 << 2)
label_24c964:
    if (ctx->pc == 0x24C964u) {
        ctx->pc = 0x24C968u;
        goto label_24c968;
    }
    ctx->pc = 0x24C960u;
    {
        const bool branch_taken_0x24c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c960) {
            ctx->pc = 0x24C9F0u;
            goto label_24c9f0;
        }
    }
    ctx->pc = 0x24C968u;
label_24c968:
    // 0x24c968: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c96c:
    // 0x24c96c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c970:
    // 0x24c970: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c974:
    // 0x24c974: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c978:
    // 0x24c978: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c97c:
    // 0x24c97c: 0x2442b660  addiu       $v0, $v0, -0x49A0
    ctx->pc = 0x24c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948448));
label_24c980:
    // 0x24c980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c984:
    // 0x24c984: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c988:
    // 0x24c988: 0x40f809  jalr        $v0
label_24c98c:
    if (ctx->pc == 0x24C98Cu) {
        ctx->pc = 0x24C990u;
        goto label_24c990;
    }
    ctx->pc = 0x24C988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C990u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C988u, 0x24C990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C990u;
label_24c990:
    // 0x24c990: 0x10000017  b           . + 4 + (0x17 << 2)
label_24c994:
    if (ctx->pc == 0x24C994u) {
        ctx->pc = 0x24C998u;
        goto label_24c998;
    }
    ctx->pc = 0x24C990u;
    {
        const bool branch_taken_0x24c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c990) {
            ctx->pc = 0x24C9F0u;
            goto label_24c9f0;
        }
    }
    ctx->pc = 0x24C998u;
label_24c998:
    // 0x24c998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c99c:
    // 0x24c99c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c9a0:
    // 0x24c9a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c9a4:
    // 0x24c9a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c9a8:
    // 0x24c9a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c9ac:
    // 0x24c9ac: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x24c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
label_24c9b0:
    // 0x24c9b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c9b4:
    // 0x24c9b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c9b8:
    // 0x24c9b8: 0x40f809  jalr        $v0
label_24c9bc:
    if (ctx->pc == 0x24C9BCu) {
        ctx->pc = 0x24C9C0u;
        goto label_24c9c0;
    }
    ctx->pc = 0x24C9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C9C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9B8u, 0x24C9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C9C0u;
label_24c9c0:
    // 0x24c9c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_24c9c4:
    if (ctx->pc == 0x24C9C4u) {
        ctx->pc = 0x24C9C8u;
        goto label_24c9c8;
    }
    ctx->pc = 0x24C9C0u;
    {
        const bool branch_taken_0x24c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9c0) {
            ctx->pc = 0x24C9F0u;
            goto label_24c9f0;
        }
    }
    ctx->pc = 0x24C9C8u;
label_24c9c8:
    // 0x24c9c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c9cc:
    // 0x24c9cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c9d0:
    // 0x24c9d0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c9d4:
    // 0x24c9d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c9d8:
    // 0x24c9d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c9dc:
    // 0x24c9dc: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
label_24c9e0:
    // 0x24c9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c9e4:
    // 0x24c9e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c9e8:
    // 0x24c9e8: 0x40f809  jalr        $v0
label_24c9ec:
    if (ctx->pc == 0x24C9ECu) {
        ctx->pc = 0x24C9F0u;
        goto label_24c9f0;
    }
    ctx->pc = 0x24C9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C9F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9E8u, 0x24C9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C9F0u;
label_24c9f0:
    // 0x24c9f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24c9f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24c9f4:
    // 0x24c9f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24c9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24c9f8:
    // 0x24c9f8: 0x3e00008  jr          $ra
label_24c9fc:
    if (ctx->pc == 0x24C9FCu) {
        ctx->pc = 0x24CA00u;
        goto label_fallthrough_0x24c9f8;
    }
    ctx->pc = 0x24C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c9f8:
    ctx->pc = 0x24CA00u;
}
