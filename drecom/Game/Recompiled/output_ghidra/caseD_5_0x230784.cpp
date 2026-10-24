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

// Function: caseD_5
// Address: 0x230784 - 0x230794
void caseD_5_0x230784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x230784");
#endif

    ctx->pc = 0x230784u;

    // 0x230784: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230788: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x230788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23078c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x23078cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x230790: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x230790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x230794u;
}
