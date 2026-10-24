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

// Function: entry_00310034
// Address: 0x310034 - 0x310098
void entry_00310034_0x310034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310034_0x310034");
#endif

    ctx->pc = 0x310034u;

    // 0x310034: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x310034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x310038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x310040: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x310040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x310044: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310048: 0x24639ab0  addiu       $v1, $v1, -0x6550
    ctx->pc = 0x310048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941360));
    // 0x31004c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310050: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310050u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399AB0u));
    // 0x310054: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x310054u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x310058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x310058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31005c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x31005cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x310060: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x310060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310068: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x310068u;
    {
        const bool branch_taken_0x310068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310068) {
            ctx->pc = 0x31025Cu;
            return;
        }
    }
    ctx->pc = 0x310070u;
    // 0x310070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310074: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x310074u;
    {
        const bool branch_taken_0x310074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310074) {
            ctx->pc = 0x3101E4u;
            return;
        }
    }
    ctx->pc = 0x31007Cu;
    // 0x31007c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31007cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310080: 0x1090001e  beq         $a0, $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x310080u;
    {
        const bool branch_taken_0x310080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x310080) {
            ctx->pc = 0x3100FCu;
            return;
        }
    }
    ctx->pc = 0x310088u;
    // 0x310088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310088u;
    {
        const bool branch_taken_0x310088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x310088) {
            ctx->pc = 0x310098u;
            return;
        }
    }
    ctx->pc = 0x310090u;
    // 0x310090: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x310090u;
    {
        const bool branch_taken_0x310090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310090) {
            ctx->pc = 0x31056Cu;
            return;
        }
    }
    ctx->pc = 0x310098u;
}
