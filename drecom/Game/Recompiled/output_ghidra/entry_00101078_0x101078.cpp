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

// Function: entry_00101078
// Address: 0x101078 - 0x101088
void entry_00101078_0x101078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101078_0x101078");
#endif

    ctx->pc = 0x101078u;

    // 0x101078: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10107c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101080: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x101084: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x101084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->pc = 0x101088u;
}
