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

// Function: entry_001c6244
// Address: 0x1c6244 - 0x1c6270
void entry_001c6244_0x1c6244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6244_0x1c6244");
#endif

    ctx->pc = 0x1c6244u;

    // 0x1c6244: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6248: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c624c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6250: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c6250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c6254: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6254u;
    {
        const bool branch_taken_0x1c6254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6254) {
            ctx->pc = 0x1C6270u;
            return;
        }
    }
    ctx->pc = 0x1C625Cu;
    // 0x1c625c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c6260: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c6260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c6264: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c6264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c6268: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c626c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c626cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x1c6270u;
}
