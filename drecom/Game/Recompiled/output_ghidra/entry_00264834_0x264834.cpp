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

// Function: entry_00264834
// Address: 0x264834 - 0x264870
void entry_00264834_0x264834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264834_0x264834");
#endif

    ctx->pc = 0x264834u;

    // 0x264834: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x264834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x264838: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x264838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x26483c: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x26483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x264840: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264844: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x264844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x264848: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26484c: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x26484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x264850: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264854: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x264854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x264858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26485c: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x26485cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x264860: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264864: 0xae23124c  sw          $v1, 0x124C($s1)
    ctx->pc = 0x264864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4684), GPR_U32(ctx, 3));
    // 0x264868: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26486c: 0x0  nop
    ctx->pc = 0x26486cu;
    // NOP
    ctx->pc = 0x264870u;
}
