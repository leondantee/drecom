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

// Function: entry_0012f45c
// Address: 0x12f45c - 0x12f4e0
void entry_0012f45c_0x12f45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f45c_0x12f45c");
#endif

    switch (ctx->pc) {
        case 0x12f46cu: goto label_12f46c;
        case 0x12f478u: goto label_12f478;
        case 0x12f488u: goto label_12f488;
        case 0x12f494u: goto label_12f494;
        default: break;
    }

    ctx->pc = 0x12f45cu;

    // 0x12f45c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f464: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F464u;
    SET_GPR_U32(ctx, 31, 0x12F46Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F464u, 0x12F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F46Cu;
label_12f46c:
    // 0x12f46c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f470: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F470u;
    SET_GPR_U32(ctx, 31, 0x12F478u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F470u, 0x12F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F478u;
label_12f478:
    // 0x12f478: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f47c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f47cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f480: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F480u;
    SET_GPR_U32(ctx, 31, 0x12F488u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F480u, 0x12F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F488u;
label_12f488:
    // 0x12f488: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f48c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F48Cu;
    SET_GPR_U32(ctx, 31, 0x12F494u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F48Cu, 0x12F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F494u;
label_12f494:
    // 0x12f494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f498: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f49c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F49Cu;
    {
        const bool branch_taken_0x12f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f49c) {
            ctx->pc = 0x12F4E0u;
            return;
        }
    }
    ctx->pc = 0x12F4A4u;
    // 0x12f4a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f4a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12f4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f4b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f4b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12f4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f4bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12f4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f4c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12f4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f4cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12f4d4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12f4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f4d8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F4D8u;
    {
        const bool branch_taken_0x12f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f4d8) {
            ctx->pc = 0x12F4E0u;
            return;
        }
    }
    ctx->pc = 0x12F4E0u;
}
