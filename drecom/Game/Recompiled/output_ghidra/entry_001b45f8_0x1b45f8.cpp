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

// Function: entry_001b45f8
// Address: 0x1b45f8 - 0x1b4650
void entry_001b45f8_0x1b45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b45f8_0x1b45f8");
#endif

    ctx->pc = 0x1b45f8u;

    // 0x1b45f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b45fc: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b45fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4600: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1b4600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b4604: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b4604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4608: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b460c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b460cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b4610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4614: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b4614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4618: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b461c: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1b461cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1b4620: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b4620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4624: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4628: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b4628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b462c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4630: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b4630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b4634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4638: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b463c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B463Cu;
    {
        const bool branch_taken_0x1b463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b463c) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B4644u;
    // 0x1b4644: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b4644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b4648: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b4648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b464c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b464cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b4650u;
}
