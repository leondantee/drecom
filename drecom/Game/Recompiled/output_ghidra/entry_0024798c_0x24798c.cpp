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

// Function: entry_0024798c
// Address: 0x24798c - 0x247a38
void entry_0024798c_0x24798c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024798c_0x24798c");
#endif

    switch (ctx->pc) {
        case 0x2479acu: goto label_2479ac;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f4u: goto label_2479f4;
        case 0x247a24u: goto label_247a24;
        default: break;
    }

    ctx->pc = 0x24798cu;

    // 0x24798c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x24798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247990: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x247990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x247994: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x247994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x247998: 0xa482127e  sh          $v0, 0x127E($a0)
    ctx->pc = 0x247998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x24799c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x24799Cu;
    {
        const bool branch_taken_0x24799c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24799c) {
            ctx->pc = 0x247A38u;
            return;
        }
    }
    ctx->pc = 0x2479A4u;
    // 0x2479a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2479A4u;
    SET_GPR_U32(ctx, 31, 0x2479ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2479A4u, 0x2479ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ACu;
label_2479ac:
    // 0x2479ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2479acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2479b0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2479b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2479b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2479b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2479b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2479bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2479bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2479c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2479c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2479c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2479c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2479c8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2479c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2479cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2479d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2479d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2479d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2479d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2479d8: 0x24065a26  addiu       $a2, $zero, 0x5A26
    ctx->pc = 0x2479d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23078));
    // 0x2479dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2479dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2479e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2479e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2479e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2479E4u;
    SET_GPR_U32(ctx, 31, 0x2479ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2479E4u, 0x2479ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ECu;
label_2479ec:
    // 0x2479ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2479ECu;
    SET_GPR_U32(ctx, 31, 0x2479F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2479ECu, 0x2479F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479F4u;
label_2479f4:
    // 0x2479f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2479f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2479f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2479f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2479fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2479FCu;
    {
        const bool branch_taken_0x2479fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2479fc) {
            ctx->pc = 0x247A38u;
            return;
        }
    }
    ctx->pc = 0x247A04u;
    // 0x247a04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x247a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x247a10: 0x24065a26  addiu       $a2, $zero, 0x5A26
    ctx->pc = 0x247a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23078));
    // 0x247a14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x247a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247a1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x247A1Cu;
    SET_GPR_U32(ctx, 31, 0x247A24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x247A1Cu, 0x247A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A24u;
label_247a24:
    // 0x247a24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a28: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x247a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x247a2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x247a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x247a30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x247a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x247a34: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x247a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    ctx->pc = 0x247a38u;
}
