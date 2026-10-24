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

// Function: entry_0012b52c
// Address: 0x12b52c - 0x12b570
void entry_0012b52c_0x12b52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b52c_0x12b52c");
#endif

    switch (ctx->pc) {
        case 0x12b54cu: goto label_12b54c;
        default: break;
    }

    ctx->pc = 0x12b52cu;

    // 0x12b52c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b530: 0x36263c00  ori         $a2, $s1, 0x3C00
    ctx->pc = 0x12b530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15360);
    // 0x12b534: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b538: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b53c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b540: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b544: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B544u;
    SET_GPR_U32(ctx, 31, 0x12B54Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B544u, 0x12B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B54Cu;
label_12b54c:
    // 0x12b54c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b550: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b554: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12b558: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b55c: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x12b55cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x12b560: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b564: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b56c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b570u;
}
