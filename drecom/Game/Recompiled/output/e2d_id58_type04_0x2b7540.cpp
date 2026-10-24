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

// Function: e2d_id58_type04
// Address: 0x2b7540 - 0x2b7604
void e2d_id58_type04_0x2b7540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type04_0x2b7540");
#endif

    switch (ctx->pc) {
        case 0x2b7560u: goto label_2b7560;
        default: break;
    }

    ctx->pc = 0x2b7540u;

    // 0x2b7540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7548: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b754c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7554: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7558: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7558u;
    SET_GPR_U32(ctx, 31, 0x2B7560u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7558u, 0x2B7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7560u;
label_2b7560:
    // 0x2b7560: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7564: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7568: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b756c: 0x0  nop
    ctx->pc = 0x2b756cu;
    // NOP
    // 0x2b7570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7578: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b7578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b757c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b757cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b7580: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7584: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7588: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b7588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b758c: 0x3c033f87  lui         $v1, 0x3F87
    ctx->pc = 0x2b758cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16263 << 16));
    // 0x2b7590: 0x3463ae14  ori         $v1, $v1, 0xAE14
    ctx->pc = 0x2b7590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44564);
    // 0x2b7594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b759c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b75a0: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x2b75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x2b75a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b75a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b75a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b75ac: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b75acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b75b0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2b75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b75b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b75b8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b75b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b75bc: 0x3c03bcbc  lui         $v1, 0xBCBC
    ctx->pc = 0x2b75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48316 << 16));
    // 0x2b75c0: 0x34636a7f  ori         $v1, $v1, 0x6A7F
    ctx->pc = 0x2b75c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27263);
    // 0x2b75c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b75c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b75c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b75cc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b75ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b75d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b75d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b75d8: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b75d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b75dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b75e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b75e4: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b75e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b75e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b75ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b75f0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b75f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b75f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b75f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b75f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b75f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b75fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B75FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B75FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7604u;
}
