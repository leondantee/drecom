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

// Function: entry_0019d000
// Address: 0x19d000 - 0x19d090
void entry_0019d000_0x19d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d000_0x19d000");
#endif

    switch (ctx->pc) {
        case 0x19d038u: goto label_19d038;
        default: break;
    }

    ctx->pc = 0x19d000u;

    // 0x19d000: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x19d000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x19d004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d008: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d00c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19D00Cu;
    {
        const bool branch_taken_0x19d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d00c) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19D014u;
    // 0x19d014: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x19d014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x19d018: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19d018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d01c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d020: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D020u;
    {
        const bool branch_taken_0x19d020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d020) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19D028u;
    // 0x19d028: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d02c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19d02cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19d030: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x19D030u;
    SET_GPR_U32(ctx, 31, 0x19D038u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x19D030u, 0x19D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D038u;
label_19d038:
    // 0x19d038: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19D038u;
    {
        const bool branch_taken_0x19d038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d038) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19D040u;
    // 0x19d040: 0x26110088  addiu       $s1, $s0, 0x88
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x19d044: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d048: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d04c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d054: 0x0  nop
    ctx->pc = 0x19d054u;
    // NOP
    // 0x19d058: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x19D058u;
    {
        const bool branch_taken_0x19d058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d058) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19D060u;
    // 0x19d060: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19d064: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d068: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d06c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d070: 0x0  nop
    ctx->pc = 0x19d070u;
    // NOP
    // 0x19d074: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19D074u;
    {
        const bool branch_taken_0x19d074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d074) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19D07Cu;
    // 0x19d07c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d080: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19d088: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19d08c: 0x0  nop
    ctx->pc = 0x19d08cu;
    // NOP
    ctx->pc = 0x19d090u;
}
