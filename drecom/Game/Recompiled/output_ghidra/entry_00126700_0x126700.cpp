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

// Function: entry_00126700
// Address: 0x126700 - 0x126774
void entry_00126700_0x126700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126700_0x126700");
#endif

    ctx->pc = 0x126700u;

    // 0x126700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126704: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126708: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x126708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x12670c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12670cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x126710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126714: 0x0  nop
    ctx->pc = 0x126714u;
    // NOP
    // 0x126718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12671c: 0x0  nop
    ctx->pc = 0x12671cu;
    // NOP
    // 0x126720: 0x450001ae  bc1f        . + 4 + (0x1AE << 2)
    ctx->pc = 0x126720u;
    {
        const bool branch_taken_0x126720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126720) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126728u;
    // 0x126728: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x126728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12672c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126730: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x126730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x126734: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x126738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12673c: 0x0  nop
    ctx->pc = 0x12673cu;
    // NOP
    // 0x126740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126744: 0x0  nop
    ctx->pc = 0x126744u;
    // NOP
    // 0x126748: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x126748u;
    {
        const bool branch_taken_0x126748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126748) {
            ctx->pc = 0x126820u;
            return;
        }
    }
    ctx->pc = 0x126750u;
    // 0x126750: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126754: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x126754u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x126758: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x126758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12675c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12675Cu;
    {
        const bool branch_taken_0x12675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12675c) {
            ctx->pc = 0x126774u;
            return;
        }
    }
    ctx->pc = 0x126764u;
    // 0x126764: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126768: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x126768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x12676c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12676Cu;
    {
        const bool branch_taken_0x12676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12676c) {
            ctx->pc = 0x126820u;
            return;
        }
    }
    ctx->pc = 0x126774u;
}
