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

// Function: entry_0014d944
// Address: 0x14d944 - 0x14d974
void entry_0014d944_0x14d944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d944_0x14d944");
#endif

    ctx->pc = 0x14d944u;

    // 0x14d944: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14d944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d94c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D94Cu;
    {
        const bool branch_taken_0x14d94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d94c) {
            ctx->pc = 0x14D974u;
            return;
        }
    }
    ctx->pc = 0x14D954u;
    // 0x14d954: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x14d954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x14d958: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14d95c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14d960: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x14d964: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x14d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14d968: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d96c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14d970: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14d970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x14d974u;
}
