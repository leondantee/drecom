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

// Function: entry_0025dac4
// Address: 0x25dac4 - 0x25db1c
void entry_0025dac4_0x25dac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dac4_0x25dac4");
#endif

    switch (ctx->pc) {
        case 0x25db14u: goto label_25db14;
        default: break;
    }

    ctx->pc = 0x25dac4u;

    // 0x25dac4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dac8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dacc: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25dad0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DAD0u;
    {
        const bool branch_taken_0x25dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dad0) {
            ctx->pc = 0x25DB1Cu;
            return;
        }
    }
    ctx->pc = 0x25DAD8u;
    // 0x25dad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dadc: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25dadcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dae0: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x25dae0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dae4: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x25dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x25dae8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25daec: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25daecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25daf0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25daf4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25daf8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25dafc: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x25dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25db00: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25db04: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25db04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25db08: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25db0c: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DB0Cu;
    SET_GPR_U32(ctx, 31, 0x25DB14u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DB0Cu, 0x25DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB14u;
label_25db14:
    // 0x25db14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DB14u;
    {
        const bool branch_taken_0x25db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db14) {
            ctx->pc = 0x25DB38u;
            return;
        }
    }
    ctx->pc = 0x25DB1Cu;
}
