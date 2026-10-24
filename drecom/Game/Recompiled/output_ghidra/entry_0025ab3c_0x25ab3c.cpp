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

// Function: entry_0025ab3c
// Address: 0x25ab3c - 0x25ab68
void entry_0025ab3c_0x25ab3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ab3c_0x25ab3c");
#endif

    ctx->pc = 0x25ab3cu;

    // 0x25ab3c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x25ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ab40: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x25ab40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25ab44: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x25AB44u;
    {
        const bool branch_taken_0x25ab44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab44) {
            ctx->pc = 0x25AB68u;
            return;
        }
    }
    ctx->pc = 0x25AB4Cu;
    // 0x25ab4c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab50: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25ab54: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x25ab54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25ab58: 0x73c0a628  paddub      $s4, $fp, $zero
    ctx->pc = 0x25ab58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x25ab5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ab60: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab64: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x25ab68u;
}
