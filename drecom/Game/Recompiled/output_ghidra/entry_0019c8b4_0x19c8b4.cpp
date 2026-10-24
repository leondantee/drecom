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

// Function: entry_0019c8b4
// Address: 0x19c8b4 - 0x19c8d0
void entry_0019c8b4_0x19c8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8b4_0x19c8b4");
#endif

    ctx->pc = 0x19c8b4u;

    // 0x19c8b4: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c8b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c8b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c8bc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x19c8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x19c8c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C8C0u;
    {
        const bool branch_taken_0x19c8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8c0) {
            ctx->pc = 0x19C8D0u;
            return;
        }
    }
    ctx->pc = 0x19C8C8u;
    // 0x19c8c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19c8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c8cc: 0x0  nop
    ctx->pc = 0x19c8ccu;
    // NOP
    ctx->pc = 0x19c8d0u;
}
