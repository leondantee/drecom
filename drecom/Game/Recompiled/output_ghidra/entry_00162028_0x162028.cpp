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

// Function: entry_00162028
// Address: 0x162028 - 0x1620b8
void entry_00162028_0x162028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162028_0x162028");
#endif

    switch (ctx->pc) {
        case 0x162034u: goto label_162034;
        case 0x162084u: goto label_162084;
        default: break;
    }

    ctx->pc = 0x162028u;

    // 0x162028: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x162028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16202c: 0xc058704  jal         func_161C10
    ctx->pc = 0x16202Cu;
    SET_GPR_U32(ctx, 31, 0x162034u);
    ctx->pc = 0x161C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161C10u, 0x16202Cu, 0x162034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162034u;
label_162034:
    // 0x162034: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x162034u;
    {
        const bool branch_taken_0x162034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162034) {
            ctx->pc = 0x1621BCu;
            return;
        }
    }
    ctx->pc = 0x16203Cu;
    // 0x16203c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162040: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x162044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x162044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x162048: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x162048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16204c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16204cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162050: 0xae0013f0  sw          $zero, 0x13F0($s0)
    ctx->pc = 0x162050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 0));
    // 0x162054: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x162054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162058: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x162058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x16205c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16205cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162060: 0x0  nop
    ctx->pc = 0x162060u;
    // NOP
    // 0x162064: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162068: 0x0  nop
    ctx->pc = 0x162068u;
    // NOP
    // 0x16206c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x16206Cu;
    {
        const bool branch_taken_0x16206c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16206c) {
            ctx->pc = 0x162170u;
            return;
        }
    }
    ctx->pc = 0x162074u;
    // 0x162074: 0xc60c1380  lwc1        $f12, 0x1380($s0)
    ctx->pc = 0x162074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162078: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x162078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16207c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x16207Cu;
    SET_GPR_U32(ctx, 31, 0x162084u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x16207Cu, 0x162084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162084u;
label_162084:
    // 0x162084: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x162084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x162088: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x162088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16208c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16208cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162090: 0x0  nop
    ctx->pc = 0x162090u;
    // NOP
    // 0x162094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162098: 0x0  nop
    ctx->pc = 0x162098u;
    // NOP
    // 0x16209c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16209Cu;
    {
        const bool branch_taken_0x16209c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16209c) {
            ctx->pc = 0x1620B8u;
            return;
        }
    }
    ctx->pc = 0x1620A4u;
    // 0x1620a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1620a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1620a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1620a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1620ac: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1620acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1620b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1620b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1620b4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1620b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x1620b8u;
}
