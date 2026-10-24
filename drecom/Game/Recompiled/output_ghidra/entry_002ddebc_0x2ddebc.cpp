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

// Function: entry_002ddebc
// Address: 0x2ddebc - 0x2dded8
void entry_002ddebc_0x2ddebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ddebc_0x2ddebc");
#endif

    ctx->pc = 0x2ddebcu;

    // 0x2ddebc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ddec0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddec4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2ddec4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddec8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddecc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2ddeccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dded0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dded4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dded4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dded8u;
}
