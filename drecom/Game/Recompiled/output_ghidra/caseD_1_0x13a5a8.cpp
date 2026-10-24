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

// Function: caseD_1
// Address: 0x13a5a8 - 0x13a618
void caseD_1_0x13a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x13a5a8");
#endif

    ctx->pc = 0x13a5a8u;

    // 0x13a5a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a5ac: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a5b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a5b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a5bc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13a5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a5c4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a5c8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x13a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x13a5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a5d0: 0x0  nop
    ctx->pc = 0x13a5d0u;
    // NOP
    // 0x13a5d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a5d8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a5dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a5e0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a5e4: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x13a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x13a5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a5ec: 0x0  nop
    ctx->pc = 0x13a5ecu;
    // NOP
    // 0x13a5f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a5f4: 0x0  nop
    ctx->pc = 0x13a5f4u;
    // NOP
    // 0x13a5f8: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x13A5F8u;
    {
        const bool branch_taken_0x13a5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a5f8) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A600u;
    // 0x13a600: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a604: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a60c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a60cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x13a610: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x13A610u;
    {
        const bool branch_taken_0x13a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a610) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A618u;
}
