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

// Function: entry_001065b4
// Address: 0x1065b4 - 0x1065c8
void entry_001065b4_0x1065b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001065b4_0x1065b4");
#endif

    ctx->pc = 0x1065b4u;

    // 0x1065b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1065b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1065b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1065b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1065bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1065bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065c0: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x1065c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1065c4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1065c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->pc = 0x1065c8u;
}
