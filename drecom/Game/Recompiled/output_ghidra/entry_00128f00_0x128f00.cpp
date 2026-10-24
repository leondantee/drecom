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

// Function: entry_00128f00
// Address: 0x128f00 - 0x128f74
void entry_00128f00_0x128f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128f00_0x128f00");
#endif

    ctx->pc = 0x128f00u;

    // 0x128f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128f04: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128f08: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x128f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x128f0c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x128f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x128f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128f14: 0x0  nop
    ctx->pc = 0x128f14u;
    // NOP
    // 0x128f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128f1c: 0x0  nop
    ctx->pc = 0x128f1cu;
    // NOP
    // 0x128f20: 0x450001a3  bc1f        . + 4 + (0x1A3 << 2)
    ctx->pc = 0x128F20u;
    {
        const bool branch_taken_0x128f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f20) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x128F28u;
    // 0x128f28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128f2c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x128f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128f30: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x128f34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x128f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128f3c: 0x0  nop
    ctx->pc = 0x128f3cu;
    // NOP
    // 0x128f40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128f44: 0x0  nop
    ctx->pc = 0x128f44u;
    // NOP
    // 0x128f48: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x128F48u;
    {
        const bool branch_taken_0x128f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f48) {
            ctx->pc = 0x129020u;
            return;
        }
    }
    ctx->pc = 0x128F50u;
    // 0x128f50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x128f54: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128f54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x128f58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x128f5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128F5Cu;
    {
        const bool branch_taken_0x128f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f5c) {
            ctx->pc = 0x128F74u;
            return;
        }
    }
    ctx->pc = 0x128F64u;
    // 0x128f64: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x128f68: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x128f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x128f6c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x128F6Cu;
    {
        const bool branch_taken_0x128f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f6c) {
            ctx->pc = 0x129020u;
            return;
        }
    }
    ctx->pc = 0x128F74u;
}
