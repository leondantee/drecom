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

// Function: entry_0036c9bc
// Address: 0x36c9bc - 0x36ca50
void entry_0036c9bc_0x36c9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c9bc_0x36c9bc");
#endif

    switch (ctx->pc) {
        case 0x36ca48u: goto label_36ca48;
        default: break;
    }

    ctx->pc = 0x36c9bcu;

    // 0x36c9bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c9c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c9c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c9c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c9d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c9d4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36c9d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c9dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c9e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c9e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c9ec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36c9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36c9f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36c9f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36c9f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c9fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36c9fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36ca00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ca04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36ca08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x36ca08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36ca0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36ca0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x36ca10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca14: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x36ca14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x36ca18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca1c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x36ca1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x36ca20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36CA20u;
    {
        const bool branch_taken_0x36ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca20) {
            ctx->pc = 0x36CA50u;
            return;
        }
    }
    ctx->pc = 0x36CA28u;
    // 0x36ca28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ca34: 0x24065a0b  addiu       $a2, $zero, 0x5A0B
    ctx->pc = 0x36ca34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23051));
    // 0x36ca38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ca3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ca40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36CA40u;
    SET_GPR_U32(ctx, 31, 0x36CA48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36CA40u, 0x36CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA48u;
label_36ca48:
    // 0x36ca48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36CA48u;
    {
        const bool branch_taken_0x36ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca48) {
            ctx->pc = 0x36CA70u;
            return;
        }
    }
    ctx->pc = 0x36CA50u;
}
