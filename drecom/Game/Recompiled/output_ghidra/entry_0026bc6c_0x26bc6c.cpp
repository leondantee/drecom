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

// Function: entry_0026bc6c
// Address: 0x26bc6c - 0x26bc98
void entry_0026bc6c_0x26bc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bc6c_0x26bc6c");
#endif

    ctx->pc = 0x26bc6cu;

    // 0x26bc6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bc70: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x26bc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x26bc74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x26bc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26bc78: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x26bc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x26bc7c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BC7Cu;
    {
        const bool branch_taken_0x26bc7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bc7c) {
            ctx->pc = 0x26BC98u;
            return;
        }
    }
    ctx->pc = 0x26BC84u;
    // 0x26bc84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26bc88: 0x8c271a64  lw          $a3, 0x1A64($at)
    ctx->pc = 0x26bc88u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x26bc8c: 0x34e80020  ori         $t0, $a3, 0x20
    ctx->pc = 0x26bc8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x26bc90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26bc94: 0xac281a64  sw          $t0, 0x1A64($at)
    ctx->pc = 0x26bc94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x26bc98u;
}
