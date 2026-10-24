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

// Function: entry_0020d190
// Address: 0x20d190 - 0x20d20c
void entry_0020d190_0x20d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d190_0x20d190");
#endif

    switch (ctx->pc) {
        case 0x20d1a0u: goto label_20d1a0;
        case 0x20d1acu: goto label_20d1ac;
        case 0x20d1b8u: goto label_20d1b8;
        case 0x20d1ccu: goto label_20d1cc;
        default: break;
    }

    ctx->pc = 0x20d190u;

    // 0x20d190: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d198: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D198u;
    SET_GPR_U32(ctx, 31, 0x20D1A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D198u, 0x20D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1A0u;
label_20d1a0:
    // 0x20d1a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20D1A4u;
    SET_GPR_U32(ctx, 31, 0x20D1ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20D1A4u, 0x20D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1ACu;
label_20d1ac:
    // 0x20d1ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D1B0u;
    SET_GPR_U32(ctx, 31, 0x20D1B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D1B0u, 0x20D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1B8u;
label_20d1b8:
    // 0x20d1b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20d1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d1bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d1c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20D1C4u;
    SET_GPR_U32(ctx, 31, 0x20D1CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20D1C4u, 0x20D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1CCu;
label_20d1cc:
    // 0x20d1cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d1d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20D1D4u;
    {
        const bool branch_taken_0x20d1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d1d4) {
            ctx->pc = 0x20D20Cu;
            return;
        }
    }
    ctx->pc = 0x20D1DCu;
    // 0x20d1dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d1e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d1e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d1f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d200: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d204: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d208: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20d208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x20d20cu;
}
