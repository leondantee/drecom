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

// Function: entry_001c646c
// Address: 0x1c646c - 0x1c6518
void entry_001c646c_0x1c646c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c646c_0x1c646c");
#endif

    switch (ctx->pc) {
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64bcu: goto label_1c64bc;
        default: break;
    }

    ctx->pc = 0x1c646cu;

    // 0x1c646c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6470: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6474: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C6474u;
    SET_GPR_U32(ctx, 31, 0x1C647Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C6474u, 0x1C647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C647Cu;
label_1c647c:
    // 0x1c647c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6480: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6480u;
    SET_GPR_U32(ctx, 31, 0x1C6488u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6480u, 0x1C6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6488u;
label_1c6488:
    // 0x1c6488: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c648c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6490: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6494: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C6494u;
    SET_GPR_U32(ctx, 31, 0x1C649Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C6494u, 0x1C649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C649Cu;
label_1c649c:
    // 0x1c649c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64a0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C64A0u;
    SET_GPR_U32(ctx, 31, 0x1C64A8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C64A0u, 0x1C64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64A8u;
label_1c64a8:
    // 0x1c64a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c64acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64b0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c64b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c64b4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C64B4u;
    SET_GPR_U32(ctx, 31, 0x1C64BCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C64B4u, 0x1C64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64BCu;
label_1c64bc:
    // 0x1c64bc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C64BCu;
    {
        const bool branch_taken_0x1c64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64bc) {
            ctx->pc = 0x1C6548u;
            return;
        }
    }
    ctx->pc = 0x1C64C4u;
    // 0x1c64c4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c64c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c64c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c64cc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C64CCu;
    {
        const bool branch_taken_0x1c64cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64cc) {
            ctx->pc = 0x1C6518u;
            return;
        }
    }
    ctx->pc = 0x1C64D4u;
    // 0x1c64d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c64d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c64dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c64e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c64e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c64e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C64E4u;
    {
        const bool branch_taken_0x1c64e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64e4) {
            ctx->pc = 0x1C6518u;
            return;
        }
    }
    ctx->pc = 0x1C64ECu;
    // 0x1c64ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c64ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64f0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c64f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c64f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c64f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c64fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c6500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6508: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c650c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6510: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6514: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c6514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c6518u;
}
