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

// Function: Ectrl_0c
// Address: 0x251050 - 0x251124
void Ectrl_0c_0x251050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_0c_0x251050");
#endif

    switch (ctx->pc) {
        case 0x251050u: goto label_251050;
        case 0x251054u: goto label_251054;
        case 0x251058u: goto label_251058;
        case 0x25105cu: goto label_25105c;
        case 0x251060u: goto label_251060;
        case 0x251064u: goto label_251064;
        case 0x251068u: goto label_251068;
        case 0x25106cu: goto label_25106c;
        case 0x251070u: goto label_251070;
        case 0x251074u: goto label_251074;
        case 0x251078u: goto label_251078;
        case 0x25107cu: goto label_25107c;
        case 0x251080u: goto label_251080;
        case 0x251084u: goto label_251084;
        case 0x251088u: goto label_251088;
        case 0x25108cu: goto label_25108c;
        case 0x251090u: goto label_251090;
        case 0x251094u: goto label_251094;
        case 0x251098u: goto label_251098;
        case 0x25109cu: goto label_25109c;
        case 0x2510a0u: goto label_2510a0;
        case 0x2510a4u: goto label_2510a4;
        case 0x2510a8u: goto label_2510a8;
        case 0x2510acu: goto label_2510ac;
        case 0x2510b0u: goto label_2510b0;
        case 0x2510b4u: goto label_2510b4;
        case 0x2510b8u: goto label_2510b8;
        case 0x2510bcu: goto label_2510bc;
        case 0x2510c0u: goto label_2510c0;
        case 0x2510c4u: goto label_2510c4;
        case 0x2510c8u: goto label_2510c8;
        case 0x2510ccu: goto label_2510cc;
        case 0x2510d0u: goto label_2510d0;
        case 0x2510d4u: goto label_2510d4;
        case 0x2510d8u: goto label_2510d8;
        case 0x2510dcu: goto label_2510dc;
        case 0x2510e0u: goto label_2510e0;
        case 0x2510e4u: goto label_2510e4;
        case 0x2510e8u: goto label_2510e8;
        case 0x2510ecu: goto label_2510ec;
        case 0x2510f0u: goto label_2510f0;
        case 0x2510f4u: goto label_2510f4;
        case 0x2510f8u: goto label_2510f8;
        case 0x2510fcu: goto label_2510fc;
        case 0x251100u: goto label_251100;
        case 0x251104u: goto label_251104;
        case 0x251108u: goto label_251108;
        case 0x25110cu: goto label_25110c;
        case 0x251110u: goto label_251110;
        case 0x251114u: goto label_251114;
        case 0x251118u: goto label_251118;
        case 0x25111cu: goto label_25111c;
        case 0x251120u: goto label_251120;
        default: break;
    }

    ctx->pc = 0x251050u;

label_251050:
    // 0x251050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_251054:
    // 0x251054: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_251058:
    // 0x251058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x251058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_25105c:
    // 0x25105c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251060:
    // 0x251060: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x251060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_251064:
    // 0x251064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x251064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_251068:
    // 0x251068: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_25106c:
    if (ctx->pc == 0x25106Cu) {
        ctx->pc = 0x251070u;
        goto label_251070;
    }
    ctx->pc = 0x251068u;
    {
        const bool branch_taken_0x251068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251068) {
            ctx->pc = 0x2510ECu;
            goto label_2510ec;
        }
    }
    ctx->pc = 0x251070u;
label_251070:
    // 0x251070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251074:
    // 0x251074: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_251078:
    if (ctx->pc == 0x251078u) {
        ctx->pc = 0x25107Cu;
        goto label_25107c;
    }
    ctx->pc = 0x251074u;
    {
        const bool branch_taken_0x251074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251074) {
            ctx->pc = 0x2510BCu;
            goto label_2510bc;
        }
    }
    ctx->pc = 0x25107Cu;
label_25107c:
    // 0x25107c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_251080:
    if (ctx->pc == 0x251080u) {
        ctx->pc = 0x251084u;
        goto label_251084;
    }
    ctx->pc = 0x25107Cu;
    {
        const bool branch_taken_0x25107c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25107c) {
            ctx->pc = 0x25108Cu;
            goto label_25108c;
        }
    }
    ctx->pc = 0x251084u;
