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

// Function: entry_003261d8
// Address: 0x3261d8 - 0x32620c
void entry_003261d8_0x3261d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003261d8_0x3261d8");
#endif

    ctx->pc = 0x3261d8u;

    // 0x3261d8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3261d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3261dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3261dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261e0: 0x90420210  lbu         $v0, 0x210($v0)
    ctx->pc = 0x3261e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x3261e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3261e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3261e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3261e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3261ec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3261ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3261f0: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x3261f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3261f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3261f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261f8: 0xa0430211  sb          $v1, 0x211($v0)
    ctx->pc = 0x3261f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 529), (uint8_t)GPR_U32(ctx, 3));
    // 0x3261fc: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3261fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326200: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326204: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x326204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x326208: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x326208u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x32620cu;
}
