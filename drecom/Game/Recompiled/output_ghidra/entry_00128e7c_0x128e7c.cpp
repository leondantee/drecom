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

// Function: entry_00128e7c
// Address: 0x128e7c - 0x128ef8
void entry_00128e7c_0x128e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128e7c_0x128e7c");
#endif

    ctx->pc = 0x128e7cu;

    // 0x128e7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128e80: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x128e80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x128e84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x128e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x128e88: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x128e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x128e8c: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x128E8Cu;
    {
        const bool branch_taken_0x128e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e8c) {
            ctx->pc = 0x129180u;
            return;
        }
    }
    ctx->pc = 0x128E94u;
    // 0x128e94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128e98: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128e9c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x128ea0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x128ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x128ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128ea8: 0x0  nop
    ctx->pc = 0x128ea8u;
    // NOP
    // 0x128eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128eb0: 0x0  nop
    ctx->pc = 0x128eb0u;
    // NOP
    // 0x128eb4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x128EB4u;
    {
        const bool branch_taken_0x128eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128eb4) {
            ctx->pc = 0x128F00u;
            return;
        }
    }
    ctx->pc = 0x128EBCu;
    // 0x128ebc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x128ebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128ec0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x128EC0u;
    {
        const bool branch_taken_0x128ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ec0) {
            ctx->pc = 0x128EF8u;
            return;
        }
    }
    ctx->pc = 0x128EC8u;
    // 0x128ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ed0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128ed4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x128ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x128ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128edc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128ee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ee4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128eec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ef4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x128ef8u;
}
