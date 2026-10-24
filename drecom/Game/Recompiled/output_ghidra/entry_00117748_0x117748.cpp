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

// Function: entry_00117748
// Address: 0x117748 - 0x11777c
void entry_00117748_0x117748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117748_0x117748");
#endif

    switch (ctx->pc) {
        case 0x117778u: goto label_117778;
        default: break;
    }

    ctx->pc = 0x117748u;

    // 0x117748: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x11774c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117750: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x117750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x117754: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x117754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x117758: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x117758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11775c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x117760: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x117760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x117764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117768: 0x8c624d58  lw          $v0, 0x4D58($v1)
    ctx->pc = 0x117768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384D58u));
    // 0x11776c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x11776cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117770: 0xc046346  jal         func_118D18
    ctx->pc = 0x117770u;
    SET_GPR_U32(ctx, 31, 0x117778u);
    ctx->pc = 0x117774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117770u;
    // 0x117774: 0xac624d58  sw          $v0, 0x4D58($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 19800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x117778u;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117778u) { return; }
    ctx->pc = 0x117778u;
label_117778:
    // 0x117778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11777cu;
}
