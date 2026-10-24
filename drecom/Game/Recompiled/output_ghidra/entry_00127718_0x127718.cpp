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

// Function: entry_00127718
// Address: 0x127718 - 0x12778c
void entry_00127718_0x127718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127718_0x127718");
#endif

    ctx->pc = 0x127718u;

    // 0x127718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12771c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127720: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x127720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x127724: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x127728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12772c: 0x0  nop
    ctx->pc = 0x12772cu;
    // NOP
    // 0x127730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127734: 0x0  nop
    ctx->pc = 0x127734u;
    // NOP
    // 0x127738: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x127738u;
    {
        const bool branch_taken_0x127738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127738) {
            ctx->pc = 0x127848u;
            return;
        }
    }
    ctx->pc = 0x127740u;
    // 0x127740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x127744: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x127748: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x127748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12774c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12774Cu;
    {
        const bool branch_taken_0x12774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12774c) {
            ctx->pc = 0x12778Cu;
            return;
        }
    }
    ctx->pc = 0x127754u;
    // 0x127754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12775c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12775cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127760: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127764: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127768: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12776c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127770: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127778: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12777c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127780: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127784: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x127784u;
    {
        const bool branch_taken_0x127784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127784) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x12778Cu;
}
