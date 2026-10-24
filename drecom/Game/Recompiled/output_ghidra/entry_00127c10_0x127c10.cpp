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

// Function: entry_00127c10
// Address: 0x127c10 - 0x127c80
void entry_00127c10_0x127c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127c10_0x127c10");
#endif

    ctx->pc = 0x127c10u;

    // 0x127c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127c14: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127c18: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x127c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x127c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127c20: 0x0  nop
    ctx->pc = 0x127c20u;
    // NOP
    // 0x127c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127c28: 0x0  nop
    ctx->pc = 0x127c28u;
    // NOP
    // 0x127c2c: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x127C2Cu;
    {
        const bool branch_taken_0x127c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127c2c) {
            ctx->pc = 0x127E48u;
            return;
        }
    }
    ctx->pc = 0x127C34u;
    // 0x127c34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x127c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127c38: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x127c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127c3c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x127c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x127c40: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x127c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127c48: 0x0  nop
    ctx->pc = 0x127c48u;
    // NOP
    // 0x127c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127c50: 0x0  nop
    ctx->pc = 0x127c50u;
    // NOP
    // 0x127c54: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x127C54u;
    {
        const bool branch_taken_0x127c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127c54) {
            ctx->pc = 0x127D2Cu;
            return;
        }
    }
    ctx->pc = 0x127C5Cu;
    // 0x127c5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x127c60: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x127c64: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x127c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x127c68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127C68u;
    {
        const bool branch_taken_0x127c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127c68) {
            ctx->pc = 0x127C80u;
            return;
        }
    }
    ctx->pc = 0x127C70u;
    // 0x127c70: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127c74: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x127c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x127c78: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x127C78u;
    {
        const bool branch_taken_0x127c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c78) {
            ctx->pc = 0x127D2Cu;
            return;
        }
    }
    ctx->pc = 0x127C80u;
}
