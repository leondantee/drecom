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

// Function: entry_001b4520
// Address: 0x1b4520 - 0x1b4580
void entry_001b4520_0x1b4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4520_0x1b4520");
#endif

    ctx->pc = 0x1b4520u;

    // 0x1b4520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4524: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b4524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4528: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1b4528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b452c: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b452cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4530: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4534: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b4534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b4538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b453c: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b453cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4540: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4544: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1b4544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1b4548: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b4548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b454c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4550: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b4550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b4554: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4558: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b4558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b455c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4560: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b4564: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B4564u;
    {
        const bool branch_taken_0x1b4564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4564) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B456Cu;
    // 0x1b456c: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b456cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b4570: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b4570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b4574: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b4574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4578: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B4578u;
    {
        const bool branch_taken_0x1b4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4578) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B4580u;
}
