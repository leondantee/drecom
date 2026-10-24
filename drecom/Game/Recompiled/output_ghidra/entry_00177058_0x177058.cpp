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

// Function: entry_00177058
// Address: 0x177058 - 0x177064
void entry_00177058_0x177058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177058_0x177058");
#endif

    ctx->pc = 0x177058u;

    // 0x177058: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x177058u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x17705c: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x17705cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x177060: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x177060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x177064u;
}
