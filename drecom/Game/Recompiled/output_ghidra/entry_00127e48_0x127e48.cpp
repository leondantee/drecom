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

// Function: entry_00127e48
// Address: 0x127e48 - 0x127ebc
void entry_00127e48_0x127e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127e48_0x127e48");
#endif

    ctx->pc = 0x127e48u;

    // 0x127e48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e4c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127e50: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
    // 0x127e54: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x127e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x127e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127e5c: 0x0  nop
    ctx->pc = 0x127e5cu;
    // NOP
    // 0x127e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127e64: 0x0  nop
    ctx->pc = 0x127e64u;
    // NOP
    // 0x127e68: 0x4500015a  bc1f        . + 4 + (0x15A << 2)
    ctx->pc = 0x127E68u;
    {
        const bool branch_taken_0x127e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127e68) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127E70u;
    // 0x127e70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x127e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e74: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x127e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127e78: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x127e7c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x127e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127e84: 0x0  nop
    ctx->pc = 0x127e84u;
    // NOP
    // 0x127e88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127e8c: 0x0  nop
    ctx->pc = 0x127e8cu;
    // NOP
    // 0x127e90: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x127E90u;
    {
        const bool branch_taken_0x127e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127e90) {
            ctx->pc = 0x127F68u;
            return;
        }
    }
    ctx->pc = 0x127E98u;
    // 0x127e98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x127e9c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x127ea0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x127ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x127ea4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127EA4u;
    {
        const bool branch_taken_0x127ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127ea4) {
            ctx->pc = 0x127EBCu;
            return;
        }
    }
    ctx->pc = 0x127EACu;
    // 0x127eac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127eb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x127eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x127eb4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x127EB4u;
    {
        const bool branch_taken_0x127eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127eb4) {
            ctx->pc = 0x127F68u;
            return;
        }
    }
    ctx->pc = 0x127EBCu;
}
