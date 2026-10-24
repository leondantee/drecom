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

// Function: entry_00270070
// Address: 0x270070 - 0x27009c
void entry_00270070_0x270070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270070_0x270070");
#endif

    ctx->pc = 0x270070u;

    // 0x270070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270074: 0x904409db  lbu         $a0, 0x9DB($v0)
    ctx->pc = 0x270074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x270078: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x270078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27007c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x27007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x270080: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270080u;
    {
        const bool branch_taken_0x270080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270080) {
            ctx->pc = 0x27009Cu;
            return;
        }
    }
    ctx->pc = 0x270088u;
    // 0x270088: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27008c: 0x8c251a64  lw          $a1, 0x1A64($at)
    ctx->pc = 0x27008cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x270090: 0x34a60020  ori         $a2, $a1, 0x20
    ctx->pc = 0x270090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x270094: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270098: 0xac261a64  sw          $a2, 0x1A64($at)
    ctx->pc = 0x270098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x27009cu;
}
