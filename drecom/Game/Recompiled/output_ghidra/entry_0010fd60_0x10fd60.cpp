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

// Function: entry_0010fd60
// Address: 0x10fd60 - 0x10fd90
void entry_0010fd60_0x10fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd60_0x10fd60");
#endif

    ctx->pc = 0x10fd60u;

    // 0x10fd60: 0x245051b0  addiu       $s0, $v0, 0x51B0
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    // 0x10fd64: 0xac5251b0  sw          $s2, 0x51B0($v0)
    ctx->pc = 0x10fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20912), GPR_U32(ctx, 18));
    // 0x10fd68: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x10fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x10fd6c: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x10fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x10fd70: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FD70u;
    {
        const bool branch_taken_0x10fd70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD70u;
        // 0x10fd74: 0xae15000c  sw          $s5, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd70) {
            ctx->pc = 0x10FD90u;
            return;
        }
    }
    ctx->pc = 0x10FD78u;
    // 0x10fd78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x10fd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10fd7c: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x10fd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x10fd80: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x10fd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x10fd84: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x10fd84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x10fd88: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x10fd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10fd8c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x10fd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10fd90u;
}
