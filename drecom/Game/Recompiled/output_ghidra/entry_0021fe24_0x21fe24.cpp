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

// Function: entry_0021fe24
// Address: 0x21fe24 - 0x21fe58
void entry_0021fe24_0x21fe24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe24_0x21fe24");
#endif

    ctx->pc = 0x21fe24u;

    // 0x21fe24: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fe28: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21fe2c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21fe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21fe30: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x21fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x21fe34: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fe38: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x21fe38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fe3c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21fe40: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21fe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21fe44: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE44u;
    {
        const bool branch_taken_0x21fe44 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe44) {
            ctx->pc = 0x21FE58u;
            return;
        }
    }
    ctx->pc = 0x21FE4Cu;
    // 0x21fe4c: 0x8fc20b18  lw          $v0, 0xB18($fp)
    ctx->pc = 0x21fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2840)));
    // 0x21fe50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21fe54: 0xafc20b18  sw          $v0, 0xB18($fp)
    ctx->pc = 0x21fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 2840), GPR_U32(ctx, 2));
    ctx->pc = 0x21fe58u;
}
