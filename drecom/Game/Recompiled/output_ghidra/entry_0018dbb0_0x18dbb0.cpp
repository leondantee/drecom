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

// Function: entry_0018dbb0
// Address: 0x18dbb0 - 0x18dbf8
void entry_0018dbb0_0x18dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dbb0_0x18dbb0");
#endif

    ctx->pc = 0x18dbb0u;

    // 0x18dbb0: 0x92020342  lbu         $v0, 0x342($s0)
    ctx->pc = 0x18dbb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 834)));
    // 0x18dbb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dbb8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18dbbc: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x18dbc0: 0x26827290  addiu       $v0, $s4, 0x7290
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29328));
    // 0x18dbc4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dbc8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x18dbc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18dbcc: 0xfe020aa8  sd          $v0, 0xAA8($s0)
    ctx->pc = 0x18dbccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2728), GPR_U64(ctx, 2));
    // 0x18dbd0: 0x96030340  lhu         $v1, 0x340($s0)
    ctx->pc = 0x18dbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18dbd4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18dbd8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18dbdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DBDCu;
    {
        const bool branch_taken_0x18dbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbdc) {
            ctx->pc = 0x18DBF8u;
            return;
        }
    }
    ctx->pc = 0x18DBE4u;
    // 0x18dbe4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18dbe8: 0x34423011  ori         $v0, $v0, 0x3011
    ctx->pc = 0x18dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12305);
    // 0x18dbec: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
    // 0x18dbf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DBF0u;
    {
        const bool branch_taken_0x18dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbf0) {
            ctx->pc = 0x18DC04u;
            return;
        }
    }
    ctx->pc = 0x18DBF8u;
}
