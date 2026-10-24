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

// Function: entry_0015b618
// Address: 0x15b618 - 0x15b654
void entry_0015b618_0x15b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b618_0x15b618");
#endif

    ctx->pc = 0x15b618u;

    // 0x15b618: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b61c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b620: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x15b620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x15b624: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15B624u;
    {
        const bool branch_taken_0x15b624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b624) {
            ctx->pc = 0x15B65Cu;
            return;
        }
    }
    ctx->pc = 0x15B62Cu;
    // 0x15b62c: 0x920313a7  lbu         $v1, 0x13A7($s0)
    ctx->pc = 0x15b62cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
    // 0x15b630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b638: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B638u;
    {
        const bool branch_taken_0x15b638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b638) {
            ctx->pc = 0x15B654u;
            return;
        }
    }
    ctx->pc = 0x15B640u;
    // 0x15b640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b644: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B644u;
    {
        const bool branch_taken_0x15b644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b644) {
            ctx->pc = 0x15B654u;
            return;
        }
    }
    ctx->pc = 0x15B64Cu;
    // 0x15b64c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B64Cu;
    {
        const bool branch_taken_0x15b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b64c) {
            ctx->pc = 0x15B65Cu;
            return;
        }
    }
    ctx->pc = 0x15B654u;
}
