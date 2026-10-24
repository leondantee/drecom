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

// Function: entry_0019a4f4
// Address: 0x19a4f4 - 0x19a578
void entry_0019a4f4_0x19a4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a4f4_0x19a4f4");
#endif

    ctx->pc = 0x19a4f4u;

    // 0x19a4f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a4f8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19a4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19a4fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a500: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19a504: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x19A504u;
    {
        const bool branch_taken_0x19a504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a504) {
            ctx->pc = 0x19A69Cu;
            return;
        }
    }
    ctx->pc = 0x19A50Cu;
    // 0x19a50c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a510: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a514: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x19a514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a518: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a51c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19a51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19a520: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a528: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x19a528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x19a52c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19A52Cu;
    {
        const bool branch_taken_0x19a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a52c) {
            ctx->pc = 0x19A69Cu;
            return;
        }
    }
    ctx->pc = 0x19A534u;
    // 0x19a534: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19a538: 0x24508cb0  addiu       $s0, $v0, -0x7350
    ctx->pc = 0x19a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
    // 0x19a53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a540: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a540u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a544: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19a544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19a548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a54c: 0x0  nop
    ctx->pc = 0x19a54cu;
    // NOP
    // 0x19a550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a554: 0x0  nop
    ctx->pc = 0x19a554u;
    // NOP
    // 0x19a558: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19A558u;
    {
        const bool branch_taken_0x19a558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a558) {
            ctx->pc = 0x19A578u;
            return;
        }
    }
    ctx->pc = 0x19A560u;
    // 0x19a560: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19a564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a568: 0x0  nop
    ctx->pc = 0x19a568u;
    // NOP
    // 0x19a56c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x19a570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A570u;
    {
        const bool branch_taken_0x19a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a570) {
            ctx->pc = 0x19A584u;
            return;
        }
    }
    ctx->pc = 0x19A578u;
}
