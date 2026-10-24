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

// Function: entry_0012667c
// Address: 0x12667c - 0x1266f8
void entry_0012667c_0x12667c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012667c_0x12667c");
#endif

    ctx->pc = 0x12667cu;

    // 0x12667c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126680: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x126680u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x126684: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x126684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x126688: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x126688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12668c: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x12668Cu;
    {
        const bool branch_taken_0x12668c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12668c) {
            ctx->pc = 0x126958u;
            return;
        }
    }
    ctx->pc = 0x126694u;
    // 0x126694: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126698: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12669c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12669cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x1266a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1266a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1266a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1266a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1266a8: 0x0  nop
    ctx->pc = 0x1266a8u;
    // NOP
    // 0x1266ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1266acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1266b0: 0x0  nop
    ctx->pc = 0x1266b0u;
    // NOP
    // 0x1266b4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1266B4u;
    {
        const bool branch_taken_0x1266b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1266b4) {
            ctx->pc = 0x126700u;
            return;
        }
    }
    ctx->pc = 0x1266BCu;
    // 0x1266bc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1266bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1266c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1266C0u;
    {
        const bool branch_taken_0x1266c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1266c0) {
            ctx->pc = 0x1266F8u;
            return;
        }
    }
    ctx->pc = 0x1266C8u;
    // 0x1266c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1266c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1266cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1266d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1266d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1266d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1266d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1266d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1266dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1266dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1266e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1266e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1266e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1266e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1266ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1266ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1266f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1266f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1266f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1266f8u;
}
