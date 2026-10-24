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

// Function: entry_001f98d8
// Address: 0x1f98d8 - 0x1f9934
void entry_001f98d8_0x1f98d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f98d8_0x1f98d8");
#endif

    ctx->pc = 0x1f98d8u;

    // 0x1f98d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f98dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f98e0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F98E0u;
    {
        const bool branch_taken_0x1f98e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f98e0) {
            ctx->pc = 0x1F9934u;
            return;
        }
    }
    ctx->pc = 0x1F98E8u;
    // 0x1f98e8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f98ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f98f0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F98F0u;
    {
        const bool branch_taken_0x1f98f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f98f0) {
            ctx->pc = 0x1F9934u;
            return;
        }
    }
    ctx->pc = 0x1F98F8u;
    // 0x1f98f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f98fc: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f98fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f9900: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f9900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f9904: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f9904u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f9908: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1f9908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f990c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f990cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f9910: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f9910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f9914: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f9914u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f9918: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f9918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f991c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F991Cu;
    {
        const bool branch_taken_0x1f991c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f991c) {
            ctx->pc = 0x1F9934u;
            return;
        }
    }
    ctx->pc = 0x1F9924u;
    // 0x1f9924: 0x8fb20034  lw          $s2, 0x34($sp)
    ctx->pc = 0x1f9924u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9928: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f992c: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1f992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1f9930: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x1f9930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
    ctx->pc = 0x1f9934u;
}
