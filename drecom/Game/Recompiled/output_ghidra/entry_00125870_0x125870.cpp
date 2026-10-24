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

// Function: entry_00125870
// Address: 0x125870 - 0x1258e4
void entry_00125870_0x125870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125870_0x125870");
#endif

    ctx->pc = 0x125870u;

    // 0x125870: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125874: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125878: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x125878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x12587c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x125880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125884: 0x0  nop
    ctx->pc = 0x125884u;
    // NOP
    // 0x125888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12588c: 0x0  nop
    ctx->pc = 0x12588cu;
    // NOP
    // 0x125890: 0x45000142  bc1f        . + 4 + (0x142 << 2)
    ctx->pc = 0x125890u;
    {
        const bool branch_taken_0x125890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125890) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125898u;
    // 0x125898: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12589c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1258a0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1258a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1258a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1258a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1258a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1258a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1258ac: 0x0  nop
    ctx->pc = 0x1258acu;
    // NOP
    // 0x1258b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1258b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1258b4: 0x0  nop
    ctx->pc = 0x1258b4u;
    // NOP
    // 0x1258b8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x1258B8u;
    {
        const bool branch_taken_0x1258b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1258b8) {
            ctx->pc = 0x125990u;
            return;
        }
    }
    ctx->pc = 0x1258C0u;
    // 0x1258c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1258c4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1258c8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1258c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1258cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1258CCu;
    {
        const bool branch_taken_0x1258cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1258cc) {
            ctx->pc = 0x1258E4u;
            return;
        }
    }
    ctx->pc = 0x1258D4u;
    // 0x1258d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1258d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1258d8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1258d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1258dc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1258DCu;
    {
        const bool branch_taken_0x1258dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258dc) {
            ctx->pc = 0x125990u;
            return;
        }
    }
    ctx->pc = 0x1258E4u;
}
