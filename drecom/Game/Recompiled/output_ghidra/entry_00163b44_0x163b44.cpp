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

// Function: entry_00163b44
// Address: 0x163b44 - 0x163bb4
void entry_00163b44_0x163b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163b44_0x163b44");
#endif

    switch (ctx->pc) {
        case 0x163b80u: goto label_163b80;
        case 0x163b94u: goto label_163b94;
        default: break;
    }

    ctx->pc = 0x163b44u;

    // 0x163b44: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x163b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b48: 0xe6200190  swc1        $f0, 0x190($s1)
    ctx->pc = 0x163b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x163b4c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x163b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b50: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x163b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x163b54: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x163b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b58: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x163b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x163b5c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x163b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b60: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x163b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x163b64: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x163b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b68: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x163b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x163b6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x163b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b70: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x163b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x163b74: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x163b74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x163b78: 0xc056518  jal         func_159460
    ctx->pc = 0x163B78u;
    SET_GPR_U32(ctx, 31, 0x163B80u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x163B78u, 0x163B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B80u;
label_163b80:
    // 0x163b80: 0x260413d0  addiu       $a0, $s0, 0x13D0
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5072));
    // 0x163b84: 0x262501a0  addiu       $a1, $s1, 0x1A0
    ctx->pc = 0x163b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x163b88: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x163b8c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x163B8Cu;
    SET_GPR_U32(ctx, 31, 0x163B94u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x163B8Cu, 0x163B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B94u;
label_163b94:
    // 0x163b94: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x163b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ba8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x163ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x163bac: 0x3e00008  jr          $ra
    ctx->pc = 0x163BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163BB4u;
}
