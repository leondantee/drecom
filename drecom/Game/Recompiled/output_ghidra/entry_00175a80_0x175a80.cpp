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

// Function: entry_00175a80
// Address: 0x175a80 - 0x175b2c
void entry_00175a80_0x175a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175a80_0x175a80");
#endif

    switch (ctx->pc) {
        case 0x175b0cu: goto label_175b0c;
        default: break;
    }

    ctx->pc = 0x175a80u;

    // 0x175a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175a88: 0xe420c938  swc1        $f0, -0x36C8($at)
    ctx->pc = 0x175a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C938u, _value); } while (0); }
    // 0x175a8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175a90: 0xe420c934  swc1        $f0, -0x36CC($at)
    ctx->pc = 0x175a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C934u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C934u, _value); } while (0); }
    // 0x175a94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175a98: 0xe420c930  swc1        $f0, -0x36D0($at)
    ctx->pc = 0x175a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C930u, _value); } while (0); }
    // 0x175a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175aa4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175aa8: 0xe420c93c  swc1        $f0, -0x36C4($at)
    ctx->pc = 0x175aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C93Cu, _value); } while (0); }
    // 0x175aac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ab4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ab8: 0xe420c95c  swc1        $f0, -0x36A4($at)
    ctx->pc = 0x175ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C95Cu, _value); } while (0); }
    // 0x175abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ac0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ac4: 0xe420c948  swc1        $f0, -0x36B8($at)
    ctx->pc = 0x175ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C948u, _value); } while (0); }
    // 0x175ac8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175acc: 0xe420c944  swc1        $f0, -0x36BC($at)
    ctx->pc = 0x175accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C944u, _value); } while (0); }
    // 0x175ad0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ad4: 0xe420c940  swc1        $f0, -0x36C0($at)
    ctx->pc = 0x175ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C940u, _value); } while (0); }
    // 0x175ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175adc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ae0: 0xe420c958  swc1        $f0, -0x36A8($at)
    ctx->pc = 0x175ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C958u, _value); } while (0); }
    // 0x175ae4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ae8: 0xe420c954  swc1        $f0, -0x36AC($at)
    ctx->pc = 0x175ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C954u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C954u, _value); } while (0); }
    // 0x175aec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175af0: 0xe420c950  swc1        $f0, -0x36B0($at)
    ctx->pc = 0x175af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C950u, _value); } while (0); }
    // 0x175af4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175af8: 0x9022cc95  lbu         $v0, -0x336B($at)
    ctx->pc = 0x175af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x47CC95u));
    // 0x175afc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x175afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175b00: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x175b00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x175b04: 0xc05d4a0  jal         func_175280
    ctx->pc = 0x175B04u;
    SET_GPR_U32(ctx, 31, 0x175B0Cu);
    ctx->pc = 0x175280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175280u, 0x175B04u, 0x175B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B0Cu;
label_175b0c:
    // 0x175b0c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x175b0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x175b24: 0x3e00008  jr          $ra
    ctx->pc = 0x175B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B2Cu;
}
