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

// Function: entry_00166600
// Address: 0x166600 - 0x166620
void entry_00166600_0x166600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166600_0x166600");
#endif

    ctx->pc = 0x166600u;

    // 0x166600: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166604: 0x94420070  lhu         $v0, 0x70($v0)
    ctx->pc = 0x166604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x166608: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x166608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16660c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166610: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x166610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x166614: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166618: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x166618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x16661c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16661cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x166620u;
}
