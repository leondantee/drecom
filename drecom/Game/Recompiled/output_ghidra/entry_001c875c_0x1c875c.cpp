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

// Function: entry_001c875c
// Address: 0x1c875c - 0x1c87ac
void entry_001c875c_0x1c875c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c875c_0x1c875c");
#endif

    ctx->pc = 0x1c875cu;

    // 0x1c875c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8760: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c8760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c8764: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c8764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1c8768: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c8768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c876c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c876cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c8770: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8774: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1c8774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1c8778: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c877c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c8780: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8780u;
    {
        const bool branch_taken_0x1c8780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8780) {
            ctx->pc = 0x1C87ACu;
            return;
        }
    }
    ctx->pc = 0x1C8788u;
    // 0x1c8788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c878c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c878cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c8790: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c8790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c8794: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8798: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c879c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c879cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c87a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1c87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c87a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c87a8: 0xa064157d  sb          $a0, 0x157D($v1)
    ctx->pc = 0x1c87a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5501), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c87acu;
}
