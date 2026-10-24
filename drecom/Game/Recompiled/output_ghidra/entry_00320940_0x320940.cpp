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

// Function: entry_00320940
// Address: 0x320940 - 0x320978
void entry_00320940_0x320940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320940_0x320940");
#endif

    ctx->pc = 0x320940u;

    // 0x320940: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320944: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320948: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32094c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320950: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320958: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32095c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x32095cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320960: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320964: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32096c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x32096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320970: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320970u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x320978u;
}
