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

// Function: entry_002f61ac
// Address: 0x2f61ac - 0x2f61f4
void entry_002f61ac_0x2f61ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f61ac_0x2f61ac");
#endif

    switch (ctx->pc) {
        case 0x2f61ecu: goto label_2f61ec;
        default: break;
    }

    ctx->pc = 0x2f61acu;

    // 0x2f61ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f61b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f61b8: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2F61B8u;
    {
        const bool branch_taken_0x2f61b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f61b8) {
            ctx->pc = 0x2F63ACu;
            return;
        }
    }
    ctx->pc = 0x2F61C0u;
    // 0x2f61c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61c4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f61c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f61c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f61cc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F61CCu;
    {
        const bool branch_taken_0x2f61cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f61cc) {
            ctx->pc = 0x2F61F4u;
            return;
        }
    }
    ctx->pc = 0x2F61D4u;
    // 0x2f61d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f61dc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f61e0: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2f61e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f61e4: 0xc0bd69c  jal         func_2F5A70
    ctx->pc = 0x2F61E4u;
    SET_GPR_U32(ctx, 31, 0x2F61ECu);
    ctx->pc = 0x2F5A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A70u, 0x2F61E4u, 0x2F61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61ECu;
label_2f61ec:
    // 0x2f61ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61f0: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    ctx->pc = 0x2f61f4u;
}
