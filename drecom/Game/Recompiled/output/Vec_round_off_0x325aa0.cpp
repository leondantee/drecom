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

// Function: Vec_round_off
// Address: 0x325aa0 - 0x325bbc
void Vec_round_off_0x325aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vec_round_off_0x325aa0");
#endif

    switch (ctx->pc) {
        case 0x325ac4u: goto label_325ac4;
        case 0x325ae8u: goto label_325ae8;
        case 0x325b10u: goto label_325b10;
        case 0x325b34u: goto label_325b34;
        case 0x325b5cu: goto label_325b5c;
        case 0x325b80u: goto label_325b80;
        default: break;
    }

    ctx->pc = 0x325aa0u;

    // 0x325aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325aa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x325aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x325aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x325aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x325aac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x325aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x325ab0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x325ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x325ab4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x325ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325ab8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x325ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325abc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325ABCu;
    SET_GPR_U32(ctx, 31, 0x325AC4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325ABCu, 0x325AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AC4u;
label_325ac4:
    // 0x325ac4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x325ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325ac8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x325ac8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325acc: 0x0  nop
    ctx->pc = 0x325accu;
    // NOP
    // 0x325ad0: 0x0  nop
    ctx->pc = 0x325ad0u;
    // NOP
    // 0x325ad4: 0x8010  mfhi        $s0
    ctx->pc = 0x325ad4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x325ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x325ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325adc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x325adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325ae0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325AE0u;
    SET_GPR_U32(ctx, 31, 0x325AE8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325AE0u, 0x325AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AE8u;
label_325ae8:
    // 0x325ae8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x325ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x325aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325af0: 0x0  nop
    ctx->pc = 0x325af0u;
    // NOP
    // 0x325af4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x325af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325afc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x325afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x325b00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x325b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325b04: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x325b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325b08: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325B08u;
    SET_GPR_U32(ctx, 31, 0x325B10u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325B08u, 0x325B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B10u;
label_325b10:
    // 0x325b10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x325b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325b14: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x325b14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325b18: 0x0  nop
    ctx->pc = 0x325b18u;
    // NOP
    // 0x325b1c: 0x0  nop
    ctx->pc = 0x325b1cu;
    // NOP
    // 0x325b20: 0x8010  mfhi        $s0
    ctx->pc = 0x325b20u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x325b24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x325b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325b28: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x325b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325b2c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325B2Cu;
    SET_GPR_U32(ctx, 31, 0x325B34u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325B2Cu, 0x325B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B34u;
label_325b34:
    // 0x325b34: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x325b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x325b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325b3c: 0x0  nop
    ctx->pc = 0x325b3cu;
    // NOP
    // 0x325b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325b44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x325b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325b48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x325b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x325b4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x325b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325b50: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x325b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325b54: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325B54u;
    SET_GPR_U32(ctx, 31, 0x325B5Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325B54u, 0x325B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B5Cu;
label_325b5c:
    // 0x325b5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x325b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325b60: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x325b60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325b64: 0x0  nop
    ctx->pc = 0x325b64u;
    // NOP
    // 0x325b68: 0x0  nop
    ctx->pc = 0x325b68u;
    // NOP
    // 0x325b6c: 0x8010  mfhi        $s0
    ctx->pc = 0x325b6cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x325b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x325b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325b74: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x325b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325b78: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325B78u;
    SET_GPR_U32(ctx, 31, 0x325B80u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325B78u, 0x325B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B80u;
label_325b80:
    // 0x325b80: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x325b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x325b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325b88: 0x0  nop
    ctx->pc = 0x325b88u;
    // NOP
    // 0x325b8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325b90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325b94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x325b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x325b98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x325b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x325b9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325ba0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325ba4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x325ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x325ba8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x325ba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x325bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325bb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x325bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x325BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325BBCu;
}
