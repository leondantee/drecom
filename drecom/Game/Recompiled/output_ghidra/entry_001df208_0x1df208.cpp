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

// Function: entry_001df208
// Address: 0x1df208 - 0x1df238
void entry_001df208_0x1df208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df208_0x1df208");
#endif

    ctx->pc = 0x1df208u;

    // 0x1df208: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1df208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1df20c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1df20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1df210: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df214: 0x1620ffe2  bnez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1DF214u;
    {
        const bool branch_taken_0x1df214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df214) {
            ctx->pc = 0x1DF1A0u;
            return;
        }
    }
    ctx->pc = 0x1DF21Cu;
    // 0x1df21c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df220: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df224: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df224u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df228: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df22c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df230: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df234: 0xac720030  sw          $s2, 0x30($v1)
    ctx->pc = 0x1df234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 18));
    ctx->pc = 0x1df238u;
}
