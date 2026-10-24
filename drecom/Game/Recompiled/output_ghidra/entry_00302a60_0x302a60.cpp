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

// Function: entry_00302a60
// Address: 0x302a60 - 0x302ad8
void entry_00302a60_0x302a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302a60_0x302a60");
#endif

    switch (ctx->pc) {
        case 0x302aa0u: goto label_302aa0;
        default: break;
    }

    ctx->pc = 0x302a60u;

    // 0x302a60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a64: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x302a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x302a68: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x302A68u;
    {
        const bool branch_taken_0x302a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302a68) {
            ctx->pc = 0x302AD8u;
            return;
        }
    }
    ctx->pc = 0x302A70u;
    // 0x302a70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a74: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302a78: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x302a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a80: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x302a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x302a84: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x302a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x302a88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302a8c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302a90: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x302a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302a94: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x302a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x302a98: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302A98u;
    SET_GPR_U32(ctx, 31, 0x302AA0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302A98u, 0x302AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AA0u;
label_302aa0:
    // 0x302aa0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302AA0u;
    {
        const bool branch_taken_0x302aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302aa0) {
            ctx->pc = 0x302AD8u;
            return;
        }
    }
    ctx->pc = 0x302AA8u;
    // 0x302aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302aac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ab0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302ab4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x302ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302ab8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302abc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302ac0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ac4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302ac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302acc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302ad0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302ad8u;
}
