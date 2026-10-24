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

// Function: Cut_data_load
// Address: 0x17f110 - 0x17f1a4
void Cut_data_load_0x17f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cut_data_load_0x17f110");
#endif

    switch (ctx->pc) {
        case 0x17f184u: goto label_17f184;
        case 0x17f190u: goto label_17f190;
        default: break;
    }

    ctx->pc = 0x17f110u;

    // 0x17f110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f114: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17f118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f11c: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x17f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x17f120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f124: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17f124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17f128: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17f128u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17f12c: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x17f12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x17f130: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f134: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f138: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17f138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17f13c: 0xac230af8  sw          $v1, 0xAF8($at)
    ctx->pc = 0x17f13cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AF8u, _value); } while (0);
    // 0x17f140: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x17f144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f148: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17f14c: 0x8c230af8  lw          $v1, 0xAF8($at)
    ctx->pc = 0x17f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x17f150: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x17f150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x17f154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17f158: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x17f158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x17f15c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x17f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17f160: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17F160u;
    {
        const bool branch_taken_0x17f160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f160) {
            ctx->pc = 0x17F190u;
            goto label_17f190;
        }
    }
    ctx->pc = 0x17F168u;
    // 0x17f168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17f168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17f16c: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x17f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x17f170: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x17f170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f174: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x17f174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f178: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x17f178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f17c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x17F17Cu;
    SET_GPR_U32(ctx, 31, 0x17F184u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x17F17Cu, 0x17F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F184u;
label_17f184:
    // 0x17f184: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17f184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f188: 0xc05fc6c  jal         func_17F1B0
    ctx->pc = 0x17F188u;
    SET_GPR_U32(ctx, 31, 0x17F190u);
    ctx->pc = 0x17F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F1B0u, 0x17F188u, 0x17F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F190u;
label_17f190:
    // 0x17f190: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17f190u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f198: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17f198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17f19c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F1A4u;
}
