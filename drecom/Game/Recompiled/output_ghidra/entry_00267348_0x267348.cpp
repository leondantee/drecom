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

// Function: entry_00267348
// Address: 0x267348 - 0x267398
void entry_00267348_0x267348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267348_0x267348");
#endif

    ctx->pc = 0x267348u;

    // 0x267348: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26734c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267350: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267354: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267358: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26735c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26736c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267370: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x267370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x267374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267374u;
    {
        const bool branch_taken_0x267374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267374) {
            ctx->pc = 0x267398u;
            return;
        }
    }
    ctx->pc = 0x26737Cu;
    // 0x26737c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x26737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x267380: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x267380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x267384: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x267384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x267388: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x267388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26738c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x26738cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267390: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x267390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x267394: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x267398u;
}
