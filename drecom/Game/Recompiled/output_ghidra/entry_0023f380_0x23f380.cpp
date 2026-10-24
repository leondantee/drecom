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

// Function: entry_0023f380
// Address: 0x23f380 - 0x23f3d8
void entry_0023f380_0x23f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f380_0x23f380");
#endif

    ctx->pc = 0x23f380u;

    // 0x23f380: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f384: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x23f388: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f38c: 0x3c103cc9  lui         $s0, 0x3CC9
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15561 << 16));
    // 0x23f390: 0x36030fdb  ori         $v1, $s0, 0xFDB
    ctx->pc = 0x23f390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4059);
    // 0x23f394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23f394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f398: 0x0  nop
    ctx->pc = 0x23f398u;
    // NOP
    // 0x23f39c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23f39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f3a0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23f3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23f3a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f3a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f3ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f3b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f3b4: 0x0  nop
    ctx->pc = 0x23f3b4u;
    // NOP
    // 0x23f3b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23f3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f3bc: 0x0  nop
    ctx->pc = 0x23f3bcu;
    // NOP
    // 0x23f3c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23F3C0u;
    {
        const bool branch_taken_0x23f3c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f3c0) {
            ctx->pc = 0x23F3D8u;
            return;
        }
    }
    ctx->pc = 0x23F3C8u;
    // 0x23f3c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f3c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f3cc: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f3d0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x23f3d4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23f3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23f3d8u;
}
