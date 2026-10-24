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

// Function: entry_00125c04
// Address: 0x125c04 - 0x125c78
void entry_00125c04_0x125c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125c04_0x125c04");
#endif

    ctx->pc = 0x125c04u;

    // 0x125c04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125c08: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125c0c: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x125c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x125c10: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x125c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x125c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125c18: 0x0  nop
    ctx->pc = 0x125c18u;
    // NOP
    // 0x125c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125c20: 0x0  nop
    ctx->pc = 0x125c20u;
    // NOP
    // 0x125c24: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x125C24u;
    {
        const bool branch_taken_0x125c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125c24) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125C2Cu;
    // 0x125c2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125c30: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x125c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125c34: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x125c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x125c38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x125c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x125c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125c40: 0x0  nop
    ctx->pc = 0x125c40u;
    // NOP
    // 0x125c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x125c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125c48: 0x0  nop
    ctx->pc = 0x125c48u;
    // NOP
    // 0x125c4c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x125C4Cu;
    {
        const bool branch_taken_0x125c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125c4c) {
            ctx->pc = 0x125CC8u;
            return;
        }
    }
    ctx->pc = 0x125C54u;
    // 0x125c54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x125c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x125c58: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x125c58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x125c5c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x125c60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125C60u;
    {
        const bool branch_taken_0x125c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125c60) {
            ctx->pc = 0x125C78u;
            return;
        }
    }
    ctx->pc = 0x125C68u;
    // 0x125c68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x125c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125c6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x125c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x125c70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x125C70u;
    {
        const bool branch_taken_0x125c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c70) {
            ctx->pc = 0x125CC8u;
            return;
        }
    }
    ctx->pc = 0x125C78u;
}
