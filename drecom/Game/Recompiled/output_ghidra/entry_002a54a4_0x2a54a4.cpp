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

// Function: entry_002a54a4
// Address: 0x2a54a4 - 0x2a5508
void entry_002a54a4_0x2a54a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a54a4_0x2a54a4");
#endif

    switch (ctx->pc) {
        case 0x2a54acu: goto label_2a54ac;
        default: break;
    }

    ctx->pc = 0x2a54a4u;

    // 0x2a54a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A54A4u;
    SET_GPR_U32(ctx, 31, 0x2A54ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A54A4u, 0x2A54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54ACu;
label_2a54ac:
    // 0x2a54ac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a54acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a54b0: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2a54b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2a54b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a54b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a54b8: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A54B8u;
    {
        const bool branch_taken_0x2a54b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a54b8) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A54C0u;
    // 0x2a54c0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a54c8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2a54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a54cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2a54ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2a54d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A54D0u;
    {
        const bool branch_taken_0x2a54d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a54d0) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A54D8u;
    // 0x2a54d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a54dc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a54e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a54e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2a54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a54e8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54ec: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2a54ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a54f0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a54f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a54f8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54fc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a54fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5500: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5504: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a5504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a5508u;
}
