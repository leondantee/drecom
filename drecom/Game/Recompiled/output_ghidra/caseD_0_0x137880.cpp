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

// Function: caseD_0
// Address: 0x137880 - 0x1378a8
void caseD_0_0x137880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x137880");
#endif

    ctx->pc = 0x137880u;

    // 0x137880: 0xa260009c  sb          $zero, 0x9C($s3)
    ctx->pc = 0x137880u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x137884: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137888: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x137888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x13788c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x137890: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x137890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x137894: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x137894u;
    {
        const bool branch_taken_0x137894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137894) {
            ctx->pc = 0x137904u;
            return;
        }
    }
    ctx->pc = 0x13789Cu;
    // 0x13789c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13789cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1378a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1378A0u;
    {
        const bool branch_taken_0x1378a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378a0) {
            ctx->pc = 0x1378F0u;
            return;
        }
    }
    ctx->pc = 0x1378A8u;
}
