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

// Function: entry_0025a748
// Address: 0x25a748 - 0x25a7bc
void entry_0025a748_0x25a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a748_0x25a748");
#endif

    ctx->pc = 0x25a748u;

    // 0x25a748: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a74c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25a750: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a754: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25a754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a75c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x25a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x25a760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a764: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25a764u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a768: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a76c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25a770: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a774: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25a774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a77c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x25a780: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x25A780u;
    {
        const bool branch_taken_0x25a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a780) {
            ctx->pc = 0x25A8DCu;
            return;
        }
    }
    ctx->pc = 0x25A788u;
    // 0x25a788: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a78c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25a790: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a794: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25a794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25a798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a79c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25a7a0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25A7A0u;
    {
        const bool branch_taken_0x25a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a7a0) {
            ctx->pc = 0x25A804u;
            return;
        }
    }
    ctx->pc = 0x25A7A8u;
    // 0x25a7a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25a7ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A7ACu;
    {
        const bool branch_taken_0x25a7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a7ac) {
            ctx->pc = 0x25A7BCu;
            return;
        }
    }
    ctx->pc = 0x25A7B4u;
    // 0x25a7b4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25A7B4u;
    {
        const bool branch_taken_0x25a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a7b4) {
            ctx->pc = 0x25A84Cu;
            return;
        }
    }
    ctx->pc = 0x25A7BCu;
}
