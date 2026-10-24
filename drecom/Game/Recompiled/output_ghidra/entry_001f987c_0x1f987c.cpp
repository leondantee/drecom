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

// Function: entry_001f987c
// Address: 0x1f987c - 0x1f98d8
void entry_001f987c_0x1f987c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f987c_0x1f987c");
#endif

    ctx->pc = 0x1f987cu;

    // 0x1f987c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9884: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F9884u;
    {
        const bool branch_taken_0x1f9884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9884) {
            ctx->pc = 0x1F98D8u;
            return;
        }
    }
    ctx->pc = 0x1F988Cu;
    // 0x1f988c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f9890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9894: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9894u;
    {
        const bool branch_taken_0x1f9894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9894) {
            ctx->pc = 0x1F98D8u;
            return;
        }
    }
    ctx->pc = 0x1F989Cu;
    // 0x1f989c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1f989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f98a0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f98a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f98a4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f98a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f98a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f98a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f98ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f98acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f98b0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f98b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f98b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f98b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f98b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f98bc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f98bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f98c0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F98C0u;
    {
        const bool branch_taken_0x1f98c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f98c0) {
            ctx->pc = 0x1F98D8u;
            return;
        }
    }
    ctx->pc = 0x1F98C8u;
    // 0x1f98c8: 0x8fb20038  lw          $s2, 0x38($sp)
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f98cc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f98d0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1f98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1f98d4: 0xafb20034  sw          $s2, 0x34($sp)
    ctx->pc = 0x1f98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 18));
    ctx->pc = 0x1f98d8u;
}
