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

// Function: entry_00349dcc
// Address: 0x349dcc - 0x349de4
void entry_00349dcc_0x349dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349dcc_0x349dcc");
#endif

    ctx->pc = 0x349dccu;

    // 0x349dcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349dd0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x349dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349dd4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x349dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x349dd8: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x349dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x349ddc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x349ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x349de0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x349de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x349de4u;
}
