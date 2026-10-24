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

// Function: entry_002122d0
// Address: 0x2122d0 - 0x212300
void entry_002122d0_0x2122d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002122d0_0x2122d0");
#endif

    switch (ctx->pc) {
        case 0x2122fcu: goto label_2122fc;
        default: break;
    }

    ctx->pc = 0x2122d0u;

    // 0x2122d0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2122d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2122d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2122d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2122d8: 0xac3096d0  sw          $s0, -0x6930($at)
    ctx->pc = 0x2122d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6196D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6196D0u, _value); } while (0);
    // 0x2122dc: 0x9603ffc8  lhu         $v1, -0x38($s0)
    ctx->pc = 0x2122dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x2122e0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2122e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2122e4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2122e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2122e8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2122E8u;
    {
        const bool branch_taken_0x2122e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2122e8) {
            ctx->pc = 0x212300u;
            return;
        }
    }
    ctx->pc = 0x2122F0u;
    // 0x2122f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2122f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2122f4: 0xc084900  jal         func_212400
    ctx->pc = 0x2122F4u;
    SET_GPR_U32(ctx, 31, 0x2122FCu);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x2122F4u, 0x2122FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2122FCu;
label_2122fc:
    // 0x2122fc: 0x0  nop
    ctx->pc = 0x2122fcu;
    // NOP
    ctx->pc = 0x212300u;
}
