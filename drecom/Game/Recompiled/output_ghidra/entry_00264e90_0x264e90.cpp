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

// Function: entry_00264e90
// Address: 0x264e90 - 0x264ee8
void entry_00264e90_0x264e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264e90_0x264e90");
#endif

    ctx->pc = 0x264e90u;

    // 0x264e90: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x264e94: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x264e98: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264e9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264ea0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x264ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264ea8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x264ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x264eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x264eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x264eb0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x264eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264eb4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x264EB4u;
    {
        const bool branch_taken_0x264eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264eb4) {
            ctx->pc = 0x264E64u;
            return;
        }
    }
    ctx->pc = 0x264EBCu;
    // 0x264ebc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x264ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x264ec0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x264ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x264ec4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264ec8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264ecc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x264ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264ed4: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x264ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x264ed8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x264ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x264edc: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x264edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x264ee0: 0xafbe00dc  sw          $fp, 0xDC($sp)
    ctx->pc = 0x264ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 30));
    // 0x264ee4: 0x0  nop
    ctx->pc = 0x264ee4u;
    // NOP
    ctx->pc = 0x264ee8u;
}
