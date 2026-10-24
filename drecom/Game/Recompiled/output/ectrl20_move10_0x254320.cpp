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

// Function: ectrl20_move10
// Address: 0x254320 - 0x254394
void ectrl20_move10_0x254320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl20_move10_0x254320");
#endif

    ctx->pc = 0x254320u;

    // 0x254320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254324: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x254324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x254328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x25432c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x254330: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254334: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25433c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25433cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254340: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x254340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x254344: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254348: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254348u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x25434c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25434cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254350: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254358: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x254358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x25435c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x25435cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x254360: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x254360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x254364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254368: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x254368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x25436c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254370: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x254370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x254374: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254374u;
    {
        const bool branch_taken_0x254374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254374) {
            ctx->pc = 0x254388u;
            goto label_254388;
        }
    }
    ctx->pc = 0x25437Cu;
    // 0x25437c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254380: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x254380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254384: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x254384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_254388:
    // 0x254388: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x254388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25438c: 0x3e00008  jr          $ra
    ctx->pc = 0x25438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254394u;
}
