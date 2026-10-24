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

// Function: entry_001515ec
// Address: 0x1515ec - 0x15162c
void entry_001515ec_0x1515ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001515ec_0x1515ec");
#endif

    ctx->pc = 0x1515ecu;

    // 0x1515ec: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1515ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1515f0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1515F0u;
    {
        const bool branch_taken_0x1515f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515f0) {
            ctx->pc = 0x15162Cu;
            return;
        }
    }
    ctx->pc = 0x1515F8u;
    // 0x1515f8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1515f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1515fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1515fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151600: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x151600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x151604: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x151608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15160c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x15160cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x151610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x151610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151614: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x151614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151618: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x151618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151620: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x151620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x151624: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x151624u;
    SET_GPR_U32(ctx, 31, 0x15162Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x151624u, 0x15162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15162Cu;
}
