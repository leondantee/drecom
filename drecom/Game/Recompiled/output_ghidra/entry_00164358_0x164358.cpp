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

// Function: entry_00164358
// Address: 0x164358 - 0x164380
void entry_00164358_0x164358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164358_0x164358");
#endif

    ctx->pc = 0x164358u;

    // 0x164358: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x164358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16435c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16435Cu;
    {
        const bool branch_taken_0x16435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16435c) {
            ctx->pc = 0x164348u;
            return;
        }
    }
    ctx->pc = 0x164364u;
    // 0x164364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16436c: 0xa0222880  sb          $v0, 0x2880($at)
    ctx->pc = 0x16436cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2880u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2880u, _value); } while (0);
    // 0x164370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164374: 0xa0202881  sb          $zero, 0x2881($at)
    ctx->pc = 0x164374u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2881u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2881u, _value); } while (0);
    // 0x164378: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16437c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x16437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    ctx->pc = 0x164380u;
}
