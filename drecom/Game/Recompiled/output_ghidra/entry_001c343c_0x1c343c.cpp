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

// Function: entry_001c343c
// Address: 0x1c343c - 0x1c34e8
void entry_001c343c_0x1c343c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c343c_0x1c343c");
#endif

    switch (ctx->pc) {
        case 0x1c344cu: goto label_1c344c;
        case 0x1c3458u: goto label_1c3458;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3478u: goto label_1c3478;
        case 0x1c348cu: goto label_1c348c;
        default: break;
    }

    ctx->pc = 0x1c343cu;

    // 0x1c343c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3440: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3444: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3444u;
    SET_GPR_U32(ctx, 31, 0x1C344Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3444u, 0x1C344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C344Cu;
label_1c344c:
    // 0x1c344c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3450: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3450u;
    SET_GPR_U32(ctx, 31, 0x1C3458u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3450u, 0x1C3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3458u;
label_1c3458:
    // 0x1c3458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c345c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3464: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3464u;
    SET_GPR_U32(ctx, 31, 0x1C346Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3464u, 0x1C346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C346Cu;
label_1c346c:
    // 0x1c346c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3470: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3470u;
    SET_GPR_U32(ctx, 31, 0x1C3478u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3470u, 0x1C3478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3478u;
label_1c3478:
    // 0x1c3478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c347c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3480: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3484: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3484u;
    SET_GPR_U32(ctx, 31, 0x1C348Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3484u, 0x1C348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C348Cu;
label_1c348c:
    // 0x1c348c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C348Cu;
    {
        const bool branch_taken_0x1c348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c348c) {
            ctx->pc = 0x1C3518u;
            return;
        }
    }
    ctx->pc = 0x1C3494u;
    // 0x1c3494: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3498: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c349c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C349Cu;
    {
        const bool branch_taken_0x1c349c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c349c) {
            ctx->pc = 0x1C34E8u;
            return;
        }
    }
    ctx->pc = 0x1C34A4u;
    // 0x1c34a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c34ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c34b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c34b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c34b4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C34B4u;
    {
        const bool branch_taken_0x1c34b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34b4) {
            ctx->pc = 0x1C34E8u;
            return;
        }
    }
    ctx->pc = 0x1C34BCu;
    // 0x1c34bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c34c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c34c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c34c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c34cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c34d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c34d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34d8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c34d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c34dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c34dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c34e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34e4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c34e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c34e8u;
}
