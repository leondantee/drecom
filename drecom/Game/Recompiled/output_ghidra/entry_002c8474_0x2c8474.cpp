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

// Function: entry_002c8474
// Address: 0x2c8474 - 0x2c8508
void entry_002c8474_0x2c8474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8474_0x2c8474");
#endif

    switch (ctx->pc) {
        case 0x2c84b4u: goto label_2c84b4;
        default: break;
    }

    ctx->pc = 0x2c8474u;

    // 0x2c8474: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8478: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c8478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c847c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C847Cu;
    {
        const bool branch_taken_0x2c847c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c847c) {
            ctx->pc = 0x2C85B4u;
            return;
        }
    }
    ctx->pc = 0x2C8484u;
    // 0x2c8484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c8488: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x2c8488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x2c848c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c848cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c8490: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C8490u;
    {
        const bool branch_taken_0x2c8490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8490) {
            ctx->pc = 0x2C8508u;
            return;
        }
    }
    ctx->pc = 0x2C8498u;
    // 0x2c8498: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c849c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c84a0: 0x9463005a  lhu         $v1, 0x5A($v1)
    ctx->pc = 0x2c84a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x2c84a4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C84A4u;
    {
        const bool branch_taken_0x2c84a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c84a4) {
            ctx->pc = 0x2C8508u;
            return;
        }
    }
    ctx->pc = 0x2C84ACu;
    // 0x2c84ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C84ACu;
    SET_GPR_U32(ctx, 31, 0x2C84B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C84ACu, 0x2C84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84B4u;
label_2c84b4:
    // 0x2c84b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c84b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c84b8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c84b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c84bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c84bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c84c0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C84C0u;
    {
        const bool branch_taken_0x2c84c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c84c0) {
            ctx->pc = 0x2C8508u;
            return;
        }
    }
    ctx->pc = 0x2C84C8u;
    // 0x2c84c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c84cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c84d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c84d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c84d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c84dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c84e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c84e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c84e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c84ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c84f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c84f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c84f8: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2c84f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2c84fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8500: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8504: 0xa464005a  sh          $a0, 0x5A($v1)
    ctx->pc = 0x2c8504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2c8508u;
}
