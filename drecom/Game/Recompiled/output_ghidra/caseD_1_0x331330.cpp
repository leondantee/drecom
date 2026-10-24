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

// Function: caseD_1
// Address: 0x331330 - 0x331380
void caseD_1_0x331330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x331330");
#endif

    ctx->pc = 0x331330u;

    // 0x331330: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331334: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x331334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331338: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x331338u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33133c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x33133cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331340: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x331340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x331344: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x331344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x331348: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x331348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33134c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33134cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331350: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x331350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331354: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x331354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x331358: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x331358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33135c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33135cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x331360: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x331360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331364: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x331364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x331368: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x331368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33136c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x33136cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x331370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x331370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331374: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x331374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x331378: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x331378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33137c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x33137cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x331380u;
}
