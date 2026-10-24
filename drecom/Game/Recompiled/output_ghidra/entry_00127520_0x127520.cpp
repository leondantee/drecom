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

// Function: entry_00127520
// Address: 0x127520 - 0x127594
void entry_00127520_0x127520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127520_0x127520");
#endif

    ctx->pc = 0x127520u;

    // 0x127520: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127524: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127528: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x127528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x12752c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12752cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x127530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127534: 0x0  nop
    ctx->pc = 0x127534u;
    // NOP
    // 0x127538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12753c: 0x0  nop
    ctx->pc = 0x12753cu;
    // NOP
    // 0x127540: 0x45000145  bc1f        . + 4 + (0x145 << 2)
    ctx->pc = 0x127540u;
    {
        const bool branch_taken_0x127540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127540) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127548u;
    // 0x127548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x127548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12754c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127550: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x127550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x127554: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x127558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12755c: 0x0  nop
    ctx->pc = 0x12755cu;
    // NOP
    // 0x127560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127564: 0x0  nop
    ctx->pc = 0x127564u;
    // NOP
    // 0x127568: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x127568u;
    {
        const bool branch_taken_0x127568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127568) {
            ctx->pc = 0x127640u;
            return;
        }
    }
    ctx->pc = 0x127570u;
    // 0x127570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x127574: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x127578: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x127578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12757c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12757Cu;
    {
        const bool branch_taken_0x12757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12757c) {
            ctx->pc = 0x127594u;
            return;
        }
    }
    ctx->pc = 0x127584u;
    // 0x127584: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127588: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x127588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x12758c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12758Cu;
    {
        const bool branch_taken_0x12758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12758c) {
            ctx->pc = 0x127640u;
            return;
        }
    }
    ctx->pc = 0x127594u;
}
