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

// Function: entry_001cf09c
// Address: 0x1cf09c - 0x1cf0d4
void entry_001cf09c_0x1cf09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf09c_0x1cf09c");
#endif

    ctx->pc = 0x1cf09cu;

    // 0x1cf09c: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cf0a0: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x1cf0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1cf0a4: 0x106003bc  beqz        $v1, . + 4 + (0x3BC << 2)
    ctx->pc = 0x1CF0A4u;
    {
        const bool branch_taken_0x1cf0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0a4) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF0ACu;
    // 0x1cf0ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cf0b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cf0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cf0b4: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x1cf0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1cf0b8: 0x108003b7  beqz        $a0, . + 4 + (0x3B7 << 2)
    ctx->pc = 0x1CF0B8u;
    {
        const bool branch_taken_0x1cf0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0b8) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF0C0u;
    // 0x1cf0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf0c8: 0xaca31b60  sw          $v1, 0x1B60($a1)
    ctx->pc = 0x1cf0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 3));
    // 0x1cf0cc: 0x100003b2  b           . + 4 + (0x3B2 << 2)
    ctx->pc = 0x1CF0CCu;
    {
        const bool branch_taken_0x1cf0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0cc) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF0D4u;
}
