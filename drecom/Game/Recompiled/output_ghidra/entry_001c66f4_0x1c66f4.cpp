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

// Function: entry_001c66f4
// Address: 0x1c66f4 - 0x1c676c
void entry_001c66f4_0x1c66f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c66f4_0x1c66f4");
#endif

    switch (ctx->pc) {
        case 0x1c6704u: goto label_1c6704;
        case 0x1c6710u: goto label_1c6710;
        case 0x1c6724u: goto label_1c6724;
        case 0x1c6730u: goto label_1c6730;
        default: break;
    }

    ctx->pc = 0x1c66f4u;

    // 0x1c66f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c66f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c66f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c66fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C66FCu;
    SET_GPR_U32(ctx, 31, 0x1C6704u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C66FCu, 0x1C6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6704u;
label_1c6704:
    // 0x1c6704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6708: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6708u;
    SET_GPR_U32(ctx, 31, 0x1C6710u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6708u, 0x1C6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6710u;
label_1c6710:
    // 0x1c6710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6714: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6718: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6718u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c671c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C671Cu;
    SET_GPR_U32(ctx, 31, 0x1C6724u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C671Cu, 0x1C6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6724u;
label_1c6724:
    // 0x1c6724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c6724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6728: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C6728u;
    SET_GPR_U32(ctx, 31, 0x1C6730u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C6728u, 0x1C6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6730u;
label_1c6730:
    // 0x1c6730: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c6734: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6738: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6738u;
    {
        const bool branch_taken_0x1c6738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6738) {
            ctx->pc = 0x1C676Cu;
            return;
        }
    }
    ctx->pc = 0x1C6740u;
    // 0x1c6740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6744: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6748: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c674c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6750: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6750u;
    {
        const bool branch_taken_0x1c6750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6750) {
            ctx->pc = 0x1C676Cu;
            return;
        }
    }
    ctx->pc = 0x1C6758u;
    // 0x1c6758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c675c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6760: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6764: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6768: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c676cu;
}
