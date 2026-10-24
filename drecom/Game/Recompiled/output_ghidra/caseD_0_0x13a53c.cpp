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

// Function: caseD_0
// Address: 0x13a53c - 0x13a5a8
void caseD_0_0x13a53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x13a53c");
#endif

    ctx->pc = 0x13a53cu;

    // 0x13a53c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a540: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a548: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a54c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a550: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13a554: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a558: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a55c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x13a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x13a560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a564: 0x0  nop
    ctx->pc = 0x13a564u;
    // NOP
    // 0x13a568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a56c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a570: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a574: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a57c: 0x0  nop
    ctx->pc = 0x13a57cu;
    // NOP
    // 0x13a580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a584: 0x0  nop
    ctx->pc = 0x13a584u;
    // NOP
    // 0x13a588: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x13A588u;
    {
        const bool branch_taken_0x13a588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a588) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A590u;
    // 0x13a590: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a594: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a59c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a59cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x13a5a0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x13A5A0u;
    {
        const bool branch_taken_0x13a5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a5a0) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A5A8u;
}
