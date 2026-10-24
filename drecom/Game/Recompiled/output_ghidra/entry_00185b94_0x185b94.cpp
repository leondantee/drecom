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

// Function: entry_00185b94
// Address: 0x185b94 - 0x185bd0
void entry_00185b94_0x185b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b94_0x185b94");
#endif

    ctx->pc = 0x185b94u;

    // 0x185b94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185b98: 0xa0200347  sb          $zero, 0x347($at)
    ctx->pc = 0x185b98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480347u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480347u, _value); } while (0);
    // 0x185b9c: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x185ba0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x185BA0u;
    {
        const bool branch_taken_0x185ba0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x185ba0) {
            ctx->pc = 0x185BD0u;
            return;
        }
    }
    ctx->pc = 0x185BA8u;
    // 0x185ba8: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x185bac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185bb0: 0x90220348  lbu         $v0, 0x348($at)
    ctx->pc = 0x185bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480348u));
    // 0x185bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x185bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185bb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x185bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x185bbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185BBCu;
    {
        const bool branch_taken_0x185bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bbc) {
            ctx->pc = 0x185BD0u;
            return;
        }
    }
    ctx->pc = 0x185BC4u;
    // 0x185bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185bc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185bcc: 0xa0220347  sb          $v0, 0x347($at)
    ctx->pc = 0x185bccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x480347u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480347u, _value); } while (0);
    ctx->pc = 0x185bd0u;
}
