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

// Function: entry_0014f9d8
// Address: 0x14f9d8 - 0x14f9f4
void entry_0014f9d8_0x14f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f9d8_0x14f9d8");
#endif

    ctx->pc = 0x14f9d8u;

    // 0x14f9d8: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
    // 0x14f9dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f9e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F9E4u;
    {
        const bool branch_taken_0x14f9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f9e4) {
            ctx->pc = 0x14F9F4u;
            return;
        }
    }
    ctx->pc = 0x14F9ECu;
    // 0x14f9ec: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x14f9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x14f9f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f9f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x14f9f4u;
}
