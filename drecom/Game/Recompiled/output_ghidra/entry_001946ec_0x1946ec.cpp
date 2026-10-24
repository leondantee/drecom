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

// Function: entry_001946ec
// Address: 0x1946ec - 0x194728
void entry_001946ec_0x1946ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001946ec_0x1946ec");
#endif

    ctx->pc = 0x1946ecu;

    // 0x1946ec: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1946ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1946f0: 0x8c352580  lw          $s5, 0x2580($at)
    ctx->pc = 0x1946f0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532580u));
    // 0x1946f4: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1946f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1946f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1946f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1946fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1946fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x194700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194708: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x194708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x19470c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x19470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x194710: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x194710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194714: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x194714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194718: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x194718u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19471c: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x19471cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x194720: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194724: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x194724u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x194728u;
}
