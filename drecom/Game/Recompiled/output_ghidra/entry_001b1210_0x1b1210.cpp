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

// Function: entry_001b1210
// Address: 0x1b1210 - 0x1b1270
void entry_001b1210_0x1b1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1210_0x1b1210");
#endif

    ctx->pc = 0x1b1210u;

label_1b1210:
    // 0x1b1210: 0xae930054  sw          $s3, 0x54($s4)
    ctx->pc = 0x1b1210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 19));
    // 0x1b1214: 0x26730330  addiu       $s3, $s3, 0x330
    ctx->pc = 0x1b1214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x1b1218: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1b121c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b121cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b1220: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1220u;
    {
        const bool branch_taken_0x1b1220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1220) {
            ctx->pc = 0x1B1210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1210;
        }
    }
    ctx->pc = 0x1B1228u;
    // 0x1b1228: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1b1228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b122c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b1230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1234: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1238: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b123c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1240: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b1240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b1244: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b1244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b1248: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b1248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b124c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b1250: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b1254: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b1254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b1258: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b1258u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b125c: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b125cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b1260: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1264: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1264u;
    {
        const bool branch_taken_0x1b1264 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1264) {
            ctx->pc = 0x1B1270u;
            return;
        }
    }
    ctx->pc = 0x1B126Cu;
    // 0x1b126c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b126cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->pc = 0x1b1270u;
}
