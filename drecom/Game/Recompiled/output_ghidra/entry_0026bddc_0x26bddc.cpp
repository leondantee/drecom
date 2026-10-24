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

// Function: entry_0026bddc
// Address: 0x26bddc - 0x26be2c
void entry_0026bddc_0x26bddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bddc_0x26bddc");
#endif

    ctx->pc = 0x26bddcu;

    // 0x26bddc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bde0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bde4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bde8: 0x0  nop
    ctx->pc = 0x26bde8u;
    // NOP
    // 0x26bdec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bdecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bdf0: 0x0  nop
    ctx->pc = 0x26bdf0u;
    // NOP
    // 0x26bdf4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x26BDF4u;
    {
        const bool branch_taken_0x26bdf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bdf4) {
            ctx->pc = 0x26BE2Cu;
            return;
        }
    }
    ctx->pc = 0x26BDFCu;
    // 0x26bdfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be00: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26be04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be08: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x26be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26be0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26be0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26be10: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26be10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x26be14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26be14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be18: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x26be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26be1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be20: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x26be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26be24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26be24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26be28: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x26be28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    ctx->pc = 0x26be2cu;
}
