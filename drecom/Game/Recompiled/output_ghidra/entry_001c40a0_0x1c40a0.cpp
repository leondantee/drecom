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

// Function: entry_001c40a0
// Address: 0x1c40a0 - 0x1c4130
void entry_001c40a0_0x1c40a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c40a0_0x1c40a0");
#endif

    switch (ctx->pc) {
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40d0u: goto label_1c40d0;
        case 0x1c40dcu: goto label_1c40dc;
        case 0x1c4128u: goto label_1c4128;
        default: break;
    }

    ctx->pc = 0x1c40a0u;

    // 0x1c40a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c40a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c40a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c40a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C40A8u;
    SET_GPR_U32(ctx, 31, 0x1C40B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C40A8u, 0x1C40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40B0u;
label_1c40b0:
    // 0x1c40b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C40B4u;
    SET_GPR_U32(ctx, 31, 0x1C40BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C40B4u, 0x1C40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40BCu;
label_1c40bc:
    // 0x1c40bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c40bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c40c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c40c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c40c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C40C8u;
    SET_GPR_U32(ctx, 31, 0x1C40D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C40C8u, 0x1C40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40D0u;
label_1c40d0:
    // 0x1c40d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c40d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C40D4u;
    SET_GPR_U32(ctx, 31, 0x1C40DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C40D4u, 0x1C40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40DCu;
label_1c40dc:
    // 0x1c40dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40e0: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c40e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c40e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c40e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c40e8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c40e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c40ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C40ECu;
    {
        const bool branch_taken_0x1c40ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c40ec) {
            ctx->pc = 0x1C4130u;
            return;
        }
    }
    ctx->pc = 0x1C40F4u;
    // 0x1c40f4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c40f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c40f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c40fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C40FCu;
    {
        const bool branch_taken_0x1c40fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c40fc) {
            ctx->pc = 0x1C4130u;
            return;
        }
    }
    ctx->pc = 0x1C4104u;
    // 0x1c4104: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c410c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c4110: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4114: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4114u;
    {
        const bool branch_taken_0x1c4114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4114) {
            ctx->pc = 0x1C4130u;
            return;
        }
    }
    ctx->pc = 0x1C411Cu;
    // 0x1c411c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4120: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C4120u;
    SET_GPR_U32(ctx, 31, 0x1C4128u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C4120u, 0x1C4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4128u;
label_1c4128:
    // 0x1c4128: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4128u;
    {
        const bool branch_taken_0x1c4128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4128) {
            ctx->pc = 0x1C4184u;
            return;
        }
    }
    ctx->pc = 0x1C4130u;
}
