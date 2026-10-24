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

// Function: entry_001c006c
// Address: 0x1c006c - 0x1c0100
void entry_001c006c_0x1c006c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c006c_0x1c006c");
#endif

    switch (ctx->pc) {
        case 0x1c007cu: goto label_1c007c;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c009cu: goto label_1c009c;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00bcu: goto label_1c00bc;
        default: break;
    }

    ctx->pc = 0x1c006cu;

    // 0x1c006c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0070: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0074: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0074u;
    SET_GPR_U32(ctx, 31, 0x1C007Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0074u, 0x1C007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C007Cu;
label_1c007c:
    // 0x1c007c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c007cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0080: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0080u;
    SET_GPR_U32(ctx, 31, 0x1C0088u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0080u, 0x1C0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0088u;
label_1c0088:
    // 0x1c0088: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c008c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0094: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0094u;
    SET_GPR_U32(ctx, 31, 0x1C009Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0094u, 0x1C009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C009Cu;
label_1c009c:
    // 0x1c009c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00a0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C00A0u;
    SET_GPR_U32(ctx, 31, 0x1C00A8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C00A0u, 0x1C00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00A8u;
label_1c00a8:
    // 0x1c00a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c00acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00b0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c00b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c00b4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C00B4u;
    SET_GPR_U32(ctx, 31, 0x1C00BCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C00B4u, 0x1C00BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00BCu;
label_1c00bc:
    // 0x1c00bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C00BCu;
    {
        const bool branch_taken_0x1c00bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00bc) {
            ctx->pc = 0x1C0160u;
            return;
        }
    }
    ctx->pc = 0x1C00C4u;
    // 0x1c00c4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c00c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c00c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c00cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C00CCu;
    {
        const bool branch_taken_0x1c00cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00cc) {
            ctx->pc = 0x1C0100u;
            return;
        }
    }
    ctx->pc = 0x1C00D4u;
    // 0x1c00d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c00dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c00e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c00e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c00e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C00E4u;
    {
        const bool branch_taken_0x1c00e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00e4) {
            ctx->pc = 0x1C0100u;
            return;
        }
    }
    ctx->pc = 0x1C00ECu;
    // 0x1c00ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c00f0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c00f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c00f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c00f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c00f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c00fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c0100u;
}
