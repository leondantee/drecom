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

// Function: entry_00124964
// Address: 0x124964 - 0x124988
void entry_00124964_0x124964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124964_0x124964");
#endif

    ctx->pc = 0x124964u;

    // 0x124964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124968: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x124968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x12496c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x12496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x124970: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x124970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124974: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x124974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x124978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12497c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12497cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124984: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x124988u;
}
