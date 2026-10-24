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

// Function: entry_00109374
// Address: 0x109374 - 0x109388
void entry_00109374_0x109374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109374_0x109374");
#endif

    ctx->pc = 0x109374u;

    // 0x109374: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x109374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x109378: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10937c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10937cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x109380: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x109380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109384: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x109384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x109388u;
}
