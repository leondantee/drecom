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

// Function: entry_001c31e0
// Address: 0x1c31e0 - 0x1c3270
void entry_001c31e0_0x1c31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c31e0_0x1c31e0");
#endif

    switch (ctx->pc) {
        case 0x1c31f0u: goto label_1c31f0;
        case 0x1c31fcu: goto label_1c31fc;
        case 0x1c3210u: goto label_1c3210;
        case 0x1c321cu: goto label_1c321c;
        case 0x1c3268u: goto label_1c3268;
        default: break;
    }

    ctx->pc = 0x1c31e0u;

    // 0x1c31e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c31e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c31e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c31e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C31E8u;
    SET_GPR_U32(ctx, 31, 0x1C31F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C31E8u, 0x1C31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31F0u;
label_1c31f0:
    // 0x1c31f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c31f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C31F4u;
    SET_GPR_U32(ctx, 31, 0x1C31FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C31F4u, 0x1C31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31FCu;
label_1c31fc:
    // 0x1c31fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c31fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3208: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3208u;
    SET_GPR_U32(ctx, 31, 0x1C3210u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3208u, 0x1C3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3210u;
label_1c3210:
    // 0x1c3210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3214: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3214u;
    SET_GPR_U32(ctx, 31, 0x1C321Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3214u, 0x1C321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C321Cu;
label_1c321c:
    // 0x1c321c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3220: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c3220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c3224: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c3224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3228: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c3228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c322c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C322Cu;
    {
        const bool branch_taken_0x1c322c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c322c) {
            ctx->pc = 0x1C3270u;
            return;
        }
    }
    ctx->pc = 0x1C3234u;
    // 0x1c3234: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3238: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c323c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C323Cu;
    {
        const bool branch_taken_0x1c323c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c323c) {
            ctx->pc = 0x1C3270u;
            return;
        }
    }
    ctx->pc = 0x1C3244u;
    // 0x1c3244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3248: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c324c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c324cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c3250: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3254: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3254u;
    {
        const bool branch_taken_0x1c3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3254) {
            ctx->pc = 0x1C3270u;
            return;
        }
    }
    ctx->pc = 0x1C325Cu;
    // 0x1c325c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3260: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C3260u;
    SET_GPR_U32(ctx, 31, 0x1C3268u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C3260u, 0x1C3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3268u;
label_1c3268:
    // 0x1c3268: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3268u;
    {
        const bool branch_taken_0x1c3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3268) {
            ctx->pc = 0x1C32C4u;
            return;
        }
    }
    ctx->pc = 0x1C3270u;
}
