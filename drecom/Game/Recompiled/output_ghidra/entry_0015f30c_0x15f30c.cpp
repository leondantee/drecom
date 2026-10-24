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

// Function: entry_0015f30c
// Address: 0x15f30c - 0x15f344
void entry_0015f30c_0x15f30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f30c_0x15f30c");
#endif

    ctx->pc = 0x15f30cu;

    // 0x15f30c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f310: 0x3c024594  lui         $v0, 0x4594
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17812 << 16));
    // 0x15f314: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x15f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15f318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f31c: 0x0  nop
    ctx->pc = 0x15f31cu;
    // NOP
    // 0x15f320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f324: 0x0  nop
    ctx->pc = 0x15f324u;
    // NOP
    // 0x15f328: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F328u;
    {
        const bool branch_taken_0x15f328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f328) {
            ctx->pc = 0x15F344u;
            return;
        }
    }
    ctx->pc = 0x15F330u;
    // 0x15f330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f334: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f33c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F33Cu;
    {
        const bool branch_taken_0x15f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f33c) {
            ctx->pc = 0x15F348u;
            return;
        }
    }
    ctx->pc = 0x15F344u;
}
