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

// Function: entry_00164484
// Address: 0x164484 - 0x1644f0
void entry_00164484_0x164484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164484_0x164484");
#endif

    ctx->pc = 0x164484u;

    // 0x164484: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x164484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x164488: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16448c: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x16448cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x164490: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164494: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164498: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16449c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1644a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644a4: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x1644a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x1644a8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1644a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1644ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644b0: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x1644b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x1644b4: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1644b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1644b8: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1644bc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1644c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1644c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1644c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644c8: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x1644c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
    // 0x1644cc: 0x93a30008  lbu         $v1, 0x8($sp)
    ctx->pc = 0x1644ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1644d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644d4: 0xa0230460  sb          $v1, 0x460($at)
    ctx->pc = 0x1644d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0460u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0460u, _value); } while (0);
    // 0x1644d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644dc: 0xa02302f0  sb          $v1, 0x2F0($at)
    ctx->pc = 0x1644dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D02F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D02F0u, _value); } while (0);
    // 0x1644e0: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x1644e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1644e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1644e8: 0xa0230461  sb          $v1, 0x461($at)
    ctx->pc = 0x1644e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0461u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0461u, _value); } while (0);
    // 0x1644ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x1644f0u;
}
