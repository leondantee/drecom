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

// Function: entry_0012805c
// Address: 0x12805c - 0x1280c0
void entry_0012805c_0x12805c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012805c_0x12805c");
#endif

    ctx->pc = 0x12805cu;

    // 0x12805c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128060: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128064: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x128064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x128068: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x128068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12806c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12806cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128070: 0x0  nop
    ctx->pc = 0x128070u;
    // NOP
    // 0x128074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128078: 0x0  nop
    ctx->pc = 0x128078u;
    // NOP
    // 0x12807c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x12807Cu;
    {
        const bool branch_taken_0x12807c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12807c) {
            ctx->pc = 0x1280C8u;
            return;
        }
    }
    ctx->pc = 0x128084u;
    // 0x128084: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x128084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128088: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x128088u;
    {
        const bool branch_taken_0x128088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128088) {
            ctx->pc = 0x1280C0u;
            return;
        }
    }
    ctx->pc = 0x128090u;
    // 0x128090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128094: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128098: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12809c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1280a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1280a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1280a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1280a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1280ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1280acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1280b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1280b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1280b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1280b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1280bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1280bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1280c0u;
}
