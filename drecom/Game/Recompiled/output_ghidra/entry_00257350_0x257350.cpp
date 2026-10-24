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

// Function: entry_00257350
// Address: 0x257350 - 0x257384
void entry_00257350_0x257350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257350_0x257350");
#endif

    ctx->pc = 0x257350u;

    // 0x257350: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257354: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25735c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257360: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257364: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257368: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25736c: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x25736Cu;
    {
        const bool branch_taken_0x25736c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25736c) {
            ctx->pc = 0x2572CCu;
            return;
        }
    }
    ctx->pc = 0x257374u;
    // 0x257374: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257374u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257378: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x257378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25737c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x25737cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257380: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->pc = 0x257384u;
}
