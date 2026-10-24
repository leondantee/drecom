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

// Function: entry_001cd16c
// Address: 0x1cd16c - 0x1cd1ec
void entry_001cd16c_0x1cd16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd16c_0x1cd16c");
#endif

    switch (ctx->pc) {
        case 0x1cd17cu: goto label_1cd17c;
        case 0x1cd188u: goto label_1cd188;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1acu: goto label_1cd1ac;
        default: break;
    }

    ctx->pc = 0x1cd16cu;

    // 0x1cd16c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd170: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd174: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CD174u;
    SET_GPR_U32(ctx, 31, 0x1CD17Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CD174u, 0x1CD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD17Cu;
label_1cd17c:
    // 0x1cd17c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd180: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CD180u;
    SET_GPR_U32(ctx, 31, 0x1CD188u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CD180u, 0x1CD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD188u;
label_1cd188:
    // 0x1cd188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd18c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd190: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cd190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cd194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd198: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CD198u;
    SET_GPR_U32(ctx, 31, 0x1CD1A0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CD198u, 0x1CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd1a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd1a4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CD1A4u;
    SET_GPR_U32(ctx, 31, 0x1CD1ACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CD1A4u, 0x1CD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1ACu;
label_1cd1ac:
    // 0x1cd1ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd1acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd1b0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd1b4: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1cd1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1cd1b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd1bc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd1c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD1C0u;
    {
        const bool branch_taken_0x1cd1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1c0) {
            ctx->pc = 0x1CD1ECu;
            return;
        }
    }
    ctx->pc = 0x1CD1C8u;
    // 0x1cd1c8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1cd1cc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd1d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD1D0u;
    {
        const bool branch_taken_0x1cd1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1d0) {
            ctx->pc = 0x1CD1ECu;
            return;
        }
    }
    ctx->pc = 0x1CD1D8u;
    // 0x1cd1d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd1dc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cd1e0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd1e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cd1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cd1e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1cd1ecu;
}
