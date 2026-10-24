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

// Function: entry_0016b9a8
// Address: 0x16b9a8 - 0x16b9f4
void entry_0016b9a8_0x16b9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b9a8_0x16b9a8");
#endif

    ctx->pc = 0x16b9a8u;

    // 0x16b9a8: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x16b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x16b9ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b9b0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16b9b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b9c0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x16b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16b9c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b9c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9cc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16b9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b9d0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b9d4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b9d8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b9d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b9dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B9DCu;
    {
        const bool branch_taken_0x16b9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9dc) {
            ctx->pc = 0x16B9F4u;
            return;
        }
    }
    ctx->pc = 0x16B9E4u;
    // 0x16b9e4: 0x8fb30094  lw          $s3, 0x94($sp)
    ctx->pc = 0x16b9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b9e8: 0x8fb600a4  lw          $s6, 0xA4($sp)
    ctx->pc = 0x16b9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b9ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B9ECu;
    {
        const bool branch_taken_0x16b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9ec) {
            ctx->pc = 0x16BA00u;
            return;
        }
    }
    ctx->pc = 0x16B9F4u;
}
