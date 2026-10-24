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

// Function: entry_002563c8
// Address: 0x2563c8 - 0x256448
void entry_002563c8_0x2563c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002563c8_0x2563c8");
#endif

    ctx->pc = 0x2563c8u;

    // 0x2563c8: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x2563c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2563cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2563ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2563d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2563d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2563d8: 0x8c760028  lw          $s6, 0x28($v1)
    ctx->pc = 0x2563d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2563dc: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x2563dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2563e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2563e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2563e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2563e8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2563ec: 0x8c720030  lw          $s2, 0x30($v1)
    ctx->pc = 0x2563ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2563f0: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x2563f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2563f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2563f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2563f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2563fc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2563fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256400: 0x8c730038  lw          $s3, 0x38($v1)
    ctx->pc = 0x256400u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x256404: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x256404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x256408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x256408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25640c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25640cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256410: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256414: 0x8c740040  lw          $s4, 0x40($v1)
    ctx->pc = 0x256414u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x256418: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x256418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25641c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256424: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256428: 0x8c750048  lw          $s5, 0x48($v1)
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25642c: 0x8e370010  lw          $s7, 0x10($s1)
    ctx->pc = 0x25642cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x256430: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x256430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x256434: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x256434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25643c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256440: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x256444: 0x0  nop
    ctx->pc = 0x256444u;
    // NOP
    ctx->pc = 0x256448u;
}
