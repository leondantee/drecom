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

// Function: entry_00125f50
// Address: 0x125f50 - 0x125fc4
void entry_00125f50_0x125f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125f50_0x125f50");
#endif

    ctx->pc = 0x125f50u;

    // 0x125f50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f54: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125f58: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x125f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x125f5c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x125f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x125f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125f64: 0x0  nop
    ctx->pc = 0x125f64u;
    // NOP
    // 0x125f68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125f6c: 0x0  nop
    ctx->pc = 0x125f6cu;
    // NOP
    // 0x125f70: 0x45000175  bc1f        . + 4 + (0x175 << 2)
    ctx->pc = 0x125F70u;
    {
        const bool branch_taken_0x125f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125f70) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x125F78u;
    // 0x125f78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f7c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x125f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125f80: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x125f84: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x125f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x125f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125f8c: 0x0  nop
    ctx->pc = 0x125f8cu;
    // NOP
    // 0x125f90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x125f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125f94: 0x0  nop
    ctx->pc = 0x125f94u;
    // NOP
    // 0x125f98: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x125F98u;
    {
        const bool branch_taken_0x125f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125f98) {
            ctx->pc = 0x126070u;
            return;
        }
    }
    ctx->pc = 0x125FA0u;
    // 0x125fa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x125fa4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x125fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x125fa8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x125fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x125fac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125FACu;
    {
        const bool branch_taken_0x125fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125fac) {
            ctx->pc = 0x125FC4u;
            return;
        }
    }
    ctx->pc = 0x125FB4u;
    // 0x125fb4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125fb8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x125fbc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x125FBCu;
    {
        const bool branch_taken_0x125fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fbc) {
            ctx->pc = 0x126070u;
            return;
        }
    }
    ctx->pc = 0x125FC4u;
}
