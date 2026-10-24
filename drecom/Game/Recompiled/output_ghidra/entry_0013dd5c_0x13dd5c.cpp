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

// Function: entry_0013dd5c
// Address: 0x13dd5c - 0x13ddc8
void entry_0013dd5c_0x13dd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd5c_0x13dd5c");
#endif

    ctx->pc = 0x13dd5cu;

    // 0x13dd5c: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x13dd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13dd60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13dd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13dd64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dd68: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x13dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x13dd6c: 0x8c710028  lw          $s1, 0x28($v1)
    ctx->pc = 0x13dd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x13dd70: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x13dd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13dd74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13dd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13dd78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dd7c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x13dd80: 0x8c720030  lw          $s2, 0x30($v1)
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13dd84: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x13dd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13dd88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13dd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13dd8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dd90: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x13dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x13dd94: 0x8c730038  lw          $s3, 0x38($v1)
    ctx->pc = 0x13dd94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x13dd98: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x13dd98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13dd9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13dd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13dda0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dda4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x13dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x13dda8: 0x8c740050  lw          $s4, 0x50($v1)
    ctx->pc = 0x13dda8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13ddac: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x13ddacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13ddb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13ddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13ddb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ddb8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x13ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x13ddbc: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x13ddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13ddc0: 0x8eb60010  lw          $s6, 0x10($s5)
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x13ddc4: 0x0  nop
    ctx->pc = 0x13ddc4u;
    // NOP
    ctx->pc = 0x13ddc8u;
}
