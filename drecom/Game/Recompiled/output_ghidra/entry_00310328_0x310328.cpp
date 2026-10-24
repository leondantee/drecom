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

// Function: entry_00310328
// Address: 0x310328 - 0x31038c
void entry_00310328_0x310328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310328_0x310328");
#endif

    ctx->pc = 0x310328u;

    // 0x310328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31032c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x31032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x310330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x310330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310334: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x310334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310338: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x310338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31033c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x310340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310344: 0x0  nop
    ctx->pc = 0x310344u;
    // NOP
    // 0x310348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31034c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x31034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x310350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310354: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x310354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x310358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31035c: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x31035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310364: 0x0  nop
    ctx->pc = 0x310364u;
    // NOP
    // 0x310368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31036c: 0x0  nop
    ctx->pc = 0x31036cu;
    // NOP
    // 0x310370: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x310370u;
    {
        const bool branch_taken_0x310370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310370) {
            ctx->pc = 0x31038Cu;
            return;
        }
    }
    ctx->pc = 0x310378u;
    // 0x310378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31037c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310380: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x310380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x310384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310388: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x310388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    ctx->pc = 0x31038cu;
}
