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

// Function: entry_00211a68
// Address: 0x211a68 - 0x211aa0
void entry_00211a68_0x211a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211a68_0x211a68");
#endif

    ctx->pc = 0x211a68u;

    // 0x211a68: 0x960310a4  lhu         $v1, 0x10A4($s0)
    ctx->pc = 0x211a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x211a6c: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x211a6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x211a70: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x211a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x211a74: 0xa4040  sll         $t0, $t2, 1
    ctx->pc = 0x211a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x211a78: 0x960910a4  lhu         $t1, 0x10A4($s0)
    ctx->pc = 0x211a78u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x211a7c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x211a7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x211a80: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x211a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x211a84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x211a88: 0x24649500  addiu       $a0, $v1, -0x6B00
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
    // 0x211a8c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x211a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211a90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211a94: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x211a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x211a98: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x211a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x211a9c: 0x0  nop
    ctx->pc = 0x211a9cu;
    // NOP
    ctx->pc = 0x211aa0u;
}
