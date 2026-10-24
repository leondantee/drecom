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

// Function: Camera_init
// Address: 0x17df90 - 0x17e0d4
void Camera_init_0x17df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_init_0x17df90");
#endif

    switch (ctx->pc) {
        case 0x17dfb4u: goto label_17dfb4;
        case 0x17e0b8u: goto label_17e0b8;
        default: break;
    }

    ctx->pc = 0x17df90u;

    // 0x17df90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17df94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x17df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x17df98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17df9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17dfa0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x17dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x17dfa4: 0x24502380  addiu       $s0, $v0, 0x2380
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x17dfa8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17dfa8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17dfac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DFACu;
    {
        const bool branch_taken_0x17dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfac) {
            ctx->pc = 0x17DFF0u;
            goto label_17dff0;
        }
    }
    ctx->pc = 0x17DFB4u;
label_17dfb4:
    // 0x17dfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17dfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dfbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17dfc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17dfc4: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17dfc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dfcc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17dfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17dfd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17dfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17dfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dfd8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17dfdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17dfe0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17dfe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dfe8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17dfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17dfec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17dff0:
    // 0x17dff0: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x17dff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17dff4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17DFF4u;
    {
        const bool branch_taken_0x17dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dff4) {
            ctx->pc = 0x17DFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dfb4;
        }
    }
    ctx->pc = 0x17DFFCu;
    // 0x17dffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17dffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e000: 0x0  nop
    ctx->pc = 0x17e000u;
    // NOP
    // 0x17e004: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x17e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x17e008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e00c: 0x0  nop
    ctx->pc = 0x17e00cu;
    // NOP
    // 0x17e010: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x17e010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x17e014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e018: 0x0  nop
    ctx->pc = 0x17e018u;
    // NOP
    // 0x17e01c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x17e01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x17e020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e024: 0x0  nop
    ctx->pc = 0x17e024u;
    // NOP
    // 0x17e028: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x17e028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x17e02c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e030: 0x0  nop
    ctx->pc = 0x17e030u;
    // NOP
    // 0x17e034: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x17e034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x17e038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e03c: 0x0  nop
    ctx->pc = 0x17e03cu;
    // NOP
    // 0x17e040: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x17e040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x17e044: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x17e044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x17e048: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x17e048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x17e04c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x17e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x17e050: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x17e050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x17e054: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x17e054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x17e058: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17e05c: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x17e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x17e060: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e060u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x385900u));
    // 0x17e064: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e068: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e06c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17e070: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e070u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e074: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17e078: 0x24425910  addiu       $v0, $v0, 0x5910
    ctx->pc = 0x17e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22800));
    // 0x17e07c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e07cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x385910u));
    // 0x17e080: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e084: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e088: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e08c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e08cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e090: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x17e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x17e094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e098: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e09c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e0a0: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x17e0a4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17e0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x17e0a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e0ac: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e0b0: 0xc056518  jal         func_159460
    ctx->pc = 0x17E0B0u;
    SET_GPR_U32(ctx, 31, 0x17E0B8u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x17E0B0u, 0x17E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0B8u;
label_17e0b8:
    // 0x17e0b8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17e0bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17e0bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17e0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E0D4u;
}
