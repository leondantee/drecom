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

// Function: entry_0025b9b4
// Address: 0x25b9b4 - 0x25ba10
void entry_0025b9b4_0x25b9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b9b4_0x25b9b4");
#endif

    ctx->pc = 0x25b9b4u;

label_25b9b4:
    // 0x25b9b4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_25b9b8:
    // 0x25b9b8: 0x12a3023b  beq         $s5, $v1, . + 4 + (0x23B << 2)
label_25b9bc:
    if (ctx->pc == 0x25B9BCu) {
        ctx->pc = 0x25B9C0u;
        goto label_25b9c0;
    }
    ctx->pc = 0x25B9B8u;
    {
        const bool branch_taken_0x25b9b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x25b9b8) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25B9C0u;
label_25b9c0:
    // 0x25b9c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25b9c4:
    // 0x25b9c4: 0x12a30238  beq         $s5, $v1, . + 4 + (0x238 << 2)
label_25b9c8:
    if (ctx->pc == 0x25B9C8u) {
        ctx->pc = 0x25B9CCu;
        goto label_25b9cc;
    }
    ctx->pc = 0x25B9C4u;
    {
        const bool branch_taken_0x25b9c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x25b9c4) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25B9CCu;
label_25b9cc:
    // 0x25b9cc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b9d0:
    // 0x25b9d0: 0x8c64034c  lw          $a0, 0x34C($v1)
    ctx->pc = 0x25b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
label_25b9d4:
    // 0x25b9d4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x25b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_25b9d8:
    // 0x25b9d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25b9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25b9dc:
    // 0x25b9dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25b9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25b9e0:
    // 0x25b9e0: 0x2085fffd  addi        $a1, $a0, -0x3
    ctx->pc = 0x25b9e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_25b9e4:
    // 0x25b9e4: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x25b9e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_25b9e8:
    // 0x25b9e8: 0x1020022f  beqz        $at, . + 4 + (0x22F << 2)
label_25b9ec:
    if (ctx->pc == 0x25B9ECu) {
        ctx->pc = 0x25B9F0u;
        goto label_25b9f0;
    }
    ctx->pc = 0x25B9E8u;
    {
        const bool branch_taken_0x25b9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b9e8) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25B9F0u;
label_25b9f0:
    // 0x25b9f0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_25b9f4:
    // 0x25b9f4: 0x24c412f0  addiu       $a0, $a2, 0x12F0
    ctx->pc = 0x25b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4848));
label_25b9f8:
    // 0x25b9f8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25b9fc:
    // 0x25b9fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ba00:
    // 0x25ba00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ba04:
    // 0x25ba04: 0x600008  jr          $v1
label_25ba08:
    if (ctx->pc == 0x25BA08u) {
        ctx->pc = 0x25BA0Cu;
        goto label_25ba0c;
    }
    ctx->pc = 0x25BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BA04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25BA0Cu;
label_25ba0c:
    // 0x25ba0c: 0x0  nop
    ctx->pc = 0x25ba0cu;
    // NOP
    ctx->pc = 0x25ba10u;
}
