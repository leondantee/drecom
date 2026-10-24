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

// Function: entry_001d5750
// Address: 0x1d5750 - 0x1d578c
void entry_001d5750_0x1d5750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5750_0x1d5750");
#endif

    ctx->pc = 0x1d5750u;

    // 0x1d5750: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x1d5754: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5754u;
    {
        const bool branch_taken_0x1d5754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5754) {
            ctx->pc = 0x1D578Cu;
            return;
        }
    }
    ctx->pc = 0x1D575Cu;
    // 0x1d575c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d5760: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d5760u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5764: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d5764u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d5768: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d576c: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1d576cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5770: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1d5770u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1d5774: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1d5774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1d5778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d577c: 0x0  nop
    ctx->pc = 0x1d577cu;
    // NOP
    // 0x1d5780: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1d5780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1d5784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5784u;
    {
        const bool branch_taken_0x1d5784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5784) {
            ctx->pc = 0x1D57A0u;
            return;
        }
    }
    ctx->pc = 0x1D578Cu;
}
