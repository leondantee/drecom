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

// Function: Par_00
// Address: 0x1b1910 - 0x1b1954
void Par_00_0x1b1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Par_00_0x1b1910");
#endif

    switch (ctx->pc) {
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1914u: goto label_1b1914;
        case 0x1b1918u: goto label_1b1918;
        case 0x1b191cu: goto label_1b191c;
        case 0x1b1920u: goto label_1b1920;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b192cu: goto label_1b192c;
        case 0x1b1930u: goto label_1b1930;
        case 0x1b1934u: goto label_1b1934;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b193cu: goto label_1b193c;
        case 0x1b1940u: goto label_1b1940;
        case 0x1b1944u: goto label_1b1944;
        case 0x1b1948u: goto label_1b1948;
        case 0x1b194cu: goto label_1b194c;
        case 0x1b1950u: goto label_1b1950;
        default: break;
    }

    ctx->pc = 0x1b1910u;

label_1b1910:
    // 0x1b1910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b1914:
    // 0x1b1914: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1b1914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1b1918:
    // 0x1b1918: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1b1918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1b191c:
    // 0x1b191c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1b191cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1b1920:
    // 0x1b1920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1b1920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1b1924:
    // 0x1b1924: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b1928:
    // 0x1b1928: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b1928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b192c:
    // 0x1b192c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b1930:
    // 0x1b1930: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x1b1930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
label_1b1934:
    // 0x1b1934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b1938:
    // 0x1b1938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b193c:
    // 0x1b193c: 0x40f809  jalr        $v0
label_1b1940:
    if (ctx->pc == 0x1B1940u) {
        ctx->pc = 0x1B1944u;
        goto label_1b1944;
    }
    ctx->pc = 0x1B193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1944u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B193Cu, 0x1B1944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1944u;
label_1b1944:
    // 0x1b1944: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1b1944u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1948:
    // 0x1b1948: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b194c:
    // 0x1b194c: 0x3e00008  jr          $ra
label_1b1950:
    if (ctx->pc == 0x1B1950u) {
        ctx->pc = 0x1B1954u;
        goto label_fallthrough_0x1b194c;
    }
    ctx->pc = 0x1B194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b194c:
    ctx->pc = 0x1B1954u;
}
