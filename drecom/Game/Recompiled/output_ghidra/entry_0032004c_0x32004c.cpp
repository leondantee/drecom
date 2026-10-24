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

// Function: entry_0032004c
// Address: 0x32004c - 0x320060
void entry_0032004c_0x32004c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032004c_0x32004c");
#endif

    ctx->pc = 0x32004cu;

    // 0x32004c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320050: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x320050u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320054: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x320054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x320058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32005c: 0xaca30278  sw          $v1, 0x278($a1)
    ctx->pc = 0x32005cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 632), GPR_U32(ctx, 3));
    ctx->pc = 0x320060u;
}
