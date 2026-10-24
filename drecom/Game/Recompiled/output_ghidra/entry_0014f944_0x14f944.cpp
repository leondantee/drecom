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

// Function: entry_0014f944
// Address: 0x14f944 - 0x14f960
void entry_0014f944_0x14f944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f944_0x14f944");
#endif

    ctx->pc = 0x14f944u;

    // 0x14f944: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14f948: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x14f94c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F950u;
    {
        const bool branch_taken_0x14f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f950) {
            ctx->pc = 0x14F960u;
            return;
        }
    }
    ctx->pc = 0x14F958u;
    // 0x14f958: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
    // 0x14f95c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x14f960u;
}
