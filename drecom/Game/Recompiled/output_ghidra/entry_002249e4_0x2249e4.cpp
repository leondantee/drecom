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

// Function: entry_002249e4
// Address: 0x2249e4 - 0x224a64
void entry_002249e4_0x2249e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002249e4_0x2249e4");
#endif

    switch (ctx->pc) {
        case 0x224a10u: goto label_224a10;
        case 0x224a3cu: goto label_224a3c;
        default: break;
    }

    ctx->pc = 0x2249e4u;

label_2249e4:
    // 0x2249e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249e8:
    // 0x2249e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249ec:
    // 0x2249ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2249ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2249f0:
    // 0x2249f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2249f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2249f4:
    // 0x2249f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2249f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2249f8:
    // 0x2249f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2249f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2249fc:
    // 0x2249fc: 0x2442adc0  addiu       $v0, $v0, -0x5240
    ctx->pc = 0x2249fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
label_224a00:
    // 0x224a00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224a04:
    // 0x224a04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x224a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_224a08:
    // 0x224a08: 0x40f809  jalr        $v0
label_224a0c:
    if (ctx->pc == 0x224A0Cu) {
        ctx->pc = 0x224A10u;
        goto label_224a10;
    }
    ctx->pc = 0x224A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224A10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A08u, 0x224A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224A10u;
label_224a10:
    // 0x224a10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x224a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a14:
    // 0x224a14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a18:
    // 0x224a18: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x224a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_224a1c:
    // 0x224a1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_224a20:
    // 0x224a20: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x224a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_224a24:
    // 0x224a24: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x224a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_224a28:
    // 0x224a28: 0x2462ae20  addiu       $v0, $v1, -0x51E0
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946336));
label_224a2c:
    // 0x224a2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224a30:
    // 0x224a30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x224a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_224a34:
    // 0x224a34: 0x40f809  jalr        $v0
label_224a38:
    if (ctx->pc == 0x224A38u) {
        ctx->pc = 0x224A3Cu;
        goto label_224a3c;
    }
    ctx->pc = 0x224A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224A3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A34u, 0x224A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224A3Cu;
label_224a3c:
    // 0x224a3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a40:
    // 0x224a40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a44:
    // 0x224a44: 0x8444005c  lh          $a0, 0x5C($v0)
    ctx->pc = 0x224a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_224a48:
    // 0x224a48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_224a4c:
    if (ctx->pc == 0x224A4Cu) {
        ctx->pc = 0x224A50u;
        goto label_224a50;
    }
    ctx->pc = 0x224A48u;
    {
        const bool branch_taken_0x224a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a48) {
            ctx->pc = 0x224A64u;
            return;
        }
    }
    ctx->pc = 0x224A50u;
label_224a50:
    // 0x224a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a54:
    // 0x224a54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a58:
    // 0x224a58: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x224a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_224a5c:
    // 0x224a5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_224a60:
    // 0x224a60: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x224a60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x224a64u;
}
