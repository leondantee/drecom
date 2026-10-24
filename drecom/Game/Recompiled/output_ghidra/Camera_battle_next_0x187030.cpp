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

// Function: Camera_battle_next
// Address: 0x187030 - 0x187164
void Camera_battle_next_0x187030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_battle_next_0x187030");
#endif

    switch (ctx->pc) {
        case 0x187114u: goto label_187114;
        case 0x18712cu: goto label_18712c;
        case 0x187144u: goto label_187144;
        case 0x187150u: goto label_187150;
        default: break;
    }

    ctx->pc = 0x187030u;

    // 0x187030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187034: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x187034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x187038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18703c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x18703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x187040: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187044: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x187048: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18704c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x18704cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187050: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x187050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x187054: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x187054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x187058: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18705c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x18705cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x187060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x187064: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x187064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x187068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18706c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x18706Cu;
    {
        const bool branch_taken_0x18706c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18706c) {
            ctx->pc = 0x1870F4u;
            goto label_1870f4;
        }
    }
    ctx->pc = 0x187074u;
    // 0x187074: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187074u;
    {
        const bool branch_taken_0x187074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187074) {
            ctx->pc = 0x187084u;
            goto label_187084;
        }
    }
    ctx->pc = 0x18707Cu;
    // 0x18707c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18707Cu;
    {
        const bool branch_taken_0x18707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18707c) {
            ctx->pc = 0x187150u;
            goto label_187150;
        }
    }
    ctx->pc = 0x187084u;
label_187084:
    // 0x187084: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x187084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x187088: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x187088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x18708c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18708cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x187090: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x187094: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x187094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x187098: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x187098u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480280u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480280u, _value); } while (0);
    // 0x18709c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18709cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1870a0: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x1870a0u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1870a4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1870a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1870a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1870a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1870ac: 0x0  nop
    ctx->pc = 0x1870acu;
    // NOP
    // 0x1870b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1870b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1870b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1870b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1870b8: 0xe4200284  swc1        $f0, 0x284($at)
    ctx->pc = 0x1870b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480284u, _value); } while (0); }
    // 0x1870bc: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x1870bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1870c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1870c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1870c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1870c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1870c8: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1870c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1870cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1870ccu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802C0u, _value); } while (0);
    // 0x1870d0: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1870d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1870d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1870d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1870dc: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1870e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1870e0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802D0u, _value); } while (0);
    // 0x1870e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1870e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1870e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1870ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1870ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1870f0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1870f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_1870f4:
    // 0x1870f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1870f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1870f8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x1870f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x1870fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187100: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x187104: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x187108: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x187108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x18710c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x18710Cu;
    SET_GPR_U32(ctx, 31, 0x187114u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x18710Cu, 0x187114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187114u;
label_187114:
    // 0x187114: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x187114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x187118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18711c: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x187120: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187124: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x187124u;
    SET_GPR_U32(ctx, 31, 0x18712Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x187124u, 0x18712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18712Cu;
label_18712c:
    // 0x18712c: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x18712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x187130: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x187134: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x187138: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18713c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x18713Cu;
    SET_GPR_U32(ctx, 31, 0x187144u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x18713Cu, 0x187144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187144u;
label_187144:
    // 0x187144: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x187144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x187148: 0xc056518  jal         func_159460
    ctx->pc = 0x187148u;
    SET_GPR_U32(ctx, 31, 0x187150u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x187148u, 0x187150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187150u;
label_187150:
    // 0x187150: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x187150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187158: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18715c: 0x3e00008  jr          $ra
    ctx->pc = 0x18715Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18715Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187164u;
}
