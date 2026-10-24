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

// Function: entry_00164828
// Address: 0x164828 - 0x164850
void entry_00164828_0x164828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164828_0x164828");
#endif

    ctx->pc = 0x164828u;

    // 0x164828: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x164828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16482c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x16482cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164830: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x164830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x164834: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x164834u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164838: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x164838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x16483c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x16483cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164840: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x164840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x164844: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x164844u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164848: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x164848u;
    {
        const bool branch_taken_0x164848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164848) {
            ctx->pc = 0x164980u;
            return;
        }
    }
    ctx->pc = 0x164850u;
}
