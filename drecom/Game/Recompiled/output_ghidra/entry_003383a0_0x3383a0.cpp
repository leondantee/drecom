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

// Function: entry_003383a0
// Address: 0x3383a0 - 0x3383c8
void entry_003383a0_0x3383a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003383a0_0x3383a0");
#endif

    ctx->pc = 0x3383a0u;

    // 0x3383a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3383a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3383a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3383a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3383ac: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3383acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x3383b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3383b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3383b4: 0x9062683f  lbu         $v0, 0x683F($v1)
    ctx->pc = 0x3383b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26687)));
    // 0x3383b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3383b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3383bc: 0xa062683f  sb          $v0, 0x683F($v1)
    ctx->pc = 0x3383bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26687), (uint8_t)GPR_U32(ctx, 2));
    // 0x3383c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3383c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3383c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3383c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x3383c8u;
}
