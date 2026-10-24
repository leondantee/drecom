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

// Function: entry_001c0fec
// Address: 0x1c0fec - 0x1c1080
void entry_001c0fec_0x1c0fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0fec_0x1c0fec");
#endif

    switch (ctx->pc) {
        case 0x1c0ffcu: goto label_1c0ffc;
        case 0x1c1008u: goto label_1c1008;
        case 0x1c101cu: goto label_1c101c;
        case 0x1c1028u: goto label_1c1028;
        case 0x1c103cu: goto label_1c103c;
        default: break;
    }

    ctx->pc = 0x1c0fecu;

    // 0x1c0fec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ff0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0ff0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0ff4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0FF4u;
    SET_GPR_U32(ctx, 31, 0x1C0FFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0FF4u, 0x1C0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FFCu;
label_1c0ffc:
    // 0x1c0ffc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1000: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1000u;
    SET_GPR_U32(ctx, 31, 0x1C1008u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1000u, 0x1C1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1008u;
label_1c1008:
    // 0x1c1008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c100c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1010: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1014: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C1014u;
    SET_GPR_U32(ctx, 31, 0x1C101Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C1014u, 0x1C101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C101Cu;
label_1c101c:
    // 0x1c101c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1020: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C1020u;
    SET_GPR_U32(ctx, 31, 0x1C1028u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C1020u, 0x1C1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1028u;
label_1c1028:
    // 0x1c1028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c102c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1030: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c1030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1034: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C1034u;
    SET_GPR_U32(ctx, 31, 0x1C103Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C1034u, 0x1C103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C103Cu;
label_1c103c:
    // 0x1c103c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C103Cu;
    {
        const bool branch_taken_0x1c103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c103c) {
            ctx->pc = 0x1C10E0u;
            return;
        }
    }
    ctx->pc = 0x1C1044u;
    // 0x1c1044: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c1048: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c1048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c104c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C104Cu;
    {
        const bool branch_taken_0x1c104c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c104c) {
            ctx->pc = 0x1C1080u;
            return;
        }
    }
    ctx->pc = 0x1C1054u;
    // 0x1c1054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1058: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c105c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1060: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1064: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1064u;
    {
        const bool branch_taken_0x1c1064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1064) {
            ctx->pc = 0x1C1080u;
            return;
        }
    }
    ctx->pc = 0x1C106Cu;
    // 0x1c106c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1070: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c1070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1074: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1078: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c1078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c107c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c107cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c1080u;
}
