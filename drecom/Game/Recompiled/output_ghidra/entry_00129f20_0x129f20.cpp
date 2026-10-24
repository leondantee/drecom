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

// Function: entry_00129f20
// Address: 0x129f20 - 0x129f94
void entry_00129f20_0x129f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f20_0x129f20");
#endif

    ctx->pc = 0x129f20u;

    // 0x129f20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129f24: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129f28: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x129f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x129f2c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x129f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x129f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129f34: 0x0  nop
    ctx->pc = 0x129f34u;
    // NOP
    // 0x129f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f3c: 0x0  nop
    ctx->pc = 0x129f3cu;
    // NOP
    // 0x129f40: 0x4500017c  bc1f        . + 4 + (0x17C << 2)
    ctx->pc = 0x129F40u;
    {
        const bool branch_taken_0x129f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129f40) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x129F48u;
    // 0x129f48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129f4c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x129f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129f50: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x129f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x129f54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x129f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129f5c: 0x0  nop
    ctx->pc = 0x129f5cu;
    // NOP
    // 0x129f60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x129f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f64: 0x0  nop
    ctx->pc = 0x129f64u;
    // NOP
    // 0x129f68: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x129F68u;
    {
        const bool branch_taken_0x129f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129f68) {
            ctx->pc = 0x12A040u;
            return;
        }
    }
    ctx->pc = 0x129F70u;
    // 0x129f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x129f74: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x129f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x129f78: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x129f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x129f7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129F7Cu;
    {
        const bool branch_taken_0x129f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129f7c) {
            ctx->pc = 0x129F94u;
            return;
        }
    }
    ctx->pc = 0x129F84u;
    // 0x129f84: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x129f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x129f88: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x129f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x129f8c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x129F8Cu;
    {
        const bool branch_taken_0x129f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129f8c) {
            ctx->pc = 0x12A040u;
            return;
        }
    }
    ctx->pc = 0x129F94u;
}
