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

// Function: entry_0018c3c4
// Address: 0x18c3c4 - 0x18c408
void entry_0018c3c4_0x18c3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c3c4_0x18c3c4");
#endif

    switch (ctx->pc) {
        case 0x18c3dcu: goto label_18c3dc;
        default: break;
    }

    ctx->pc = 0x18c3c4u;

    // 0x18c3c4: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x18c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x18c3c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18c3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18c3cc: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18c3d0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x18c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x18c3d4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x18C3D4u;
    SET_GPR_U32(ctx, 31, 0x18C3DCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x18C3DCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C3DCu) { return; }
    ctx->pc = 0x18C3DCu;
label_18c3dc:
    // 0x18c3dc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18c3e0: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x18c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x18c3e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18c3e8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x18c3ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18c3f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c3f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C3F4u;
    {
        const bool branch_taken_0x18c3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3f4) {
            ctx->pc = 0x18C408u;
            return;
        }
    }
    ctx->pc = 0x18C3FCu;
    // 0x18c3fc: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18c400: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x18c404: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x18c404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    ctx->pc = 0x18c408u;
}
