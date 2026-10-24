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

// Function: entry_001a488c
// Address: 0x1a488c - 0x1a48c0
void entry_001a488c_0x1a488c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a488c_0x1a488c");
#endif

    ctx->pc = 0x1a488cu;

    // 0x1a488c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a488cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4890: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4894: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a4894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4898: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1a4898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a489c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A489Cu;
    {
        const bool branch_taken_0x1a489c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a489c) {
            ctx->pc = 0x1A48C0u;
            return;
        }
    }
    ctx->pc = 0x1A48A4u;
    // 0x1a48a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a48a8: 0x9064031a  lbu         $a0, 0x31A($v1)
    ctx->pc = 0x1a48a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 794)));
    // 0x1a48ac: 0x4182b  sltu        $v1, $zero, $a0
    ctx->pc = 0x1a48acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a48b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a48b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a48b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a48b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a48b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a48bc: 0xa064031a  sb          $a0, 0x31A($v1)
    ctx->pc = 0x1a48bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 794), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a48c0u;
}
