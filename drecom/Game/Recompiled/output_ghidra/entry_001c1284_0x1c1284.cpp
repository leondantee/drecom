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

// Function: entry_001c1284
// Address: 0x1c1284 - 0x1c12fc
void entry_001c1284_0x1c1284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1284_0x1c1284");
#endif

    switch (ctx->pc) {
        case 0x1c1294u: goto label_1c1294;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12b4u: goto label_1c12b4;
        case 0x1c12c0u: goto label_1c12c0;
        default: break;
    }

    ctx->pc = 0x1c1284u;

    // 0x1c1284: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c128c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C128Cu;
    SET_GPR_U32(ctx, 31, 0x1C1294u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C128Cu, 0x1C1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1294u;
label_1c1294:
    // 0x1c1294: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1298: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1298u;
    SET_GPR_U32(ctx, 31, 0x1C12A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1298u, 0x1C12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12A0u;
label_1c12a0:
    // 0x1c12a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c12a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c12a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c12a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c12a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c12ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C12ACu;
    SET_GPR_U32(ctx, 31, 0x1C12B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C12ACu, 0x1C12B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12B4u;
label_1c12b4:
    // 0x1c12b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c12b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C12B8u;
    SET_GPR_U32(ctx, 31, 0x1C12C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C12B8u, 0x1C12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12C0u;
label_1c12c0:
    // 0x1c12c0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c12c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c12c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c12c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C12C8u;
    {
        const bool branch_taken_0x1c12c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c12c8) {
            ctx->pc = 0x1C12FCu;
            return;
        }
    }
    ctx->pc = 0x1C12D0u;
    // 0x1c12d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c12d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c12d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c12dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c12dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c12e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C12E0u;
    {
        const bool branch_taken_0x1c12e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c12e0) {
            ctx->pc = 0x1C12FCu;
            return;
        }
    }
    ctx->pc = 0x1C12E8u;
    // 0x1c12e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c12ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c12f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c12f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c12f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c12fcu;
}
