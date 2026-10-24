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
// Address: 0x142ea0 - 0x142eb8
void caseD_1_0x142ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x142ea0");
#endif

    ctx->pc = 0x142ea0u;

    // 0x142ea0: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x142ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142ea4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x142ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142ea8: 0x24140078  addiu       $s4, $zero, 0x78
    ctx->pc = 0x142ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x142eac: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142eb4: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x142eb8u;
}
