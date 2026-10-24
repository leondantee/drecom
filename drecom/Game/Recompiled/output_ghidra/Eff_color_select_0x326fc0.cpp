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

// Function: Eff_color_select
// Address: 0x326fc0 - 0x327058
void Eff_color_select_0x326fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_color_select_0x326fc0");
#endif

    ctx->pc = 0x326fc0u;

    // 0x326fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326fc4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x326fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x326fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x326fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x326fcc: 0x8c24a620  lw          $a0, -0x59E0($at)
    ctx->pc = 0x326fccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A620u));
    // 0x326fd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x326fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326fd4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x326FD4u;
    {
        const bool branch_taken_0x326fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x326fd4) {
            ctx->pc = 0x327020u;
            goto label_327020;
        }
    }
    ctx->pc = 0x326FDCu;
    // 0x326fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326fe0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326FE0u;
    {
        const bool branch_taken_0x326fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x326fe0) {
            ctx->pc = 0x326FF0u;
            goto label_326ff0;
        }
    }
    ctx->pc = 0x326FE8u;
    // 0x326fe8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x326FE8u;
    {
        const bool branch_taken_0x326fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326fe8) {
            ctx->pc = 0x32704Cu;
            goto label_32704c;
        }
    }
    ctx->pc = 0x326FF0u;
label_326ff0:
    // 0x326ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x326ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ff4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x326ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326ff8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x326ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x326ffc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x326ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x327000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327004: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327008: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x327008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32700c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32700cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327010: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327014: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x327014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x327018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x327018u;
    {
        const bool branch_taken_0x327018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327018) {
            ctx->pc = 0x32704Cu;
            goto label_32704c;
        }
    }
    ctx->pc = 0x327020u;
label_327020:
    // 0x327020: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x327020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x327024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327028: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32702c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x32702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x327030: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x327034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327038: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32703c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x32703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x327040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x327040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327044: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327048: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x327048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_32704c:
    // 0x32704c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32704cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x327050: 0x3e00008  jr          $ra
    ctx->pc = 0x327050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327058u;
}
