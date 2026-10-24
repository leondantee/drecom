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

// Function: R503_light_pos_set_sub
// Address: 0x3575f0 - 0x357688
void R503_light_pos_set_sub_0x3575f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503_light_pos_set_sub_0x3575f0");
#endif

    switch (ctx->pc) {
        case 0x35760cu: goto label_35760c;
        case 0x357624u: goto label_357624;
        case 0x357668u: goto label_357668;
        case 0x357678u: goto label_357678;
        default: break;
    }

    ctx->pc = 0x3575f0u;

    // 0x3575f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3575f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3575f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3575f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3575f8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x3575f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x3575fc: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x3575fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x357600: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x357600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x357604: 0xc056abc  jal         func_15AAF0
    ctx->pc = 0x357604u;
    SET_GPR_U32(ctx, 31, 0x35760Cu);
    ctx->pc = 0x15AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AAF0u, 0x357604u, 0x35760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35760Cu;
label_35760c:
    // 0x35760c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x357610: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x357610u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x357614: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x357614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x357618: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x357618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x35761c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x35761Cu;
    SET_GPR_U32(ctx, 31, 0x357624u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x357624u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x357624u) { return; }
    ctx->pc = 0x357624u;
label_357624:
    // 0x357624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x357624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357628: 0x0  nop
    ctx->pc = 0x357628u;
    // NOP
    // 0x35762c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x35762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x357630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x357630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357634: 0x0  nop
    ctx->pc = 0x357634u;
    // NOP
    // 0x357638: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x357638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x35763c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x35763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357640: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x357640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x357644: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x357644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x357648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35764c: 0x0  nop
    ctx->pc = 0x35764cu;
    // NOP
    // 0x357650: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x357650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x357654: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x357654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x357658: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x357658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35765c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x35765cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x357660: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x357660u;
    SET_GPR_U32(ctx, 31, 0x357668u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x357668u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x357668u) { return; }
    ctx->pc = 0x357668u;
label_357668:
    // 0x357668: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x357668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35766c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x35766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x357670: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x357670u;
    SET_GPR_U32(ctx, 31, 0x357678u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x357670u, 0x357678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357678u;
label_357678:
    // 0x357678: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x357678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35767c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x35767cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x357680: 0x3e00008  jr          $ra
    ctx->pc = 0x357680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357688u;
}
