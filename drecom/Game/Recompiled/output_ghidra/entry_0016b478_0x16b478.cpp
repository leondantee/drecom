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

// Function: entry_0016b478
// Address: 0x16b478 - 0x16b4c4
void entry_0016b478_0x16b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b478_0x16b478");
#endif

    ctx->pc = 0x16b478u;

    // 0x16b478: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x16b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x16b47c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b47cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b480: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b484: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16b484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16b488: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b48c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b490: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16b494: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b498: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b49c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16b49cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b4a0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b4a4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b4a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b4ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B4ACu;
    {
        const bool branch_taken_0x16b4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4ac) {
            ctx->pc = 0x16B4C4u;
            return;
        }
    }
    ctx->pc = 0x16B4B4u;
    // 0x16b4b4: 0x8fb30094  lw          $s3, 0x94($sp)
    ctx->pc = 0x16b4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b4b8: 0x8fb600a4  lw          $s6, 0xA4($sp)
    ctx->pc = 0x16b4b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b4bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B4BCu;
    {
        const bool branch_taken_0x16b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4bc) {
            ctx->pc = 0x16B4D0u;
            return;
        }
    }
    ctx->pc = 0x16B4C4u;
}
