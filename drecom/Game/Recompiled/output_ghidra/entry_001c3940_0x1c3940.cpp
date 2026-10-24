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

// Function: entry_001c3940
// Address: 0x1c3940 - 0x1c39d0
void entry_001c3940_0x1c3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3940_0x1c3940");
#endif

    switch (ctx->pc) {
        case 0x1c3950u: goto label_1c3950;
        case 0x1c395cu: goto label_1c395c;
        case 0x1c3970u: goto label_1c3970;
        case 0x1c397cu: goto label_1c397c;
        case 0x1c39c8u: goto label_1c39c8;
        default: break;
    }

    ctx->pc = 0x1c3940u;

    // 0x1c3940: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3944: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3944u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3948: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3948u;
    SET_GPR_U32(ctx, 31, 0x1C3950u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3948u, 0x1C3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3950u;
label_1c3950:
    // 0x1c3950: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3954: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3954u;
    SET_GPR_U32(ctx, 31, 0x1C395Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3954u, 0x1C395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C395Cu;
label_1c395c:
    // 0x1c395c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c395cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3960: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3968: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3968u;
    SET_GPR_U32(ctx, 31, 0x1C3970u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3968u, 0x1C3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3970u;
label_1c3970:
    // 0x1c3970: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3974: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3974u;
    SET_GPR_U32(ctx, 31, 0x1C397Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3974u, 0x1C397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C397Cu;
label_1c397c:
    // 0x1c397c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3980: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c3980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c3984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c3984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3988: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c3988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c398c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C398Cu;
    {
        const bool branch_taken_0x1c398c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c398c) {
            ctx->pc = 0x1C39D0u;
            return;
        }
    }
    ctx->pc = 0x1C3994u;
    // 0x1c3994: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3998: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c399c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C399Cu;
    {
        const bool branch_taken_0x1c399c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c399c) {
            ctx->pc = 0x1C39D0u;
            return;
        }
    }
    ctx->pc = 0x1C39A4u;
    // 0x1c39a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c39ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c39b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c39b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c39b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C39B4u;
    {
        const bool branch_taken_0x1c39b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39b4) {
            ctx->pc = 0x1C39D0u;
            return;
        }
    }
    ctx->pc = 0x1C39BCu;
    // 0x1c39bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39c0: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C39C0u;
    SET_GPR_U32(ctx, 31, 0x1C39C8u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C39C0u, 0x1C39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C8u;
label_1c39c8:
    // 0x1c39c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C39C8u;
    {
        const bool branch_taken_0x1c39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39c8) {
            ctx->pc = 0x1C3A24u;
            return;
        }
    }
    ctx->pc = 0x1C39D0u;
}
