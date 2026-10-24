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

// Function: entry_001a43bc
// Address: 0x1a43bc - 0x1a4428
void entry_001a43bc_0x1a43bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a43bc_0x1a43bc");
#endif

    ctx->pc = 0x1a43bcu;

label_1a43bc:
    // 0x1a43bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a43c0: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a43c4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a43c8: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1a43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1a43cc: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1a43ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1a43d0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1a43d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a43d4: 0x0  nop
    ctx->pc = 0x1a43d4u;
    // NOP
    // 0x1a43d8: 0x0  nop
    ctx->pc = 0x1a43d8u;
    // NOP
    // 0x1a43dc: 0x2010  mfhi        $a0
    ctx->pc = 0x1a43dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a43e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a43e4: 0xac64030c  sw          $a0, 0x30C($v1)
    ctx->pc = 0x1a43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 780), GPR_U32(ctx, 4));
    // 0x1a43e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a43ec: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a43f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a43f4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1a43f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a43f8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a43fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a4400: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a4404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4408: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a4408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a440c: 0x1080ffeb  beqz        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1A440Cu;
    {
        const bool branch_taken_0x1a440c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a440c) {
            ctx->pc = 0x1A43BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a43bc;
        }
    }
    ctx->pc = 0x1A4414u;
    // 0x1a4414: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4418: 0x8c63030c  lw          $v1, 0x30C($v1)
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a441c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a441cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4424: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a4424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4428u;
}
