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

// Function: entry_00285e40
// Address: 0x285e40 - 0x285e64
void entry_00285e40_0x285e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285e40_0x285e40");
#endif

    ctx->pc = 0x285e40u;

    // 0x285e40: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285e44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285e4c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x285E4Cu;
    {
        const bool branch_taken_0x285e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x285e4c) {
            ctx->pc = 0x285E80u;
            return;
        }
    }
    ctx->pc = 0x285E54u;
    // 0x285e54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285E54u;
    {
        const bool branch_taken_0x285e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e54) {
            ctx->pc = 0x285E64u;
            return;
        }
    }
    ctx->pc = 0x285E5Cu;
    // 0x285e5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x285E5Cu;
    {
        const bool branch_taken_0x285e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e5c) {
            ctx->pc = 0x285E8Cu;
            return;
        }
    }
    ctx->pc = 0x285E64u;
}
