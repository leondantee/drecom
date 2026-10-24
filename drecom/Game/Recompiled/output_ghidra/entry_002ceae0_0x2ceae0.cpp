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

// Function: entry_002ceae0
// Address: 0x2ceae0 - 0x2ceb28
void entry_002ceae0_0x2ceae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ceae0_0x2ceae0");
#endif

    ctx->pc = 0x2ceae0u;

    // 0x2ceae0: 0x1430c0  sll         $a2, $s4, 3
    ctx->pc = 0x2ceae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2ceae4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2ceae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2ceae8: 0x24e88480  addiu       $t0, $a3, -0x7B80
    ctx->pc = 0x2ceae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935680));
    // 0x2ceaec: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2ceaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2ceaf0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ceaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ceaf4: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x2ceaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2ceaf8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2CEAF8u;
    {
        const bool branch_taken_0x2ceaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceaf8) {
            ctx->pc = 0x2CEB28u;
            return;
        }
    }
    ctx->pc = 0x2CEB00u;
    // 0x2ceb00: 0x3c09bfef  lui         $t1, 0xBFEF
    ctx->pc = 0x2ceb00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49135 << 16));
    // 0x2ceb04: 0x35245c29  ori         $a0, $t1, 0x5C29
    ctx->pc = 0x2ceb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23593);
    // 0x2ceb08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ceb08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ceb0c: 0x0  nop
    ctx->pc = 0x2ceb0cu;
    // NOP
    // 0x2ceb10: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ceb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ceb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ceb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ceb18: 0x0  nop
    ctx->pc = 0x2ceb18u;
    // NOP
    // 0x2ceb1c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2ceb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2ceb20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEB20u;
    {
        const bool branch_taken_0x2ceb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb20) {
            ctx->pc = 0x2CEB3Cu;
            return;
        }
    }
    ctx->pc = 0x2CEB28u;
}
