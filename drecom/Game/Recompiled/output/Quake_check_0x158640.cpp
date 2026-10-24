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

// Function: Quake_check
// Address: 0x158640 - 0x1586e0
void Quake_check_0x158640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake_check_0x158640");
#endif

    switch (ctx->pc) {
        case 0x1586b8u: goto label_1586b8;
        case 0x1586d0u: goto label_1586d0;
        default: break;
    }

    ctx->pc = 0x158640u;

    // 0x158640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158644: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x158644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x158648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15864c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15864cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x158650: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x158654: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x158654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x158658: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158658u;
    {
        const bool branch_taken_0x158658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158658) {
            ctx->pc = 0x158684u;
            goto label_158684;
        }
    }
    ctx->pc = 0x158660u;
    // 0x158660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158664: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158668: 0xac23f848  sw          $v1, -0x7B8($at)
    ctx->pc = 0x158668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF848u, _value); } while (0);
    // 0x15866c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x158670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158674: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158678: 0xe420f850  swc1        $f0, -0x7B0($at)
    ctx->pc = 0x158678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF850u, _value); } while (0); }
    // 0x15867c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15867Cu;
    {
        const bool branch_taken_0x15867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15867c) {
            ctx->pc = 0x158698u;
            goto label_158698;
        }
    }
    ctx->pc = 0x158684u;
label_158684:
    // 0x158684: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158688: 0xac20f848  sw          $zero, -0x7B8($at)
    ctx->pc = 0x158688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF848u, _value); } while (0);
    // 0x15868c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15868cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158690: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158694: 0xe420f850  swc1        $f0, -0x7B0($at)
    ctx->pc = 0x158694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF850u, _value); } while (0); }
label_158698:
    // 0x158698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15869c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1586a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1586a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1586a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1586a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1586a8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1586A8u;
    {
        const bool branch_taken_0x1586a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1586a8) {
            ctx->pc = 0x1586D0u;
            goto label_1586d0;
        }
    }
    ctx->pc = 0x1586B0u;
    // 0x1586b0: 0xc056228  jal         func_1588A0
    ctx->pc = 0x1586B0u;
    SET_GPR_U32(ctx, 31, 0x1586B8u);
    ctx->pc = 0x1588A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588A0u, 0x1586B0u, 0x1586B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586B8u;
label_1586b8:
    // 0x1586b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1586b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1586bc: 0x8c23f848  lw          $v1, -0x7B8($at)
    ctx->pc = 0x1586bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF848u));
    // 0x1586c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1586C0u;
    {
        const bool branch_taken_0x1586c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586c0) {
            ctx->pc = 0x1586D0u;
            goto label_1586d0;
        }
    }
    ctx->pc = 0x1586C8u;
    // 0x1586c8: 0xc056268  jal         func_1589A0
    ctx->pc = 0x1586C8u;
    SET_GPR_U32(ctx, 31, 0x1586D0u);
    ctx->pc = 0x1589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589A0u, 0x1586C8u, 0x1586D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586D0u;
label_1586d0:
    // 0x1586d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1586d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1586d4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1586d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1586d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1586D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1586E0u;
}
