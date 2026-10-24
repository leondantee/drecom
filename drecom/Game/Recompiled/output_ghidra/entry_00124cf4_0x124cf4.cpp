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

// Function: entry_00124cf4
// Address: 0x124cf4 - 0x124d18
void entry_00124cf4_0x124cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124cf4_0x124cf4");
#endif

    ctx->pc = 0x124cf4u;

    // 0x124cf4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x124cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124cf8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x124cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124cfc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x124cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x124d00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d04: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x124d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x124d08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124d10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124d14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x124d18u;
}
