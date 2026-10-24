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

// Function: entry_00337a6c
// Address: 0x337a6c - 0x337b14
void entry_00337a6c_0x337a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337a6c_0x337a6c");
#endif

    switch (ctx->pc) {
        case 0x337a8cu: goto label_337a8c;
        default: break;
    }

    ctx->pc = 0x337a6cu;

    // 0x337a6c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a70: 0x8c224e40  lw          $v0, 0x4E40($at)
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E40u));
    // 0x337a74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x337a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337a78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a7c: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E48u));
    // 0x337a80: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x337a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x337a84: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x337A84u;
    SET_GPR_U32(ctx, 31, 0x337A8Cu);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x337A84u, 0x337A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A8Cu;
label_337a8c:
    // 0x337a8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a90: 0xac224e38  sw          $v0, 0x4E38($at)
    ctx->pc = 0x337a90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E38u, _value); } while (0);
    // 0x337a94: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x337A94u;
    {
        const bool branch_taken_0x337a94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x337a94) {
            ctx->pc = 0x337B44u;
            return;
        }
    }
    ctx->pc = 0x337A9Cu;
    // 0x337a9c: 0x2602663e  addiu       $v0, $s0, 0x663E
    ctx->pc = 0x337a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26174));
    // 0x337aa0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337aa4: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894EC0u, _value); } while (0);
    // 0x337aa8: 0x9202683e  lbu         $v0, 0x683E($s0)
    ctx->pc = 0x337aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26686)));
    // 0x337aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337ab0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x337ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337ab4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337ab8: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x337ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894EC0u));
    // 0x337abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337ac0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337ac4: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894EC0u, _value); } while (0);
    // 0x337ac8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337acc: 0x8c244e40  lw          $a0, 0x4E40($at)
    ctx->pc = 0x337accu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x894E40u));
    // 0x337ad0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x337ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x337ad4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337ad8: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x337ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894EC0u));
    // 0x337adc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x337adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x337ae0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337ae4: 0x8c224e48  lw          $v0, 0x4E48($at)
    ctx->pc = 0x337ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E48u));
    // 0x337ae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337aec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337af0: 0x8c234ec0  lw          $v1, 0x4EC0($at)
    ctx->pc = 0x337af0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894EC0u));
    // 0x337af4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x337af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x337af8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337afc: 0x8c224e50  lw          $v0, 0x4E50($at)
    ctx->pc = 0x337afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E50u));
    // 0x337b00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337B00u;
    {
        const bool branch_taken_0x337b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337b00) {
            ctx->pc = 0x337B14u;
            return;
        }
    }
    ctx->pc = 0x337B08u;
    // 0x337b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337b0c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b10: 0xac224e50  sw          $v0, 0x4E50($at)
    ctx->pc = 0x337b10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E50u, _value); } while (0);
    ctx->pc = 0x337b14u;
}