label_251084:
    // 0x251084: 0x10000019  b           . + 4 + (0x19 << 2)
label_251088:
    if (ctx->pc == 0x251088u) {
        ctx->pc = 0x25108Cu;
        goto label_25108c;
    }
    ctx->pc = 0x251084u;
    {
        const bool branch_taken_0x251084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251084) {
            ctx->pc = 0x2510ECu;
            goto label_2510ec;
        }
    }
    ctx->pc = 0x25108Cu;
label_25108c:
    // 0x25108c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251090:
    // 0x251090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251094:
    // 0x251094: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251098:
    // 0x251098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25109c:
    // 0x25109c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2510a0:
    // 0x2510a0: 0x2442b6f0  addiu       $v0, $v0, -0x4910
    ctx->pc = 0x2510a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
label_2510a4:
    // 0x2510a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2510a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2510a8:
    // 0x2510a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2510ac:
    // 0x2510ac: 0x40f809  jalr        $v0
label_2510b0:
    if (ctx->pc == 0x2510B0u) {
        ctx->pc = 0x2510B4u;
        goto label_2510b4;
    }
    ctx->pc = 0x2510ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2510B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510ACu, 0x2510B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2510B4u;
label_2510b4:
    // 0x2510b4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2510b8:
    if (ctx->pc == 0x2510B8u) {
        ctx->pc = 0x2510BCu;
        goto label_2510bc;
    }
    ctx->pc = 0x2510B4u;
    {
        const bool branch_taken_0x2510b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510b4) {
            ctx->pc = 0x251114u;
            goto label_251114;
        }
    }
    ctx->pc = 0x2510BCu;
label_2510bc:
    // 0x2510bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2510bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510c0:
    // 0x2510c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510c4:
    // 0x2510c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2510c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2510c8:
    // 0x2510c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2510c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2510cc:
    // 0x2510cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2510ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2510d0:
    // 0x2510d0: 0x2442b6f8  addiu       $v0, $v0, -0x4908
    ctx->pc = 0x2510d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948600));
label_2510d4:
    // 0x2510d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2510d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2510d8:
    // 0x2510d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2510d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2510dc:
    // 0x2510dc: 0x40f809  jalr        $v0
label_2510e0:
    if (ctx->pc == 0x2510E0u) {
        ctx->pc = 0x2510E4u;
        goto label_2510e4;
    }
    ctx->pc = 0x2510DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2510E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510DCu, 0x2510E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2510E4u;
label_2510e4:
    // 0x2510e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2510e8:
    if (ctx->pc == 0x2510E8u) {
        ctx->pc = 0x2510ECu;
        goto label_2510ec;
    }
    ctx->pc = 0x2510E4u;
    {
        const bool branch_taken_0x2510e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510e4) {
            ctx->pc = 0x251114u;
            goto label_251114;
        }
    }
    ctx->pc = 0x2510ECu;
label_2510ec:
    // 0x2510ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2510ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510f0:
    // 0x2510f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2510f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510f4:
    // 0x2510f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2510f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2510f8:
    // 0x2510f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2510f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2510fc:
    // 0x2510fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2510fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251100:
    // 0x251100: 0x2442b700  addiu       $v0, $v0, -0x4900
    ctx->pc = 0x251100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
label_251104:
    // 0x251104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251108:
    // 0x251108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25110c:
    // 0x25110c: 0x40f809  jalr        $v0
label_251110:
    if (ctx->pc == 0x251110u) {
        ctx->pc = 0x251114u;
        goto label_251114;
    }
    ctx->pc = 0x25110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25110Cu, 0x251114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251114u;
label_251114:
    // 0x251114: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251114u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_251118:
    // 0x251118: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x251118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25111c:
    // 0x25111c: 0x3e00008  jr          $ra
label_251120:
    if (ctx->pc == 0x251120u) {
        ctx->pc = 0x251124u;
        goto label_fallthrough_0x25111c;
    }
    ctx->pc = 0x25111Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25111Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25111c:
    ctx->pc = 0x251124u;
}
