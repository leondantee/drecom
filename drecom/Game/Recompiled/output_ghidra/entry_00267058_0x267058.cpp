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

// Function: entry_00267058
// Address: 0x267058 - 0x267068
void entry_00267058_0x267058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267058_0x267058");
#endif

    ctx->pc = 0x267058u;

    // 0x267058: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x267058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26705c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x26705cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267060: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x267060u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x267064: 0x0  nop
    ctx->pc = 0x267064u;
    // NOP
    ctx->pc = 0x267068u;
}
