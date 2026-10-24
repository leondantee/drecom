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

// Function: entry_0016ba50
// Address: 0x16ba50 - 0x16ba9c
void entry_0016ba50_0x16ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba50_0x16ba50");
#endif

    ctx->pc = 0x16ba50u;

    // 0x16ba50: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16ba54: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16ba58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16ba5c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16ba60: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16ba64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ba68: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ba6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16ba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ba70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16ba74: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16ba74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ba78: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ba7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16ba80: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ba84: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BA9Cu;
            return;
        }
    }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0x8fb40098  lw          $s4, 0x98($sp)
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ba90: 0x8fb700a8  lw          $s7, 0xA8($sp)
    ctx->pc = 0x16ba90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16ba94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA94u;
    {
        const bool branch_taken_0x16ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba94) {
            ctx->pc = 0x16BAA8u;
            return;
        }
    }
    ctx->pc = 0x16BA9Cu;
}
