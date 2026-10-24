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

// Function: R121_evt_gate_close
// Address: 0x27fc70 - 0x27fd80
void R121_evt_gate_close_0x27fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_evt_gate_close_0x27fc70");
#endif

    switch (ctx->pc) {
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd60u: goto label_27fd60;
        default: break;
    }

    ctx->pc = 0x27fc70u;

    // 0x27fc70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27fc74: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27fc78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27fc7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27fc80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27fc84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27fc88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fc8c: 0x8c33f9e0  lw          $s3, -0x620($at)
    ctx->pc = 0x27fc8cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x27fc90: 0x8e7102d0  lw          $s1, 0x2D0($s3)
    ctx->pc = 0x27fc90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27fc94: 0x8e6202d0  lw          $v0, 0x2D0($s3)
    ctx->pc = 0x27fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27fc98: 0x24520190  addiu       $s2, $v0, 0x190
    ctx->pc = 0x27fc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x27fc9c: 0x2402010e  addiu       $v0, $zero, 0x10E
    ctx->pc = 0x27fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x27fca0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fca4: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27fca4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27fca8: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x27fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x27fcac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27fcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27fcb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fcb4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fcb8: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27fcbc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fcc0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27fcc4: 0x2445fa90  addiu       $a1, $v0, -0x570
    ctx->pc = 0x27fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x27fcc8: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27FCC8u;
    SET_GPR_U32(ctx, 31, 0x27FCD0u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27FCC8u, 0x27FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCD0u;
label_27fcd0:
    // 0x27fcd0: 0x3c023b9e  lui         $v0, 0x3B9E
    ctx->pc = 0x27fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15262 << 16));
    // 0x27fcd4: 0x3442dd1e  ori         $v0, $v0, 0xDD1E
    ctx->pc = 0x27fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56606);
    // 0x27fcd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fcdc: 0x0  nop
    ctx->pc = 0x27fcdcu;
    // NOP
    // 0x27fce0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27fce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27fce4: 0x3c02bb9e  lui         $v0, 0xBB9E
    ctx->pc = 0x27fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48030 << 16));
    // 0x27fce8: 0x3442dd1e  ori         $v0, $v0, 0xDD1E
    ctx->pc = 0x27fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56606);
    // 0x27fcec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fcf0: 0x0  nop
    ctx->pc = 0x27fcf0u;
    // NOP
    // 0x27fcf4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27fcf8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27fcf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27fcfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27FCFCu;
    {
        const bool branch_taken_0x27fcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fcfc) {
            ctx->pc = 0x27FD40u;
            goto label_27fd40;
        }
    }
    ctx->pc = 0x27FD04u;
label_27fd04:
    // 0x27fd04: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27fd04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27fd08: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27fd08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27fd0c: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd10: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FD10u;
    SET_GPR_U32(ctx, 31, 0x27FD18u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FD10u, 0x27FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD18u;
label_27fd18:
    // 0x27fd18: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27fd18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fd1c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27fd1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fd20: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd24: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FD24u;
    SET_GPR_U32(ctx, 31, 0x27FD2Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FD24u, 0x27FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD2Cu;
label_27fd2c:
    // 0x27fd2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fd30: 0xc084964  jal         func_212590
    ctx->pc = 0x27FD30u;
    SET_GPR_U32(ctx, 31, 0x27FD38u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FD30u, 0x27FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD38u;
label_27fd38:
    // 0x27fd38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27fd3c: 0x0  nop
    ctx->pc = 0x27fd3cu;
    // NOP
label_27fd40:
    // 0x27fd40: 0x2e02010e  sltiu       $v0, $s0, 0x10E
    ctx->pc = 0x27fd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)270) ? 1 : 0);
    // 0x27fd44: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27FD44u;
    {
        const bool branch_taken_0x27fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fd44) {
            ctx->pc = 0x27FD04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fd04;
        }
    }
    ctx->pc = 0x27FD4Cu;
    // 0x27fd4c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x27fd4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x27fd50: 0xc096558  jal         func_259560
    ctx->pc = 0x27FD50u;
    SET_GPR_U32(ctx, 31, 0x27FD58u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x27FD50u, 0x27FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD58u;
label_27fd58:
    // 0x27fd58: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FD58u;
    SET_GPR_U32(ctx, 31, 0x27FD60u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FD58u, 0x27FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD60u;
label_27fd60:
    // 0x27fd60: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27fd60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fd64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fd68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fd68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fd70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fd74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27fd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fd78: 0x3e00008  jr          $ra
    ctx->pc = 0x27FD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FD80u;
}
