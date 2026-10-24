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

// Function: caseD_2
// Address: 0x142eb8 - 0x142ee8
void caseD_2_0x142eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x142eb8");
#endif

    ctx->pc = 0x142eb8u;

    // 0x142eb8: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142eb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x142ebc: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142ec0: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x142EC0u;
    {
        const bool branch_taken_0x142ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ec0) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142EC8u;
    // 0x142ec8: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x142ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x142ecc: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x142eccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x142ed0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x142ed0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142ed4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142edc: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142edcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142ee0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x142EE0u;
    {
        const bool branch_taken_0x142ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ee0) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142EE8u;
}
