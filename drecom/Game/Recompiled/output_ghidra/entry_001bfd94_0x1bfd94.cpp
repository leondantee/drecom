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

// Function: entry_001bfd94
// Address: 0x1bfd94 - 0x1bfdc0
void entry_001bfd94_0x1bfd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfd94_0x1bfd94");
#endif

    ctx->pc = 0x1bfd94u;

    // 0x1bfd94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd98: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1bfd98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1bfd9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bfd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfda0: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1bfda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1bfda4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFDA4u;
    {
        const bool branch_taken_0x1bfda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfda4) {
            ctx->pc = 0x1BFDC0u;
            return;
        }
    }
    ctx->pc = 0x1BFDACu;
    // 0x1bfdac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bfdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bfdb0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bfdb4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bfdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bfdb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bfdbc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bfdbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x1bfdc0u;
}
