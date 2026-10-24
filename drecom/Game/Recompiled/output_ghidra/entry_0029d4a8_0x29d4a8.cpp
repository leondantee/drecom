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

// Function: entry_0029d4a8
// Address: 0x29d4a8 - 0x29d558
void entry_0029d4a8_0x29d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d4a8_0x29d4a8");
#endif

    ctx->pc = 0x29d4a8u;

    // 0x29d4a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d4b0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x29d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4b8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d4bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29d4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d4c0: 0x0  nop
    ctx->pc = 0x29d4c0u;
    // NOP
    // 0x29d4c4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x29D4C4u;
    {
        const bool branch_taken_0x29d4c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d4c4) {
            ctx->pc = 0x29D558u;
            return;
        }
    }
    ctx->pc = 0x29D4CCu;
    // 0x29d4cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d4d4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x29d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4dc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d4e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29d4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d4e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d4e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4ec: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d4f0: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x29d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x29d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x29d4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d4fc: 0x0  nop
    ctx->pc = 0x29d4fcu;
    // NOP
    // 0x29d500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29d500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d504: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x29d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x29d508: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d50c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d510: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x29d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d514: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d518: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x29d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d51c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d520: 0x0  nop
    ctx->pc = 0x29d520u;
    // NOP
    // 0x29d524: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29D524u;
    {
        const bool branch_taken_0x29d524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d524) {
            ctx->pc = 0x29D568u;
            return;
        }
    }
    ctx->pc = 0x29D52Cu;
    // 0x29d52c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d530: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d534: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x29d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d538: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d53c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29d53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x29d540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d544: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d548: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d54c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29d550: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29D550u;
    {
        const bool branch_taken_0x29d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d550) {
            ctx->pc = 0x29D568u;
            return;
        }
    }
    ctx->pc = 0x29D558u;
}
