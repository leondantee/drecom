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

// Function: entry_00332a98
// Address: 0x332a98 - 0x332aec
void entry_00332a98_0x332a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332a98_0x332a98");
#endif

    ctx->pc = 0x332a98u;

    // 0x332a98: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a9c: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x332a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892780u));
    // 0x332aa0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x332aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x332aa4: 0x1460ff1d  bnez        $v1, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x332AA4u;
    {
        const bool branch_taken_0x332aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332aa4) {
            ctx->pc = 0x33271Cu;
            return;
        }
    }
    ctx->pc = 0x332AACu;
    // 0x332aac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332ab0: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x332ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
    // 0x332ab4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332ab8: 0xae230520  sw          $v1, 0x520($s1)
    ctx->pc = 0x332ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 3));
    // 0x332abc: 0x26230520  addiu       $v1, $s1, 0x520
    ctx->pc = 0x332abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x332ac0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332ac4: 0xac232790  sw          $v1, 0x2790($at)
    ctx->pc = 0x332ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x332ac8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332acc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332ad0: 0x8c242790  lw          $a0, 0x2790($at)
    ctx->pc = 0x332ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892790u));
    // 0x332ad4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x332ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x332ad8: 0x92236625  lbu         $v1, 0x6625($s1)
    ctx->pc = 0x332ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26149)));
    // 0x332adc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x332adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332ae0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x332AE0u;
    {
        const bool branch_taken_0x332ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332ae0) {
            ctx->pc = 0x332AECu;
            return;
        }
    }
    ctx->pc = 0x332AE8u;
    // 0x332ae8: 0xa2205deb  sb          $zero, 0x5DEB($s1)
    ctx->pc = 0x332ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24043), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x332aecu;
}
