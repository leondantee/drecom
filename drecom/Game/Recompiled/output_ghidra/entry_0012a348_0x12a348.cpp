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

// Function: entry_0012a348
// Address: 0x12a348 - 0x12a3bc
void entry_0012a348_0x12a348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a348_0x12a348");
#endif

    ctx->pc = 0x12a348u;

    // 0x12a348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a34c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a350: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x12a350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x12a354: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x12a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x12a358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a35c: 0x0  nop
    ctx->pc = 0x12a35cu;
    // NOP
    // 0x12a360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a364: 0x0  nop
    ctx->pc = 0x12a364u;
    // NOP
    // 0x12a368: 0x45000072  bc1f        . + 4 + (0x72 << 2)
    ctx->pc = 0x12A368u;
    {
        const bool branch_taken_0x12a368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a368) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A370u;
    // 0x12a370: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a374: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a378: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x12a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x12a37c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12a380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a384: 0x0  nop
    ctx->pc = 0x12a384u;
    // NOP
    // 0x12a388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12a388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a38c: 0x0  nop
    ctx->pc = 0x12a38cu;
    // NOP
    // 0x12a390: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x12A390u;
    {
        const bool branch_taken_0x12a390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a390) {
            ctx->pc = 0x12A40Cu;
            return;
        }
    }
    ctx->pc = 0x12A398u;
    // 0x12a398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a39c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12a3a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12a3a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A3A4u;
    {
        const bool branch_taken_0x12a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a3a4) {
            ctx->pc = 0x12A3BCu;
            return;
        }
    }
    ctx->pc = 0x12A3ACu;
    // 0x12a3ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12a3b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x12a3b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12A3B4u;
    {
        const bool branch_taken_0x12a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3b4) {
            ctx->pc = 0x12A40Cu;
            return;
        }
    }
    ctx->pc = 0x12A3BCu;
}
