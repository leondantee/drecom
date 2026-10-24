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

// Function: entry_0023cda0
// Address: 0x23cda0 - 0x23ce3c
void entry_0023cda0_0x23cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cda0_0x23cda0");
#endif

    ctx->pc = 0x23cda0u;

    // 0x23cda0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cda4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cda8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23cda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdb0: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cdb4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23cdb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cdb8: 0x0  nop
    ctx->pc = 0x23cdb8u;
    // NOP
    // 0x23cdbc: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x23CDBCu;
    {
        const bool branch_taken_0x23cdbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cdbc) {
            ctx->pc = 0x23CEB4u;
            return;
        }
    }
    ctx->pc = 0x23CDC4u;
    // 0x23cdc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cdcc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdd4: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cdd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cdd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cddc: 0x0  nop
    ctx->pc = 0x23cddcu;
    // NOP
    // 0x23cde0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x23CDE0u;
    {
        const bool branch_taken_0x23cde0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cde0) {
            ctx->pc = 0x23CE3Cu;
            return;
        }
    }
    ctx->pc = 0x23CDE8u;
    // 0x23cde8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cdf0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdf8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cdfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23cdfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23ce00: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23ce04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce0c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce14: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ce18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce1c: 0x0  nop
    ctx->pc = 0x23ce1cu;
    // NOP
    // 0x23ce20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CE20u;
    {
        const bool branch_taken_0x23ce20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce20) {
            ctx->pc = 0x23CE3Cu;
            return;
        }
    }
    ctx->pc = 0x23CE28u;
    // 0x23ce28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce30: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x23ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce38: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x23ce3cu;
}
