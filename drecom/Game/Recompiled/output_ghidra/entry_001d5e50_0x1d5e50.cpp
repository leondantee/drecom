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

// Function: entry_001d5e50
// Address: 0x1d5e50 - 0x1d5e88
void entry_001d5e50_0x1d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e50_0x1d5e50");
#endif

    ctx->pc = 0x1d5e50u;

    // 0x1d5e50: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1d5e54: 0x24c39260  addiu       $v1, $a2, -0x6DA0
    ctx->pc = 0x1d5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
    // 0x1d5e58: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e5c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d5e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5e60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d5e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d5e64: 0x30850080  andi        $a1, $a0, 0x80
    ctx->pc = 0x1d5e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1d5e68: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5E68u;
    {
        const bool branch_taken_0x1d5e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e68) {
            ctx->pc = 0x1D5E88u;
            return;
        }
    }
    ctx->pc = 0x1D5E70u;
    // 0x1d5e70: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1d5e70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d5e74: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5e78: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5e80: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d5e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5e84: 0xac8600ac  sw          $a2, 0xAC($a0)
    ctx->pc = 0x1d5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
    ctx->pc = 0x1d5e88u;
}
