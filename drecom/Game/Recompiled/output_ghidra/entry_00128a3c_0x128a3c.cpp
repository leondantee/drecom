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

// Function: entry_00128a3c
// Address: 0x128a3c - 0x128aac
void entry_00128a3c_0x128a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128a3c_0x128a3c");
#endif

    ctx->pc = 0x128a3cu;

    // 0x128a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a40: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a44: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x128a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x128a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128a4c: 0x0  nop
    ctx->pc = 0x128a4cu;
    // NOP
    // 0x128a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128a54: 0x0  nop
    ctx->pc = 0x128a54u;
    // NOP
    // 0x128a58: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x128A58u;
    {
        const bool branch_taken_0x128a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a58) {
            ctx->pc = 0x128BC0u;
            return;
        }
    }
    ctx->pc = 0x128A60u;
    // 0x128a60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a64: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x128a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a68: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x128a6c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x128a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128a74: 0x0  nop
    ctx->pc = 0x128a74u;
    // NOP
    // 0x128a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128a7c: 0x0  nop
    ctx->pc = 0x128a7cu;
    // NOP
    // 0x128a80: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x128A80u;
    {
        const bool branch_taken_0x128a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a80) {
            ctx->pc = 0x128AFCu;
            return;
        }
    }
    ctx->pc = 0x128A88u;
    // 0x128a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x128a8c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x128a90: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x128a94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128A94u;
    {
        const bool branch_taken_0x128a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a94) {
            ctx->pc = 0x128AACu;
            return;
        }
    }
    ctx->pc = 0x128A9Cu;
    // 0x128a9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x128aa0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x128aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x128aa4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x128AA4u;
    {
        const bool branch_taken_0x128aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128aa4) {
            ctx->pc = 0x128AFCu;
            return;
        }
    }
    ctx->pc = 0x128AACu;
}
