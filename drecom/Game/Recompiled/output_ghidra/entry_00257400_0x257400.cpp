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

// Function: entry_00257400
// Address: 0x257400 - 0x257434
void entry_00257400_0x257400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257400_0x257400");
#endif

    ctx->pc = 0x257400u;

    // 0x257400: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257404: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25740c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257410: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257414: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257418: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25741c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x25741Cu;
    {
        const bool branch_taken_0x25741c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25741c) {
            ctx->pc = 0x257384u;
            return;
        }
    }
    ctx->pc = 0x257424u;
    // 0x257424: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257424u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257428: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x257428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25742c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x25742cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257430: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->pc = 0x257434u;
}
