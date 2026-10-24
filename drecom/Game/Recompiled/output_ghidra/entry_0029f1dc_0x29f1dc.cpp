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

// Function: entry_0029f1dc
// Address: 0x29f1dc - 0x29f244
void entry_0029f1dc_0x29f1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f1dc_0x29f1dc");
#endif

    switch (ctx->pc) {
        case 0x29f208u: goto label_29f208;
        case 0x29f23cu: goto label_29f23c;
        default: break;
    }

    ctx->pc = 0x29f1dcu;

    // 0x29f1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f1e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f1e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29f1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f1e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f1ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f1f0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29f1f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29f1f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29F1F8u;
    {
        const bool branch_taken_0x29f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1f8) {
            ctx->pc = 0x29F244u;
            return;
        }
    }
    ctx->pc = 0x29F200u;
    // 0x29f200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F200u;
    SET_GPR_U32(ctx, 31, 0x29F208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F200u, 0x29F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F208u;
label_29f208:
    // 0x29f208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f20c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f210: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f214: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x29f214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29f218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f21c: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29f220: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f224: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f228: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f22c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f230: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f234: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F234u;
    SET_GPR_U32(ctx, 31, 0x29F23Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F234u, 0x29F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29F23Cu;
    {
        const bool branch_taken_0x29f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f23c) {
            ctx->pc = 0x29F280u;
            return;
        }
    }
    ctx->pc = 0x29F244u;
}
