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

// Function: entry_001bfdc0
// Address: 0x1bfdc0 - 0x1bfe5c
void entry_001bfdc0_0x1bfdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfdc0_0x1bfdc0");
#endif

    switch (ctx->pc) {
        case 0x1bfdd0u: goto label_1bfdd0;
        case 0x1bfddcu: goto label_1bfddc;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfdfcu: goto label_1bfdfc;
        default: break;
    }

    ctx->pc = 0x1bfdc0u;

    // 0x1bfdc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfdc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfdc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfdc8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BFDC8u;
    SET_GPR_U32(ctx, 31, 0x1BFDD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BFDC8u, 0x1BFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDD0u;
label_1bfdd0:
    // 0x1bfdd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfdd4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BFDD4u;
    SET_GPR_U32(ctx, 31, 0x1BFDDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BFDD4u, 0x1BFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDDCu;
label_1bfddc:
    // 0x1bfddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bfddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfde0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfde4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfde4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfde8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BFDE8u;
    SET_GPR_U32(ctx, 31, 0x1BFDF0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BFDE8u, 0x1BFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDF0u;
label_1bfdf0:
    // 0x1bfdf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfdf4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BFDF4u;
    SET_GPR_U32(ctx, 31, 0x1BFDFCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BFDF4u, 0x1BFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDFCu;
label_1bfdfc:
    // 0x1bfdfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe00: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1bfe00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1bfe04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bfe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfe08: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bfe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bfe0c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BFE0Cu;
    {
        const bool branch_taken_0x1bfe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe0c) {
            ctx->pc = 0x1BFE7Cu;
            return;
        }
    }
    ctx->pc = 0x1BFE14u;
    // 0x1bfe14: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bfe18: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bfe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bfe1c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BFE1Cu;
    {
        const bool branch_taken_0x1bfe1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe1c) {
            ctx->pc = 0x1BFE7Cu;
            return;
        }
    }
    ctx->pc = 0x1BFE24u;
    // 0x1bfe24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe28: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bfe2c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bfe30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfe34: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BFE34u;
    {
        const bool branch_taken_0x1bfe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe34) {
            ctx->pc = 0x1BFE7Cu;
            return;
        }
    }
    ctx->pc = 0x1BFE3Cu;
    // 0x1bfe3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe40: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bfe40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bfe44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFE44u;
    {
        const bool branch_taken_0x1bfe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe44) {
            ctx->pc = 0x1BFE5Cu;
            return;
        }
    }
    ctx->pc = 0x1BFE4Cu;
    // 0x1bfe4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe50: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1bfe50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfe54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFE54u;
    {
        const bool branch_taken_0x1bfe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe54) {
            ctx->pc = 0x1BFE68u;
            return;
        }
    }
    ctx->pc = 0x1BFE5Cu;
}
