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

// Function: entry_001b1128
// Address: 0x1b1128 - 0x1b1160
void entry_001b1128_0x1b1128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1128_0x1b1128");
#endif

    ctx->pc = 0x1b1128u;

    // 0x1b1128: 0x8eb20020  lw          $s2, 0x20($s5)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b112c: 0x8eb10028  lw          $s1, 0x28($s5)
    ctx->pc = 0x1b112cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1b1130: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b1134: 0x8fa404a4  lw          $a0, 0x4A4($sp)
    ctx->pc = 0x1b1134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b1138: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b1138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b113c: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b1140: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b1140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b1144: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b1148: 0xac700090  sw          $s0, 0x90($v1)
    ctx->pc = 0x1b1148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 16));
    // 0x1b114c: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b114cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b1150: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1154: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1154u;
    {
        const bool branch_taken_0x1b1154 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1154) {
            ctx->pc = 0x1B1160u;
            return;
        }
    }
    ctx->pc = 0x1B115Cu;
    // 0x1b115c: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1b115cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x1b1160u;
}
