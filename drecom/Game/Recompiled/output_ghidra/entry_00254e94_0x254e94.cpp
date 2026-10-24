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

// Function: entry_00254e94
// Address: 0x254e94 - 0x254eb0
void entry_00254e94_0x254e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254e94_0x254e94");
#endif

    ctx->pc = 0x254e94u;

    // 0x254e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254e98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x254e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x254e9c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x254e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x254ea0: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x254ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x254ea4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x254ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x254ea8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x254ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x254eac: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x254eacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x254eb0u;
}
