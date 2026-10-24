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

// Function: R121_sky_model_move
// Address: 0x27fea0 - 0x27ff28
void R121_sky_model_move_0x27fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_sky_model_move_0x27fea0");
#endif

    switch (ctx->pc) {
        case 0x27fedcu: goto label_27fedc;
        case 0x27ff10u: goto label_27ff10;
        default: break;
    }

    ctx->pc = 0x27fea0u;

    // 0x27fea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fea4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27fea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27feac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27feacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27feb0: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27feb4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27feb8: 0x3c023937  lui         $v0, 0x3937
    ctx->pc = 0x27feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14647 << 16));
    // 0x27febc: 0x344202d3  ori         $v0, $v0, 0x2D3
    ctx->pc = 0x27febcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)723);
    // 0x27fec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fec4: 0x0  nop
    ctx->pc = 0x27fec4u;
    // NOP
    // 0x27fec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27fec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27fecc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27feccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27fed0: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x27fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fed4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27FED4u;
    SET_GPR_U32(ctx, 31, 0x27FEDCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27FED4u, 0x27FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEDCu;
label_27fedc:
    // 0x27fedc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27fedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27fee0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fee4: 0x8c30f9e8  lw          $s0, -0x618($at)
    ctx->pc = 0x27fee4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x27fee8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27feec: 0x3c023937  lui         $v0, 0x3937
    ctx->pc = 0x27feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14647 << 16));
    // 0x27fef0: 0x344202d3  ori         $v0, $v0, 0x2D3
    ctx->pc = 0x27fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)723);
    // 0x27fef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fef8: 0x0  nop
    ctx->pc = 0x27fef8u;
    // NOP
    // 0x27fefc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27fefcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27ff00: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27ff00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27ff04: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x27ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ff08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27FF08u;
    SET_GPR_U32(ctx, 31, 0x27FF10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27FF08u, 0x27FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF10u;
label_27ff10:
    // 0x27ff10: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27ff10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27ff14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ff14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ff18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ff18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ff1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27ff1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x27FF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FF28u;
}
