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

// Function: entry_001b74f4
// Address: 0x1b74f4 - 0x1b75b0
void entry_001b74f4_0x1b74f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b74f4_0x1b74f4");
#endif

    switch (ctx->pc) {
        case 0x1b7514u: goto label_1b7514;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7544u: goto label_1b7544;
        case 0x1b7558u: goto label_1b7558;
        default: break;
    }

    ctx->pc = 0x1b74f4u;

    // 0x1b74f4: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b74f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b74f8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b74f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b74fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7500: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x1b7500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x1b7504: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1b7504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1b7508: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b750c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B750Cu;
    SET_GPR_U32(ctx, 31, 0x1B7514u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7514u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7514u) { return; }
    ctx->pc = 0x1B7514u;
label_1b7514:
    // 0x1b7514: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7514u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7518: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b751c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7520: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7524: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B7524u;
    SET_GPR_U32(ctx, 31, 0x1B752Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B7524u, 0x1B752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B752Cu;
label_1b752c:
    // 0x1b752c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b752cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7534: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7538: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7538u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b753c: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B753Cu;
    SET_GPR_U32(ctx, 31, 0x1B7544u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B753Cu, 0x1B7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7544u;
label_1b7544:
    // 0x1b7544: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7544u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7548: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b754c: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1b7550: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B7550u;
    SET_GPR_U32(ctx, 31, 0x1B7558u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B7550u, 0x1B7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7558u;
label_1b7558:
    // 0x1b7558: 0x3c054467  lui         $a1, 0x4467
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17511 << 16));
    // 0x1b755c: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1b7560: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7564: 0x0  nop
    ctx->pc = 0x1b7564u;
    // NOP
    // 0x1b7568: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b756c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b7570: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7574: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b7574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7578: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b757c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7584: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b7588: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b758c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7590: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7598: 0x0  nop
    ctx->pc = 0x1b7598u;
    // NOP
    // 0x1b759c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B759Cu;
    {
        const bool branch_taken_0x1b759c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b759c) {
            ctx->pc = 0x1B75B0u;
            return;
        }
    }
    ctx->pc = 0x1B75A4u;
    // 0x1b75a4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b75a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b75ac: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b75acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1b75b0u;
}
