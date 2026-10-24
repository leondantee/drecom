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

// Function: entry_0018bffc
// Address: 0x18bffc - 0x18c034
void entry_0018bffc_0x18bffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bffc_0x18bffc");
#endif

    ctx->pc = 0x18bffcu;

    // 0x18bffc: 0xae150114  sw          $s5, 0x114($s0)
    ctx->pc = 0x18bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 21));
    // 0x18c000: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x18C000u;
    {
        const bool branch_taken_0x18c000 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c000) {
            ctx->pc = 0x18C034u;
            return;
        }
    }
    ctx->pc = 0x18C008u;
    // 0x18c008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c00c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x18c00cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c010: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c014: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x18c018: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c01c: 0xae140110  sw          $s4, 0x110($s0)
    ctx->pc = 0x18c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 20));
    // 0x18c020: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C020u;
    {
        const bool branch_taken_0x18c020 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c020) {
            ctx->pc = 0x18C034u;
            return;
        }
    }
    ctx->pc = 0x18C028u;
    // 0x18c028: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c02c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x18c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x18c030: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c034u;
}
