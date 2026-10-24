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

// Function: entry_001fc434
// Address: 0x1fc434 - 0x1fc470
void entry_001fc434_0x1fc434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc434_0x1fc434");
#endif

    ctx->pc = 0x1fc434u;

    // 0x1fc434: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc438: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fc438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fc43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc440: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fc444: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fc444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fc448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc450: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fc450u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc454: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fc454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc458: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc460: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fc464: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fc464u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fc468: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc46c: 0x0  nop
    ctx->pc = 0x1fc46cu;
    // NOP
    ctx->pc = 0x1fc470u;
}
