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

// Function: entry_0028e020
// Address: 0x28e020 - 0x28e0a8
void entry_0028e020_0x28e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e020_0x28e020");
#endif

    switch (ctx->pc) {
        case 0x28e084u: goto label_28e084;
        default: break;
    }

    ctx->pc = 0x28e020u;

    // 0x28e020: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e024: 0xc4212248  lwc1        $f1, 0x2248($at)
    ctx->pc = 0x28e024u;
    { uint32_t bits = FAST_READ32(0x622248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e02c: 0xc42027e4  lwc1        $f0, 0x27E4($at)
    ctx->pc = 0x28e02cu;
    { uint32_t bits = FAST_READ32(0x6227E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e030: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28e030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e034: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e038: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28e038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28e03c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28e040: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28e044: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e048: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28e048u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28e04c: 0x0  nop
    ctx->pc = 0x28e04cu;
    // NOP
    // 0x28e050: 0x0  nop
    ctx->pc = 0x28e050u;
    // NOP
    // 0x28e054: 0x1010  mfhi        $v0
    ctx->pc = 0x28e054u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28e058: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28E058u;
    {
        const bool branch_taken_0x28e058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e058) {
            ctx->pc = 0x28E0A8u;
            return;
        }
    }
    ctx->pc = 0x28E060u;
    // 0x28e060: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e064: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e068: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x28e068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6227D0u));
    // 0x28e06c: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x28e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x28e070: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28e070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e074: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e078: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e07c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28E07Cu;
    SET_GPR_U32(ctx, 31, 0x28E084u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28E07Cu, 0x28E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E084u;
label_28e084:
    // 0x28e084: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e088: 0x8c2327d0  lw          $v1, 0x27D0($at)
    ctx->pc = 0x28e088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6227D0u));
    // 0x28e08c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28e090: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e094: 0xac2227d0  sw          $v0, 0x27D0($at)
    ctx->pc = 0x28e094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227D0u, _value); } while (0);
    // 0x28e098: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E098u;
    {
        const bool branch_taken_0x28e098 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28e098) {
            ctx->pc = 0x28E0A8u;
            return;
        }
    }
    ctx->pc = 0x28E0A0u;
    // 0x28e0a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e0a4: 0xac2027d0  sw          $zero, 0x27D0($at)
    ctx->pc = 0x28e0a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227D0u, _value); } while (0);
    ctx->pc = 0x28e0a8u;
}
