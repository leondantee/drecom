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

// Function: entry_0016530c
// Address: 0x16530c - 0x165348
void entry_0016530c_0x16530c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016530c_0x16530c");
#endif

    ctx->pc = 0x16530cu;

    // 0x16530c: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x16530cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165310: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x165310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165314: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x165314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165318: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x165318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x16531c: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x16531cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165320: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x165320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165324: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x165324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165328: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x165328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x16532c: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x16532cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165330: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165334: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x165334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165338: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x165338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16533c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165340: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x165340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x165344: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x165348u;
}
