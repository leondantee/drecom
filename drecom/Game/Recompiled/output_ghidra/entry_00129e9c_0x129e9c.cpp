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

// Function: entry_00129e9c
// Address: 0x129e9c - 0x129f18
void entry_00129e9c_0x129e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129e9c_0x129e9c");
#endif

    ctx->pc = 0x129e9cu;

    // 0x129e9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ea0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x129ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x129ea4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x129ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x129ea8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x129ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x129eac: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x129EACu;
    {
        const bool branch_taken_0x129eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129eac) {
            ctx->pc = 0x12A15Cu;
            return;
        }
    }
    ctx->pc = 0x129EB4u;
    // 0x129eb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129eb8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129ebc: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x129ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x129ec0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x129ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x129ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ec8: 0x0  nop
    ctx->pc = 0x129ec8u;
    // NOP
    // 0x129ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ed0: 0x0  nop
    ctx->pc = 0x129ed0u;
    // NOP
    // 0x129ed4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x129ED4u;
    {
        const bool branch_taken_0x129ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129ed4) {
            ctx->pc = 0x129F20u;
            return;
        }
    }
    ctx->pc = 0x129EDCu;
    // 0x129edc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x129edcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x129ee0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x129EE0u;
    {
        const bool branch_taken_0x129ee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ee0) {
            ctx->pc = 0x129F18u;
            return;
        }
    }
    ctx->pc = 0x129EE8u;
    // 0x129ee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129eec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129ef4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x129ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129efc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129f04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129f04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129f08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129f0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129f10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129f14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129f18u;
}
