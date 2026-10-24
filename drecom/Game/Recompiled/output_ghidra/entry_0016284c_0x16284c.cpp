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

// Function: entry_0016284c
// Address: 0x16284c - 0x16287c
void entry_0016284c_0x16284c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016284c_0x16284c");
#endif

    ctx->pc = 0x16284cu;

    // 0x16284c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x16284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162850: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x162850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x162854: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x162858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16285c: 0x0  nop
    ctx->pc = 0x16285cu;
    // NOP
    // 0x162860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162864: 0x0  nop
    ctx->pc = 0x162864u;
    // NOP
    // 0x162868: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x162868u;
    {
        const bool branch_taken_0x162868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162868) {
            ctx->pc = 0x16290Cu;
            return;
        }
    }
    ctx->pc = 0x162870u;
    // 0x162870: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162874: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x162874u;
    {
        const bool branch_taken_0x162874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162874) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x16287Cu;
}
