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

// Function: entry_001620b8
// Address: 0x1620b8 - 0x162124
void entry_001620b8_0x1620b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620b8_0x1620b8");
#endif

    ctx->pc = 0x1620b8u;

    // 0x1620b8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1620b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1620bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1620bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1620c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1620c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1620c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1620c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1620c8: 0x0  nop
    ctx->pc = 0x1620c8u;
    // NOP
    // 0x1620cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1620ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1620d0: 0x0  nop
    ctx->pc = 0x1620d0u;
    // NOP
    // 0x1620d4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1620D4u;
    {
        const bool branch_taken_0x1620d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1620d4) {
            ctx->pc = 0x162124u;
            return;
        }
    }
    ctx->pc = 0x1620DCu;
    // 0x1620dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1620e0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1620e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1620e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1620e8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1620e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1620ec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1620ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1620f0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1620f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1620f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1620f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1620f8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1620fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1620fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162100: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x162104: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162108: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16210c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x162110: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x162110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x162114: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x162114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162118: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x16211c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16211Cu;
    {
        const bool branch_taken_0x16211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16211c) {
            ctx->pc = 0x162164u;
            return;
        }
    }
    ctx->pc = 0x162124u;
}
