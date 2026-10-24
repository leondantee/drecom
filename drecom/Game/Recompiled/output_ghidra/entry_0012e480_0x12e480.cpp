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

// Function: entry_0012e480
// Address: 0x12e480 - 0x12e540
void entry_0012e480_0x12e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e480_0x12e480");
#endif

    switch (ctx->pc) {
        case 0x12e4c0u: goto label_12e4c0;
        case 0x12e4d0u: goto label_12e4d0;
        case 0x12e4f0u: goto label_12e4f0;
        case 0x12e510u: goto label_12e510;
        default: break;
    }

    ctx->pc = 0x12e480u;

    // 0x12e480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e484: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e48c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12e490: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E5A0u;
            return;
        }
    }
    ctx->pc = 0x12E498u;
    // 0x12e498: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e49c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e4a0: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x12e4a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12e4a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12e4ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12e4b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4b4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x12e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12e4b8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x12E4B8u;
    SET_GPR_U32(ctx, 31, 0x12E4C0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x12E4B8u, 0x12E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4C0u;
label_12e4c0:
    // 0x12e4c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4c4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x12e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12e4c8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x12E4C8u;
    SET_GPR_U32(ctx, 31, 0x12E4D0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x12E4C8u, 0x12E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4D0u;
label_12e4d0:
    // 0x12e4d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4d4: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x12e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12e4d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12e4e0: 0x24642150  addiu       $a0, $v1, 0x2150
    ctx->pc = 0x12e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8528));
    // 0x12e4e4: 0x244520d0  addiu       $a1, $v0, 0x20D0
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8400));
    // 0x12e4e8: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x12E4E8u;
    SET_GPR_U32(ctx, 31, 0x12E4F0u);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x12E4E8u, 0x12E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4F0u;
label_12e4f0:
    // 0x12e4f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4f4: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12e4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e4fc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12e500: 0x246422e0  addiu       $a0, $v1, 0x22E0
    ctx->pc = 0x12e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8928));
    // 0x12e504: 0x24452260  addiu       $a1, $v0, 0x2260
    ctx->pc = 0x12e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8800));
    // 0x12e508: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x12E508u;
    SET_GPR_U32(ctx, 31, 0x12E510u);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x12E508u, 0x12E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E510u;
label_12e510:
    // 0x12e510: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e514: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12e514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12e518: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12e51c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12e520: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E520u;
    {
        const bool branch_taken_0x12e520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e520) {
            ctx->pc = 0x12E540u;
            return;
        }
    }
    ctx->pc = 0x12E528u;
    // 0x12e528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e52c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e530: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x12e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12e534: 0xa0430fc0  sb          $v1, 0xFC0($v0)
    ctx->pc = 0x12e534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4032), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e538: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12E538u;
    {
        const bool branch_taken_0x12e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e538) {
            ctx->pc = 0x12E5A0u;
            return;
        }
    }
    ctx->pc = 0x12E540u;
}
