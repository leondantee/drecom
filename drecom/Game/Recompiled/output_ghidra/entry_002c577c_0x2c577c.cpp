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

// Function: entry_002c577c
// Address: 0x2c577c - 0x2c5800
void entry_002c577c_0x2c577c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c577c_0x2c577c");
#endif

    switch (ctx->pc) {
        case 0x2c57acu: goto label_2c57ac;
        default: break;
    }

    ctx->pc = 0x2c577cu;

    // 0x2c577c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c5780: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x2c5780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x2c5784: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c5784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c5788: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5788u;
    {
        const bool branch_taken_0x2c5788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5788) {
            ctx->pc = 0x2C5800u;
            return;
        }
    }
    ctx->pc = 0x2C5790u;
    // 0x2c5790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5794: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5798: 0x9463005a  lhu         $v1, 0x5A($v1)
    ctx->pc = 0x2c5798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x2c579c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C579Cu;
    {
        const bool branch_taken_0x2c579c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c579c) {
            ctx->pc = 0x2C5800u;
            return;
        }
    }
    ctx->pc = 0x2C57A4u;
    // 0x2c57a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C57A4u;
    SET_GPR_U32(ctx, 31, 0x2C57ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C57A4u, 0x2C57ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57ACu;
label_2c57ac:
    // 0x2c57ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c57acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c57b0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c57b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c57b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c57b8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C57B8u;
    {
        const bool branch_taken_0x2c57b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c57b8) {
            ctx->pc = 0x2C5800u;
            return;
        }
    }
    ctx->pc = 0x2C57C0u;
    // 0x2c57c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c57c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c57c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c57c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c57cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c57d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c57d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c57d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c57e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c57e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c57e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c57f0: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2c57f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c57fc: 0xa464005a  sh          $a0, 0x5A($v1)
    ctx->pc = 0x2c57fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2c5800u;
}
