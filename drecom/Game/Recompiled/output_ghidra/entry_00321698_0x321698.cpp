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

// Function: entry_00321698
// Address: 0x321698 - 0x3216d0
void entry_00321698_0x321698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321698_0x321698");
#endif

    ctx->pc = 0x321698u;

    // 0x321698: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32169c: 0x90420345  lbu         $v0, 0x345($v0)
    ctx->pc = 0x32169cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 837)));
    // 0x3216a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3216a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3216a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3216a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3216a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3216a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3216ac: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3216b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3216b4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3216b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3216b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3216b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3216bc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3216c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3216c4: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x3216c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x3216c8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3216c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3216cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3216ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3216d0u;
}
