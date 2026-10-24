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

// Function: entry_0013b9b4
// Address: 0x13b9b4 - 0x13ba04
void entry_0013b9b4_0x13b9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b9b4_0x13b9b4");
#endif

    ctx->pc = 0x13b9b4u;

    // 0x13b9b4: 0x92030101  lbu         $v1, 0x101($s0)
    ctx->pc = 0x13b9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 257)));
    // 0x13b9b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13b9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b9c0: 0x148300c9  bne         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x13B9C0u;
    {
        const bool branch_taken_0x13b9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13b9c0) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13B9C8u;
    // 0x13b9c8: 0x92030102  lbu         $v1, 0x102($s0)
    ctx->pc = 0x13b9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x13b9cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13b9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b9d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13b9d4: 0x108300ba  beq         $a0, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x13B9D4u;
    {
        const bool branch_taken_0x13b9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b9d4) {
            ctx->pc = 0x13BCC0u;
            return;
        }
    }
    ctx->pc = 0x13B9DCu;
    // 0x13b9dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b9e0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x13B9E0u;
    {
        const bool branch_taken_0x13b9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b9e0) {
            ctx->pc = 0x13BAB8u;
            return;
        }
    }
    ctx->pc = 0x13B9E8u;
    // 0x13b9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b9ec: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13B9ECu;
    {
        const bool branch_taken_0x13b9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b9ec) {
            ctx->pc = 0x13BA18u;
            return;
        }
    }
    ctx->pc = 0x13B9F4u;
    // 0x13b9f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B9F4u;
    {
        const bool branch_taken_0x13b9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9f4) {
            ctx->pc = 0x13BA04u;
            return;
        }
    }
    ctx->pc = 0x13B9FCu;
    // 0x13b9fc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x13B9FCu;
    {
        const bool branch_taken_0x13b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9fc) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13BA04u;
}
