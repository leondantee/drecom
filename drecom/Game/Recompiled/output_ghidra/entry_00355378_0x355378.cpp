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

// Function: entry_00355378
// Address: 0x355378 - 0x355398
void entry_00355378_0x355378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355378_0x355378");
#endif

    ctx->pc = 0x355378u;

    // 0x355378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x355378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35537c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x355380: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x355380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x355384: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x355384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x355388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x355388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35538c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355390: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355394: 0xa064008e  sb          $a0, 0x8E($v1)
    ctx->pc = 0x355394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x355398u;
}
