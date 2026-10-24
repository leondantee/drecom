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

// Function: entry_003396bc
// Address: 0x3396bc - 0x339730
void entry_003396bc_0x3396bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003396bc_0x3396bc");
#endif

    ctx->pc = 0x3396bcu;

    // 0x3396bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3396bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3396c0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3396c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3396c4: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x3396c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3396c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3396c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3396cc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3396ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3396d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3396d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3396d4: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x3396d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3396d8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x3396d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3396dc: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x3396dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x3396e0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x3396e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3396e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3396e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3396e8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3396e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3396ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3396ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3396f0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3396f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3396f4: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3396f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3396f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3396fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3396fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339700: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339704: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339708: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33970c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339710: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339714: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339718: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x33971c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33971Cu;
    {
        const bool branch_taken_0x33971c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x33971c) {
            ctx->pc = 0x339730u;
            return;
        }
    }
    ctx->pc = 0x339724u;
    // 0x339724: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339724u;
    {
        const bool branch_taken_0x339724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339724) {
            ctx->pc = 0x339730u;
            return;
        }
    }
    ctx->pc = 0x33972Cu;
    // 0x33972c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339730u;
}
