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

// Function: entry_00320334
// Address: 0x320334 - 0x320370
void entry_00320334_0x320334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320334_0x320334");
#endif

    ctx->pc = 0x320334u;

    // 0x320334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320338: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x32033c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32033cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320340: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x320340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320344: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32034c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320350: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320354: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32035c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320360: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320364: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32036c: 0x0  nop
    ctx->pc = 0x32036cu;
    // NOP
    ctx->pc = 0x320370u;
}
