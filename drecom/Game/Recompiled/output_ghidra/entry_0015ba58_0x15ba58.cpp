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

// Function: entry_0015ba58
// Address: 0x15ba58 - 0x15bab0
void entry_0015ba58_0x15ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ba58_0x15ba58");
#endif

    switch (ctx->pc) {
        case 0x15ba78u: goto label_15ba78;
        default: break;
    }

    ctx->pc = 0x15ba58u;

    // 0x15ba58: 0xa2001920  sb          $zero, 0x1920($s0)
    ctx->pc = 0x15ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ba5c: 0xa2001921  sb          $zero, 0x1921($s0)
    ctx->pc = 0x15ba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ba60: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15BA60u;
    {
        const bool branch_taken_0x15ba60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba60) {
            ctx->pc = 0x15BAFCu;
            return;
        }
    }
    ctx->pc = 0x15BA68u;
    // 0x15ba68: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ba6c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15ba6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ba70: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x15BA70u;
    SET_GPR_U32(ctx, 31, 0x15BA78u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x15BA70u, 0x15BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA78u;
label_15ba78:
    // 0x15ba78: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x15BA78u;
    {
        const bool branch_taken_0x15ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba78) {
            ctx->pc = 0x15BB90u;
            return;
        }
    }
    ctx->pc = 0x15BA80u;
    // 0x15ba80: 0x8e0313ec  lw          $v1, 0x13EC($s0)
    ctx->pc = 0x15ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15ba84: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x15ba84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x15ba88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ba8c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15ba90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BA90u;
    {
        const bool branch_taken_0x15ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba90) {
            ctx->pc = 0x15BAB0u;
            return;
        }
    }
    ctx->pc = 0x15BA98u;
    // 0x15ba98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ba9c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15baa0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x15baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x15baa4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15baa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15baa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15baac: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15baacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x15bab0u;
}
