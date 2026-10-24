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

// Function: entry_00368fd8
// Address: 0x368fd8 - 0x368ff4
void entry_00368fd8_0x368fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368fd8_0x368fd8");
#endif

    ctx->pc = 0x368fd8u;

    // 0x368fd8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x368fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x368fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x368fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368fe0: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x368fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x368fe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x368fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368fe8: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x368fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368fec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x368ff0: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x368ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x368ff4u;
}
