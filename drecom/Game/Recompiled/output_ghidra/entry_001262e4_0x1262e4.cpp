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

// Function: entry_001262e4
// Address: 0x1262e4 - 0x126358
void entry_001262e4_0x1262e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001262e4_0x1262e4");
#endif

    ctx->pc = 0x1262e4u;

    // 0x1262e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1262e8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1262e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1262ec: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x1262ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x1262f0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1262f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1262f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1262f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1262f8: 0x0  nop
    ctx->pc = 0x1262f8u;
    // NOP
    // 0x1262fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1262fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126300: 0x0  nop
    ctx->pc = 0x126300u;
    // NOP
    // 0x126304: 0x45000090  bc1f        . + 4 + (0x90 << 2)
    ctx->pc = 0x126304u;
    {
        const bool branch_taken_0x126304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126304) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x12630Cu;
    // 0x12630c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126310: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x126310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126314: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x126314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x126318: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12631c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12631cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126320: 0x0  nop
    ctx->pc = 0x126320u;
    // NOP
    // 0x126324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126328: 0x0  nop
    ctx->pc = 0x126328u;
    // NOP
    // 0x12632c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x12632Cu;
    {
        const bool branch_taken_0x12632c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12632c) {
            ctx->pc = 0x1263A8u;
            return;
        }
    }
    ctx->pc = 0x126334u;
    // 0x126334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126338: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x126338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12633c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x126340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126340u;
    {
        const bool branch_taken_0x126340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126340) {
            ctx->pc = 0x126358u;
            return;
        }
    }
    ctx->pc = 0x126348u;
    // 0x126348: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12634c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x126350: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x126350u;
    {
        const bool branch_taken_0x126350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126350) {
            ctx->pc = 0x1263A8u;
            return;
        }
    }
    ctx->pc = 0x126358u;
}
