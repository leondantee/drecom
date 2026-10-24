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

// Function: entry_0015b688
// Address: 0x15b688 - 0x15b6d0
void entry_0015b688_0x15b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b688_0x15b688");
#endif

    ctx->pc = 0x15b688u;

    // 0x15b688: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15b688u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b68c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b690: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x15B690u;
    {
        const bool branch_taken_0x15b690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b690) {
            ctx->pc = 0x15BA58u;
            return;
        }
    }
    ctx->pc = 0x15B698u;
    // 0x15b698: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15b69c: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15b6a0: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b6a4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x15b6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x15b6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b6ac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x15b6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B6B0u;
    {
        const bool branch_taken_0x15b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b6b0) {
            ctx->pc = 0x15B6D0u;
            return;
        }
    }
    ctx->pc = 0x15B6B8u;
    // 0x15b6b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b6bc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b6c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15b6c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b6c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b6cc: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b6ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x15b6d0u;
}
