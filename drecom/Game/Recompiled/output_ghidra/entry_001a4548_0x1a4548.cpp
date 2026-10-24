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

// Function: entry_001a4548
// Address: 0x1a4548 - 0x1a4570
void entry_001a4548_0x1a4548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4548_0x1a4548");
#endif

    ctx->pc = 0x1a4548u;

    // 0x1a4548: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a454c: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a454cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a4550: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4554: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a4558: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a455c: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x1a455cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a4560: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1a4560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a4564: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4568: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a4568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a456c: 0x649023  subu        $s2, $v1, $a0
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1a4570u;
}
