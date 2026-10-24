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

// Function: entry_0026a090
// Address: 0x26a090 - 0x26a0a4
void entry_0026a090_0x26a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a090_0x26a090");
#endif

    ctx->pc = 0x26a090u;

    // 0x26a090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a094: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26a094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a098: 0x306400fd  andi        $a0, $v1, 0xFD
    ctx->pc = 0x26a098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x26a09c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a0a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x26a0a4u;
}
