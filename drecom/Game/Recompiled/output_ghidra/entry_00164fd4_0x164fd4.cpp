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

// Function: entry_00164fd4
// Address: 0x164fd4 - 0x164ff0
void entry_00164fd4_0x164fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164fd4_0x164fd4");
#endif

    ctx->pc = 0x164fd4u;

    // 0x164fd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164fd8: 0x8c235488  lw          $v1, 0x5488($at)
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5488u));
    // 0x164fdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164fe0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164fe4: 0xac235488  sw          $v1, 0x5488($at)
    ctx->pc = 0x164fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F5488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5488u, _value); } while (0);
    // 0x164fe8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164fec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x164fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x164ff0u;
}
