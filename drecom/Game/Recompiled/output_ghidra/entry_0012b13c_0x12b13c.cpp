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

// Function: entry_0012b13c
// Address: 0x12b13c - 0x12b19c
void entry_0012b13c_0x12b13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b13c_0x12b13c");
#endif

    switch (ctx->pc) {
        case 0x12b14cu: goto label_12b14c;
        case 0x12b158u: goto label_12b158;
        case 0x12b168u: goto label_12b168;
        case 0x12b174u: goto label_12b174;
        default: break;
    }

    ctx->pc = 0x12b13cu;

    // 0x12b13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b144: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B144u;
    SET_GPR_U32(ctx, 31, 0x12B14Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B144u, 0x12B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B14Cu;
label_12b14c:
    // 0x12b14c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b150: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12B150u;
    SET_GPR_U32(ctx, 31, 0x12B158u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B150u, 0x12B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B158u;
label_12b158:
    // 0x12b158: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b15c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b15cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b160: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B160u;
    SET_GPR_U32(ctx, 31, 0x12B168u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B160u, 0x12B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B168u;
label_12b168:
    // 0x12b168: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b16c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12B16Cu;
    SET_GPR_U32(ctx, 31, 0x12B174u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B16Cu, 0x12B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B174u;
label_12b174:
    // 0x12b174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b178: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12b17c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x12B17Cu;
    {
        const bool branch_taken_0x12b17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b17c) {
            ctx->pc = 0x12B258u;
            return;
        }
    }
    ctx->pc = 0x12B184u;
    // 0x12b184: 0x8602008c  lh          $v0, 0x8C($s0)
    ctx->pc = 0x12b184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B188u;
    {
        const bool branch_taken_0x12b188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b188) {
            ctx->pc = 0x12B19Cu;
            return;
        }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0x8602008c  lh          $v0, 0x8C($s0)
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b198: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x12b198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b19cu;
}
