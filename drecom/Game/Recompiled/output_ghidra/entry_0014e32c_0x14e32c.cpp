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

// Function: entry_0014e32c
// Address: 0x14e32c - 0x14e354
void entry_0014e32c_0x14e32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e32c_0x14e32c");
#endif

    ctx->pc = 0x14e32cu;

    // 0x14e32c: 0x920209df  lbu         $v0, 0x9DF($s0)
    ctx->pc = 0x14e32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2527)));
    // 0x14e330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14e330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e334: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x14e338: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E338u;
    {
        const bool branch_taken_0x14e338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e338) {
            ctx->pc = 0x14E354u;
            return;
        }
    }
    ctx->pc = 0x14E340u;
    // 0x14e340: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e344: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x14e344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x14e348: 0x34620200  ori         $v0, $v1, 0x200
    ctx->pc = 0x14e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x14e34c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e350: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x14e350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x14e354u;
}
