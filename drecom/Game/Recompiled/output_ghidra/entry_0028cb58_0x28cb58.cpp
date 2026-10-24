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

// Function: entry_0028cb58
// Address: 0x28cb58 - 0x28cb88
void entry_0028cb58_0x28cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cb58_0x28cb58");
#endif

    ctx->pc = 0x28cb58u;

    // 0x28cb58: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28cb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28cb5c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28cb60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb64: 0x16a30011  bne         $s5, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CB64u;
    {
        const bool branch_taken_0x28cb64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x28cb64) {
            ctx->pc = 0x28CBACu;
            return;
        }
    }
    ctx->pc = 0x28CB6Cu;
    // 0x28cb6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cb70: 0x8c2220f0  lw          $v0, 0x20F0($at)
    ctx->pc = 0x28cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cb74: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x28cb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28cb78: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CB78u;
    {
        const bool branch_taken_0x28cb78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cb78) {
            ctx->pc = 0x28CB88u;
            return;
        }
    }
    ctx->pc = 0x28CB80u;
    // 0x28cb80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cb84: 0xac2020f0  sw          $zero, 0x20F0($at)
    ctx->pc = 0x28cb84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    ctx->pc = 0x28cb88u;
}
