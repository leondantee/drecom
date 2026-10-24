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

// Function: entry_0033b720
// Address: 0x33b720 - 0x33b780
void entry_0033b720_0x33b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b720_0x33b720");
#endif

    ctx->pc = 0x33b720u;

    // 0x33b720: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x33B720u;
    {
        const bool branch_taken_0x33b720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b720) {
            ctx->pc = 0x33B780u;
            return;
        }
    }
    ctx->pc = 0x33B728u;
    // 0x33b728: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x33b728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x33b72c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33b730: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x33b730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x33b734: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33b734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b738: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x33b738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x33b73c: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x33b73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x33b740: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33b744: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33b744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b74c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b750: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33b750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33b754: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x33b758: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33b758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b75c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33b760: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33b760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33b764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b768: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x33b768u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33b76c: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x33b76cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x33b770: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33b774: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x33b774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x33b778: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x33b778u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x33b77c: 0x0  nop
    ctx->pc = 0x33b77cu;
    // NOP
    ctx->pc = 0x33b780u;
}
