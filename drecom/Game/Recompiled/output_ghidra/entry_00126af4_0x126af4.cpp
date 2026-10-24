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

// Function: entry_00126af4
// Address: 0x126af4 - 0x126b68
void entry_00126af4_0x126af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126af4_0x126af4");
#endif

    ctx->pc = 0x126af4u;

    // 0x126af4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126af8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126afc: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x126b00: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x126b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126b08: 0x0  nop
    ctx->pc = 0x126b08u;
    // NOP
    // 0x126b0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126b10: 0x0  nop
    ctx->pc = 0x126b10u;
    // NOP
    // 0x126b14: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x126B14u;
    {
        const bool branch_taken_0x126b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126b14) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126B1Cu;
    // 0x126b1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126b20: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x126b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126b24: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x126b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x126b28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x126b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126b30: 0x0  nop
    ctx->pc = 0x126b30u;
    // NOP
    // 0x126b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126b38: 0x0  nop
    ctx->pc = 0x126b38u;
    // NOP
    // 0x126b3c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x126B3Cu;
    {
        const bool branch_taken_0x126b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126b3c) {
            ctx->pc = 0x126BB8u;
            return;
        }
    }
    ctx->pc = 0x126B44u;
    // 0x126b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126b48: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x126b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x126b4c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x126b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x126b50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126B50u;
    {
        const bool branch_taken_0x126b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b50) {
            ctx->pc = 0x126B68u;
            return;
        }
    }
    ctx->pc = 0x126B58u;
    // 0x126b58: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126b5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x126b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x126b60: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x126B60u;
    {
        const bool branch_taken_0x126b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b60) {
            ctx->pc = 0x126BB8u;
            return;
        }
    }
    ctx->pc = 0x126B68u;
}
