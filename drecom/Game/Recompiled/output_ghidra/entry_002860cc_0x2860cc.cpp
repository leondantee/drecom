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

// Function: entry_002860cc
// Address: 0x2860cc - 0x2860f0
void entry_002860cc_0x2860cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002860cc_0x2860cc");
#endif

    ctx->pc = 0x2860ccu;

    // 0x2860cc: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x2860ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x2860d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2860d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2860d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2860d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2860d8: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2860D8u;
    {
        const bool branch_taken_0x2860d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2860d8) {
            ctx->pc = 0x286374u;
            return;
        }
    }
    ctx->pc = 0x2860E0u;
    // 0x2860e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2860E0u;
    {
        const bool branch_taken_0x2860e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860e0) {
            ctx->pc = 0x2860F0u;
            return;
        }
    }
    ctx->pc = 0x2860E8u;
    // 0x2860e8: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x2860E8u;
    {
        const bool branch_taken_0x2860e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860e8) {
            ctx->pc = 0x286790u;
            return;
        }
    }
    ctx->pc = 0x2860F0u;
}
