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

// Function: entry_0031f970
// Address: 0x31f970 - 0x31fa10
void entry_0031f970_0x31f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f970_0x31f970");
#endif

    ctx->pc = 0x31f970u;

    // 0x31f970: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f97c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f980: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31f984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f988: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f98c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f990: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f994: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f998: 0x0  nop
    ctx->pc = 0x31f998u;
    // NOP
    // 0x31f99c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x31F99Cu;
    {
        const bool branch_taken_0x31f99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f99c) {
            ctx->pc = 0x31FA10u;
            return;
        }
    }
    ctx->pc = 0x31F9A4u;
    // 0x31f9a4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f9b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9b4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f9b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31f9bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f9c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f9c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f9cc: 0x0  nop
    ctx->pc = 0x31f9ccu;
    // NOP
    // 0x31f9d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31F9D0u;
    {
        const bool branch_taken_0x31f9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f9d0) {
            ctx->pc = 0x31FA10u;
            return;
        }
    }
    ctx->pc = 0x31F9D8u;
    // 0x31f9d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f9dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f9e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9e8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f9ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31f9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f9f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f9fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fa00: 0x0  nop
    ctx->pc = 0x31fa00u;
    // NOP
    // 0x31fa04: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x31FA04u;
    {
        const bool branch_taken_0x31fa04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fa04) {
            ctx->pc = 0x31FA68u;
            return;
        }
    }
    ctx->pc = 0x31FA0Cu;
    // 0x31fa0c: 0x0  nop
    ctx->pc = 0x31fa0cu;
    // NOP
    ctx->pc = 0x31fa10u;
}
