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

// Function: entry_00162440
// Address: 0x162440 - 0x162498
void entry_00162440_0x162440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162440_0x162440");
#endif

    ctx->pc = 0x162440u;

    // 0x162440: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x162444: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x162444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x162448: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x162448u;
    {
        const bool branch_taken_0x162448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162448) {
            ctx->pc = 0x162498u;
            return;
        }
    }
    ctx->pc = 0x162450u;
    // 0x162450: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x162450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162454: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x162454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x162458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16245c: 0x0  nop
    ctx->pc = 0x16245cu;
    // NOP
    // 0x162460: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162464: 0x0  nop
    ctx->pc = 0x162464u;
    // NOP
    // 0x162468: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x162468u;
    {
        const bool branch_taken_0x162468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162468) {
            ctx->pc = 0x162498u;
            return;
        }
    }
    ctx->pc = 0x162470u;
    // 0x162470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162474: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x162474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162478: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x162478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x16247c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16247cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162480: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x162484: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x162484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162488: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x162488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16248c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162490: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x162490u;
    {
        const bool branch_taken_0x162490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162490) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x162498u;
}
