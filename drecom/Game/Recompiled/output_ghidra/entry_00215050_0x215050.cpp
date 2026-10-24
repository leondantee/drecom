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

// Function: entry_00215050
// Address: 0x215050 - 0x21505c
void entry_00215050_0x215050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215050_0x215050");
#endif

    ctx->pc = 0x215050u;

    // 0x215050: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x215050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215054: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x215054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x215058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x215058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x21505cu;
}
