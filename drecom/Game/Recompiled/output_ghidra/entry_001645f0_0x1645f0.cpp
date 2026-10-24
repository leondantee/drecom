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

// Function: entry_001645f0
// Address: 0x1645f0 - 0x16461c
void entry_001645f0_0x1645f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645f0_0x1645f0");
#endif

    ctx->pc = 0x1645f0u;

    // 0x1645f0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1645f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645f8: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x1645f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x1645fc: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1645fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164600: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164604: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x164608: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16460c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164610: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x164610u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x164614: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x164614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164618: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x16461cu;
}
