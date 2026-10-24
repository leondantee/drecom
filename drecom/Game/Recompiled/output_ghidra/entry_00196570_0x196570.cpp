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

// Function: entry_00196570
// Address: 0x196570 - 0x1965a0
void entry_00196570_0x196570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196570_0x196570");
#endif

    ctx->pc = 0x196570u;

    // 0x196570: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x196574: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x196574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x196578: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19657c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x196580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196584: 0x94650204  lhu         $a1, 0x204($v1)
    ctx->pc = 0x196584u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x196588: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x19658c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x19658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196590: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x196590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x196594: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196598: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x19659c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19659cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1965a0u;
}
