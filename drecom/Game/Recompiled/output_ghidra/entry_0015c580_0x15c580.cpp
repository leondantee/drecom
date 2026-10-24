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

// Function: entry_0015c580
// Address: 0x15c580 - 0x15c5bc
void entry_0015c580_0x15c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c580_0x15c580");
#endif

    ctx->pc = 0x15c580u;

    // 0x15c580: 0x920210a9  lbu         $v0, 0x10A9($s0)
    ctx->pc = 0x15c580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4265)));
    // 0x15c584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c588: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15c588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15c58c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x15c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15c590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c594: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15c598: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c59c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5a0: 0x90421561  lbu         $v0, 0x1561($v0)
    ctx->pc = 0x15c5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5473)));
    // 0x15c5a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c5a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c5ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c5b4: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c5b8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x15c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x15c5bcu;
}
