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

// Function: entry_001b4408
// Address: 0x1b4408 - 0x1b4478
void entry_001b4408_0x1b4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4408_0x1b4408");
#endif

    ctx->pc = 0x1b4408u;

    // 0x1b4408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b440c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b440cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4410: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1b4410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b4414: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b4414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4418: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b441c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b441cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b4420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4424: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b4428: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b442c: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1b4430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4434: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b4434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4438: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b4438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b443c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4440: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1b4440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1b4444: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b4444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4448: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b444c: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b444cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b4450: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4454: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b4454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b4458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b445c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b4460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4460u;
    {
        const bool branch_taken_0x1b4460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4460) {
            ctx->pc = 0x1B4478u;
            return;
        }
    }
    ctx->pc = 0x1B4468u;
    // 0x1b4468: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b4468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b446c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b4470: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b4470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4474: 0x0  nop
    ctx->pc = 0x1b4474u;
    // NOP
    ctx->pc = 0x1b4478u;
}
