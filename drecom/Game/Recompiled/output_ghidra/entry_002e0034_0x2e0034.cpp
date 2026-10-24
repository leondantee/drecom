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

// Function: entry_002e0034
// Address: 0x2e0034 - 0x2e00bc
void entry_002e0034_0x2e0034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0034_0x2e0034");
#endif

    switch (ctx->pc) {
        case 0x2e0098u: goto label_2e0098;
        default: break;
    }

    ctx->pc = 0x2e0034u;

    // 0x2e0034: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e0034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0038: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e003c: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x2e003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x2e0040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e0044: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e0044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e0048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e004c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e0050: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e0050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e0054: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e0054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e0058: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e0058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e005c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e0060: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e0060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e0064: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e0068: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e0068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e006c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0074: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e0074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0078: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e007c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e007cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0080: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0084: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e0084u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0088: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e008c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0090: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0090u;
    SET_GPR_U32(ctx, 31, 0x2E0098u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0090u, 0x2E0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0098u;
label_2e0098:
    // 0x2e0098: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e0098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e009c: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2e009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2e00a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e00a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e00a8: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2e00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x2e00ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e00acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e00b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e00b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e00b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e00b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e00bcu;
}
